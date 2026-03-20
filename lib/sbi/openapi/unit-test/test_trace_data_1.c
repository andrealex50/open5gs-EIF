#ifndef trace_data_1_TEST
#define trace_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define trace_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/trace_data_1.h"
trace_data_1_t* instantiate_trace_data_1(int include_optional);



trace_data_1_t* instantiate_trace_data_1(int include_optional) {
  trace_data_1_t* trace_data_1 = NULL;
  if (include_optional) {
    trace_data_1 = trace_data_1_create(
      "a",
      nudr_datarepository_api_openapi_file_trace_data_1__MINIMUM,
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  } else {
    trace_data_1 = trace_data_1_create(
      "a",
      nudr_datarepository_api_openapi_file_trace_data_1__MINIMUM,
      "a",
      "a",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  }

  return trace_data_1;
}


#ifdef trace_data_1_MAIN

void test_trace_data_1(int include_optional) {
    trace_data_1_t* trace_data_1_1 = instantiate_trace_data_1(include_optional);

	cJSON* jsontrace_data_1_1 = trace_data_1_convertToJSON(trace_data_1_1);
	printf("trace_data_1 :\n%s\n", cJSON_Print(jsontrace_data_1_1));
	trace_data_1_t* trace_data_1_2 = trace_data_1_parseFromJSON(jsontrace_data_1_1);
	cJSON* jsontrace_data_1_2 = trace_data_1_convertToJSON(trace_data_1_2);
	printf("repeating trace_data_1:\n%s\n", cJSON_Print(jsontrace_data_1_2));
}

int main() {
  test_trace_data_1(1);
  test_trace_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // trace_data_1_MAIN
#endif // trace_data_1_TEST
