#ifndef released_data_TEST
#define released_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define released_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/released_data.h"
released_data_t* instantiate_released_data(int include_optional);

#include "test_small_data_rate_status.c"
#include "test_apn_rate_status.c"
#include "test_n4_information.c"
#include "test_n4_information.c"
#include "test_n4_information.c"


released_data_t* instantiate_released_data(int include_optional) {
  released_data_t* released_data = NULL;
  if (include_optional) {
    released_data = released_data_create(
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_apn_rate_status(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0),
       // false, not to have infinite recursion
      instantiate_n4_information(0)
    );
  } else {
    released_data = released_data_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return released_data;
}


#ifdef released_data_MAIN

void test_released_data(int include_optional) {
    released_data_t* released_data_1 = instantiate_released_data(include_optional);

	cJSON* jsonreleased_data_1 = released_data_convertToJSON(released_data_1);
	printf("released_data :\n%s\n", cJSON_Print(jsonreleased_data_1));
	released_data_t* released_data_2 = released_data_parseFromJSON(jsonreleased_data_1);
	cJSON* jsonreleased_data_2 = released_data_convertToJSON(released_data_2);
	printf("repeating released_data:\n%s\n", cJSON_Print(jsonreleased_data_2));
}

int main() {
  test_released_data(1);
  test_released_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // released_data_MAIN
#endif // released_data_TEST
