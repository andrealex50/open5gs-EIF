#ifndef slice_info_for_pdu_session_TEST
#define slice_info_for_pdu_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define slice_info_for_pdu_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/slice_info_for_pdu_session.h"
slice_info_for_pdu_session_t* instantiate_slice_info_for_pdu_session(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"


slice_info_for_pdu_session_t* instantiate_slice_info_for_pdu_session(int include_optional) {
  slice_info_for_pdu_session_t* slice_info_for_pdu_session = NULL;
  if (include_optional) {
    slice_info_for_pdu_session = slice_info_for_pdu_session_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
      nssf_ns_selection_slice_info_for_pdu_session__NON_ROAMING,
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    slice_info_for_pdu_session = slice_info_for_pdu_session_create(
      NULL,
      nssf_ns_selection_slice_info_for_pdu_session__NON_ROAMING,
      NULL
    );
  }

  return slice_info_for_pdu_session;
}


#ifdef slice_info_for_pdu_session_MAIN

void test_slice_info_for_pdu_session(int include_optional) {
    slice_info_for_pdu_session_t* slice_info_for_pdu_session_1 = instantiate_slice_info_for_pdu_session(include_optional);

	cJSON* jsonslice_info_for_pdu_session_1 = slice_info_for_pdu_session_convertToJSON(slice_info_for_pdu_session_1);
	printf("slice_info_for_pdu_session :\n%s\n", cJSON_Print(jsonslice_info_for_pdu_session_1));
	slice_info_for_pdu_session_t* slice_info_for_pdu_session_2 = slice_info_for_pdu_session_parseFromJSON(jsonslice_info_for_pdu_session_1);
	cJSON* jsonslice_info_for_pdu_session_2 = slice_info_for_pdu_session_convertToJSON(slice_info_for_pdu_session_2);
	printf("repeating slice_info_for_pdu_session:\n%s\n", cJSON_Print(jsonslice_info_for_pdu_session_2));
}

int main() {
  test_slice_info_for_pdu_session(1);
  test_slice_info_for_pdu_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // slice_info_for_pdu_session_MAIN
#endif // slice_info_for_pdu_session_TEST
