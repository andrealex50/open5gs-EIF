#ifndef retrieved_data_TEST
#define retrieved_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define retrieved_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/retrieved_data.h"
retrieved_data_t* instantiate_retrieved_data(int include_optional);

#include "test_small_data_rate_status.c"
#include "test_af_coordination_info.c"


retrieved_data_t* instantiate_retrieved_data(int include_optional) {
  retrieved_data_t* retrieved_data = NULL;
  if (include_optional) {
    retrieved_data = retrieved_data_create(
       // false, not to have infinite recursion
      instantiate_small_data_rate_status(0),
       // false, not to have infinite recursion
      instantiate_af_coordination_info(0)
    );
  } else {
    retrieved_data = retrieved_data_create(
      NULL,
      NULL
    );
  }

  return retrieved_data;
}


#ifdef retrieved_data_MAIN

void test_retrieved_data(int include_optional) {
    retrieved_data_t* retrieved_data_1 = instantiate_retrieved_data(include_optional);

	cJSON* jsonretrieved_data_1 = retrieved_data_convertToJSON(retrieved_data_1);
	printf("retrieved_data :\n%s\n", cJSON_Print(jsonretrieved_data_1));
	retrieved_data_t* retrieved_data_2 = retrieved_data_parseFromJSON(jsonretrieved_data_1);
	cJSON* jsonretrieved_data_2 = retrieved_data_convertToJSON(retrieved_data_2);
	printf("repeating retrieved_data:\n%s\n", cJSON_Print(jsonretrieved_data_2));
}

int main() {
  test_retrieved_data(1);
  test_retrieved_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // retrieved_data_MAIN
#endif // retrieved_data_TEST
