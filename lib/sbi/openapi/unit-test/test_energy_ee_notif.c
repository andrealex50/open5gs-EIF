#ifndef energy_ee_notif_TEST
#define energy_ee_notif_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_notif_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_notif.h"
energy_ee_notif_t* instantiate_energy_ee_notif(int include_optional);



energy_ee_notif_t* instantiate_energy_ee_notif(int include_optional) {
  energy_ee_notif_t* energy_ee_notif = NULL;
  if (include_optional) {
    energy_ee_notif = energy_ee_notif_create(
      "0",
      list_createList()
    );
  } else {
    energy_ee_notif = energy_ee_notif_create(
      "0",
      list_createList()
    );
  }

  return energy_ee_notif;
}


#ifdef energy_ee_notif_MAIN

void test_energy_ee_notif(int include_optional) {
    energy_ee_notif_t* energy_ee_notif_1 = instantiate_energy_ee_notif(include_optional);

	cJSON* jsonenergy_ee_notif_1 = energy_ee_notif_convertToJSON(energy_ee_notif_1);
	printf("energy_ee_notif :\n%s\n", cJSON_Print(jsonenergy_ee_notif_1));
	energy_ee_notif_t* energy_ee_notif_2 = energy_ee_notif_parseFromJSON(jsonenergy_ee_notif_1);
	cJSON* jsonenergy_ee_notif_2 = energy_ee_notif_convertToJSON(energy_ee_notif_2);
	printf("repeating energy_ee_notif:\n%s\n", cJSON_Print(jsonenergy_ee_notif_2));
}

int main() {
  test_energy_ee_notif(1);
  test_energy_ee_notif(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_notif_MAIN
#endif // energy_ee_notif_TEST
