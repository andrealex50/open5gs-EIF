#ifndef _application_data_influence_data_subs_to_notify_post_request_inner_TEST
#define _application_data_influence_data_subs_to_notify_post_request_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define _application_data_influence_data_subs_to_notify_post_request_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/_application_data_influence_data_subs_to_notify_post_request_inner.h"
_application_data_influence_data_subs_to_notify_post_request_inner_t* instantiate__application_data_influence_data_subs_to_notify_post_request_inner(int include_optional);

#include "test_traffic_influ_data.c"


_application_data_influence_data_subs_to_notify_post_request_inner_t* instantiate__application_data_influence_data_subs_to_notify_post_request_inner(int include_optional) {
  _application_data_influence_data_subs_to_notify_post_request_inner_t* _application_data_influence_data_subs_to_notify_post_request_inner = NULL;
  if (include_optional) {
    _application_data_influence_data_subs_to_notify_post_request_inner = _application_data_influence_data_subs_to_notify_post_request_inner_create(
      "0",
       // false, not to have infinite recursion
      instantiate_traffic_influ_data(0)
    );
  } else {
    _application_data_influence_data_subs_to_notify_post_request_inner = _application_data_influence_data_subs_to_notify_post_request_inner_create(
      "0",
      NULL
    );
  }

  return _application_data_influence_data_subs_to_notify_post_request_inner;
}


#ifdef _application_data_influence_data_subs_to_notify_post_request_inner_MAIN

void test__application_data_influence_data_subs_to_notify_post_request_inner(int include_optional) {
    _application_data_influence_data_subs_to_notify_post_request_inner_t* _application_data_influence_data_subs_to_notify_post_request_inner_1 = instantiate__application_data_influence_data_subs_to_notify_post_request_inner(include_optional);

	cJSON* json_application_data_influence_data_subs_to_notify_post_request_inner_1 = _application_data_influence_data_subs_to_notify_post_request_inner_convertToJSON(_application_data_influence_data_subs_to_notify_post_request_inner_1);
	printf("_application_data_influence_data_subs_to_notify_post_request_inner :\n%s\n", cJSON_Print(json_application_data_influence_data_subs_to_notify_post_request_inner_1));
	_application_data_influence_data_subs_to_notify_post_request_inner_t* _application_data_influence_data_subs_to_notify_post_request_inner_2 = _application_data_influence_data_subs_to_notify_post_request_inner_parseFromJSON(json_application_data_influence_data_subs_to_notify_post_request_inner_1);
	cJSON* json_application_data_influence_data_subs_to_notify_post_request_inner_2 = _application_data_influence_data_subs_to_notify_post_request_inner_convertToJSON(_application_data_influence_data_subs_to_notify_post_request_inner_2);
	printf("repeating _application_data_influence_data_subs_to_notify_post_request_inner:\n%s\n", cJSON_Print(json_application_data_influence_data_subs_to_notify_post_request_inner_2));
}

int main() {
  test__application_data_influence_data_subs_to_notify_post_request_inner(1);
  test__application_data_influence_data_subs_to_notify_post_request_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // _application_data_influence_data_subs_to_notify_post_request_inner_MAIN
#endif // _application_data_influence_data_subs_to_notify_post_request_inner_TEST
