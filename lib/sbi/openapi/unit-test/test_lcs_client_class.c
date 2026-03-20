#ifndef lcs_client_class_TEST
#define lcs_client_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define lcs_client_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/lcs_client_class.h"
lcs_client_class_t* instantiate_lcs_client_class(int include_optional);



lcs_client_class_t* instantiate_lcs_client_class(int include_optional) {
  lcs_client_class_t* lcs_client_class = NULL;
  if (include_optional) {
    lcs_client_class = lcs_client_class_create(
    );
  } else {
    lcs_client_class = lcs_client_class_create(
    );
  }

  return lcs_client_class;
}


#ifdef lcs_client_class_MAIN

void test_lcs_client_class(int include_optional) {
    lcs_client_class_t* lcs_client_class_1 = instantiate_lcs_client_class(include_optional);

	cJSON* jsonlcs_client_class_1 = lcs_client_class_convertToJSON(lcs_client_class_1);
	printf("lcs_client_class :\n%s\n", cJSON_Print(jsonlcs_client_class_1));
	lcs_client_class_t* lcs_client_class_2 = lcs_client_class_parseFromJSON(jsonlcs_client_class_1);
	cJSON* jsonlcs_client_class_2 = lcs_client_class_convertToJSON(lcs_client_class_2);
	printf("repeating lcs_client_class:\n%s\n", cJSON_Print(jsonlcs_client_class_2));
}

int main() {
  test_lcs_client_class(1);
  test_lcs_client_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // lcs_client_class_MAIN
#endif // lcs_client_class_TEST
