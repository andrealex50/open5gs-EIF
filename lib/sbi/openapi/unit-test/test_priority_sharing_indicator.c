#ifndef priority_sharing_indicator_TEST
#define priority_sharing_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define priority_sharing_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/priority_sharing_indicator.h"
priority_sharing_indicator_t* instantiate_priority_sharing_indicator(int include_optional);



priority_sharing_indicator_t* instantiate_priority_sharing_indicator(int include_optional) {
  priority_sharing_indicator_t* priority_sharing_indicator = NULL;
  if (include_optional) {
    priority_sharing_indicator = priority_sharing_indicator_create(
    );
  } else {
    priority_sharing_indicator = priority_sharing_indicator_create(
    );
  }

  return priority_sharing_indicator;
}


#ifdef priority_sharing_indicator_MAIN

void test_priority_sharing_indicator(int include_optional) {
    priority_sharing_indicator_t* priority_sharing_indicator_1 = instantiate_priority_sharing_indicator(include_optional);

	cJSON* jsonpriority_sharing_indicator_1 = priority_sharing_indicator_convertToJSON(priority_sharing_indicator_1);
	printf("priority_sharing_indicator :\n%s\n", cJSON_Print(jsonpriority_sharing_indicator_1));
	priority_sharing_indicator_t* priority_sharing_indicator_2 = priority_sharing_indicator_parseFromJSON(jsonpriority_sharing_indicator_1);
	cJSON* jsonpriority_sharing_indicator_2 = priority_sharing_indicator_convertToJSON(priority_sharing_indicator_2);
	printf("repeating priority_sharing_indicator:\n%s\n", cJSON_Print(jsonpriority_sharing_indicator_2));
}

int main() {
  test_priority_sharing_indicator(1);
  test_priority_sharing_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // priority_sharing_indicator_MAIN
#endif // priority_sharing_indicator_TEST
