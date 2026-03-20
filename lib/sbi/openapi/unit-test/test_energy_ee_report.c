#ifndef energy_ee_report_TEST
#define energy_ee_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define energy_ee_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/energy_ee_report.h"
energy_ee_report_t* instantiate_energy_ee_report(int include_optional);

#include "test_energy_ee_event.c"
#include "test_energy_info.c"


energy_ee_report_t* instantiate_energy_ee_report(int include_optional) {
  energy_ee_report_t* energy_ee_report = NULL;
  if (include_optional) {
    energy_ee_report = energy_ee_report_create(
      null,
      "0",
      "2013-10-20T19:20:30+01:00",
       // false, not to have infinite recursion
      instantiate_energy_info(0)
    );
  } else {
    energy_ee_report = energy_ee_report_create(
      null,
      "0",
      "2013-10-20T19:20:30+01:00",
      NULL
    );
  }

  return energy_ee_report;
}


#ifdef energy_ee_report_MAIN

void test_energy_ee_report(int include_optional) {
    energy_ee_report_t* energy_ee_report_1 = instantiate_energy_ee_report(include_optional);

	cJSON* jsonenergy_ee_report_1 = energy_ee_report_convertToJSON(energy_ee_report_1);
	printf("energy_ee_report :\n%s\n", cJSON_Print(jsonenergy_ee_report_1));
	energy_ee_report_t* energy_ee_report_2 = energy_ee_report_parseFromJSON(jsonenergy_ee_report_1);
	cJSON* jsonenergy_ee_report_2 = energy_ee_report_convertToJSON(energy_ee_report_2);
	printf("repeating energy_ee_report:\n%s\n", cJSON_Print(jsonenergy_ee_report_2));
}

int main() {
  test_energy_ee_report(1);
  test_energy_ee_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // energy_ee_report_MAIN
#endif // energy_ee_report_TEST
