#ifndef modify_200_response_TEST
#define modify_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define modify_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/modify_200_response.h"
modify_200_response_t* instantiate_modify_200_response(int include_optional);

#include "test_snssai.c"
#include "test_plmn_id.c"
#include "test_context_info.c"
#include "test_ue_context_in_smf_data_sub_filter.c"


modify_200_response_t* instantiate_modify_200_response(int include_optional) {
  modify_200_response_t* modify_200_response = NULL;
  if (include_optional) {
    modify_200_response = modify_200_response_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      list_createList(),
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      1,
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_context_info(0),
      1,
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ue_context_in_smf_data_sub_filter(0)
    );
  } else {
    modify_200_response = modify_200_response_create(
      "0",
      1,
      "2013-10-20T19:20:30+01:00",
      "0",
      "0",
      list_createList(),
      NULL,
      "0",
      "0",
      NULL,
      1,
      list_createList(),
      "a",
      NULL,
      1,
      1,
      list_createList(),
      NULL
    );
  }

  return modify_200_response;
}


#ifdef modify_200_response_MAIN

void test_modify_200_response(int include_optional) {
    modify_200_response_t* modify_200_response_1 = instantiate_modify_200_response(include_optional);

	cJSON* jsonmodify_200_response_1 = modify_200_response_convertToJSON(modify_200_response_1);
	printf("modify_200_response :\n%s\n", cJSON_Print(jsonmodify_200_response_1));
	modify_200_response_t* modify_200_response_2 = modify_200_response_parseFromJSON(jsonmodify_200_response_1);
	cJSON* jsonmodify_200_response_2 = modify_200_response_convertToJSON(modify_200_response_2);
	printf("repeating modify_200_response:\n%s\n", cJSON_Print(jsonmodify_200_response_2));
}

int main() {
  test_modify_200_response(1);
  test_modify_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // modify_200_response_MAIN
#endif // modify_200_response_TEST
