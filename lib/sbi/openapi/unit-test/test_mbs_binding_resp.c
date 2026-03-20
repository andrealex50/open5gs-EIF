#ifndef mbs_binding_resp_TEST
#define mbs_binding_resp_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mbs_binding_resp_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mbs_binding_resp.h"
mbs_binding_resp_t* instantiate_mbs_binding_resp(int include_optional);



mbs_binding_resp_t* instantiate_mbs_binding_resp(int include_optional) {
  mbs_binding_resp_t* mbs_binding_resp = NULL;
  if (include_optional) {
    mbs_binding_resp = mbs_binding_resp_create(
      "a",
      list_createList()
    );
  } else {
    mbs_binding_resp = mbs_binding_resp_create(
      "a",
      list_createList()
    );
  }

  return mbs_binding_resp;
}


#ifdef mbs_binding_resp_MAIN

void test_mbs_binding_resp(int include_optional) {
    mbs_binding_resp_t* mbs_binding_resp_1 = instantiate_mbs_binding_resp(include_optional);

	cJSON* jsonmbs_binding_resp_1 = mbs_binding_resp_convertToJSON(mbs_binding_resp_1);
	printf("mbs_binding_resp :\n%s\n", cJSON_Print(jsonmbs_binding_resp_1));
	mbs_binding_resp_t* mbs_binding_resp_2 = mbs_binding_resp_parseFromJSON(jsonmbs_binding_resp_1);
	cJSON* jsonmbs_binding_resp_2 = mbs_binding_resp_convertToJSON(mbs_binding_resp_2);
	printf("repeating mbs_binding_resp:\n%s\n", cJSON_Print(jsonmbs_binding_resp_2));
}

int main() {
  test_mbs_binding_resp(1);
  test_mbs_binding_resp(0);

  printf("Hello world \n");
  return 0;
}

#endif // mbs_binding_resp_MAIN
#endif // mbs_binding_resp_TEST
