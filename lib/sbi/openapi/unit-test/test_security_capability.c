#ifndef security_capability_TEST
#define security_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_capability.h"
security_capability_t* instantiate_security_capability(int include_optional);



security_capability_t* instantiate_security_capability(int include_optional) {
  security_capability_t* security_capability = NULL;
  if (include_optional) {
    security_capability = security_capability_create(
    );
  } else {
    security_capability = security_capability_create(
    );
  }

  return security_capability;
}


#ifdef security_capability_MAIN

void test_security_capability(int include_optional) {
    security_capability_t* security_capability_1 = instantiate_security_capability(include_optional);

	cJSON* jsonsecurity_capability_1 = security_capability_convertToJSON(security_capability_1);
	printf("security_capability :\n%s\n", cJSON_Print(jsonsecurity_capability_1));
	security_capability_t* security_capability_2 = security_capability_parseFromJSON(jsonsecurity_capability_1);
	cJSON* jsonsecurity_capability_2 = security_capability_convertToJSON(security_capability_2);
	printf("repeating security_capability:\n%s\n", cJSON_Print(jsonsecurity_capability_2));
}

int main() {
  test_security_capability(1);
  test_security_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_capability_MAIN
#endif // security_capability_TEST
