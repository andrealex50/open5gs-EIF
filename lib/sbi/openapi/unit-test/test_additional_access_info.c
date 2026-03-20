#ifndef additional_access_info_TEST
#define additional_access_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_access_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_access_info.h"
additional_access_info_t* instantiate_additional_access_info(int include_optional);



additional_access_info_t* instantiate_additional_access_info(int include_optional) {
  additional_access_info_t* additional_access_info = NULL;
  if (include_optional) {
    additional_access_info = additional_access_info_create(
      npcf_smpolicycontrol_api_additional_access_info__3GPP_ACCESS,
      npcf_smpolicycontrol_api_additional_access_info__NR
    );
  } else {
    additional_access_info = additional_access_info_create(
      npcf_smpolicycontrol_api_additional_access_info__3GPP_ACCESS,
      npcf_smpolicycontrol_api_additional_access_info__NR
    );
  }

  return additional_access_info;
}


#ifdef additional_access_info_MAIN

void test_additional_access_info(int include_optional) {
    additional_access_info_t* additional_access_info_1 = instantiate_additional_access_info(include_optional);

	cJSON* jsonadditional_access_info_1 = additional_access_info_convertToJSON(additional_access_info_1);
	printf("additional_access_info :\n%s\n", cJSON_Print(jsonadditional_access_info_1));
	additional_access_info_t* additional_access_info_2 = additional_access_info_parseFromJSON(jsonadditional_access_info_1);
	cJSON* jsonadditional_access_info_2 = additional_access_info_convertToJSON(additional_access_info_2);
	printf("repeating additional_access_info:\n%s\n", cJSON_Print(jsonadditional_access_info_2));
}

int main() {
  test_additional_access_info(1);
  test_additional_access_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_access_info_MAIN
#endif // additional_access_info_TEST
