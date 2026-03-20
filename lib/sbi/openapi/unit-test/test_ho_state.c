#ifndef ho_state_TEST
#define ho_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ho_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ho_state.h"
ho_state_t* instantiate_ho_state(int include_optional);



ho_state_t* instantiate_ho_state(int include_optional) {
  ho_state_t* ho_state = NULL;
  if (include_optional) {
    ho_state = ho_state_create(
    );
  } else {
    ho_state = ho_state_create(
    );
  }

  return ho_state;
}


#ifdef ho_state_MAIN

void test_ho_state(int include_optional) {
    ho_state_t* ho_state_1 = instantiate_ho_state(include_optional);

	cJSON* jsonho_state_1 = ho_state_convertToJSON(ho_state_1);
	printf("ho_state :\n%s\n", cJSON_Print(jsonho_state_1));
	ho_state_t* ho_state_2 = ho_state_parseFromJSON(jsonho_state_1);
	cJSON* jsonho_state_2 = ho_state_convertToJSON(ho_state_2);
	printf("repeating ho_state:\n%s\n", cJSON_Print(jsonho_state_2));
}

int main() {
  test_ho_state(1);
  test_ho_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // ho_state_MAIN
#endif // ho_state_TEST
