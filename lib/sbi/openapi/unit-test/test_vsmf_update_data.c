#ifndef vsmf_update_data_TEST
#define vsmf_update_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vsmf_update_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vsmf_update_data.h"
vsmf_update_data_t* instantiate_vsmf_update_data(int include_optional);

#include "test_ambr.c"
#include "test_ref_to_binary_data.c"
#include "test_tunnel_info.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_qos_monitoring_info.c"
#include "test_eps_pdn_cnx_info.c"


vsmf_update_data_t* instantiate_vsmf_update_data(int include_optional) {
  vsmf_update_data_t* vsmf_update_data = NULL;
  if (include_optional) {
    vsmf_update_data = vsmf_update_data_create(
      nsmf_pdusession_vsmf_update_data__UE_REQ_PDU_SES_MOD,
       // false, not to have infinite recursion
      instantiate_ambr(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
      1,
      "0",
      "0",
      "0",
      "a",
      nsmf_pdusession_vsmf_update_data__REL_DUE_TO_HO,
      "0",
      56,
      nsmf_pdusession_vsmf_update_data__REL_MAPDU_OVER_3GPP,
      1,
       // false, not to have infinite recursion
      instantiate_tunnel_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
      1,
       // false, not to have infinite recursion
      instantiate_qos_monitoring_info(0),
       // false, not to have infinite recursion
      instantiate_eps_pdn_cnx_info(0),
      1,
      56
    );
  } else {
    vsmf_update_data = vsmf_update_data_create(
      nsmf_pdusession_vsmf_update_data__UE_REQ_PDU_SES_MOD,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      NULL,
      1,
      "0",
      "0",
      "0",
      "a",
      nsmf_pdusession_vsmf_update_data__REL_DUE_TO_HO,
      "0",
      56,
      nsmf_pdusession_vsmf_update_data__REL_MAPDU_OVER_3GPP,
      1,
      NULL,
      list_createList(),
      NULL,
      NULL,
      NULL,
      NULL,
      1,
      NULL,
      NULL,
      1,
      56
    );
  }

  return vsmf_update_data;
}


#ifdef vsmf_update_data_MAIN

void test_vsmf_update_data(int include_optional) {
    vsmf_update_data_t* vsmf_update_data_1 = instantiate_vsmf_update_data(include_optional);

	cJSON* jsonvsmf_update_data_1 = vsmf_update_data_convertToJSON(vsmf_update_data_1);
	printf("vsmf_update_data :\n%s\n", cJSON_Print(jsonvsmf_update_data_1));
	vsmf_update_data_t* vsmf_update_data_2 = vsmf_update_data_parseFromJSON(jsonvsmf_update_data_1);
	cJSON* jsonvsmf_update_data_2 = vsmf_update_data_convertToJSON(vsmf_update_data_2);
	printf("repeating vsmf_update_data:\n%s\n", cJSON_Print(jsonvsmf_update_data_2));
}

int main() {
  test_vsmf_update_data(1);
  test_vsmf_update_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vsmf_update_data_MAIN
#endif // vsmf_update_data_TEST
