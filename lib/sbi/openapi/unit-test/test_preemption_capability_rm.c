#ifndef preemption_capability_rm_TEST
#define preemption_capability_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define preemption_capability_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/preemption_capability_rm.h"
preemption_capability_rm_t* instantiate_preemption_capability_rm(int include_optional);



preemption_capability_rm_t* instantiate_preemption_capability_rm(int include_optional) {
  preemption_capability_rm_t* preemption_capability_rm = NULL;
  if (include_optional) {
    preemption_capability_rm = preemption_capability_rm_create(
    );
  } else {
    preemption_capability_rm = preemption_capability_rm_create(
    );
  }

  return preemption_capability_rm;
}


#ifdef preemption_capability_rm_MAIN

void test_preemption_capability_rm(int include_optional) {
    preemption_capability_rm_t* preemption_capability_rm_1 = instantiate_preemption_capability_rm(include_optional);

	cJSON* jsonpreemption_capability_rm_1 = preemption_capability_rm_convertToJSON(preemption_capability_rm_1);
	printf("preemption_capability_rm :\n%s\n", cJSON_Print(jsonpreemption_capability_rm_1));
	preemption_capability_rm_t* preemption_capability_rm_2 = preemption_capability_rm_parseFromJSON(jsonpreemption_capability_rm_1);
	cJSON* jsonpreemption_capability_rm_2 = preemption_capability_rm_convertToJSON(preemption_capability_rm_2);
	printf("repeating preemption_capability_rm:\n%s\n", cJSON_Print(jsonpreemption_capability_rm_2));
}

int main() {
  test_preemption_capability_rm(1);
  test_preemption_capability_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // preemption_capability_rm_MAIN
#endif // preemption_capability_rm_TEST
