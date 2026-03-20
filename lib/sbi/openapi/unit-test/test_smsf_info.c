#ifndef smsf_info_TEST
#define smsf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smsf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smsf_info.h"
smsf_info_t* instantiate_smsf_info(int include_optional);

#include "test_plmn_id.c"


smsf_info_t* instantiate_smsf_info(int include_optional) {
  smsf_info_t* smsf_info = NULL;
  if (include_optional) {
    smsf_info = smsf_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "0"
    );
  } else {
    smsf_info = smsf_info_create(
      "0",
      NULL,
      "0"
    );
  }

  return smsf_info;
}


#ifdef smsf_info_MAIN

void test_smsf_info(int include_optional) {
    smsf_info_t* smsf_info_1 = instantiate_smsf_info(include_optional);

	cJSON* jsonsmsf_info_1 = smsf_info_convertToJSON(smsf_info_1);
	printf("smsf_info :\n%s\n", cJSON_Print(jsonsmsf_info_1));
	smsf_info_t* smsf_info_2 = smsf_info_parseFromJSON(jsonsmsf_info_1);
	cJSON* jsonsmsf_info_2 = smsf_info_convertToJSON(smsf_info_2);
	printf("repeating smsf_info:\n%s\n", cJSON_Print(jsonsmsf_info_2));
}

int main() {
  test_smsf_info(1);
  test_smsf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // smsf_info_MAIN
#endif // smsf_info_TEST
