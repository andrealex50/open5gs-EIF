#ifndef hss_auth_type_TEST
#define hss_auth_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_auth_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_auth_type.h"
hss_auth_type_t* instantiate_hss_auth_type(int include_optional);



hss_auth_type_t* instantiate_hss_auth_type(int include_optional) {
  hss_auth_type_t* hss_auth_type = NULL;
  if (include_optional) {
    hss_auth_type = hss_auth_type_create(
    );
  } else {
    hss_auth_type = hss_auth_type_create(
    );
  }

  return hss_auth_type;
}


#ifdef hss_auth_type_MAIN

void test_hss_auth_type(int include_optional) {
    hss_auth_type_t* hss_auth_type_1 = instantiate_hss_auth_type(include_optional);

	cJSON* jsonhss_auth_type_1 = hss_auth_type_convertToJSON(hss_auth_type_1);
	printf("hss_auth_type :\n%s\n", cJSON_Print(jsonhss_auth_type_1));
	hss_auth_type_t* hss_auth_type_2 = hss_auth_type_parseFromJSON(jsonhss_auth_type_1);
	cJSON* jsonhss_auth_type_2 = hss_auth_type_convertToJSON(hss_auth_type_2);
	printf("repeating hss_auth_type:\n%s\n", cJSON_Print(jsonhss_auth_type_2));
}

int main() {
  test_hss_auth_type(1);
  test_hss_auth_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_auth_type_MAIN
#endif // hss_auth_type_TEST
