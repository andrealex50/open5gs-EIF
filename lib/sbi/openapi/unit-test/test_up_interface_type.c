#ifndef up_interface_type_TEST
#define up_interface_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_interface_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_interface_type.h"
up_interface_type_t* instantiate_up_interface_type(int include_optional);



up_interface_type_t* instantiate_up_interface_type(int include_optional) {
  up_interface_type_t* up_interface_type = NULL;
  if (include_optional) {
    up_interface_type = up_interface_type_create(
    );
  } else {
    up_interface_type = up_interface_type_create(
    );
  }

  return up_interface_type;
}


#ifdef up_interface_type_MAIN

void test_up_interface_type(int include_optional) {
    up_interface_type_t* up_interface_type_1 = instantiate_up_interface_type(include_optional);

	cJSON* jsonup_interface_type_1 = up_interface_type_convertToJSON(up_interface_type_1);
	printf("up_interface_type :\n%s\n", cJSON_Print(jsonup_interface_type_1));
	up_interface_type_t* up_interface_type_2 = up_interface_type_parseFromJSON(jsonup_interface_type_1);
	cJSON* jsonup_interface_type_2 = up_interface_type_convertToJSON(up_interface_type_2);
	printf("repeating up_interface_type:\n%s\n", cJSON_Print(jsonup_interface_type_2));
}

int main() {
  test_up_interface_type(1);
  test_up_interface_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_interface_type_MAIN
#endif // up_interface_type_TEST
