#ifndef access_and_mobility_subscription_data_TEST
#define access_and_mobility_subscription_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_and_mobility_subscription_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_and_mobility_subscription_data.h"
access_and_mobility_subscription_data_t* instantiate_access_and_mobility_subscription_data(int include_optional);

#include "test_ambr_rm.c"
#include "test_nssai.c"
#include "test_service_area_restriction.c"
#include "test_sor_info.c"
#include "test_upu_info.c"
#include "test_mdt_configuration.c"
#include "test_trace_data_1.c"
#include "test_cag_data.c"
#include "test_ec_restriction_data_wb.c"
#include "test_expected_ue_behaviour_data.c"
#include "test_wireline_service_area_restriction.c"
#include "test_aerial_ue_subscription_info.c"
#include "test_roaming_restrictions.c"


access_and_mobility_subscription_data_t* instantiate_access_and_mobility_subscription_data(int include_optional) {
  access_and_mobility_subscription_data_t* access_and_mobility_subscription_data = NULL;
  if (include_optional) {
    access_and_mobility_subscription_data = access_and_mobility_subscription_data_create(
      "a",
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      null,
       // false, not to have infinite recursion
      instantiate_nssai(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_service_area_restriction(0),
      list_createList(),
      1,
      56,
      56,
      1,
      1,
      56,
       // false, not to have infinite recursion
      instantiate_sor_info(0),
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_upu_info(0),
      "a",
      1,
      list_createList(),
      nudr_datarepository_api_openapi_file_access_and_mobility_subscription_data__ALL_PACKET_SERVICES,
      list_createList(),
      56,
      nudr_datarepository_api_openapi_file_access_and_mobility_subscription_data__CONSENT_NOT_GIVEN,
       // false, not to have infinite recursion
      instantiate_mdt_configuration(0),
       // false, not to have infinite recursion
      instantiate_trace_data_1(0),
       // false, not to have infinite recursion
      instantiate_cag_data(0),
      "0",
      "a",
      0,
      1,
      "YQ==",
       // false, not to have infinite recursion
      instantiate_ec_restriction_data_wb(0),
      1,
       // false, not to have infinite recursion
      instantiate_expected_ue_behaviour_data(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_wireline_service_area_restriction(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_aerial_ue_subscription_info(0),
       // false, not to have infinite recursion
      instantiate_roaming_restrictions(0),
      1
    );
  } else {
    access_and_mobility_subscription_data = access_and_mobility_subscription_data_create(
      "a",
      list_createList(),
      "0",
      list_createList(),
      list_createList(),
      null,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      1,
      56,
      56,
      1,
      1,
      56,
      NULL,
      1,
      1,
      list_createList(),
      NULL,
      "a",
      1,
      list_createList(),
      nudr_datarepository_api_openapi_file_access_and_mobility_subscription_data__ALL_PACKET_SERVICES,
      list_createList(),
      56,
      nudr_datarepository_api_openapi_file_access_and_mobility_subscription_data__CONSENT_NOT_GIVEN,
      NULL,
      NULL,
      NULL,
      "0",
      "a",
      0,
      1,
      "YQ==",
      NULL,
      1,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      NULL,
      1
    );
  }

  return access_and_mobility_subscription_data;
}


#ifdef access_and_mobility_subscription_data_MAIN

void test_access_and_mobility_subscription_data(int include_optional) {
    access_and_mobility_subscription_data_t* access_and_mobility_subscription_data_1 = instantiate_access_and_mobility_subscription_data(include_optional);

	cJSON* jsonaccess_and_mobility_subscription_data_1 = access_and_mobility_subscription_data_convertToJSON(access_and_mobility_subscription_data_1);
	printf("access_and_mobility_subscription_data :\n%s\n", cJSON_Print(jsonaccess_and_mobility_subscription_data_1));
	access_and_mobility_subscription_data_t* access_and_mobility_subscription_data_2 = access_and_mobility_subscription_data_parseFromJSON(jsonaccess_and_mobility_subscription_data_1);
	cJSON* jsonaccess_and_mobility_subscription_data_2 = access_and_mobility_subscription_data_convertToJSON(access_and_mobility_subscription_data_2);
	printf("repeating access_and_mobility_subscription_data:\n%s\n", cJSON_Print(jsonaccess_and_mobility_subscription_data_2));
}

int main() {
  test_access_and_mobility_subscription_data(1);
  test_access_and_mobility_subscription_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_and_mobility_subscription_data_MAIN
#endif // access_and_mobility_subscription_data_TEST
