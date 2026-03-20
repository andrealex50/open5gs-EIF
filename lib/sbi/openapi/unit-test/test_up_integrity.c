#ifndef up_integrity_TEST
#define up_integrity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define up_integrity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/up_integrity.h"
up_integrity_t* instantiate_up_integrity(int include_optional);



up_integrity_t* instantiate_up_integrity(int include_optional) {
  up_integrity_t* up_integrity = NULL;
  if (include_optional) {
    up_integrity = up_integrity_create(
    );
  } else {
    up_integrity = up_integrity_create(
    );
  }

  return up_integrity;
}


#ifdef up_integrity_MAIN

void test_up_integrity(int include_optional) {
    up_integrity_t* up_integrity_1 = instantiate_up_integrity(include_optional);

	cJSON* jsonup_integrity_1 = up_integrity_convertToJSON(up_integrity_1);
	printf("up_integrity :\n%s\n", cJSON_Print(jsonup_integrity_1));
	up_integrity_t* up_integrity_2 = up_integrity_parseFromJSON(jsonup_integrity_1);
	cJSON* jsonup_integrity_2 = up_integrity_convertToJSON(up_integrity_2);
	printf("repeating up_integrity:\n%s\n", cJSON_Print(jsonup_integrity_2));
}

int main() {
  test_up_integrity(1);
  test_up_integrity(0);

  printf("Hello world \n");
  return 0;
}

#endif // up_integrity_MAIN
#endif // up_integrity_TEST
