#ifndef nf_profile_TEST
#define nf_profile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_profile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_profile.h"
nf_profile_t* instantiate_nf_profile(int include_optional);

#include "test_udr_info.c"
#include "test_udm_info.c"
#include "test_ausf_info.c"
#include "test_amf_info.c"
#include "test_smf_info.c"
#include "test_upf_info.c"
#include "test_pcf_info.c"
#include "test_bsf_info.c"
#include "test_chf_info.c"
#include "test_udsf_info.c"
#include "test_nwdaf_info.c"
#include "test_nef_info.c"
#include "test_lmf_info.c"
#include "test_gmlc_info.c"
#include "test_scp_info.c"
#include "test_sepp_info.c"
#include "test_mfaf_info.c"
#include "test_dccf_info.c"
#include "test_trust_af_info.c"
#include "test_nssaaf_info.c"
#include "test_iwmsc_info.c"
#include "test_mnpf_info.c"


nf_profile_t* instantiate_nf_profile(int include_optional) {
  nf_profile_t* nf_profile = NULL;
  if (include_optional) {
    nf_profile = nf_profile_create(
      "0",
      "0",
      nrf_nfdiscovery_service_nf_profile__NRF,
      nrf_nfdiscovery_service_nf_profile__REGISTERED,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      list_createList(),
      list_createList(),
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      "0",
      0,
       // false, not to have infinite recursion
      instantiate_udr_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_udm_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ausf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_amf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_smf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_upf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_pcf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_bsf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_chf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_udsf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_nwdaf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_nef_info(0),
      list_createList(),
      list_createList(),
      0,
      "2013-10-20T19:20:30+01:00",
      1,
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_lmf_info(0),
       // false, not to have infinite recursion
      instantiate_gmlc_info(0),
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_scp_info(0),
       // false, not to have infinite recursion
      instantiate_sepp_info(0),
      "a",
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_mfaf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_dccf_info(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_trust_af_info(0),
       // false, not to have infinite recursion
      instantiate_nssaaf_info(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_iwmsc_info(0),
       // false, not to have infinite recursion
      instantiate_mnpf_info(0)
    );
  } else {
    nf_profile = nf_profile_create(
      "0",
      "0",
      nrf_nfdiscovery_service_nf_profile__NRF,
      nrf_nfdiscovery_service_nf_profile__REGISTERED,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a",
      "a",
      list_createList(),
      list_createList(),
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      "0",
      0,
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      0,
      "2013-10-20T19:20:30+01:00",
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      "a",
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      NULL,
      NULL
    );
  }

  return nf_profile;
}


#ifdef nf_profile_MAIN

void test_nf_profile(int include_optional) {
    nf_profile_t* nf_profile_1 = instantiate_nf_profile(include_optional);

	cJSON* jsonnf_profile_1 = nf_profile_convertToJSON(nf_profile_1);
	printf("nf_profile :\n%s\n", cJSON_Print(jsonnf_profile_1));
	nf_profile_t* nf_profile_2 = nf_profile_parseFromJSON(jsonnf_profile_1);
	cJSON* jsonnf_profile_2 = nf_profile_convertToJSON(nf_profile_2);
	printf("repeating nf_profile:\n%s\n", cJSON_Print(jsonnf_profile_2));
}

int main() {
  test_nf_profile(1);
  test_nf_profile(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_profile_MAIN
#endif // nf_profile_TEST
