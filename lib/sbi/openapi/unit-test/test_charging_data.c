#ifndef charging_data_TEST
#define charging_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_data.h"
charging_data_t* instantiate_charging_data(int include_optional);



charging_data_t* instantiate_charging_data(int include_optional) {
  charging_data_t* charging_data = NULL;
  if (include_optional) {
    charging_data = charging_data_create(
      "0",
      npcf_smpolicycontrol_api_charging_data__DURATION,
      1,
      1,
      1,
      0,
      npcf_smpolicycontrol_api_charging_data__SER_ID_LEVEL,
      0,
      "0",
      "0",
      0,
      "0"
    );
  } else {
    charging_data = charging_data_create(
      "0",
      npcf_smpolicycontrol_api_charging_data__DURATION,
      1,
      1,
      1,
      0,
      npcf_smpolicycontrol_api_charging_data__SER_ID_LEVEL,
      0,
      "0",
      "0",
      0,
      "0"
    );
  }

  return charging_data;
}


#ifdef charging_data_MAIN

void test_charging_data(int include_optional) {
    charging_data_t* charging_data_1 = instantiate_charging_data(include_optional);

	cJSON* jsoncharging_data_1 = charging_data_convertToJSON(charging_data_1);
	printf("charging_data :\n%s\n", cJSON_Print(jsoncharging_data_1));
	charging_data_t* charging_data_2 = charging_data_parseFromJSON(jsoncharging_data_1);
	cJSON* jsoncharging_data_2 = charging_data_convertToJSON(charging_data_2);
	printf("repeating charging_data:\n%s\n", cJSON_Print(jsoncharging_data_2));
}

int main() {
  test_charging_data(1);
  test_charging_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_data_MAIN
#endif // charging_data_TEST
