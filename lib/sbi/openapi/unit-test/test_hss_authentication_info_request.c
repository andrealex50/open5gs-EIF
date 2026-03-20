#ifndef hss_authentication_info_request_TEST
#define hss_authentication_info_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_authentication_info_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_authentication_info_request.h"
hss_authentication_info_request_t* instantiate_hss_authentication_info_request(int include_optional);

#include "test_plmn_id.c"
#include "test_resynchronization_info.c"


hss_authentication_info_request_t* instantiate_hss_authentication_info_request(int include_optional) {
  hss_authentication_info_request_t* hss_authentication_info_request = NULL;
  if (include_optional) {
    hss_authentication_info_request = hss_authentication_info_request_create(
      "a",
      nudm_ueau_hss_authentication_info_request__EPS_AKA,
      1,
      nudm_ueau_hss_authentication_info_request__AUSF,
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_resynchronization_info(0),
      nudm_ueau_hss_authentication_info_request__HRPD
    );
  } else {
    hss_authentication_info_request = hss_authentication_info_request_create(
      "a",
      nudm_ueau_hss_authentication_info_request__EPS_AKA,
      1,
      nudm_ueau_hss_authentication_info_request__AUSF,
      NULL,
      NULL,
      nudm_ueau_hss_authentication_info_request__HRPD
    );
  }

  return hss_authentication_info_request;
}


#ifdef hss_authentication_info_request_MAIN

void test_hss_authentication_info_request(int include_optional) {
    hss_authentication_info_request_t* hss_authentication_info_request_1 = instantiate_hss_authentication_info_request(include_optional);

	cJSON* jsonhss_authentication_info_request_1 = hss_authentication_info_request_convertToJSON(hss_authentication_info_request_1);
	printf("hss_authentication_info_request :\n%s\n", cJSON_Print(jsonhss_authentication_info_request_1));
	hss_authentication_info_request_t* hss_authentication_info_request_2 = hss_authentication_info_request_parseFromJSON(jsonhss_authentication_info_request_1);
	cJSON* jsonhss_authentication_info_request_2 = hss_authentication_info_request_convertToJSON(hss_authentication_info_request_2);
	printf("repeating hss_authentication_info_request:\n%s\n", cJSON_Print(jsonhss_authentication_info_request_2));
}

int main() {
  test_hss_authentication_info_request(1);
  test_hss_authentication_info_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_authentication_info_request_MAIN
#endif // hss_authentication_info_request_TEST
