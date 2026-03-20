#ifndef ue_camping_rep_TEST
#define ue_camping_rep_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_camping_rep_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_camping_rep.h"
ue_camping_rep_t* instantiate_ue_camping_rep(int include_optional);

#include "test_serving_nf_identity.c"
#include "test_plmn_id_nid.c"
#include "test_user_location.c"


ue_camping_rep_t* instantiate_ue_camping_rep(int include_optional) {
  ue_camping_rep_t* ue_camping_rep = NULL;
  if (include_optional) {
    ue_camping_rep = ue_camping_rep_create(
      npcf_smpolicycontrol_api_ue_camping_rep__3GPP_ACCESS,
      npcf_smpolicycontrol_api_ue_camping_rep__NR,
       // false, not to have infinite recursion
      instantiate_serving_nf_identity(0),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
       // false, not to have infinite recursion
      instantiate_user_location(0),
      "-08:00+1",
      npcf_smpolicycontrol_api_ue_camping_rep__ANR_NOT_SUPPORTED,
      npcf_smpolicycontrol_api_ue_camping_rep__GEO
    );
  } else {
    ue_camping_rep = ue_camping_rep_create(
      npcf_smpolicycontrol_api_ue_camping_rep__3GPP_ACCESS,
      npcf_smpolicycontrol_api_ue_camping_rep__NR,
      NULL,
      NULL,
      NULL,
      "-08:00+1",
      npcf_smpolicycontrol_api_ue_camping_rep__ANR_NOT_SUPPORTED,
      npcf_smpolicycontrol_api_ue_camping_rep__GEO
    );
  }

  return ue_camping_rep;
}


#ifdef ue_camping_rep_MAIN

void test_ue_camping_rep(int include_optional) {
    ue_camping_rep_t* ue_camping_rep_1 = instantiate_ue_camping_rep(include_optional);

	cJSON* jsonue_camping_rep_1 = ue_camping_rep_convertToJSON(ue_camping_rep_1);
	printf("ue_camping_rep :\n%s\n", cJSON_Print(jsonue_camping_rep_1));
	ue_camping_rep_t* ue_camping_rep_2 = ue_camping_rep_parseFromJSON(jsonue_camping_rep_1);
	cJSON* jsonue_camping_rep_2 = ue_camping_rep_convertToJSON(ue_camping_rep_2);
	printf("repeating ue_camping_rep:\n%s\n", cJSON_Print(jsonue_camping_rep_2));
}

int main() {
  test_ue_camping_rep(1);
  test_ue_camping_rep(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_camping_rep_MAIN
#endif // ue_camping_rep_TEST
