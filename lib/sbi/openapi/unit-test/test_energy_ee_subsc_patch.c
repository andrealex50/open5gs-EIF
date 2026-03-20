#ifndef energy_ee_subsc_patch_TEST
#define energy_ee_subsc_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_subsc_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_subsc_patch.h"
energy_ee_subsc_patch_t* instantiate_energy_ee_subsc_patch(int include_optional);



energy_ee_subsc_patch_t* instantiate_energy_ee_subsc_patch(int include_optional) {
  energy_ee_subsc_patch_t* energy_ee_subsc_patch = NULL;
  if (include_optional) {
    energy_ee_subsc_patch = energy_ee_subsc_patch_create(
      "0",
      list_createList()
    );
  } else {
    energy_ee_subsc_patch = energy_ee_subsc_patch_create(
      "0",
      list_createList()
    );
  }

  return energy_ee_subsc_patch;
}


#ifdef energy_ee_subsc_patch_MAIN

void test_energy_ee_subsc_patch(int include_optional) {
    energy_ee_subsc_patch_t* energy_ee_subsc_patch_1 = instantiate_energy_ee_subsc_patch(include_optional);

	cJSON* jsonenergy_ee_subsc_patch_1 = energy_ee_subsc_patch_convertToJSON(energy_ee_subsc_patch_1);
	printf("energy_ee_subsc_patch :\n%s\n", cJSON_Print(jsonenergy_ee_subsc_patch_1));
	energy_ee_subsc_patch_t* energy_ee_subsc_patch_2 = energy_ee_subsc_patch_parseFromJSON(jsonenergy_ee_subsc_patch_1);
	cJSON* jsonenergy_ee_subsc_patch_2 = energy_ee_subsc_patch_convertToJSON(energy_ee_subsc_patch_2);
	printf("repeating energy_ee_subsc_patch:\n%s\n", cJSON_Print(jsonenergy_ee_subsc_patch_2));
}

int main() {
  test_energy_ee_subsc_patch(1);
  test_energy_ee_subsc_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_subsc_patch_MAIN
#endif // energy_ee_subsc_patch_TEST
