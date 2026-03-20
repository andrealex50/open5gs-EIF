#ifndef up_cnx_state_TEST
#define up_cnx_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_cnx_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_cnx_state.h"
up_cnx_state_t* instantiate_up_cnx_state(int include_optional);



up_cnx_state_t* instantiate_up_cnx_state(int include_optional) {
  up_cnx_state_t* up_cnx_state = NULL;
  if (include_optional) {
    up_cnx_state = up_cnx_state_create(
    );
  } else {
    up_cnx_state = up_cnx_state_create(
    );
  }

  return up_cnx_state;
}


#ifdef up_cnx_state_MAIN

void test_up_cnx_state(int include_optional) {
    up_cnx_state_t* up_cnx_state_1 = instantiate_up_cnx_state(include_optional);

	cJSON* jsonup_cnx_state_1 = up_cnx_state_convertToJSON(up_cnx_state_1);
	printf("up_cnx_state :\n%s\n", cJSON_Print(jsonup_cnx_state_1));
	up_cnx_state_t* up_cnx_state_2 = up_cnx_state_parseFromJSON(jsonup_cnx_state_1);
	cJSON* jsonup_cnx_state_2 = up_cnx_state_convertToJSON(up_cnx_state_2);
	printf("repeating up_cnx_state:\n%s\n", cJSON_Print(jsonup_cnx_state_2));
}

int main() {
  test_up_cnx_state(1);
  test_up_cnx_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_cnx_state_MAIN
#endif // up_cnx_state_TEST
