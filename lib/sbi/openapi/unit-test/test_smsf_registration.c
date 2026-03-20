#ifndef smsf_registration_TEST
#define smsf_registration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smsf_registration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smsf_registration.h"
smsf_registration_t* instantiate_smsf_registration(int include_optional);

#include "test_plmn_id.c"
#include "test_network_node_diameter_address.c"
#include "test_context_info.c"


smsf_registration_t* instantiate_smsf_registration(int include_optional) {
  smsf_registration_t* smsf_registration = NULL;
  if (include_optional) {
    smsf_registration = smsf_registration_create(
      "0",
      "0",
      "a",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "a",
       // false, not to have infinite recursion
      instantiate_network_node_diameter_address(0),
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      "0",
      list_createList(),
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    smsf_registration = smsf_registration_create(
      "0",
      "0",
      "a",
      NULL,
      "a",
      NULL,
      "2013-10-20T19:20:30+01:00",
      NULL,
      "0",
      list_createList(),
      1,
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return smsf_registration;
}


#ifdef smsf_registration_MAIN

void test_smsf_registration(int include_optional) {
    smsf_registration_t* smsf_registration_1 = instantiate_smsf_registration(include_optional);

	cJSON* jsonsmsf_registration_1 = smsf_registration_convertToJSON(smsf_registration_1);
	printf("smsf_registration :\n%s\n", cJSON_Print(jsonsmsf_registration_1));
	smsf_registration_t* smsf_registration_2 = smsf_registration_parseFromJSON(jsonsmsf_registration_1);
	cJSON* jsonsmsf_registration_2 = smsf_registration_convertToJSON(smsf_registration_2);
	printf("repeating smsf_registration:\n%s\n", cJSON_Print(jsonsmsf_registration_2));
}

int main() {
  test_smsf_registration(1);
  test_smsf_registration(0);

  printf("Hello world \n");
  return 0;
}

#endif // smsf_registration_MAIN
#endif // smsf_registration_TEST
