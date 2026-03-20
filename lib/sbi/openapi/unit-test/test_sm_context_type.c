#ifndef sm_context_type_TEST
#define sm_context_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sm_context_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sm_context_type.h"
sm_context_type_t* instantiate_sm_context_type(int include_optional);



sm_context_type_t* instantiate_sm_context_type(int include_optional) {
  sm_context_type_t* sm_context_type = NULL;
  if (include_optional) {
    sm_context_type = sm_context_type_create(
    );
  } else {
    sm_context_type = sm_context_type_create(
    );
  }

  return sm_context_type;
}


#ifdef sm_context_type_MAIN

void test_sm_context_type(int include_optional) {
    sm_context_type_t* sm_context_type_1 = instantiate_sm_context_type(include_optional);

	cJSON* jsonsm_context_type_1 = sm_context_type_convertToJSON(sm_context_type_1);
	printf("sm_context_type :\n%s\n", cJSON_Print(jsonsm_context_type_1));
	sm_context_type_t* sm_context_type_2 = sm_context_type_parseFromJSON(jsonsm_context_type_1);
	cJSON* jsonsm_context_type_2 = sm_context_type_convertToJSON(sm_context_type_2);
	printf("repeating sm_context_type:\n%s\n", cJSON_Print(jsonsm_context_type_2));
}

int main() {
  test_sm_context_type(1);
  test_sm_context_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // sm_context_type_MAIN
#endif // sm_context_type_TEST
