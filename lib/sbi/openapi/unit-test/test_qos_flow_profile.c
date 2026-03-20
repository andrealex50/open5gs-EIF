#ifndef qos_flow_profile_TEST
#define qos_flow_profile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_profile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_profile.h"
qos_flow_profile_t* instantiate_qos_flow_profile(int include_optional);

#include "test_non_dynamic5_qi.c"
#include "test_dynamic5_qi.c"
#include "test_arp.c"
#include "test_gbr_qos_flow_information.c"


qos_flow_profile_t* instantiate_qos_flow_profile(int include_optional) {
  qos_flow_profile_t* qos_flow_profile = NULL;
  if (include_optional) {
    qos_flow_profile = qos_flow_profile_create(
      0,
       // false, not to have infinite recursion
      instantiate_non_dynamic5_qi(0),
       // false, not to have infinite recursion
      instantiate_dynamic5_qi(0),
       // false, not to have infinite recursion
      instantiate_arp(0),
       // false, not to have infinite recursion
      instantiate_gbr_qos_flow_information(0),
      nsmf_pdusession_qos_flow_profile__RQOS,
      nsmf_pdusession_qos_flow_profile__MORE_LIKELY,
      nsmf_pdusession_qos_flow_profile__UL,
      56
    );
  } else {
    qos_flow_profile = qos_flow_profile_create(
      0,
      NULL,
      NULL,
      NULL,
      NULL,
      nsmf_pdusession_qos_flow_profile__RQOS,
      nsmf_pdusession_qos_flow_profile__MORE_LIKELY,
      nsmf_pdusession_qos_flow_profile__UL,
      56
    );
  }

  return qos_flow_profile;
}


#ifdef qos_flow_profile_MAIN

void test_qos_flow_profile(int include_optional) {
    qos_flow_profile_t* qos_flow_profile_1 = instantiate_qos_flow_profile(include_optional);

	cJSON* jsonqos_flow_profile_1 = qos_flow_profile_convertToJSON(qos_flow_profile_1);
	printf("qos_flow_profile :\n%s\n", cJSON_Print(jsonqos_flow_profile_1));
	qos_flow_profile_t* qos_flow_profile_2 = qos_flow_profile_parseFromJSON(jsonqos_flow_profile_1);
	cJSON* jsonqos_flow_profile_2 = qos_flow_profile_convertToJSON(qos_flow_profile_2);
	printf("repeating qos_flow_profile:\n%s\n", cJSON_Print(jsonqos_flow_profile_2));
}

int main() {
  test_qos_flow_profile(1);
  test_qos_flow_profile(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_profile_MAIN
#endif // qos_flow_profile_TEST
