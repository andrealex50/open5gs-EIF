#ifndef mbs_session_id_1_TEST
#define mbs_session_id_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_session_id_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_session_id_1.h"
mbs_session_id_1_t* instantiate_mbs_session_id_1(int include_optional);

#include "test_tmgi_1.c"
#include "test_ssm_1.c"


mbs_session_id_1_t* instantiate_mbs_session_id_1(int include_optional) {
  mbs_session_id_1_t* mbs_session_id_1 = NULL;
  if (include_optional) {
    mbs_session_id_1 = mbs_session_id_1_create(
       // false, not to have infinite recursion
      instantiate_tmgi_1(0),
       // false, not to have infinite recursion
      instantiate_ssm_1(0),
      "a"
    );
  } else {
    mbs_session_id_1 = mbs_session_id_1_create(
      NULL,
      NULL,
      "a"
    );
  }

  return mbs_session_id_1;
}


#ifdef mbs_session_id_1_MAIN

void test_mbs_session_id_1(int include_optional) {
    mbs_session_id_1_t* mbs_session_id_1_1 = instantiate_mbs_session_id_1(include_optional);

	cJSON* jsonmbs_session_id_1_1 = mbs_session_id_1_convertToJSON(mbs_session_id_1_1);
	printf("mbs_session_id_1 :\n%s\n", cJSON_Print(jsonmbs_session_id_1_1));
	mbs_session_id_1_t* mbs_session_id_1_2 = mbs_session_id_1_parseFromJSON(jsonmbs_session_id_1_1);
	cJSON* jsonmbs_session_id_1_2 = mbs_session_id_1_convertToJSON(mbs_session_id_1_2);
	printf("repeating mbs_session_id_1:\n%s\n", cJSON_Print(jsonmbs_session_id_1_2));
}

int main() {
  test_mbs_session_id_1(1);
  test_mbs_session_id_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_session_id_1_MAIN
#endif // mbs_session_id_1_TEST
