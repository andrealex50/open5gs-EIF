#ifndef pp_maximum_response_time_TEST
#define pp_maximum_response_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_maximum_response_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_maximum_response_time.h"
pp_maximum_response_time_t* instantiate_pp_maximum_response_time(int include_optional);



pp_maximum_response_time_t* instantiate_pp_maximum_response_time(int include_optional) {
  pp_maximum_response_time_t* pp_maximum_response_time = NULL;
  if (include_optional) {
    pp_maximum_response_time = pp_maximum_response_time_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    pp_maximum_response_time = pp_maximum_response_time_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return pp_maximum_response_time;
}


#ifdef pp_maximum_response_time_MAIN

void test_pp_maximum_response_time(int include_optional) {
    pp_maximum_response_time_t* pp_maximum_response_time_1 = instantiate_pp_maximum_response_time(include_optional);

	cJSON* jsonpp_maximum_response_time_1 = pp_maximum_response_time_convertToJSON(pp_maximum_response_time_1);
	printf("pp_maximum_response_time :\n%s\n", cJSON_Print(jsonpp_maximum_response_time_1));
	pp_maximum_response_time_t* pp_maximum_response_time_2 = pp_maximum_response_time_parseFromJSON(jsonpp_maximum_response_time_1);
	cJSON* jsonpp_maximum_response_time_2 = pp_maximum_response_time_convertToJSON(pp_maximum_response_time_2);
	printf("repeating pp_maximum_response_time:\n%s\n", cJSON_Print(jsonpp_maximum_response_time_2));
}

int main() {
  test_pp_maximum_response_time(1);
  test_pp_maximum_response_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_maximum_response_time_MAIN
#endif // pp_maximum_response_time_TEST
