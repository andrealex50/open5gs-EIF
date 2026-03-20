#ifndef dnn_configuration_1_TEST
#define dnn_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_configuration_1.h"
dnn_configuration_1_t* instantiate_dnn_configuration_1(int include_optional);

#include "test_pdu_session_types_1.c"
#include "test_ssc_modes_1.c"
#include "test_subscribed_default_qos_1.c"
#include "test_ambr_1.c"
#include "test_up_security_1.c"
#include "test_nidd_information_1.c"
#include "test_acs_info_1.c"
#include "test_ip_address_1.c"
#include "test_ip_index.c"
#include "test_ip_index.c"
#include "test_ecs_addr_config_info_1.c"


dnn_configuration_1_t* instantiate_dnn_configuration_1(int include_optional) {
  dnn_configuration_1_t* dnn_configuration_1 = NULL;
  if (include_optional) {
    dnn_configuration_1 = dnn_configuration_1_create(
       // false, not to have infinite recursion
      instantiate_pdu_session_types_1(0),
       // false, not to have infinite recursion
      instantiate_ssc_modes_1(0),
      1,
       // false, not to have infinite recursion
      instantiate_subscribed_default_qos_1(0),
       // false, not to have infinite recursion
      instantiate_ambr_1(0),
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_up_security_1(0),
      nudr_datarepository_api_openapi_file_dnn_configuration_1__MAINTAIN_PDUSESSION,
      "0",
       // false, not to have infinite recursion
      instantiate_nidd_information_1(0),
      1,
       // false, not to have infinite recursion
      instantiate_acs_info_1(0),
      list_createList(),
      list_createList(),
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ip_address_1(0),
      list_createList(),
      "a",
      "0",
      null,
      null,
       // false, not to have infinite recursion
      instantiate_ecs_addr_config_info_1(0),
      list_createList(),
      "a",
      list_createList(),
      1,
      1,
      nudr_datarepository_api_openapi_file_dnn_configuration_1__AERIAL_UE_ALLOWED,
      56
    );
  } else {
    dnn_configuration_1 = dnn_configuration_1_create(
      NULL,
      NULL,
      1,
      NULL,
      NULL,
      "0",
      list_createList(),
      NULL,
      nudr_datarepository_api_openapi_file_dnn_configuration_1__MAINTAIN_PDUSESSION,
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
      nudr_datarepository_api_openapi_file_dnn_configuration_1__AERIAL_UE_ALLOWED,
      56
    );
  }

  return dnn_configuration_1;
}


#ifdef dnn_configuration_1_MAIN

void test_dnn_configuration_1(int include_optional) {
    dnn_configuration_1_t* dnn_configuration_1_1 = instantiate_dnn_configuration_1(include_optional);

	cJSON* jsondnn_configuration_1_1 = dnn_configuration_1_convertToJSON(dnn_configuration_1_1);
	printf("dnn_configuration_1 :\n%s\n", cJSON_Print(jsondnn_configuration_1_1));
	dnn_configuration_1_t* dnn_configuration_1_2 = dnn_configuration_1_parseFromJSON(jsondnn_configuration_1_1);
	cJSON* jsondnn_configuration_1_2 = dnn_configuration_1_convertToJSON(dnn_configuration_1_2);
	printf("repeating dnn_configuration_1:\n%s\n", cJSON_Print(jsondnn_configuration_1_2));
}

int main() {
  test_dnn_configuration_1(1);
  test_dnn_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_configuration_1_MAIN
#endif // dnn_configuration_1_TEST
