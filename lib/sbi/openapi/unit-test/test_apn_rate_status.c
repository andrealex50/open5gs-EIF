#ifndef apn_rate_status_TEST
#define apn_rate_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define apn_rate_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/apn_rate_status.h"
apn_rate_status_t* instantiate_apn_rate_status(int include_optional);



apn_rate_status_t* instantiate_apn_rate_status(int include_optional) {
  apn_rate_status_t* apn_rate_status = NULL;
  if (include_optional) {
    apn_rate_status = apn_rate_status_create(
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      0
    );
  } else {
    apn_rate_status = apn_rate_status_create(
      0,
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      0
    );
  }

  return apn_rate_status;
}


#ifdef apn_rate_status_MAIN

void test_apn_rate_status(int include_optional) {
    apn_rate_status_t* apn_rate_status_1 = instantiate_apn_rate_status(include_optional);

	cJSON* jsonapn_rate_status_1 = apn_rate_status_convertToJSON(apn_rate_status_1);
	printf("apn_rate_status :\n%s\n", cJSON_Print(jsonapn_rate_status_1));
	apn_rate_status_t* apn_rate_status_2 = apn_rate_status_parseFromJSON(jsonapn_rate_status_1);
	cJSON* jsonapn_rate_status_2 = apn_rate_status_convertToJSON(apn_rate_status_2);
	printf("repeating apn_rate_status:\n%s\n", cJSON_Print(jsonapn_rate_status_2));
}

int main() {
  test_apn_rate_status(1);
  test_apn_rate_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // apn_rate_status_MAIN
#endif // apn_rate_status_TEST
