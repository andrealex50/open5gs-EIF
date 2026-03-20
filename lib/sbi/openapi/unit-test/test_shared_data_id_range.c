#ifndef shared_data_id_range_TEST
#define shared_data_id_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define shared_data_id_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/shared_data_id_range.h"
shared_data_id_range_t* instantiate_shared_data_id_range(int include_optional);



shared_data_id_range_t* instantiate_shared_data_id_range(int include_optional) {
  shared_data_id_range_t* shared_data_id_range = NULL;
  if (include_optional) {
    shared_data_id_range = shared_data_id_range_create(
      "0"
    );
  } else {
    shared_data_id_range = shared_data_id_range_create(
      "0"
    );
  }

  return shared_data_id_range;
}


#ifdef shared_data_id_range_MAIN

void test_shared_data_id_range(int include_optional) {
    shared_data_id_range_t* shared_data_id_range_1 = instantiate_shared_data_id_range(include_optional);

	cJSON* jsonshared_data_id_range_1 = shared_data_id_range_convertToJSON(shared_data_id_range_1);
	printf("shared_data_id_range :\n%s\n", cJSON_Print(jsonshared_data_id_range_1));
	shared_data_id_range_t* shared_data_id_range_2 = shared_data_id_range_parseFromJSON(jsonshared_data_id_range_1);
	cJSON* jsonshared_data_id_range_2 = shared_data_id_range_convertToJSON(shared_data_id_range_2);
	printf("repeating shared_data_id_range:\n%s\n", cJSON_Print(jsonshared_data_id_range_2));
}

int main() {
  test_shared_data_id_range(1);
  test_shared_data_id_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // shared_data_id_range_MAIN
#endif // shared_data_id_range_TEST
