#ifndef trace_data_response_TEST
#define trace_data_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trace_data_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trace_data_response.h"
trace_data_response_t* instantiate_trace_data_response(int include_optional);

#include "test_trace_data.c"


trace_data_response_t* instantiate_trace_data_response(int include_optional) {
  trace_data_response_t* trace_data_response = NULL;
  if (include_optional) {
    trace_data_response = trace_data_response_create(
       // false, not to have infinite recursion
      instantiate_trace_data(0),
      "a"
    );
  } else {
    trace_data_response = trace_data_response_create(
      NULL,
      "a"
    );
  }

  return trace_data_response;
}


#ifdef trace_data_response_MAIN

void test_trace_data_response(int include_optional) {
    trace_data_response_t* trace_data_response_1 = instantiate_trace_data_response(include_optional);

	cJSON* jsontrace_data_response_1 = trace_data_response_convertToJSON(trace_data_response_1);
	printf("trace_data_response :\n%s\n", cJSON_Print(jsontrace_data_response_1));
	trace_data_response_t* trace_data_response_2 = trace_data_response_parseFromJSON(jsontrace_data_response_1);
	cJSON* jsontrace_data_response_2 = trace_data_response_convertToJSON(trace_data_response_2);
	printf("repeating trace_data_response:\n%s\n", cJSON_Print(jsontrace_data_response_2));
}

int main() {
  test_trace_data_response(1);
  test_trace_data_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // trace_data_response_MAIN
#endif // trace_data_response_TEST
