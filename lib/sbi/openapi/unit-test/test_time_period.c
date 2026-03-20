#ifndef time_period_TEST
#define time_period_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define time_period_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/time_period.h"
time_period_t* instantiate_time_period(int include_optional);

#include "test_periodicity.c"


time_period_t* instantiate_time_period(int include_optional) {
  time_period_t* time_period = NULL;
  if (include_optional) {
    time_period = time_period_create(
      null,
      0
    );
  } else {
    time_period = time_period_create(
      null,
      0
    );
  }

  return time_period;
}


#ifdef time_period_MAIN

void test_time_period(int include_optional) {
    time_period_t* time_period_1 = instantiate_time_period(include_optional);

	cJSON* jsontime_period_1 = time_period_convertToJSON(time_period_1);
	printf("time_period :\n%s\n", cJSON_Print(jsontime_period_1));
	time_period_t* time_period_2 = time_period_parseFromJSON(jsontime_period_1);
	cJSON* jsontime_period_2 = time_period_convertToJSON(time_period_2);
	printf("repeating time_period:\n%s\n", cJSON_Print(jsontime_period_2));
}

int main() {
  test_time_period(1);
  test_time_period(0);

  printf("Hello world \n");
  return 0;
}

#endif // time_period_MAIN
#endif // time_period_TEST
