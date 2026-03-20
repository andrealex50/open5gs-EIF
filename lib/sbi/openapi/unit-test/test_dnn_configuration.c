#ifndef dnn_configuration_TEST
#define dnn_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_configuration.h"
dnn_configuration_t* instantiate_dnn_configuration(int include_optional);

#include "test_pdu_session_types.c"
#include "test_ssc_modes.c"
#include "test_subscribed_default_qos.c"
#include "test_ambr.c"
#include "test_up_security.c"
#include "test_nidd_information.c"
#include "test_acs_info.c"
#include "test_ip_address.c"
#include "test_ip_index.c"
#include "test_ip_index.c"
#include "test_ecs_addr_config_info.c"


dnn_configuration_t* instantiate_dnn_configuration(int include_optional) {
  dnn_configuration_t* dnn_configuration = NULL;
  if (include_optional) {
    dnn_configuration = dnn_configuration_create(
       // false, not to have infinite recursion
      instantiate_pdu_session_types(0),
       // false, not to have infinite recursion
      instantiate_ssc_modes(0),
      1,
       // false, not to have infinite recursion
      instantiate_subscribed_default_qos(0),
       // false, not to have infinite recursion
      instantiate_ambr(0),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_up_security(0),
      nudr_datarepository_api_openapi_file_dnn_configuration__MAINTAIN_PDUSESSION,
      "0",
       // false, not to have infinite recursion
      instantiate_nidd_information(0),
      1,
       // false, not to have infinite recursion
      instantiate_acs_info(0),
      list_createList(),
      list_createList(),
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ip_address(0),
      list_createList(),
      "a",
      "0",
      null,
      null,
       // false, not to have infinite recursion
      instantiate_ecs_addr_config_info(0),
      list_createList(),
      "a",
      list_createList(),
      1,
      1,
      nudr_datarepository_api_openapi_file_dnn_configuration__AERIAL_UE_ALLOWED,
      56
    );
  } else {
    dnn_configuration = dnn_configuration_create(
      NULL,
      NULL,
      1,
      NULL,
      NULL,
      "0",
      list_createList(),
      NULL,
      nudr_datarepository_api_openapi_file_dnn_configuration__MAINTAIN_PDUSESSION,
      "0",
      NULL,
      1,
      NULL,
      list_createList(),
      list_createList(),
      1,
      1,
      1,
      1,
      NULL,
      list_createList(),
      "a",
      "0",
      null,
      null,
      NULL,
      list_createList(),
      "a",
      list_createList(),
      1,
      1,
      nudr_datarepository_api_openapi_file_dnn_configuration__AERIAL_UE_ALLOWED,
      56
    );
  }

  return dnn_configuration;
}


#ifdef dnn_configuration_MAIN

void test_dnn_configuration(int include_optional) {
    dnn_configuration_t* dnn_configuration_1 = instantiate_dnn_configuration(include_optional);

	cJSON* jsondnn_configuration_1 = dnn_configuration_convertToJSON(dnn_configuration_1);
	printf("dnn_configuration :\n%s\n", cJSON_Print(jsondnn_configuration_1));
	dnn_configuration_t* dnn_configuration_2 = dnn_configuration_parseFromJSON(jsondnn_configuration_1);
	cJSON* jsondnn_configuration_2 = dnn_configuration_convertToJSON(dnn_configuration_2);
	printf("repeating dnn_configuration:\n%s\n", cJSON_Print(jsondnn_configuration_2));
}

int main() {
  test_dnn_configuration(1);
  test_dnn_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_configuration_MAIN
#endif // dnn_configuration_TEST
