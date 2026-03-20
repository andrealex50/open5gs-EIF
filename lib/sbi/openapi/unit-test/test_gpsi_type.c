#ifndef gpsi_type_TEST
#define gpsi_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gpsi_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gpsi_type.h"
gpsi_type_t* instantiate_gpsi_type(int include_optional);



gpsi_type_t* instantiate_gpsi_type(int include_optional) {
  gpsi_type_t* gpsi_type = NULL;
  if (include_optional) {
    gpsi_type = gpsi_type_create(
    );
  } else {
    gpsi_type = gpsi_type_create(
    );
  }

  return gpsi_type;
}


#ifdef gpsi_type_MAIN

void test_gpsi_type(int include_optional) {
    gpsi_type_t* gpsi_type_1 = instantiate_gpsi_type(include_optional);

	cJSON* jsongpsi_type_1 = gpsi_type_convertToJSON(gpsi_type_1);
	printf("gpsi_type :\n%s\n", cJSON_Print(jsongpsi_type_1));
	gpsi_type_t* gpsi_type_2 = gpsi_type_parseFromJSON(jsongpsi_type_1);
	cJSON* jsongpsi_type_2 = gpsi_type_convertToJSON(gpsi_type_2);
	printf("repeating gpsi_type:\n%s\n", cJSON_Print(jsongpsi_type_2));
}

int main() {
  test_gpsi_type(1);
  test_gpsi_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // gpsi_type_MAIN
#endif // gpsi_type_TEST
