#ifndef aerial_ue_indication_TEST
#define aerial_ue_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define aerial_ue_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/aerial_ue_indication.h"
aerial_ue_indication_t* instantiate_aerial_ue_indication(int include_optional);



aerial_ue_indication_t* instantiate_aerial_ue_indication(int include_optional) {
  aerial_ue_indication_t* aerial_ue_indication = NULL;
  if (include_optional) {
    aerial_ue_indication = aerial_ue_indication_create(
    );
  } else {
    aerial_ue_indication = aerial_ue_indication_create(
    );
  }

  return aerial_ue_indication;
}


#ifdef aerial_ue_indication_MAIN

void test_aerial_ue_indication(int include_optional) {
    aerial_ue_indication_t* aerial_ue_indication_1 = instantiate_aerial_ue_indication(include_optional);

	cJSON* jsonaerial_ue_indication_1 = aerial_ue_indication_convertToJSON(aerial_ue_indication_1);
	printf("aerial_ue_indication :\n%s\n", cJSON_Print(jsonaerial_ue_indication_1));
	aerial_ue_indication_t* aerial_ue_indication_2 = aerial_ue_indication_parseFromJSON(jsonaerial_ue_indication_1);
	cJSON* jsonaerial_ue_indication_2 = aerial_ue_indication_convertToJSON(aerial_ue_indication_2);
	printf("repeating aerial_ue_indication:\n%s\n", cJSON_Print(jsonaerial_ue_indication_2));
}

int main() {
  test_aerial_ue_indication(1);
  test_aerial_ue_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // aerial_ue_indication_MAIN
#endif // aerial_ue_indication_TEST
