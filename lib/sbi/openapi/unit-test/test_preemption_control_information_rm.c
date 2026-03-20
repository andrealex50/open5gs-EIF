#ifndef preemption_control_information_rm_TEST
#define preemption_control_information_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define preemption_control_information_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/preemption_control_information_rm.h"
preemption_control_information_rm_t* instantiate_preemption_control_information_rm(int include_optional);



preemption_control_information_rm_t* instantiate_preemption_control_information_rm(int include_optional) {
  preemption_control_information_rm_t* preemption_control_information_rm = NULL;
  if (include_optional) {
    preemption_control_information_rm = preemption_control_information_rm_create(
    );
  } else {
    preemption_control_information_rm = preemption_control_information_rm_create(
    );
  }

  return preemption_control_information_rm;
}


#ifdef preemption_control_information_rm_MAIN

void test_preemption_control_information_rm(int include_optional) {
    preemption_control_information_rm_t* preemption_control_information_rm_1 = instantiate_preemption_control_information_rm(include_optional);

	cJSON* jsonpreemption_control_information_rm_1 = preemption_control_information_rm_convertToJSON(preemption_control_information_rm_1);
	printf("preemption_control_information_rm :\n%s\n", cJSON_Print(jsonpreemption_control_information_rm_1));
	preemption_control_information_rm_t* preemption_control_information_rm_2 = preemption_control_information_rm_parseFromJSON(jsonpreemption_control_information_rm_1);
	cJSON* jsonpreemption_control_information_rm_2 = preemption_control_information_rm_convertToJSON(preemption_control_information_rm_2);
	printf("repeating preemption_control_information_rm:\n%s\n", cJSON_Print(jsonpreemption_control_information_rm_2));
}

int main() {
  test_preemption_control_information_rm(1);
  test_preemption_control_information_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // preemption_control_information_rm_MAIN
#endif // preemption_control_information_rm_TEST
