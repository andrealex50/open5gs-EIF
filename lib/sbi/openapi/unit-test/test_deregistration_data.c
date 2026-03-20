#ifndef deregistration_data_TEST
#define deregistration_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deregistration_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deregistration_data.h"
deregistration_data_t* instantiate_deregistration_data(int include_optional);



deregistration_data_t* instantiate_deregistration_data(int include_optional) {
  deregistration_data_t* deregistration_data = NULL;
  if (include_optional) {
    deregistration_data = deregistration_data_create(
      nudm_uecm_deregistration_data__UE_INITIAL_REGISTRATION,
      nudm_uecm_deregistration_data__3GPP_ACCESS,
      0,
      "0"
    );
  } else {
    deregistration_data = deregistration_data_create(
      nudm_uecm_deregistration_data__UE_INITIAL_REGISTRATION,
      nudm_uecm_deregistration_data__3GPP_ACCESS,
      0,
      "0"
    );
  }

  return deregistration_data;
}


#ifdef deregistration_data_MAIN

void test_deregistration_data(int include_optional) {
    deregistration_data_t* deregistration_data_1 = instantiate_deregistration_data(include_optional);

	cJSON* jsonderegistration_data_1 = deregistration_data_convertToJSON(deregistration_data_1);
	printf("deregistration_data :\n%s\n", cJSON_Print(jsonderegistration_data_1));
	deregistration_data_t* deregistration_data_2 = deregistration_data_parseFromJSON(jsonderegistration_data_1);
	cJSON* jsonderegistration_data_2 = deregistration_data_convertToJSON(deregistration_data_2);
	printf("repeating deregistration_data:\n%s\n", cJSON_Print(jsonderegistration_data_2));
}

int main() {
  test_deregistration_data(1);
  test_deregistration_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // deregistration_data_MAIN
#endif // deregistration_data_TEST
