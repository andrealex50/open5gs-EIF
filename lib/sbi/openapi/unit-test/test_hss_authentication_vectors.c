#ifndef hss_authentication_vectors_TEST
#define hss_authentication_vectors_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_authentication_vectors_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_authentication_vectors.h"
hss_authentication_vectors_t* instantiate_hss_authentication_vectors(int include_optional);



hss_authentication_vectors_t* instantiate_hss_authentication_vectors(int include_optional) {
  hss_authentication_vectors_t* hss_authentication_vectors = NULL;
  if (include_optional) {
    hss_authentication_vectors = hss_authentication_vectors_create(
    );
  } else {
    hss_authentication_vectors = hss_authentication_vectors_create(
    );
  }

  return hss_authentication_vectors;
}


#ifdef hss_authentication_vectors_MAIN

void test_hss_authentication_vectors(int include_optional) {
    hss_authentication_vectors_t* hss_authentication_vectors_1 = instantiate_hss_authentication_vectors(include_optional);

	cJSON* jsonhss_authentication_vectors_1 = hss_authentication_vectors_convertToJSON(hss_authentication_vectors_1);
	printf("hss_authentication_vectors :\n%s\n", cJSON_Print(jsonhss_authentication_vectors_1));
	hss_authentication_vectors_t* hss_authentication_vectors_2 = hss_authentication_vectors_parseFromJSON(jsonhss_authentication_vectors_1);
	cJSON* jsonhss_authentication_vectors_2 = hss_authentication_vectors_convertToJSON(hss_authentication_vectors_2);
	printf("repeating hss_authentication_vectors:\n%s\n", cJSON_Print(jsonhss_authentication_vectors_2));
}

int main() {
  test_hss_authentication_vectors(1);
  test_hss_authentication_vectors(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_authentication_vectors_MAIN
#endif // hss_authentication_vectors_TEST
