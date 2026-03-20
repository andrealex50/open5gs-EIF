#ifndef http_method_TEST
#define http_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define http_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/http_method.h"
http_method_t* instantiate_http_method(int include_optional);



http_method_t* instantiate_http_method(int include_optional) {
  http_method_t* http_method = NULL;
  if (include_optional) {
    http_method = http_method_create(
    );
  } else {
    http_method = http_method_create(
    );
  }

  return http_method;
}


#ifdef http_method_MAIN

void test_http_method(int include_optional) {
    http_method_t* http_method_1 = instantiate_http_method(include_optional);

	cJSON* jsonhttp_method_1 = http_method_convertToJSON(http_method_1);
	printf("http_method :\n%s\n", cJSON_Print(jsonhttp_method_1));
	http_method_t* http_method_2 = http_method_parseFromJSON(jsonhttp_method_1);
	cJSON* jsonhttp_method_2 = http_method_convertToJSON(http_method_2);
	printf("repeating http_method:\n%s\n", cJSON_Print(jsonhttp_method_2));
}

int main() {
  test_http_method(1);
  test_http_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // http_method_MAIN
#endif // http_method_TEST
