#ifndef location_accuracy_TEST
#define location_accuracy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_accuracy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_accuracy.h"
location_accuracy_t* instantiate_location_accuracy(int include_optional);



location_accuracy_t* instantiate_location_accuracy(int include_optional) {
  location_accuracy_t* location_accuracy = NULL;
  if (include_optional) {
    location_accuracy = location_accuracy_create(
    );
  } else {
    location_accuracy = location_accuracy_create(
    );
  }

  return location_accuracy;
}


#ifdef location_accuracy_MAIN

void test_location_accuracy(int include_optional) {
    location_accuracy_t* location_accuracy_1 = instantiate_location_accuracy(include_optional);

	cJSON* jsonlocation_accuracy_1 = location_accuracy_convertToJSON(location_accuracy_1);
	printf("location_accuracy :\n%s\n", cJSON_Print(jsonlocation_accuracy_1));
	location_accuracy_t* location_accuracy_2 = location_accuracy_parseFromJSON(jsonlocation_accuracy_1);
	cJSON* jsonlocation_accuracy_2 = location_accuracy_convertToJSON(location_accuracy_2);
	printf("repeating location_accuracy:\n%s\n", cJSON_Print(jsonlocation_accuracy_2));
}

int main() {
  test_location_accuracy(1);
  test_location_accuracy(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_accuracy_MAIN
#endif // location_accuracy_TEST
