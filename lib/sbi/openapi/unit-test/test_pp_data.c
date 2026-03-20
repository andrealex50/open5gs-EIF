#ifndef pp_data_TEST
#define pp_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_data.h"
pp_data_t* instantiate_pp_data(int include_optional);

#include "test_communication_characteristics.c"
#include "test_expected_ue_behaviour.c"
#include "test_ec_restriction.c"
#include "test_acs_info_rm.c"
#include "test_lcs_privacy.c"
#include "test_sor_info.c"
#include "test_model_5_mbs_authorization_info.c"


pp_data_t* instantiate_pp_data(int include_optional) {
  pp_data_t* pp_data = NULL;
  if (include_optional) {
    pp_data = pp_data_create(
       // false, not to have infinite recursion
      instantiate_communication_characteristics(0),
      "a",
       // false, not to have infinite recursion
      instantiate_expected_ue_behaviour(0),
       // false, not to have infinite recursion
      instantiate_ec_restriction(0),
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_lcs_privacy(0),
       // false, not to have infinite recursion
      instantiate_sor_info(0),
       // false, not to have infinite recursion
      instantiate_model_5_mbs_authorization_info(0)
    );
  } else {
    pp_data = pp_data_create(
      NULL,
      "a",
      NULL,
      NULL,
      null,
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return pp_data;
}


#ifdef pp_data_MAIN

void test_pp_data(int include_optional) {
    pp_data_t* pp_data_1 = instantiate_pp_data(include_optional);

	cJSON* jsonpp_data_1 = pp_data_convertToJSON(pp_data_1);
	printf("pp_data :\n%s\n", cJSON_Print(jsonpp_data_1));
	pp_data_t* pp_data_2 = pp_data_parseFromJSON(jsonpp_data_1);
	cJSON* jsonpp_data_2 = pp_data_convertToJSON(pp_data_2);
	printf("repeating pp_data:\n%s\n", cJSON_Print(jsonpp_data_2));
}

int main() {
  test_pp_data(1);
  test_pp_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_data_MAIN
#endif // pp_data_TEST
