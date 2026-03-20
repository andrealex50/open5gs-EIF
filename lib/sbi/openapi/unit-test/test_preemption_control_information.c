#ifndef preemption_control_information_TEST
#define preemption_control_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define preemption_control_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/preemption_control_information.h"
preemption_control_information_t* instantiate_preemption_control_information(int include_optional);



preemption_control_information_t* instantiate_preemption_control_information(int include_optional) {
  preemption_control_information_t* preemption_control_information = NULL;
  if (include_optional) {
    preemption_control_information = preemption_control_information_create(
    );
  } else {
    preemption_control_information = preemption_control_information_create(
    );
  }

  return preemption_control_information;
}


#ifdef preemption_control_information_MAIN

void test_preemption_control_information(int include_optional) {
    preemption_control_information_t* preemption_control_information_1 = instantiate_preemption_control_information(include_optional);

	cJSON* jsonpreemption_control_information_1 = preemption_control_information_convertToJSON(preemption_control_information_1);
	printf("preemption_control_information :\n%s\n", cJSON_Print(jsonpreemption_control_information_1));
	preemption_control_information_t* preemption_control_information_2 = preemption_control_information_parseFromJSON(jsonpreemption_control_information_1);
	cJSON* jsonpreemption_control_information_2 = preemption_control_information_convertToJSON(preemption_control_information_2);
	printf("repeating preemption_control_information:\n%s\n", cJSON_Print(jsonpreemption_control_information_2));
}

int main() {
  test_preemption_control_information(1);
  test_preemption_control_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // preemption_control_information_MAIN
#endif // preemption_control_information_TEST
