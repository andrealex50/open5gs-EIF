#ifndef rm_state_any_of_TEST
#define rm_state_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rm_state_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rm_state_any_of.h"
rm_state_any_of_t* instantiate_rm_state_any_of(int include_optional);



rm_state_any_of_t* instantiate_rm_state_any_of(int include_optional) {
  rm_state_any_of_t* rm_state_any_of = NULL;
  if (include_optional) {
    rm_state_any_of = rm_state_any_of_create(
    );
  } else {
    rm_state_any_of = rm_state_any_of_create(
    );
  }

  return rm_state_any_of;
}


#ifdef rm_state_any_of_MAIN

void test_rm_state_any_of(int include_optional) {
    rm_state_any_of_t* rm_state_any_of_1 = instantiate_rm_state_any_of(include_optional);

	cJSON* jsonrm_state_any_of_1 = rm_state_any_of_convertToJSON(rm_state_any_of_1);
	printf("rm_state_any_of :\n%s\n", cJSON_Print(jsonrm_state_any_of_1));
	rm_state_any_of_t* rm_state_any_of_2 = rm_state_any_of_parseFromJSON(jsonrm_state_any_of_1);
	cJSON* jsonrm_state_any_of_2 = rm_state_any_of_convertToJSON(rm_state_any_of_2);
	printf("repeating rm_state_any_of:\n%s\n", cJSON_Print(jsonrm_state_any_of_2));
}

int main() {
  test_rm_state_any_of(1);
  test_rm_state_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // rm_state_any_of_MAIN
#endif // rm_state_any_of_TEST
