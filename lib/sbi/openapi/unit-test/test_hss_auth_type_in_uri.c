#ifndef hss_auth_type_in_uri_TEST
#define hss_auth_type_in_uri_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_auth_type_in_uri_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_auth_type_in_uri.h"
hss_auth_type_in_uri_t* instantiate_hss_auth_type_in_uri(int include_optional);



hss_auth_type_in_uri_t* instantiate_hss_auth_type_in_uri(int include_optional) {
  hss_auth_type_in_uri_t* hss_auth_type_in_uri = NULL;
  if (include_optional) {
    hss_auth_type_in_uri = hss_auth_type_in_uri_create(
    );
  } else {
    hss_auth_type_in_uri = hss_auth_type_in_uri_create(
    );
  }

  return hss_auth_type_in_uri;
}


#ifdef hss_auth_type_in_uri_MAIN

void test_hss_auth_type_in_uri(int include_optional) {
    hss_auth_type_in_uri_t* hss_auth_type_in_uri_1 = instantiate_hss_auth_type_in_uri(include_optional);

	cJSON* jsonhss_auth_type_in_uri_1 = hss_auth_type_in_uri_convertToJSON(hss_auth_type_in_uri_1);
	printf("hss_auth_type_in_uri :\n%s\n", cJSON_Print(jsonhss_auth_type_in_uri_1));
	hss_auth_type_in_uri_t* hss_auth_type_in_uri_2 = hss_auth_type_in_uri_parseFromJSON(jsonhss_auth_type_in_uri_1);
	cJSON* jsonhss_auth_type_in_uri_2 = hss_auth_type_in_uri_convertToJSON(hss_auth_type_in_uri_2);
	printf("repeating hss_auth_type_in_uri:\n%s\n", cJSON_Print(jsonhss_auth_type_in_uri_2));
}

int main() {
  test_hss_auth_type_in_uri(1);
  test_hss_auth_type_in_uri(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_auth_type_in_uri_MAIN
#endif // hss_auth_type_in_uri_TEST
