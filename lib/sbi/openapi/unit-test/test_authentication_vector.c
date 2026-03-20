#ifndef authentication_vector_TEST
#define authentication_vector_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authentication_vector_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authentication_vector.h"
authentication_vector_t* instantiate_authentication_vector(int include_optional);



authentication_vector_t* instantiate_authentication_vector(int include_optional) {
  authentication_vector_t* authentication_vector = NULL;
  if (include_optional) {
    authentication_vector = authentication_vector_create(
      nudm_ueau_authentication_vector__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    authentication_vector = authentication_vector_create(
      nudm_ueau_authentication_vector__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  }

  return authentication_vector;
}


#ifdef authentication_vector_MAIN

void test_authentication_vector(int include_optional) {
    authentication_vector_t* authentication_vector_1 = instantiate_authentication_vector(include_optional);

	cJSON* jsonauthentication_vector_1 = authentication_vector_convertToJSON(authentication_vector_1);
	printf("authentication_vector :\n%s\n", cJSON_Print(jsonauthentication_vector_1));
	authentication_vector_t* authentication_vector_2 = authentication_vector_parseFromJSON(jsonauthentication_vector_1);
	cJSON* jsonauthentication_vector_2 = authentication_vector_convertToJSON(authentication_vector_2);
	printf("repeating authentication_vector:\n%s\n", cJSON_Print(jsonauthentication_vector_2));
}

int main() {
  test_authentication_vector(1);
  test_authentication_vector(0);

  printf("Hello world \n");
  return 0;
}

#endif // authentication_vector_MAIN
#endif // authentication_vector_TEST
