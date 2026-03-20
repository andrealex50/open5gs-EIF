#ifndef rsn_TEST
#define rsn_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rsn_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rsn.h"
rsn_t* instantiate_rsn(int include_optional);



rsn_t* instantiate_rsn(int include_optional) {
  rsn_t* rsn = NULL;
  if (include_optional) {
    rsn = rsn_create(
    );
  } else {
    rsn = rsn_create(
    );
  }

  return rsn;
}


#ifdef rsn_MAIN

void test_rsn(int include_optional) {
    rsn_t* rsn_1 = instantiate_rsn(include_optional);

	cJSON* jsonrsn_1 = rsn_convertToJSON(rsn_1);
	printf("rsn :\n%s\n", cJSON_Print(jsonrsn_1));
	rsn_t* rsn_2 = rsn_parseFromJSON(jsonrsn_1);
	cJSON* jsonrsn_2 = rsn_convertToJSON(rsn_2);
	printf("repeating rsn:\n%s\n", cJSON_Print(jsonrsn_2));
}

int main() {
  test_rsn(1);
  test_rsn(0);

  printf("Hello world \n");
  return 0;
}

#endif // rsn_MAIN
#endif // rsn_TEST
