#ifndef metering_method_TEST
#define metering_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define metering_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/metering_method.h"
metering_method_t* instantiate_metering_method(int include_optional);



metering_method_t* instantiate_metering_method(int include_optional) {
  metering_method_t* metering_method = NULL;
  if (include_optional) {
    metering_method = metering_method_create(
    );
  } else {
    metering_method = metering_method_create(
    );
  }

  return metering_method;
}


#ifdef metering_method_MAIN

void test_metering_method(int include_optional) {
    metering_method_t* metering_method_1 = instantiate_metering_method(include_optional);

	cJSON* jsonmetering_method_1 = metering_method_convertToJSON(metering_method_1);
	printf("metering_method :\n%s\n", cJSON_Print(jsonmetering_method_1));
	metering_method_t* metering_method_2 = metering_method_parseFromJSON(jsonmetering_method_1);
	cJSON* jsonmetering_method_2 = metering_method_convertToJSON(metering_method_2);
	printf("repeating metering_method:\n%s\n", cJSON_Print(jsonmetering_method_2));
}

int main() {
  test_metering_method(1);
  test_metering_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // metering_method_MAIN
#endif // metering_method_TEST
