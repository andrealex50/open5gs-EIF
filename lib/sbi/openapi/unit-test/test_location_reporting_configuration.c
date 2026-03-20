#ifndef location_reporting_configuration_TEST
#define location_reporting_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_reporting_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_reporting_configuration.h"
location_reporting_configuration_t* instantiate_location_reporting_configuration(int include_optional);

#include "test_location_accuracy.c"
#include "test_location_accuracy.c"


location_reporting_configuration_t* instantiate_location_reporting_configuration(int include_optional) {
  location_reporting_configuration_t* location_reporting_configuration = NULL;
  if (include_optional) {
    location_reporting_configuration = location_reporting_configuration_create(
      1,
      1,
      null,
      null
    );
  } else {
    location_reporting_configuration = location_reporting_configuration_create(
      1,
      1,
      null,
      null
    );
  }

  return location_reporting_configuration;
}


#ifdef location_reporting_configuration_MAIN

void test_location_reporting_configuration(int include_optional) {
    location_reporting_configuration_t* location_reporting_configuration_1 = instantiate_location_reporting_configuration(include_optional);

	cJSON* jsonlocation_reporting_configuration_1 = location_reporting_configuration_convertToJSON(location_reporting_configuration_1);
	printf("location_reporting_configuration :\n%s\n", cJSON_Print(jsonlocation_reporting_configuration_1));
	location_reporting_configuration_t* location_reporting_configuration_2 = location_reporting_configuration_parseFromJSON(jsonlocation_reporting_configuration_1);
	cJSON* jsonlocation_reporting_configuration_2 = location_reporting_configuration_convertToJSON(location_reporting_configuration_2);
	printf("repeating location_reporting_configuration:\n%s\n", cJSON_Print(jsonlocation_reporting_configuration_2));
}

int main() {
  test_location_reporting_configuration(1);
  test_location_reporting_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_reporting_configuration_MAIN
#endif // location_reporting_configuration_TEST
