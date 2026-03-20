#ifndef protection_result_TEST
#define protection_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define protection_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/protection_result.h"
protection_result_t* instantiate_protection_result(int include_optional);



protection_result_t* instantiate_protection_result(int include_optional) {
  protection_result_t* protection_result = NULL;
  if (include_optional) {
    protection_result = protection_result_create(
    );
  } else {
    protection_result = protection_result_create(
    );
  }

  return protection_result;
}


#ifdef protection_result_MAIN

void test_protection_result(int include_optional) {
    protection_result_t* protection_result_1 = instantiate_protection_result(include_optional);

	cJSON* jsonprotection_result_1 = protection_result_convertToJSON(protection_result_1);
	printf("protection_result :\n%s\n", cJSON_Print(jsonprotection_result_1));
	protection_result_t* protection_result_2 = protection_result_parseFromJSON(jsonprotection_result_1);
	cJSON* jsonprotection_result_2 = protection_result_convertToJSON(protection_result_2);
	printf("repeating protection_result:\n%s\n", cJSON_Print(jsonprotection_result_2));
}

int main() {
  test_protection_result(1);
  test_protection_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // protection_result_MAIN
#endif // protection_result_TEST
