#ifndef mbs_session_TEST
#define mbs_session_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_session_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_session.h"
mbs_session_t* instantiate_mbs_session(int include_optional);

#include "test_mbs_session_id.c"


mbs_session_t* instantiate_mbs_session(int include_optional) {
  mbs_session_t* mbs_session = NULL;
  if (include_optional) {
    mbs_session = mbs_session_create(
       // false, not to have infinite recursion
      instantiate_mbs_session_id(0),
      list_createList()
    );
  } else {
    mbs_session = mbs_session_create(
      NULL,
      list_createList()
    );
  }

  return mbs_session;
}


#ifdef mbs_session_MAIN

void test_mbs_session(int include_optional) {
    mbs_session_t* mbs_session_1 = instantiate_mbs_session(include_optional);

	cJSON* jsonmbs_session_1 = mbs_session_convertToJSON(mbs_session_1);
	printf("mbs_session :\n%s\n", cJSON_Print(jsonmbs_session_1));
	mbs_session_t* mbs_session_2 = mbs_session_parseFromJSON(jsonmbs_session_1);
	cJSON* jsonmbs_session_2 = mbs_session_convertToJSON(mbs_session_2);
	printf("repeating mbs_session:\n%s\n", cJSON_Print(jsonmbs_session_2));
}

int main() {
  test_mbs_session(1);
  test_mbs_session(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_session_MAIN
#endif // mbs_session_TEST
