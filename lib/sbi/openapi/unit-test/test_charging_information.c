#ifndef charging_information_TEST
#define charging_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define charging_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/charging_information.h"
charging_information_t* instantiate_charging_information(int include_optional);



charging_information_t* instantiate_charging_information(int include_optional) {
  charging_information_t* charging_information = NULL;
  if (include_optional) {
    charging_information = charging_information_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    charging_information = charging_information_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0"
    );
  }

  return charging_information;
}


#ifdef charging_information_MAIN

void test_charging_information(int include_optional) {
    charging_information_t* charging_information_1 = instantiate_charging_information(include_optional);

	cJSON* jsoncharging_information_1 = charging_information_convertToJSON(charging_information_1);
	printf("charging_information :\n%s\n", cJSON_Print(jsoncharging_information_1));
	charging_information_t* charging_information_2 = charging_information_parseFromJSON(jsoncharging_information_1);
	cJSON* jsoncharging_information_2 = charging_information_convertToJSON(charging_information_2);
	printf("repeating charging_information:\n%s\n", cJSON_Print(jsoncharging_information_2));
}

int main() {
  test_charging_information(1);
  test_charging_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // charging_information_MAIN
#endif // charging_information_TEST
