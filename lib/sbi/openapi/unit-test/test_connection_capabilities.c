#ifndef connection_capabilities_TEST
#define connection_capabilities_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define connection_capabilities_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/connection_capabilities.h"
connection_capabilities_t* instantiate_connection_capabilities(int include_optional);



connection_capabilities_t* instantiate_connection_capabilities(int include_optional) {
  connection_capabilities_t* connection_capabilities = NULL;
  if (include_optional) {
    connection_capabilities = connection_capabilities_create(
    );
  } else {
    connection_capabilities = connection_capabilities_create(
    );
  }

  return connection_capabilities;
}


#ifdef connection_capabilities_MAIN

void test_connection_capabilities(int include_optional) {
    connection_capabilities_t* connection_capabilities_1 = instantiate_connection_capabilities(include_optional);

	cJSON* jsonconnection_capabilities_1 = connection_capabilities_convertToJSON(connection_capabilities_1);
	printf("connection_capabilities :\n%s\n", cJSON_Print(jsonconnection_capabilities_1));
	connection_capabilities_t* connection_capabilities_2 = connection_capabilities_parseFromJSON(jsonconnection_capabilities_1);
	cJSON* jsonconnection_capabilities_2 = connection_capabilities_convertToJSON(connection_capabilities_2);
	printf("repeating connection_capabilities:\n%s\n", cJSON_Print(jsonconnection_capabilities_2));
}

int main() {
  test_connection_capabilities(1);
  test_connection_capabilities(0);

  printf("Hello world \n");
  return 0;
}

#endif // connection_capabilities_MAIN
#endif // connection_capabilities_TEST
