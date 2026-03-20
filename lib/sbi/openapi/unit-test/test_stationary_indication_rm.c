#ifndef stationary_indication_rm_TEST
#define stationary_indication_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define stationary_indication_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/stationary_indication_rm.h"
stationary_indication_rm_t* instantiate_stationary_indication_rm(int include_optional);



stationary_indication_rm_t* instantiate_stationary_indication_rm(int include_optional) {
  stationary_indication_rm_t* stationary_indication_rm = NULL;
  if (include_optional) {
    stationary_indication_rm = stationary_indication_rm_create(
    );
  } else {
    stationary_indication_rm = stationary_indication_rm_create(
    );
  }

  return stationary_indication_rm;
}


#ifdef stationary_indication_rm_MAIN

void test_stationary_indication_rm(int include_optional) {
    stationary_indication_rm_t* stationary_indication_rm_1 = instantiate_stationary_indication_rm(include_optional);

	cJSON* jsonstationary_indication_rm_1 = stationary_indication_rm_convertToJSON(stationary_indication_rm_1);
	printf("stationary_indication_rm :\n%s\n", cJSON_Print(jsonstationary_indication_rm_1));
	stationary_indication_rm_t* stationary_indication_rm_2 = stationary_indication_rm_parseFromJSON(jsonstationary_indication_rm_1);
	cJSON* jsonstationary_indication_rm_2 = stationary_indication_rm_convertToJSON(stationary_indication_rm_2);
	printf("repeating stationary_indication_rm:\n%s\n", cJSON_Print(jsonstationary_indication_rm_2));
}

int main() {
  test_stationary_indication_rm(1);
  test_stationary_indication_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // stationary_indication_rm_MAIN
#endif // stationary_indication_rm_TEST
