#ifndef nsacf_capability_TEST
#define nsacf_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nsacf_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nsacf_capability.h"
nsacf_capability_t* instantiate_nsacf_capability(int include_optional);



nsacf_capability_t* instantiate_nsacf_capability(int include_optional) {
  nsacf_capability_t* nsacf_capability = NULL;
  if (include_optional) {
    nsacf_capability = nsacf_capability_create(
      1,
      1
    );
  } else {
    nsacf_capability = nsacf_capability_create(
      1,
      1
    );
  }

  return nsacf_capability;
}


#ifdef nsacf_capability_MAIN

void test_nsacf_capability(int include_optional) {
    nsacf_capability_t* nsacf_capability_1 = instantiate_nsacf_capability(include_optional);

	cJSON* jsonnsacf_capability_1 = nsacf_capability_convertToJSON(nsacf_capability_1);
	printf("nsacf_capability :\n%s\n", cJSON_Print(jsonnsacf_capability_1));
	nsacf_capability_t* nsacf_capability_2 = nsacf_capability_parseFromJSON(jsonnsacf_capability_1);
	cJSON* jsonnsacf_capability_2 = nsacf_capability_convertToJSON(nsacf_capability_2);
	printf("repeating nsacf_capability:\n%s\n", cJSON_Print(jsonnsacf_capability_2));
}

int main() {
  test_nsacf_capability(1);
  test_nsacf_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // nsacf_capability_MAIN
#endif // nsacf_capability_TEST
