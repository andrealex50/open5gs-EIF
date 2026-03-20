#ifndef max_integrity_protected_data_rate_TEST
#define max_integrity_protected_data_rate_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define max_integrity_protected_data_rate_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/max_integrity_protected_data_rate.h"
max_integrity_protected_data_rate_t* instantiate_max_integrity_protected_data_rate(int include_optional);



max_integrity_protected_data_rate_t* instantiate_max_integrity_protected_data_rate(int include_optional) {
  max_integrity_protected_data_rate_t* max_integrity_protected_data_rate = NULL;
  if (include_optional) {
    max_integrity_protected_data_rate = max_integrity_protected_data_rate_create(
    );
  } else {
    max_integrity_protected_data_rate = max_integrity_protected_data_rate_create(
    );
  }

  return max_integrity_protected_data_rate;
}


#ifdef max_integrity_protected_data_rate_MAIN

void test_max_integrity_protected_data_rate(int include_optional) {
    max_integrity_protected_data_rate_t* max_integrity_protected_data_rate_1 = instantiate_max_integrity_protected_data_rate(include_optional);

	cJSON* jsonmax_integrity_protected_data_rate_1 = max_integrity_protected_data_rate_convertToJSON(max_integrity_protected_data_rate_1);
	printf("max_integrity_protected_data_rate :\n%s\n", cJSON_Print(jsonmax_integrity_protected_data_rate_1));
	max_integrity_protected_data_rate_t* max_integrity_protected_data_rate_2 = max_integrity_protected_data_rate_parseFromJSON(jsonmax_integrity_protected_data_rate_1);
	cJSON* jsonmax_integrity_protected_data_rate_2 = max_integrity_protected_data_rate_convertToJSON(max_integrity_protected_data_rate_2);
	printf("repeating max_integrity_protected_data_rate:\n%s\n", cJSON_Print(jsonmax_integrity_protected_data_rate_2));
}

int main() {
  test_max_integrity_protected_data_rate(1);
  test_max_integrity_protected_data_rate(0);

  printf("Hello world \n");
  return 0;
}

#endif // max_integrity_protected_data_rate_MAIN
#endif // max_integrity_protected_data_rate_TEST
