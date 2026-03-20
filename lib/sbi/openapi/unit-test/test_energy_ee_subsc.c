#ifndef energy_ee_subsc_TEST
#define energy_ee_subsc_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_subsc_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_subsc.h"
energy_ee_subsc_t* instantiate_energy_ee_subsc(int include_optional);



energy_ee_subsc_t* instantiate_energy_ee_subsc(int include_optional) {
  energy_ee_subsc_t* energy_ee_subsc = NULL;
  if (include_optional) {
    energy_ee_subsc = energy_ee_subsc_create(
      "0",
      list_createList(),
      "a"
    );
  } else {
    energy_ee_subsc = energy_ee_subsc_create(
      "0",
      list_createList(),
      "a"
    );
  }

  return energy_ee_subsc;
}


#ifdef energy_ee_subsc_MAIN

void test_energy_ee_subsc(int include_optional) {
    energy_ee_subsc_t* energy_ee_subsc_1 = instantiate_energy_ee_subsc(include_optional);

	cJSON* jsonenergy_ee_subsc_1 = energy_ee_subsc_convertToJSON(energy_ee_subsc_1);
	printf("energy_ee_subsc :\n%s\n", cJSON_Print(jsonenergy_ee_subsc_1));
	energy_ee_subsc_t* energy_ee_subsc_2 = energy_ee_subsc_parseFromJSON(jsonenergy_ee_subsc_1);
	cJSON* jsonenergy_ee_subsc_2 = energy_ee_subsc_convertToJSON(energy_ee_subsc_2);
	printf("repeating energy_ee_subsc:\n%s\n", cJSON_Print(jsonenergy_ee_subsc_2));
}

int main() {
  test_energy_ee_subsc(1);
  test_energy_ee_subsc(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_subsc_MAIN
#endif // energy_ee_subsc_TEST
