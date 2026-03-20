#ifndef alternative_qos_profile_TEST
#define alternative_qos_profile_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define alternative_qos_profile_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/alternative_qos_profile.h"
alternative_qos_profile_t* instantiate_alternative_qos_profile(int include_optional);



alternative_qos_profile_t* instantiate_alternative_qos_profile(int include_optional) {
  alternative_qos_profile_t* alternative_qos_profile = NULL;
  if (include_optional) {
    alternative_qos_profile = alternative_qos_profile_create(
      1,
      "a",
      "a",
      1,
      "a"
    );
  } else {
    alternative_qos_profile = alternative_qos_profile_create(
      1,
      "a",
      "a",
      1,
      "a"
    );
  }

  return alternative_qos_profile;
}


#ifdef alternative_qos_profile_MAIN

void test_alternative_qos_profile(int include_optional) {
    alternative_qos_profile_t* alternative_qos_profile_1 = instantiate_alternative_qos_profile(include_optional);

	cJSON* jsonalternative_qos_profile_1 = alternative_qos_profile_convertToJSON(alternative_qos_profile_1);
	printf("alternative_qos_profile :\n%s\n", cJSON_Print(jsonalternative_qos_profile_1));
	alternative_qos_profile_t* alternative_qos_profile_2 = alternative_qos_profile_parseFromJSON(jsonalternative_qos_profile_1);
	cJSON* jsonalternative_qos_profile_2 = alternative_qos_profile_convertToJSON(alternative_qos_profile_2);
	printf("repeating alternative_qos_profile:\n%s\n", cJSON_Print(jsonalternative_qos_profile_2));
}

int main() {
  test_alternative_qos_profile(1);
  test_alternative_qos_profile(0);

  printf("Hello world \n");
  return 0;
}

#endif // alternative_qos_profile_MAIN
#endif // alternative_qos_profile_TEST
