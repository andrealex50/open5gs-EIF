#ifndef pei_update_info_TEST
#define pei_update_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pei_update_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pei_update_info.h"
pei_update_info_t* instantiate_pei_update_info(int include_optional);



pei_update_info_t* instantiate_pei_update_info(int include_optional) {
  pei_update_info_t* pei_update_info = NULL;
  if (include_optional) {
    pei_update_info = pei_update_info_create(
      "a"
    );
  } else {
    pei_update_info = pei_update_info_create(
      "a"
    );
  }

  return pei_update_info;
}


#ifdef pei_update_info_MAIN

void test_pei_update_info(int include_optional) {
    pei_update_info_t* pei_update_info_1 = instantiate_pei_update_info(include_optional);

	cJSON* jsonpei_update_info_1 = pei_update_info_convertToJSON(pei_update_info_1);
	printf("pei_update_info :\n%s\n", cJSON_Print(jsonpei_update_info_1));
	pei_update_info_t* pei_update_info_2 = pei_update_info_parseFromJSON(jsonpei_update_info_1);
	cJSON* jsonpei_update_info_2 = pei_update_info_convertToJSON(pei_update_info_2);
	printf("repeating pei_update_info:\n%s\n", cJSON_Print(jsonpei_update_info_2));
}

int main() {
  test_pei_update_info(1);
  test_pei_update_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pei_update_info_MAIN
#endif // pei_update_info_TEST
