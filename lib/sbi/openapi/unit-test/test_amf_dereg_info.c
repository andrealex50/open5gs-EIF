#ifndef amf_dereg_info_TEST
#define amf_dereg_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define amf_dereg_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/amf_dereg_info.h"
amf_dereg_info_t* instantiate_amf_dereg_info(int include_optional);



amf_dereg_info_t* instantiate_amf_dereg_info(int include_optional) {
  amf_dereg_info_t* amf_dereg_info = NULL;
  if (include_optional) {
    amf_dereg_info = amf_dereg_info_create(
      nudm_uecm_amf_dereg_info__UE_INITIAL_REGISTRATION
    );
  } else {
    amf_dereg_info = amf_dereg_info_create(
      nudm_uecm_amf_dereg_info__UE_INITIAL_REGISTRATION
    );
  }

  return amf_dereg_info;
}


#ifdef amf_dereg_info_MAIN

void test_amf_dereg_info(int include_optional) {
    amf_dereg_info_t* amf_dereg_info_1 = instantiate_amf_dereg_info(include_optional);

	cJSON* jsonamf_dereg_info_1 = amf_dereg_info_convertToJSON(amf_dereg_info_1);
	printf("amf_dereg_info :\n%s\n", cJSON_Print(jsonamf_dereg_info_1));
	amf_dereg_info_t* amf_dereg_info_2 = amf_dereg_info_parseFromJSON(jsonamf_dereg_info_1);
	cJSON* jsonamf_dereg_info_2 = amf_dereg_info_convertToJSON(amf_dereg_info_2);
	printf("repeating amf_dereg_info:\n%s\n", cJSON_Print(jsonamf_dereg_info_2));
}

int main() {
  test_amf_dereg_info(1);
  test_amf_dereg_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // amf_dereg_info_MAIN
#endif // amf_dereg_info_TEST
