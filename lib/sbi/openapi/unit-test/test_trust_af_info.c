#ifndef trust_af_info_TEST
#define trust_af_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trust_af_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trust_af_info.h"
trust_af_info_t* instantiate_trust_af_info(int include_optional);



trust_af_info_t* instantiate_trust_af_info(int include_optional) {
  trust_af_info_t* trust_af_info = NULL;
  if (include_optional) {
    trust_af_info = trust_af_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1
    );
  } else {
    trust_af_info = trust_af_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1
    );
  }

  return trust_af_info;
}


#ifdef trust_af_info_MAIN

void test_trust_af_info(int include_optional) {
    trust_af_info_t* trust_af_info_1 = instantiate_trust_af_info(include_optional);

	cJSON* jsontrust_af_info_1 = trust_af_info_convertToJSON(trust_af_info_1);
	printf("trust_af_info :\n%s\n", cJSON_Print(jsontrust_af_info_1));
	trust_af_info_t* trust_af_info_2 = trust_af_info_parseFromJSON(jsontrust_af_info_1);
	cJSON* jsontrust_af_info_2 = trust_af_info_convertToJSON(trust_af_info_2);
	printf("repeating trust_af_info:\n%s\n", cJSON_Print(jsontrust_af_info_2));
}

int main() {
  test_trust_af_info(1);
  test_trust_af_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // trust_af_info_MAIN
#endif // trust_af_info_TEST
