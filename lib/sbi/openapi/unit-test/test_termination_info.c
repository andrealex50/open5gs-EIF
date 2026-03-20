#ifndef termination_info_TEST
#define termination_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define termination_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/termination_info.h"
termination_info_t* instantiate_termination_info(int include_optional);



termination_info_t* instantiate_termination_info(int include_optional) {
  termination_info_t* termination_info = NULL;
  if (include_optional) {
    termination_info = termination_info_create(
      npcf_policyauthorization_service_api_termination_info__ALL_SDF_DEACTIVATION,
      "0"
    );
  } else {
    termination_info = termination_info_create(
      npcf_policyauthorization_service_api_termination_info__ALL_SDF_DEACTIVATION,
      "0"
    );
  }

  return termination_info;
}


#ifdef termination_info_MAIN

void test_termination_info(int include_optional) {
    termination_info_t* termination_info_1 = instantiate_termination_info(include_optional);

	cJSON* jsontermination_info_1 = termination_info_convertToJSON(termination_info_1);
	printf("termination_info :\n%s\n", cJSON_Print(jsontermination_info_1));
	termination_info_t* termination_info_2 = termination_info_parseFromJSON(jsontermination_info_1);
	cJSON* jsontermination_info_2 = termination_info_convertToJSON(termination_info_2);
	printf("repeating termination_info:\n%s\n", cJSON_Print(jsontermination_info_2));
}

int main() {
  test_termination_info(1);
  test_termination_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // termination_info_MAIN
#endif // termination_info_TEST
