#ifndef energy_ee_event_any_of_TEST
#define energy_ee_event_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_event_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_event_any_of.h"
energy_ee_event_any_of_t* instantiate_energy_ee_event_any_of(int include_optional);



energy_ee_event_any_of_t* instantiate_energy_ee_event_any_of(int include_optional) {
  energy_ee_event_any_of_t* energy_ee_event_any_of = NULL;
  if (include_optional) {
    energy_ee_event_any_of = energy_ee_event_any_of_create(
    );
  } else {
    energy_ee_event_any_of = energy_ee_event_any_of_create(
    );
  }

  return energy_ee_event_any_of;
}


#ifdef energy_ee_event_any_of_MAIN

void test_energy_ee_event_any_of(int include_optional) {
    energy_ee_event_any_of_t* energy_ee_event_any_of_1 = instantiate_energy_ee_event_any_of(include_optional);

	cJSON* jsonenergy_ee_event_any_of_1 = energy_ee_event_any_of_convertToJSON(energy_ee_event_any_of_1);
	printf("energy_ee_event_any_of :\n%s\n", cJSON_Print(jsonenergy_ee_event_any_of_1));
	energy_ee_event_any_of_t* energy_ee_event_any_of_2 = energy_ee_event_any_of_parseFromJSON(jsonenergy_ee_event_any_of_1);
	cJSON* jsonenergy_ee_event_any_of_2 = energy_ee_event_any_of_convertToJSON(energy_ee_event_any_of_2);
	printf("repeating energy_ee_event_any_of:\n%s\n", cJSON_Print(jsonenergy_ee_event_any_of_2));
}

int main() {
  test_energy_ee_event_any_of(1);
  test_energy_ee_event_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_event_any_of_MAIN
#endif // energy_ee_event_any_of_TEST
