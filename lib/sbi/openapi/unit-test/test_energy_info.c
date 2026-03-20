#ifndef energy_info_TEST
#define energy_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_info.h"
energy_info_t* instantiate_energy_info(int include_optional);



energy_info_t* instantiate_energy_info(int include_optional) {
  energy_info_t* energy_info = NULL;
  if (include_optional) {
    energy_info = energy_info_create(
      0,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    energy_info = energy_info_create(
      0,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return energy_info;
}


#ifdef energy_info_MAIN

void test_energy_info(int include_optional) {
    energy_info_t* energy_info_1 = instantiate_energy_info(include_optional);

	cJSON* jsonenergy_info_1 = energy_info_convertToJSON(energy_info_1);
	printf("energy_info :\n%s\n", cJSON_Print(jsonenergy_info_1));
	energy_info_t* energy_info_2 = energy_info_parseFromJSON(jsonenergy_info_1);
	cJSON* jsonenergy_info_2 = energy_info_convertToJSON(energy_info_2);
	printf("repeating energy_info:\n%s\n", cJSON_Print(jsonenergy_info_2));
}

int main() {
  test_energy_info(1);
  test_energy_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_info_MAIN
#endif // energy_info_TEST
