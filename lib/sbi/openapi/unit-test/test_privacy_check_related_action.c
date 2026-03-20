#ifndef privacy_check_related_action_TEST
#define privacy_check_related_action_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define privacy_check_related_action_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/privacy_check_related_action.h"
privacy_check_related_action_t* instantiate_privacy_check_related_action(int include_optional);



privacy_check_related_action_t* instantiate_privacy_check_related_action(int include_optional) {
  privacy_check_related_action_t* privacy_check_related_action = NULL;
  if (include_optional) {
    privacy_check_related_action = privacy_check_related_action_create(
    );
  } else {
    privacy_check_related_action = privacy_check_related_action_create(
    );
  }

  return privacy_check_related_action;
}


#ifdef privacy_check_related_action_MAIN

void test_privacy_check_related_action(int include_optional) {
    privacy_check_related_action_t* privacy_check_related_action_1 = instantiate_privacy_check_related_action(include_optional);

	cJSON* jsonprivacy_check_related_action_1 = privacy_check_related_action_convertToJSON(privacy_check_related_action_1);
	printf("privacy_check_related_action :\n%s\n", cJSON_Print(jsonprivacy_check_related_action_1));
	privacy_check_related_action_t* privacy_check_related_action_2 = privacy_check_related_action_parseFromJSON(jsonprivacy_check_related_action_1);
	cJSON* jsonprivacy_check_related_action_2 = privacy_check_related_action_convertToJSON(privacy_check_related_action_2);
	printf("repeating privacy_check_related_action:\n%s\n", cJSON_Print(jsonprivacy_check_related_action_2));
}

int main() {
  test_privacy_check_related_action(1);
  test_privacy_check_related_action(0);

  printf("Hello world \n");
  return 0;
}

#endif // privacy_check_related_action_MAIN
#endif // privacy_check_related_action_TEST
