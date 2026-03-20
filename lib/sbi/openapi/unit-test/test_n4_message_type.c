#ifndef n4_message_type_TEST
#define n4_message_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n4_message_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n4_message_type.h"
n4_message_type_t* instantiate_n4_message_type(int include_optional);



n4_message_type_t* instantiate_n4_message_type(int include_optional) {
  n4_message_type_t* n4_message_type = NULL;
  if (include_optional) {
    n4_message_type = n4_message_type_create(
    );
  } else {
    n4_message_type = n4_message_type_create(
    );
  }

  return n4_message_type;
}


#ifdef n4_message_type_MAIN

void test_n4_message_type(int include_optional) {
    n4_message_type_t* n4_message_type_1 = instantiate_n4_message_type(include_optional);

	cJSON* jsonn4_message_type_1 = n4_message_type_convertToJSON(n4_message_type_1);
	printf("n4_message_type :\n%s\n", cJSON_Print(jsonn4_message_type_1));
	n4_message_type_t* n4_message_type_2 = n4_message_type_parseFromJSON(jsonn4_message_type_1);
	cJSON* jsonn4_message_type_2 = n4_message_type_convertToJSON(n4_message_type_2);
	printf("repeating n4_message_type:\n%s\n", cJSON_Print(jsonn4_message_type_2));
}

int main() {
  test_n4_message_type(1);
  test_n4_message_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // n4_message_type_MAIN
#endif // n4_message_type_TEST
