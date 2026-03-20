#ifndef sponsoring_status_TEST
#define sponsoring_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sponsoring_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sponsoring_status.h"
sponsoring_status_t* instantiate_sponsoring_status(int include_optional);



sponsoring_status_t* instantiate_sponsoring_status(int include_optional) {
  sponsoring_status_t* sponsoring_status = NULL;
  if (include_optional) {
    sponsoring_status = sponsoring_status_create(
    );
  } else {
    sponsoring_status = sponsoring_status_create(
    );
  }

  return sponsoring_status;
}


#ifdef sponsoring_status_MAIN

void test_sponsoring_status(int include_optional) {
    sponsoring_status_t* sponsoring_status_1 = instantiate_sponsoring_status(include_optional);

	cJSON* jsonsponsoring_status_1 = sponsoring_status_convertToJSON(sponsoring_status_1);
	printf("sponsoring_status :\n%s\n", cJSON_Print(jsonsponsoring_status_1));
	sponsoring_status_t* sponsoring_status_2 = sponsoring_status_parseFromJSON(jsonsponsoring_status_1);
	cJSON* jsonsponsoring_status_2 = sponsoring_status_convertToJSON(sponsoring_status_2);
	printf("repeating sponsoring_status:\n%s\n", cJSON_Print(jsonsponsoring_status_2));
}

int main() {
  test_sponsoring_status(1);
  test_sponsoring_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // sponsoring_status_MAIN
#endif // sponsoring_status_TEST
