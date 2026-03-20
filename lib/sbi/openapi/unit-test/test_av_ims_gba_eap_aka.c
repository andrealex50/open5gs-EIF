#ifndef av_ims_gba_eap_aka_TEST
#define av_ims_gba_eap_aka_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av_ims_gba_eap_aka_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av_ims_gba_eap_aka.h"
av_ims_gba_eap_aka_t* instantiate_av_ims_gba_eap_aka(int include_optional);



av_ims_gba_eap_aka_t* instantiate_av_ims_gba_eap_aka(int include_optional) {
  av_ims_gba_eap_aka_t* av_ims_gba_eap_aka = NULL;
  if (include_optional) {
    av_ims_gba_eap_aka = av_ims_gba_eap_aka_create(
      nudm_ueau_av_ims_gba_eap_aka__EPS_AKA,
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    av_ims_gba_eap_aka = av_ims_gba_eap_aka_create(
      nudm_ueau_av_ims_gba_eap_aka__EPS_AKA,
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  }

  return av_ims_gba_eap_aka;
}


#ifdef av_ims_gba_eap_aka_MAIN

void test_av_ims_gba_eap_aka(int include_optional) {
    av_ims_gba_eap_aka_t* av_ims_gba_eap_aka_1 = instantiate_av_ims_gba_eap_aka(include_optional);

	cJSON* jsonav_ims_gba_eap_aka_1 = av_ims_gba_eap_aka_convertToJSON(av_ims_gba_eap_aka_1);
	printf("av_ims_gba_eap_aka :\n%s\n", cJSON_Print(jsonav_ims_gba_eap_aka_1));
	av_ims_gba_eap_aka_t* av_ims_gba_eap_aka_2 = av_ims_gba_eap_aka_parseFromJSON(jsonav_ims_gba_eap_aka_1);
	cJSON* jsonav_ims_gba_eap_aka_2 = av_ims_gba_eap_aka_convertToJSON(av_ims_gba_eap_aka_2);
	printf("repeating av_ims_gba_eap_aka:\n%s\n", cJSON_Print(jsonav_ims_gba_eap_aka_2));
}

int main() {
  test_av_ims_gba_eap_aka(1);
  test_av_ims_gba_eap_aka(0);

  printf("Hello world \n");
  return 0;
}

#endif // av_ims_gba_eap_aka_MAIN
#endif // av_ims_gba_eap_aka_TEST
