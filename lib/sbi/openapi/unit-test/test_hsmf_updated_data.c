#ifndef hsmf_updated_data_TEST
#define hsmf_updated_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hsmf_updated_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hsmf_updated_data.h"
hsmf_updated_data_t* instantiate_hsmf_updated_data(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_roaming_charging_profile.c"
#include "test_up_security.c"
#include "test_ambr.c"
#include "test_eps_pdn_cnx_info.c"


hsmf_updated_data_t* instantiate_hsmf_updated_data(int include_optional) {
  hsmf_updated_data_t* hsmf_updated_data = NULL;
  if (include_optional) {
    hsmf_updated_data = hsmf_updated_data_create(
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_roaming_charging_profile(0),
      "a",
       // false, not to have infinite recursion
      instantiate_up_security(0),
      nsmf_pdusession_hsmf_updated_data__64_KBPS,
      nsmf_pdusession_hsmf_updated_data__64_KBPS,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ambr(0),
       // false, not to have infinite recursion
      instantiate_eps_pdn_cnx_info(0),
      list_createList(),
      0,
      "0",
      "0"
    );
  } else {
    hsmf_updated_data = hsmf_updated_data_create(
      NULL,
      NULL,
      NULL,
      NULL,
      list_createList(),
      "a",
      NULL,
      "a",
      NULL,
      nsmf_pdusession_hsmf_updated_data__64_KBPS,
      nsmf_pdusession_hsmf_updated_data__64_KBPS,
      1,
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      0,
      "0",
      "0"
    );
  }

  return hsmf_updated_data;
}


#ifdef hsmf_updated_data_MAIN

void test_hsmf_updated_data(int include_optional) {
    hsmf_updated_data_t* hsmf_updated_data_1 = instantiate_hsmf_updated_data(include_optional);

	cJSON* jsonhsmf_updated_data_1 = hsmf_updated_data_convertToJSON(hsmf_updated_data_1);
	printf("hsmf_updated_data :\n%s\n", cJSON_Print(jsonhsmf_updated_data_1));
	hsmf_updated_data_t* hsmf_updated_data_2 = hsmf_updated_data_parseFromJSON(jsonhsmf_updated_data_1);
	cJSON* jsonhsmf_updated_data_2 = hsmf_updated_data_convertToJSON(hsmf_updated_data_2);
	printf("repeating hsmf_updated_data:\n%s\n", cJSON_Print(jsonhsmf_updated_data_2));
}

int main() {
  test_hsmf_updated_data(1);
  test_hsmf_updated_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // hsmf_updated_data_MAIN
#endif // hsmf_updated_data_TEST
