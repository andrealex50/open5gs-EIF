#ifndef snssai_info_TEST
#define snssai_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define snssai_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/snssai_info.h"
snssai_info_t* instantiate_snssai_info(int include_optional);



snssai_info_t* instantiate_snssai_info(int include_optional) {
  snssai_info_t* snssai_info = NULL;
  if (include_optional) {
    snssai_info = snssai_info_create(
      list_createList()
    );
  } else {
    snssai_info = snssai_info_create(
      list_createList()
    );
  }

  return snssai_info;
}


#ifdef snssai_info_MAIN

void test_snssai_info(int include_optional) {
    snssai_info_t* snssai_info_1 = instantiate_snssai_info(include_optional);

	cJSON* jsonsnssai_info_1 = snssai_info_convertToJSON(snssai_info_1);
	printf("snssai_info :\n%s\n", cJSON_Print(jsonsnssai_info_1));
	snssai_info_t* snssai_info_2 = snssai_info_parseFromJSON(jsonsnssai_info_1);
	cJSON* jsonsnssai_info_2 = snssai_info_convertToJSON(snssai_info_2);
	printf("repeating snssai_info:\n%s\n", cJSON_Print(jsonsnssai_info_2));
}

int main() {
  test_snssai_info(1);
  test_snssai_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // snssai_info_MAIN
#endif // snssai_info_TEST
