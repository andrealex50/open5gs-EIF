#ifndef temporal_validity_TEST
#define temporal_validity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define temporal_validity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/temporal_validity.h"
temporal_validity_t* instantiate_temporal_validity(int include_optional);



temporal_validity_t* instantiate_temporal_validity(int include_optional) {
  temporal_validity_t* temporal_validity = NULL;
  if (include_optional) {
    temporal_validity = temporal_validity_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    temporal_validity = temporal_validity_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return temporal_validity;
}


#ifdef temporal_validity_MAIN

void test_temporal_validity(int include_optional) {
    temporal_validity_t* temporal_validity_1 = instantiate_temporal_validity(include_optional);

	cJSON* jsontemporal_validity_1 = temporal_validity_convertToJSON(temporal_validity_1);
	printf("temporal_validity :\n%s\n", cJSON_Print(jsontemporal_validity_1));
	temporal_validity_t* temporal_validity_2 = temporal_validity_parseFromJSON(jsontemporal_validity_1);
	cJSON* jsontemporal_validity_2 = temporal_validity_convertToJSON(temporal_validity_2);
	printf("repeating temporal_validity:\n%s\n", cJSON_Print(jsontemporal_validity_2));
}

int main() {
  test_temporal_validity(1);
  test_temporal_validity(0);

  printf("Hello world \n");
  return 0;
}

#endif // temporal_validity_MAIN
#endif // temporal_validity_TEST
