#ifndef app_session_context_req_data_TEST
#define app_session_context_req_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_session_context_req_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_session_context_req_data.h"
app_session_context_req_data_t* instantiate_app_session_context_req_data(int include_optional);

#include "test_af_routing_requirement.c"
#include "test_events_subsc_req_data.c"
#include "test_snssai.c"
#include "test_bridge_management_container.c"
#include "test_port_management_container.c"


app_session_context_req_data_t* instantiate_app_session_context_req_data(int include_optional) {
  app_session_context_req_data_t* app_session_context_req_data = NULL;
  if (include_optional) {
    app_session_context_req_data = app_session_context_req_data_create(
      "0",
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__UE_IDENTITY,
       // false, not to have infinite recursion
      instantiate_af_routing_requirement(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_events_subsc_req_data(0),
      "0",
      "0",
      list_createList(),
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__DISABLE_MPS_FOR_DTS,
      "0",
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__MOST_RECENT,
      npcf_policyauthorization_service_api_app_session_context_req_data__PRIO_1,
      npcf_policyauthorization_service_api_app_session_context_req_data__FINAL,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__SPONSOR_DISABLED,
      "a",
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
       // false, not to have infinite recursion
      instantiate_bridge_management_container(0),
       // false, not to have infinite recursion
      instantiate_port_management_container(0),
      list_createList()
    );
  } else {
    app_session_context_req_data = app_session_context_req_data_create(
      "0",
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__UE_IDENTITY,
      NULL,
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      list_createList(),
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__DISABLE_MPS_FOR_DTS,
      "0",
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__MOST_RECENT,
      npcf_policyauthorization_service_api_app_session_context_req_data__PRIO_1,
      npcf_policyauthorization_service_api_app_session_context_req_data__FINAL,
      "0",
      "0",
      NULL,
      "0",
      npcf_policyauthorization_service_api_app_session_context_req_data__SPONSOR_DISABLED,
      "a",
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      NULL,
      NULL,
      list_createList()
    );
  }

  return app_session_context_req_data;
}


#ifdef app_session_context_req_data_MAIN

void test_app_session_context_req_data(int include_optional) {
    app_session_context_req_data_t* app_session_context_req_data_1 = instantiate_app_session_context_req_data(include_optional);

	cJSON* jsonapp_session_context_req_data_1 = app_session_context_req_data_convertToJSON(app_session_context_req_data_1);
	printf("app_session_context_req_data :\n%s\n", cJSON_Print(jsonapp_session_context_req_data_1));
	app_session_context_req_data_t* app_session_context_req_data_2 = app_session_context_req_data_parseFromJSON(jsonapp_session_context_req_data_1);
	cJSON* jsonapp_session_context_req_data_2 = app_session_context_req_data_convertToJSON(app_session_context_req_data_2);
	printf("repeating app_session_context_req_data:\n%s\n", cJSON_Print(jsonapp_session_context_req_data_2));
}

int main() {
  test_app_session_context_req_data(1);
  test_app_session_context_req_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_session_context_req_data_MAIN
#endif // app_session_context_req_data_TEST
