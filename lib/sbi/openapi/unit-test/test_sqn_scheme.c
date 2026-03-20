#ifndef sqn_scheme_TEST
#define sqn_scheme_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sqn_scheme_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sqn_scheme.h"
sqn_scheme_t* instantiate_sqn_scheme(int include_optional);



sqn_scheme_t* instantiate_sqn_scheme(int include_optional) {
  sqn_scheme_t* sqn_scheme = NULL;
  if (include_optional) {
    sqn_scheme = sqn_scheme_create(
    );
  } else {
    sqn_scheme = sqn_scheme_create(
    );
  }

  return sqn_scheme;
}


#ifdef sqn_scheme_MAIN

void test_sqn_scheme(int include_optional) {
    sqn_scheme_t* sqn_scheme_1 = instantiate_sqn_scheme(include_optional);

	cJSON* jsonsqn_scheme_1 = sqn_scheme_convertToJSON(sqn_scheme_1);
	printf("sqn_scheme :\n%s\n", cJSON_Print(jsonsqn_scheme_1));
	sqn_scheme_t* sqn_scheme_2 = sqn_scheme_parseFromJSON(jsonsqn_scheme_1);
	cJSON* jsonsqn_scheme_2 = sqn_scheme_convertToJSON(sqn_scheme_2);
	printf("repeating sqn_scheme:\n%s\n", cJSON_Print(jsonsqn_scheme_2));
}

int main() {
  test_sqn_scheme(1);
  test_sqn_scheme(0);

  printf("Hello world \n");
  return 0;
}

#endif // sqn_scheme_MAIN
#endif // sqn_scheme_TEST
