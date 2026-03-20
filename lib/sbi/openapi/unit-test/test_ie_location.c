#ifndef ie_location_TEST
#define ie_location_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ie_location_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ie_location.h"
ie_location_t* instantiate_ie_location(int include_optional);



ie_location_t* instantiate_ie_location(int include_optional) {
  ie_location_t* ie_location = NULL;
  if (include_optional) {
    ie_location = ie_location_create(
    );
  } else {
    ie_location = ie_location_create(
    );
  }

  return ie_location;
}


#ifdef ie_location_MAIN

void test_ie_location(int include_optional) {
    ie_location_t* ie_location_1 = instantiate_ie_location(include_optional);

	cJSON* jsonie_location_1 = ie_location_convertToJSON(ie_location_1);
	printf("ie_location :\n%s\n", cJSON_Print(jsonie_location_1));
	ie_location_t* ie_location_2 = ie_location_parseFromJSON(jsonie_location_1);
	cJSON* jsonie_location_2 = ie_location_convertToJSON(ie_location_2);
	printf("repeating ie_location:\n%s\n", cJSON_Print(jsonie_location_2));
}

int main() {
  test_ie_location(1);
  test_ie_location(0);

  printf("Hello world \n");
  return 0;
}

#endif // ie_location_MAIN
#endif // ie_location_TEST
