#ifndef ddn_failure_subs_TEST
#define ddn_failure_subs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ddn_failure_subs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ddn_failure_subs.h"
ddn_failure_subs_t* instantiate_ddn_failure_subs(int include_optional);



ddn_failure_subs_t* instantiate_ddn_failure_subs(int include_optional) {
  ddn_failure_subs_t* ddn_failure_subs = NULL;
  if (include_optional) {
    ddn_failure_subs = ddn_failure_subs_create(
      1,
      list_createList()
    );
  } else {
    ddn_failure_subs = ddn_failure_subs_create(
      1,
      list_createList()
    );
  }

  return ddn_failure_subs;
}


#ifdef ddn_failure_subs_MAIN

void test_ddn_failure_subs(int include_optional) {
    ddn_failure_subs_t* ddn_failure_subs_1 = instantiate_ddn_failure_subs(include_optional);

	cJSON* jsonddn_failure_subs_1 = ddn_failure_subs_convertToJSON(ddn_failure_subs_1);
	printf("ddn_failure_subs :\n%s\n", cJSON_Print(jsonddn_failure_subs_1));
	ddn_failure_subs_t* ddn_failure_subs_2 = ddn_failure_subs_parseFromJSON(jsonddn_failure_subs_1);
	cJSON* jsonddn_failure_subs_2 = ddn_failure_subs_convertToJSON(ddn_failure_subs_2);
	printf("repeating ddn_failure_subs:\n%s\n", cJSON_Print(jsonddn_failure_subs_2));
}

int main() {
  test_ddn_failure_subs(1);
  test_ddn_failure_subs(0);

  printf("Hello world \n");
  return 0;
}

#endif // ddn_failure_subs_MAIN
#endif // ddn_failure_subs_TEST
