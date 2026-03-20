#ifndef connection_capabilities_any_of_TEST
#define connection_capabilities_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define connection_capabilities_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/connection_capabilities_any_of.h"
connection_capabilities_any_of_t* instantiate_connection_capabilities_any_of(int include_optional);



connection_capabilities_any_of_t* instantiate_connection_capabilities_any_of(int include_optional) {
  connection_capabilities_any_of_t* connection_capabilities_any_of = NULL;
  if (include_optional) {
    connection_capabilities_any_of = connection_capabilities_any_of_create(
    );
  } else {
    connection_capabilities_any_of = connection_capabilities_any_of_create(
    );
  }

  return connection_capabilities_any_of;
}


#ifdef connection_capabilities_any_of_MAIN

void test_connection_capabilities_any_of(int include_optional) {
    connection_capabilities_any_of_t* connection_capabilities_any_of_1 = instantiate_connection_capabilities_any_of(include_optional);

	cJSON* jsonconnection_capabilities_any_of_1 = connection_capabilities_any_of_convertToJSON(connection_capabilities_any_of_1);
	printf("connection_capabilities_any_of :\n%s\n", cJSON_Print(jsonconnection_capabilities_any_of_1));
	connection_capabilities_any_of_t* connection_capabilities_any_of_2 = connection_capabilities_any_of_parseFromJSON(jsonconnection_capabilities_any_of_1);
	cJSON* jsonconnection_capabilities_any_of_2 = connection_capabilities_any_of_convertToJSON(connection_capabilities_any_of_2);
	printf("repeating connection_capabilities_any_of:\n%s\n", cJSON_Print(jsonconnection_capabilities_any_of_2));
}

int main() {
  test_connection_capabilities_any_of(1);
  test_connection_capabilities_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // connection_capabilities_any_of_MAIN
#endif // connection_capabilities_any_of_TEST
