#ifndef n2_sm_info_type_TEST
#define n2_sm_info_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n2_sm_info_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n2_sm_info_type.h"
n2_sm_info_type_t* instantiate_n2_sm_info_type(int include_optional);



n2_sm_info_type_t* instantiate_n2_sm_info_type(int include_optional) {
  n2_sm_info_type_t* n2_sm_info_type = NULL;
  if (include_optional) {
    n2_sm_info_type = n2_sm_info_type_create(
    );
  } else {
    n2_sm_info_type = n2_sm_info_type_create(
    );
  }

  return n2_sm_info_type;
}


#ifdef n2_sm_info_type_MAIN

void test_n2_sm_info_type(int include_optional) {
    n2_sm_info_type_t* n2_sm_info_type_1 = instantiate_n2_sm_info_type(include_optional);

	cJSON* jsonn2_sm_info_type_1 = n2_sm_info_type_convertToJSON(n2_sm_info_type_1);
	printf("n2_sm_info_type :\n%s\n", cJSON_Print(jsonn2_sm_info_type_1));
	n2_sm_info_type_t* n2_sm_info_type_2 = n2_sm_info_type_parseFromJSON(jsonn2_sm_info_type_1);
	cJSON* jsonn2_sm_info_type_2 = n2_sm_info_type_convertToJSON(n2_sm_info_type_2);
	printf("repeating n2_sm_info_type:\n%s\n", cJSON_Print(jsonn2_sm_info_type_2));
}

int main() {
  test_n2_sm_info_type(1);
  test_n2_sm_info_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // n2_sm_info_type_MAIN
#endif // n2_sm_info_type_TEST
