#ifndef chf_info_TEST
#define chf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define chf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/chf_info.h"
chf_info_t* instantiate_chf_info(int include_optional);



chf_info_t* instantiate_chf_info(int include_optional) {
  chf_info_t* chf_info = NULL;
  if (include_optional) {
    chf_info = chf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0"
    );
  } else {
    chf_info = chf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0"
    );
  }

  return chf_info;
}


#ifdef chf_info_MAIN

void test_chf_info(int include_optional) {
    chf_info_t* chf_info_1 = instantiate_chf_info(include_optional);

	cJSON* jsonchf_info_1 = chf_info_convertToJSON(chf_info_1);
	printf("chf_info :\n%s\n", cJSON_Print(jsonchf_info_1));
	chf_info_t* chf_info_2 = chf_info_parseFromJSON(jsonchf_info_1);
	cJSON* jsonchf_info_2 = chf_info_convertToJSON(chf_info_2);
	printf("repeating chf_info:\n%s\n", cJSON_Print(jsonchf_info_2));
}

int main() {
  test_chf_info(1);
  test_chf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // chf_info_MAIN
#endif // chf_info_TEST
