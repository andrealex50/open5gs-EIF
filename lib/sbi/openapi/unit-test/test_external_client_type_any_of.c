#ifndef external_client_type_any_of_TEST
#define external_client_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define external_client_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/external_client_type_any_of.h"
external_client_type_any_of_t* instantiate_external_client_type_any_of(int include_optional);



external_client_type_any_of_t* instantiate_external_client_type_any_of(int include_optional) {
  external_client_type_any_of_t* external_client_type_any_of = NULL;
  if (include_optional) {
    external_client_type_any_of = external_client_type_any_of_create(
    );
  } else {
    external_client_type_any_of = external_client_type_any_of_create(
    );
  }

  return external_client_type_any_of;
}


#ifdef external_client_type_any_of_MAIN

void test_external_client_type_any_of(int include_optional) {
    external_client_type_any_of_t* external_client_type_any_of_1 = instantiate_external_client_type_any_of(include_optional);

	cJSON* jsonexternal_client_type_any_of_1 = external_client_type_any_of_convertToJSON(external_client_type_any_of_1);
	printf("external_client_type_any_of :\n%s\n", cJSON_Print(jsonexternal_client_type_any_of_1));
	external_client_type_any_of_t* external_client_type_any_of_2 = external_client_type_any_of_parseFromJSON(jsonexternal_client_type_any_of_1);
	cJSON* jsonexternal_client_type_any_of_2 = external_client_type_any_of_convertToJSON(external_client_type_any_of_2);
	printf("repeating external_client_type_any_of:\n%s\n", cJSON_Print(jsonexternal_client_type_any_of_2));
}

int main() {
  test_external_client_type_any_of(1);
  test_external_client_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // external_client_type_any_of_MAIN
#endif // external_client_type_any_of_TEST
