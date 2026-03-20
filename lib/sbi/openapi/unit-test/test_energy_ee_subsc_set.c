#ifndef energy_ee_subsc_set_TEST
#define energy_ee_subsc_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_subsc_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_subsc_set.h"
energy_ee_subsc_set_t* instantiate_energy_ee_subsc_set(int include_optional);

#include "test_energy_ee_event.c"
#include "test_snssai.c"
#include "test_time_window.c"
#include "test_energy_info.c"


energy_ee_subsc_set_t* instantiate_energy_ee_subsc_set(int include_optional) {
  energy_ee_subsc_set_t* energy_ee_subsc_set = NULL;
  if (include_optional) {
    energy_ee_subsc_set = energy_ee_subsc_set_create(
      null,
      "0",
      "a",
      "a",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      list_createList(),
      0,
       // false, not to have infinite recursion
      instantiate_time_window(0),
       // false, not to have infinite recursion
      instantiate_energy_info(0),
      0,
      0
    );
  } else {
    energy_ee_subsc_set = energy_ee_subsc_set_create(
      null,
      "0",
      "a",
      "a",
      "0",
      NULL,
      "0",
      list_createList(),
      0,
      NULL,
      NULL,
      0,
      0
    );
  }

  return energy_ee_subsc_set;
}


#ifdef energy_ee_subsc_set_MAIN

void test_energy_ee_subsc_set(int include_optional) {
    energy_ee_subsc_set_t* energy_ee_subsc_set_1 = instantiate_energy_ee_subsc_set(include_optional);

	cJSON* jsonenergy_ee_subsc_set_1 = energy_ee_subsc_set_convertToJSON(energy_ee_subsc_set_1);
	printf("energy_ee_subsc_set :\n%s\n", cJSON_Print(jsonenergy_ee_subsc_set_1));
	energy_ee_subsc_set_t* energy_ee_subsc_set_2 = energy_ee_subsc_set_parseFromJSON(jsonenergy_ee_subsc_set_1);
	cJSON* jsonenergy_ee_subsc_set_2 = energy_ee_subsc_set_convertToJSON(energy_ee_subsc_set_2);
	printf("repeating energy_ee_subsc_set:\n%s\n", cJSON_Print(jsonenergy_ee_subsc_set_2));
}

int main() {
  test_energy_ee_subsc_set(1);
  test_energy_ee_subsc_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_subsc_set_MAIN
#endif // energy_ee_subsc_set_TEST
