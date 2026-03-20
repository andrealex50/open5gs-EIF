#ifndef location_reporting_configuration_1_TEST
#define location_reporting_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_reporting_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_reporting_configuration_1.h"
location_reporting_configuration_1_t* instantiate_location_reporting_configuration_1(int include_optional);

#include "test_location_accuracy.c"
#include "test_location_accuracy.c"


location_reporting_configuration_1_t* instantiate_location_reporting_configuration_1(int include_optional) {
  location_reporting_configuration_1_t* location_reporting_configuration_1 = NULL;
  if (include_optional) {
    location_reporting_configuration_1 = location_reporting_configuration_1_create(
      1,
      1,
      null,
      null
    );
  } else {
    location_reporting_configuration_1 = location_reporting_configuration_1_create(
      1,
      1,
      null,
      null
    );
  }

  return location_reporting_configuration_1;
}


#ifdef location_reporting_configuration_1_MAIN

void test_location_reporting_configuration_1(int include_optional) {
    location_reporting_configuration_1_t* location_reporting_configuration_1_1 = instantiate_location_reporting_configuration_1(include_optional);

	cJSON* jsonlocation_reporting_configuration_1_1 = location_reporting_configuration_1_convertToJSON(location_reporting_configuration_1_1);
	printf("location_reporting_configuration_1 :\n%s\n", cJSON_Print(jsonlocation_reporting_configuration_1_1));
	location_reporting_configuration_1_t* location_reporting_configuration_1_2 = location_reporting_configuration_1_parseFromJSON(jsonlocation_reporting_configuration_1_1);
	cJSON* jsonlocation_reporting_configuration_1_2 = location_reporting_configuration_1_convertToJSON(location_reporting_configuration_1_2);
	printf("repeating location_reporting_configuration_1:\n%s\n", cJSON_Print(jsonlocation_reporting_configuration_1_2));
}

int main() {
  test_location_reporting_configuration_1(1);
  test_location_reporting_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_reporting_configuration_1_MAIN
#endif // location_reporting_configuration_1_TEST
