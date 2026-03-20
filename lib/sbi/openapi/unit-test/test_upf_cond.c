#ifndef upf_cond_TEST
#define upf_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upf_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upf_cond.h"
upf_cond_t* instantiate_upf_cond(int include_optional);



upf_cond_t* instantiate_upf_cond(int include_optional) {
  upf_cond_t* upf_cond = NULL;
  if (include_optional) {
    upf_cond = upf_cond_create(
      nrf_nfmanagement_service_upf_cond_CONDITIONTYPE_UPF_COND,
      list_createList(),
      list_createList()
    );
  } else {
    upf_cond = upf_cond_create(
      nrf_nfmanagement_service_upf_cond_CONDITIONTYPE_UPF_COND,
      list_createList(),
      list_createList()
    );
  }

  return upf_cond;
}


#ifdef upf_cond_MAIN

void test_upf_cond(int include_optional) {
    upf_cond_t* upf_cond_1 = instantiate_upf_cond(include_optional);

	cJSON* jsonupf_cond_1 = upf_cond_convertToJSON(upf_cond_1);
	printf("upf_cond :\n%s\n", cJSON_Print(jsonupf_cond_1));
	upf_cond_t* upf_cond_2 = upf_cond_parseFromJSON(jsonupf_cond_1);
	cJSON* jsonupf_cond_2 = upf_cond_convertToJSON(upf_cond_2);
	printf("repeating upf_cond:\n%s\n", cJSON_Print(jsonupf_cond_2));
}

int main() {
  test_upf_cond(1);
  test_upf_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // upf_cond_MAIN
#endif // upf_cond_TEST
