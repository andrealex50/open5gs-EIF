#ifndef change_type_TEST
#define change_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define change_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/change_type.h"
change_type_t* instantiate_change_type(int include_optional);



change_type_t* instantiate_change_type(int include_optional) {
  change_type_t* change_type = NULL;
  if (include_optional) {
    change_type = change_type_create(
    );
  } else {
    change_type = change_type_create(
    );
  }

  return change_type;
}


#ifdef change_type_MAIN

void test_change_type(int include_optional) {
    change_type_t* change_type_1 = instantiate_change_type(include_optional);

	cJSON* jsonchange_type_1 = change_type_convertToJSON(change_type_1);
	printf("change_type :\n%s\n", cJSON_Print(jsonchange_type_1));
	change_type_t* change_type_2 = change_type_parseFromJSON(jsonchange_type_1);
	cJSON* jsonchange_type_2 = change_type_convertToJSON(change_type_2);
	printf("repeating change_type:\n%s\n", cJSON_Print(jsonchange_type_2));
}

int main() {
  test_change_type(1);
  test_change_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // change_type_MAIN
#endif // change_type_TEST
