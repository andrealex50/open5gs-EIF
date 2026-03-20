#ifndef battery_indication_rm_TEST
#define battery_indication_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define battery_indication_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/battery_indication_rm.h"
battery_indication_rm_t* instantiate_battery_indication_rm(int include_optional);



battery_indication_rm_t* instantiate_battery_indication_rm(int include_optional) {
  battery_indication_rm_t* battery_indication_rm = NULL;
  if (include_optional) {
    battery_indication_rm = battery_indication_rm_create(
      1,
      1,
      1
    );
  } else {
    battery_indication_rm = battery_indication_rm_create(
      1,
      1,
      1
    );
  }

  return battery_indication_rm;
}


#ifdef battery_indication_rm_MAIN

void test_battery_indication_rm(int include_optional) {
    battery_indication_rm_t* battery_indication_rm_1 = instantiate_battery_indication_rm(include_optional);

	cJSON* jsonbattery_indication_rm_1 = battery_indication_rm_convertToJSON(battery_indication_rm_1);
	printf("battery_indication_rm :\n%s\n", cJSON_Print(jsonbattery_indication_rm_1));
	battery_indication_rm_t* battery_indication_rm_2 = battery_indication_rm_parseFromJSON(jsonbattery_indication_rm_1);
	cJSON* jsonbattery_indication_rm_2 = battery_indication_rm_convertToJSON(battery_indication_rm_2);
	printf("repeating battery_indication_rm:\n%s\n", cJSON_Print(jsonbattery_indication_rm_2));
}

int main() {
  test_battery_indication_rm(1);
  test_battery_indication_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // battery_indication_rm_MAIN
#endif // battery_indication_rm_TEST
