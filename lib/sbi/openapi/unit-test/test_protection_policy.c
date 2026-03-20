#ifndef protection_policy_TEST
#define protection_policy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define protection_policy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/protection_policy.h"
protection_policy_t* instantiate_protection_policy(int include_optional);



protection_policy_t* instantiate_protection_policy(int include_optional) {
  protection_policy_t* protection_policy = NULL;
  if (include_optional) {
    protection_policy = protection_policy_create(
      list_createList(),
      list_createList()
    );
  } else {
    protection_policy = protection_policy_create(
      list_createList(),
      list_createList()
    );
  }

  return protection_policy;
}


#ifdef protection_policy_MAIN

void test_protection_policy(int include_optional) {
    protection_policy_t* protection_policy_1 = instantiate_protection_policy(include_optional);

	cJSON* jsonprotection_policy_1 = protection_policy_convertToJSON(protection_policy_1);
	printf("protection_policy :\n%s\n", cJSON_Print(jsonprotection_policy_1));
	protection_policy_t* protection_policy_2 = protection_policy_parseFromJSON(jsonprotection_policy_1);
	cJSON* jsonprotection_policy_2 = protection_policy_convertToJSON(protection_policy_2);
	printf("repeating protection_policy:\n%s\n", cJSON_Print(jsonprotection_policy_2));
}

int main() {
  test_protection_policy(1);
  test_protection_policy(0);

  printf("Hello world \n");
  return 0;
}

#endif // protection_policy_MAIN
#endif // protection_policy_TEST
