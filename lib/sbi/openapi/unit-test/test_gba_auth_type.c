#ifndef gba_auth_type_TEST
#define gba_auth_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gba_auth_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gba_auth_type.h"
gba_auth_type_t* instantiate_gba_auth_type(int include_optional);



gba_auth_type_t* instantiate_gba_auth_type(int include_optional) {
  gba_auth_type_t* gba_auth_type = NULL;
  if (include_optional) {
    gba_auth_type = gba_auth_type_create(
    );
  } else {
    gba_auth_type = gba_auth_type_create(
    );
  }

  return gba_auth_type;
}


#ifdef gba_auth_type_MAIN

void test_gba_auth_type(int include_optional) {
    gba_auth_type_t* gba_auth_type_1 = instantiate_gba_auth_type(include_optional);

	cJSON* jsongba_auth_type_1 = gba_auth_type_convertToJSON(gba_auth_type_1);
	printf("gba_auth_type :\n%s\n", cJSON_Print(jsongba_auth_type_1));
	gba_auth_type_t* gba_auth_type_2 = gba_auth_type_parseFromJSON(jsongba_auth_type_1);
	cJSON* jsongba_auth_type_2 = gba_auth_type_convertToJSON(gba_auth_type_2);
	printf("repeating gba_auth_type:\n%s\n", cJSON_Print(jsongba_auth_type_2));
}

int main() {
  test_gba_auth_type(1);
  test_gba_auth_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // gba_auth_type_MAIN
#endif // gba_auth_type_TEST
