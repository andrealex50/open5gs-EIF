#ifndef identity_data_TEST
#define identity_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define identity_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/identity_data.h"
identity_data_t* instantiate_identity_data(int include_optional);



identity_data_t* instantiate_identity_data(int include_optional) {
  identity_data_t* identity_data = NULL;
  if (include_optional) {
    identity_data = identity_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    identity_data = identity_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return identity_data;
}


#ifdef identity_data_MAIN

void test_identity_data(int include_optional) {
    identity_data_t* identity_data_1 = instantiate_identity_data(include_optional);

	cJSON* jsonidentity_data_1 = identity_data_convertToJSON(identity_data_1);
	printf("identity_data :\n%s\n", cJSON_Print(jsonidentity_data_1));
	identity_data_t* identity_data_2 = identity_data_parseFromJSON(jsonidentity_data_1);
	cJSON* jsonidentity_data_2 = identity_data_convertToJSON(identity_data_2);
	printf("repeating identity_data:\n%s\n", cJSON_Print(jsonidentity_data_2));
}

int main() {
  test_identity_data(1);
  test_identity_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // identity_data_MAIN
#endif // identity_data_TEST
