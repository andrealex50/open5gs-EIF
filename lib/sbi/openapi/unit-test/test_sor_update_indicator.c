#ifndef sor_update_indicator_TEST
#define sor_update_indicator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sor_update_indicator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sor_update_indicator.h"
sor_update_indicator_t* instantiate_sor_update_indicator(int include_optional);



sor_update_indicator_t* instantiate_sor_update_indicator(int include_optional) {
  sor_update_indicator_t* sor_update_indicator = NULL;
  if (include_optional) {
    sor_update_indicator = sor_update_indicator_create(
    );
  } else {
    sor_update_indicator = sor_update_indicator_create(
    );
  }

  return sor_update_indicator;
}


#ifdef sor_update_indicator_MAIN

void test_sor_update_indicator(int include_optional) {
    sor_update_indicator_t* sor_update_indicator_1 = instantiate_sor_update_indicator(include_optional);

	cJSON* jsonsor_update_indicator_1 = sor_update_indicator_convertToJSON(sor_update_indicator_1);
	printf("sor_update_indicator :\n%s\n", cJSON_Print(jsonsor_update_indicator_1));
	sor_update_indicator_t* sor_update_indicator_2 = sor_update_indicator_parseFromJSON(jsonsor_update_indicator_1);
	cJSON* jsonsor_update_indicator_2 = sor_update_indicator_convertToJSON(sor_update_indicator_2);
	printf("repeating sor_update_indicator:\n%s\n", cJSON_Print(jsonsor_update_indicator_2));
}

int main() {
  test_sor_update_indicator(1);
  test_sor_update_indicator(0);

  printf("Hello world \n");
  return 0;
}

#endif // sor_update_indicator_MAIN
#endif // sor_update_indicator_TEST
