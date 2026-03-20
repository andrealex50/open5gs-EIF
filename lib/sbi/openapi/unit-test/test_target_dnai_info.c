#ifndef target_dnai_info_TEST
#define target_dnai_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define target_dnai_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/target_dnai_info.h"
target_dnai_info_t* instantiate_target_dnai_info(int include_optional);



target_dnai_info_t* instantiate_target_dnai_info(int include_optional) {
  target_dnai_info_t* target_dnai_info = NULL;
  if (include_optional) {
    target_dnai_info = target_dnai_info_create(
      "0",
      nsmf_pdusession_target_dnai_info__CURRENT_PDU_SESSION
    );
  } else {
    target_dnai_info = target_dnai_info_create(
      "0",
      nsmf_pdusession_target_dnai_info__CURRENT_PDU_SESSION
    );
  }

  return target_dnai_info;
}


#ifdef target_dnai_info_MAIN

void test_target_dnai_info(int include_optional) {
    target_dnai_info_t* target_dnai_info_1 = instantiate_target_dnai_info(include_optional);

	cJSON* jsontarget_dnai_info_1 = target_dnai_info_convertToJSON(target_dnai_info_1);
	printf("target_dnai_info :\n%s\n", cJSON_Print(jsontarget_dnai_info_1));
	target_dnai_info_t* target_dnai_info_2 = target_dnai_info_parseFromJSON(jsontarget_dnai_info_1);
	cJSON* jsontarget_dnai_info_2 = target_dnai_info_convertToJSON(target_dnai_info_2);
	printf("repeating target_dnai_info:\n%s\n", cJSON_Print(jsontarget_dnai_info_2));
}

int main() {
  test_target_dnai_info(1);
  test_target_dnai_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // target_dnai_info_MAIN
#endif // target_dnai_info_TEST
