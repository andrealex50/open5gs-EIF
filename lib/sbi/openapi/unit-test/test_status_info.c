#ifndef status_info_TEST
#define status_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_info.h"
status_info_t* instantiate_status_info(int include_optional);

#include "test_cn_assisted_ran_para.c"


status_info_t* instantiate_status_info(int include_optional) {
  status_info_t* status_info = NULL;
  if (include_optional) {
    status_info = status_info_create(
      nsmf_pdusession_status_info__RELEASED,
      nsmf_pdusession_status_info__REL_DUE_TO_HO,
       // false, not to have infinite recursion
      instantiate_cn_assisted_ran_para(0),
      nsmf_pdusession_status_info__3GPP_ACCESS
    );
  } else {
    status_info = status_info_create(
      nsmf_pdusession_status_info__RELEASED,
      nsmf_pdusession_status_info__REL_DUE_TO_HO,
      NULL,
      nsmf_pdusession_status_info__3GPP_ACCESS
    );
  }

  return status_info;
}


#ifdef status_info_MAIN

void test_status_info(int include_optional) {
    status_info_t* status_info_1 = instantiate_status_info(include_optional);

	cJSON* jsonstatus_info_1 = status_info_convertToJSON(status_info_1);
	printf("status_info :\n%s\n", cJSON_Print(jsonstatus_info_1));
	status_info_t* status_info_2 = status_info_parseFromJSON(jsonstatus_info_1);
	cJSON* jsonstatus_info_2 = status_info_convertToJSON(status_info_2);
	printf("repeating status_info:\n%s\n", cJSON_Print(jsonstatus_info_2));
}

int main() {
  test_status_info(1);
  test_status_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_info_MAIN
#endif // status_info_TEST
