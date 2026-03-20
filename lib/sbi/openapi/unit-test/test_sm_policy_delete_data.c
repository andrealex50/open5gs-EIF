#ifndef sm_policy_delete_data_TEST
#define sm_policy_delete_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_policy_delete_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_policy_delete_data.h"
sm_policy_delete_data_t* instantiate_sm_policy_delete_data(int include_optional);

#include "test_user_location.c"
#include "test_plmn_id_nid.c"


sm_policy_delete_data_t* instantiate_sm_policy_delete_data(int include_optional) {
  sm_policy_delete_data_t* sm_policy_delete_data = NULL;
  if (include_optional) {
    sm_policy_delete_data = sm_policy_delete_data_create(
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_delete_data__PS_TO_CS_HO,
      list_createList()
    );
  } else {
    sm_policy_delete_data = sm_policy_delete_data_create(
      NULL,
      "-08:00+1",
      NULL,
      "2013-10-20T19:20:30+01:00",
      list_createList(),
      list_createList(),
      npcf_smpolicycontrol_api_sm_policy_delete_data__PS_TO_CS_HO,
      list_createList()
    );
  }

  return sm_policy_delete_data;
}


#ifdef sm_policy_delete_data_MAIN

void test_sm_policy_delete_data(int include_optional) {
    sm_policy_delete_data_t* sm_policy_delete_data_1 = instantiate_sm_policy_delete_data(include_optional);

	cJSON* jsonsm_policy_delete_data_1 = sm_policy_delete_data_convertToJSON(sm_policy_delete_data_1);
	printf("sm_policy_delete_data :\n%s\n", cJSON_Print(jsonsm_policy_delete_data_1));
	sm_policy_delete_data_t* sm_policy_delete_data_2 = sm_policy_delete_data_parseFromJSON(jsonsm_policy_delete_data_1);
	cJSON* jsonsm_policy_delete_data_2 = sm_policy_delete_data_convertToJSON(sm_policy_delete_data_2);
	printf("repeating sm_policy_delete_data:\n%s\n", cJSON_Print(jsonsm_policy_delete_data_2));
}

int main() {
  test_sm_policy_delete_data(1);
  test_sm_policy_delete_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_policy_delete_data_MAIN
#endif // sm_policy_delete_data_TEST
