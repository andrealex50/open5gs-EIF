#ifndef sec_param_exch_rsp_data_TEST
#define sec_param_exch_rsp_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sec_param_exch_rsp_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sec_param_exch_rsp_data.h"
sec_param_exch_rsp_data_t* instantiate_sec_param_exch_rsp_data(int include_optional);

#include "test_protection_policy.c"


sec_param_exch_rsp_data_t* instantiate_sec_param_exch_rsp_data(int include_optional) {
  sec_param_exch_rsp_data_t* sec_param_exch_rsp_data = NULL;
  if (include_optional) {
    sec_param_exch_rsp_data = sec_param_exch_rsp_data_create(
      "a",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_protection_policy(0),
      list_createList(),
      "a"
    );
  } else {
    sec_param_exch_rsp_data = sec_param_exch_rsp_data_create(
      "a",
      "0",
      "0",
      NULL,
      list_createList(),
      "a"
    );
  }

  return sec_param_exch_rsp_data;
}


#ifdef sec_param_exch_rsp_data_MAIN

void test_sec_param_exch_rsp_data(int include_optional) {
    sec_param_exch_rsp_data_t* sec_param_exch_rsp_data_1 = instantiate_sec_param_exch_rsp_data(include_optional);

	cJSON* jsonsec_param_exch_rsp_data_1 = sec_param_exch_rsp_data_convertToJSON(sec_param_exch_rsp_data_1);
	printf("sec_param_exch_rsp_data :\n%s\n", cJSON_Print(jsonsec_param_exch_rsp_data_1));
	sec_param_exch_rsp_data_t* sec_param_exch_rsp_data_2 = sec_param_exch_rsp_data_parseFromJSON(jsonsec_param_exch_rsp_data_1);
	cJSON* jsonsec_param_exch_rsp_data_2 = sec_param_exch_rsp_data_convertToJSON(sec_param_exch_rsp_data_2);
	printf("repeating sec_param_exch_rsp_data:\n%s\n", cJSON_Print(jsonsec_param_exch_rsp_data_2));
}

int main() {
  test_sec_param_exch_rsp_data(1);
  test_sec_param_exch_rsp_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sec_param_exch_rsp_data_MAIN
#endif // sec_param_exch_rsp_data_TEST
