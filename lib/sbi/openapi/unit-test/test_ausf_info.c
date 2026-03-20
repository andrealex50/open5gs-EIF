#ifndef ausf_info_TEST
#define ausf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ausf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ausf_info.h"
ausf_info_t* instantiate_ausf_info(int include_optional);



ausf_info_t* instantiate_ausf_info(int include_optional) {
  ausf_info_t* ausf_info = NULL;
  if (include_optional) {
    ausf_info = ausf_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ausf_info = ausf_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ausf_info;
}


#ifdef ausf_info_MAIN

void test_ausf_info(int include_optional) {
    ausf_info_t* ausf_info_1 = instantiate_ausf_info(include_optional);

	cJSON* jsonausf_info_1 = ausf_info_convertToJSON(ausf_info_1);
	printf("ausf_info :\n%s\n", cJSON_Print(jsonausf_info_1));
	ausf_info_t* ausf_info_2 = ausf_info_parseFromJSON(jsonausf_info_1);
	cJSON* jsonausf_info_2 = ausf_info_convertToJSON(ausf_info_2);
	printf("repeating ausf_info:\n%s\n", cJSON_Print(jsonausf_info_2));
}

int main() {
  test_ausf_info(1);
  test_ausf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ausf_info_MAIN
#endif // ausf_info_TEST
