#ifndef mbs_session_id_TEST
#define mbs_session_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_session_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_session_id.h"
mbs_session_id_t* instantiate_mbs_session_id(int include_optional);

#include "test_tmgi.c"
#include "test_ssm.c"


mbs_session_id_t* instantiate_mbs_session_id(int include_optional) {
  mbs_session_id_t* mbs_session_id = NULL;
  if (include_optional) {
    mbs_session_id = mbs_session_id_create(
       // false, not to have infinite recursion
      instantiate_tmgi(0),
       // false, not to have infinite recursion
      instantiate_ssm(0),
      "a"
    );
  } else {
    mbs_session_id = mbs_session_id_create(
      NULL,
      NULL,
      "a"
    );
  }

  return mbs_session_id;
}


#ifdef mbs_session_id_MAIN

void test_mbs_session_id(int include_optional) {
    mbs_session_id_t* mbs_session_id_1 = instantiate_mbs_session_id(include_optional);

	cJSON* jsonmbs_session_id_1 = mbs_session_id_convertToJSON(mbs_session_id_1);
	printf("mbs_session_id :\n%s\n", cJSON_Print(jsonmbs_session_id_1));
	mbs_session_id_t* mbs_session_id_2 = mbs_session_id_parseFromJSON(jsonmbs_session_id_1);
	cJSON* jsonmbs_session_id_2 = mbs_session_id_convertToJSON(mbs_session_id_2);
	printf("repeating mbs_session_id:\n%s\n", cJSON_Print(jsonmbs_session_id_2));
}

int main() {
  test_mbs_session_id(1);
  test_mbs_session_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_session_id_MAIN
#endif // mbs_session_id_TEST
