#ifndef pp_active_time_TEST
#define pp_active_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_active_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_active_time.h"
pp_active_time_t* instantiate_pp_active_time(int include_optional);



pp_active_time_t* instantiate_pp_active_time(int include_optional) {
  pp_active_time_t* pp_active_time = NULL;
  if (include_optional) {
    pp_active_time = pp_active_time_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    pp_active_time = pp_active_time_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return pp_active_time;
}


#ifdef pp_active_time_MAIN

void test_pp_active_time(int include_optional) {
    pp_active_time_t* pp_active_time_1 = instantiate_pp_active_time(include_optional);

	cJSON* jsonpp_active_time_1 = pp_active_time_convertToJSON(pp_active_time_1);
	printf("pp_active_time :\n%s\n", cJSON_Print(jsonpp_active_time_1));
	pp_active_time_t* pp_active_time_2 = pp_active_time_parseFromJSON(jsonpp_active_time_1);
	cJSON* jsonpp_active_time_2 = pp_active_time_convertToJSON(pp_active_time_2);
	printf("repeating pp_active_time:\n%s\n", cJSON_Print(jsonpp_active_time_2));
}

int main() {
  test_pp_active_time(1);
  test_pp_active_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_active_time_MAIN
#endif // pp_active_time_TEST
