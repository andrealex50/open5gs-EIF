#ifndef pp_maximum_latency_TEST
#define pp_maximum_latency_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_maximum_latency_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_maximum_latency.h"
pp_maximum_latency_t* instantiate_pp_maximum_latency(int include_optional);



pp_maximum_latency_t* instantiate_pp_maximum_latency(int include_optional) {
  pp_maximum_latency_t* pp_maximum_latency = NULL;
  if (include_optional) {
    pp_maximum_latency = pp_maximum_latency_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    pp_maximum_latency = pp_maximum_latency_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return pp_maximum_latency;
}


#ifdef pp_maximum_latency_MAIN

void test_pp_maximum_latency(int include_optional) {
    pp_maximum_latency_t* pp_maximum_latency_1 = instantiate_pp_maximum_latency(include_optional);

	cJSON* jsonpp_maximum_latency_1 = pp_maximum_latency_convertToJSON(pp_maximum_latency_1);
	printf("pp_maximum_latency :\n%s\n", cJSON_Print(jsonpp_maximum_latency_1));
	pp_maximum_latency_t* pp_maximum_latency_2 = pp_maximum_latency_parseFromJSON(jsonpp_maximum_latency_1);
	cJSON* jsonpp_maximum_latency_2 = pp_maximum_latency_convertToJSON(pp_maximum_latency_2);
	printf("repeating pp_maximum_latency:\n%s\n", cJSON_Print(jsonpp_maximum_latency_2));
}

int main() {
  test_pp_maximum_latency(1);
  test_pp_maximum_latency(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_maximum_latency_MAIN
#endif // pp_maximum_latency_TEST
