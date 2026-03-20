#ifndef ie_type_TEST
#define ie_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ie_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ie_type.h"
ie_type_t* instantiate_ie_type(int include_optional);



ie_type_t* instantiate_ie_type(int include_optional) {
  ie_type_t* ie_type = NULL;
  if (include_optional) {
    ie_type = ie_type_create(
    );
  } else {
    ie_type = ie_type_create(
    );
  }

  return ie_type;
}


#ifdef ie_type_MAIN

void test_ie_type(int include_optional) {
    ie_type_t* ie_type_1 = instantiate_ie_type(include_optional);

	cJSON* jsonie_type_1 = ie_type_convertToJSON(ie_type_1);
	printf("ie_type :\n%s\n", cJSON_Print(jsonie_type_1));
	ie_type_t* ie_type_2 = ie_type_parseFromJSON(jsonie_type_1);
	cJSON* jsonie_type_2 = ie_type_convertToJSON(ie_type_2);
	printf("repeating ie_type:\n%s\n", cJSON_Print(jsonie_type_2));
}

int main() {
  test_ie_type(1);
  test_ie_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // ie_type_MAIN
#endif // ie_type_TEST
