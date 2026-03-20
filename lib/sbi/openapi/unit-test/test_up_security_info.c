#ifndef up_security_info_TEST
#define up_security_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_security_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_security_info.h"
up_security_info_t* instantiate_up_security_info(int include_optional);

#include "test_up_security.c"
#include "test_security_result.c"


up_security_info_t* instantiate_up_security_info(int include_optional) {
  up_security_info_t* up_security_info = NULL;
  if (include_optional) {
    up_security_info = up_security_info_create(
       // false, not to have infinite recursion
      instantiate_up_security(0),
      nsmf_pdusession_up_security_info__64_KBPS,
      nsmf_pdusession_up_security_info__64_KBPS,
       // false, not to have infinite recursion
      instantiate_security_result(0)
    );
  } else {
    up_security_info = up_security_info_create(
      NULL,
      nsmf_pdusession_up_security_info__64_KBPS,
      nsmf_pdusession_up_security_info__64_KBPS,
      NULL
    );
  }

  return up_security_info;
}


#ifdef up_security_info_MAIN

void test_up_security_info(int include_optional) {
    up_security_info_t* up_security_info_1 = instantiate_up_security_info(include_optional);

	cJSON* jsonup_security_info_1 = up_security_info_convertToJSON(up_security_info_1);
	printf("up_security_info :\n%s\n", cJSON_Print(jsonup_security_info_1));
	up_security_info_t* up_security_info_2 = up_security_info_parseFromJSON(jsonup_security_info_1);
	cJSON* jsonup_security_info_2 = up_security_info_convertToJSON(up_security_info_2);
	printf("repeating up_security_info:\n%s\n", cJSON_Print(jsonup_security_info_2));
}

int main() {
  test_up_security_info(1);
  test_up_security_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_security_info_MAIN
#endif // up_security_info_TEST
