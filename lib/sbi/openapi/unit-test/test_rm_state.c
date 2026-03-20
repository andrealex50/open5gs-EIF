#ifndef rm_state_TEST
#define rm_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rm_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rm_state.h"
rm_state_t* instantiate_rm_state(int include_optional);



rm_state_t* instantiate_rm_state(int include_optional) {
  rm_state_t* rm_state = NULL;
  if (include_optional) {
    rm_state = rm_state_create(
    );
  } else {
    rm_state = rm_state_create(
    );
  }

  return rm_state;
}


#ifdef rm_state_MAIN

void test_rm_state(int include_optional) {
    rm_state_t* rm_state_1 = instantiate_rm_state(include_optional);

	cJSON* jsonrm_state_1 = rm_state_convertToJSON(rm_state_1);
	printf("rm_state :\n%s\n", cJSON_Print(jsonrm_state_1));
	rm_state_t* rm_state_2 = rm_state_parseFromJSON(jsonrm_state_1);
	cJSON* jsonrm_state_2 = rm_state_convertToJSON(rm_state_2);
	printf("repeating rm_state:\n%s\n", cJSON_Print(jsonrm_state_2));
}

int main() {
  test_rm_state(1);
  test_rm_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // rm_state_MAIN
#endif // rm_state_TEST
