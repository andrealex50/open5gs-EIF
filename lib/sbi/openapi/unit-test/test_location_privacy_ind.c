#ifndef location_privacy_ind_TEST
#define location_privacy_ind_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define location_privacy_ind_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/location_privacy_ind.h"
location_privacy_ind_t* instantiate_location_privacy_ind(int include_optional);



location_privacy_ind_t* instantiate_location_privacy_ind(int include_optional) {
  location_privacy_ind_t* location_privacy_ind = NULL;
  if (include_optional) {
    location_privacy_ind = location_privacy_ind_create(
    );
  } else {
    location_privacy_ind = location_privacy_ind_create(
    );
  }

  return location_privacy_ind;
}


#ifdef location_privacy_ind_MAIN

void test_location_privacy_ind(int include_optional) {
    location_privacy_ind_t* location_privacy_ind_1 = instantiate_location_privacy_ind(include_optional);

	cJSON* jsonlocation_privacy_ind_1 = location_privacy_ind_convertToJSON(location_privacy_ind_1);
	printf("location_privacy_ind :\n%s\n", cJSON_Print(jsonlocation_privacy_ind_1));
	location_privacy_ind_t* location_privacy_ind_2 = location_privacy_ind_parseFromJSON(jsonlocation_privacy_ind_1);
	cJSON* jsonlocation_privacy_ind_2 = location_privacy_ind_convertToJSON(location_privacy_ind_2);
	printf("repeating location_privacy_ind:\n%s\n", cJSON_Print(jsonlocation_privacy_ind_2));
}

int main() {
  test_location_privacy_ind(1);
  test_location_privacy_ind(0);

  printf("Hello world \n");
  return 0;
}

#endif // location_privacy_ind_MAIN
#endif // location_privacy_ind_TEST
