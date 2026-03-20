#ifndef pro_se_authentication_vectors_TEST
#define pro_se_authentication_vectors_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_authentication_vectors_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_authentication_vectors.h"
pro_se_authentication_vectors_t* instantiate_pro_se_authentication_vectors(int include_optional);



pro_se_authentication_vectors_t* instantiate_pro_se_authentication_vectors(int include_optional) {
  pro_se_authentication_vectors_t* pro_se_authentication_vectors = NULL;
  if (include_optional) {
    pro_se_authentication_vectors = pro_se_authentication_vectors_create(
    );
  } else {
    pro_se_authentication_vectors = pro_se_authentication_vectors_create(
    );
  }

  return pro_se_authentication_vectors;
}


#ifdef pro_se_authentication_vectors_MAIN

void test_pro_se_authentication_vectors(int include_optional) {
    pro_se_authentication_vectors_t* pro_se_authentication_vectors_1 = instantiate_pro_se_authentication_vectors(include_optional);

	cJSON* jsonpro_se_authentication_vectors_1 = pro_se_authentication_vectors_convertToJSON(pro_se_authentication_vectors_1);
	printf("pro_se_authentication_vectors :\n%s\n", cJSON_Print(jsonpro_se_authentication_vectors_1));
	pro_se_authentication_vectors_t* pro_se_authentication_vectors_2 = pro_se_authentication_vectors_parseFromJSON(jsonpro_se_authentication_vectors_1);
	cJSON* jsonpro_se_authentication_vectors_2 = pro_se_authentication_vectors_convertToJSON(pro_se_authentication_vectors_2);
	printf("repeating pro_se_authentication_vectors:\n%s\n", cJSON_Print(jsonpro_se_authentication_vectors_2));
}

int main() {
  test_pro_se_authentication_vectors(1);
  test_pro_se_authentication_vectors(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_authentication_vectors_MAIN
#endif // pro_se_authentication_vectors_TEST
