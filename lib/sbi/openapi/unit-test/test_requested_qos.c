#ifndef requested_qos_TEST
#define requested_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define requested_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/requested_qos.h"
requested_qos_t* instantiate_requested_qos(int include_optional);



requested_qos_t* instantiate_requested_qos(int include_optional) {
  requested_qos_t* requested_qos = NULL;
  if (include_optional) {
    requested_qos = requested_qos_create(
      0,
      "a",
      "a"
    );
  } else {
    requested_qos = requested_qos_create(
      0,
      "a",
      "a"
    );
  }

  return requested_qos;
}


#ifdef requested_qos_MAIN

void test_requested_qos(int include_optional) {
    requested_qos_t* requested_qos_1 = instantiate_requested_qos(include_optional);

	cJSON* jsonrequested_qos_1 = requested_qos_convertToJSON(requested_qos_1);
	printf("requested_qos :\n%s\n", cJSON_Print(jsonrequested_qos_1));
	requested_qos_t* requested_qos_2 = requested_qos_parseFromJSON(jsonrequested_qos_1);
	cJSON* jsonrequested_qos_2 = requested_qos_convertToJSON(requested_qos_2);
	printf("repeating requested_qos:\n%s\n", cJSON_Print(jsonrequested_qos_2));
}

int main() {
  test_requested_qos(1);
  test_requested_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // requested_qos_MAIN
#endif // requested_qos_TEST
