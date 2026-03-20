#ifndef energy_ee_event_TEST
#define energy_ee_event_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_event_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_event.h"
energy_ee_event_t* instantiate_energy_ee_event(int include_optional);



energy_ee_event_t* instantiate_energy_ee_event(int include_optional) {
  energy_ee_event_t* energy_ee_event = NULL;
  if (include_optional) {
    energy_ee_event = energy_ee_event_create(
    );
  } else {
    energy_ee_event = energy_ee_event_create(
    );
  }

  return energy_ee_event;
}


#ifdef energy_ee_event_MAIN

void test_energy_ee_event(int include_optional) {
    energy_ee_event_t* energy_ee_event_1 = instantiate_energy_ee_event(include_optional);

	cJSON* jsonenergy_ee_event_1 = energy_ee_event_convertToJSON(energy_ee_event_1);
	printf("energy_ee_event :\n%s\n", cJSON_Print(jsonenergy_ee_event_1));
	energy_ee_event_t* energy_ee_event_2 = energy_ee_event_parseFromJSON(jsonenergy_ee_event_1);
	cJSON* jsonenergy_ee_event_2 = energy_ee_event_convertToJSON(energy_ee_event_2);
	printf("repeating energy_ee_event:\n%s\n", cJSON_Print(jsonenergy_ee_event_2));
}

int main() {
  test_energy_ee_event(1);
  test_energy_ee_event(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_event_MAIN
#endif // energy_ee_event_TEST
