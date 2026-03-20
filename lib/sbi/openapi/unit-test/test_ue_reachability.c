#ifndef ue_reachability_TEST
#define ue_reachability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_reachability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_reachability.h"
ue_reachability_t* instantiate_ue_reachability(int include_optional);



ue_reachability_t* instantiate_ue_reachability(int include_optional) {
  ue_reachability_t* ue_reachability = NULL;
  if (include_optional) {
    ue_reachability = ue_reachability_create(
    );
  } else {
    ue_reachability = ue_reachability_create(
    );
  }

  return ue_reachability;
}


#ifdef ue_reachability_MAIN

void test_ue_reachability(int include_optional) {
    ue_reachability_t* ue_reachability_1 = instantiate_ue_reachability(include_optional);

	cJSON* jsonue_reachability_1 = ue_reachability_convertToJSON(ue_reachability_1);
	printf("ue_reachability :\n%s\n", cJSON_Print(jsonue_reachability_1));
	ue_reachability_t* ue_reachability_2 = ue_reachability_parseFromJSON(jsonue_reachability_1);
	cJSON* jsonue_reachability_2 = ue_reachability_convertToJSON(ue_reachability_2);
	printf("repeating ue_reachability:\n%s\n", cJSON_Print(jsonue_reachability_2));
}

int main() {
  test_ue_reachability(1);
  test_ue_reachability(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_reachability_MAIN
#endif // ue_reachability_TEST
