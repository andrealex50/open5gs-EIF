#ifndef prose_direct_allowed_TEST
#define prose_direct_allowed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define prose_direct_allowed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/prose_direct_allowed.h"
prose_direct_allowed_t* instantiate_prose_direct_allowed(int include_optional);



prose_direct_allowed_t* instantiate_prose_direct_allowed(int include_optional) {
  prose_direct_allowed_t* prose_direct_allowed = NULL;
  if (include_optional) {
    prose_direct_allowed = prose_direct_allowed_create(
    );
  } else {
    prose_direct_allowed = prose_direct_allowed_create(
    );
  }

  return prose_direct_allowed;
}


#ifdef prose_direct_allowed_MAIN

void test_prose_direct_allowed(int include_optional) {
    prose_direct_allowed_t* prose_direct_allowed_1 = instantiate_prose_direct_allowed(include_optional);

	cJSON* jsonprose_direct_allowed_1 = prose_direct_allowed_convertToJSON(prose_direct_allowed_1);
	printf("prose_direct_allowed :\n%s\n", cJSON_Print(jsonprose_direct_allowed_1));
	prose_direct_allowed_t* prose_direct_allowed_2 = prose_direct_allowed_parseFromJSON(jsonprose_direct_allowed_1);
	cJSON* jsonprose_direct_allowed_2 = prose_direct_allowed_convertToJSON(prose_direct_allowed_2);
	printf("repeating prose_direct_allowed:\n%s\n", cJSON_Print(jsonprose_direct_allowed_2));
}

int main() {
  test_prose_direct_allowed(1);
  test_prose_direct_allowed(0);

  printf("Hello world \n");
  return 0;
}

#endif // prose_direct_allowed_MAIN
#endif // prose_direct_allowed_TEST
