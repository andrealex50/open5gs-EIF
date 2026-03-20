#ifndef n4_information_TEST
#define n4_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define n4_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/n4_information.h"
n4_information_t* instantiate_n4_information(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_dnai_information.c"


n4_information_t* instantiate_n4_information(int include_optional) {
  n4_information_t* n4_information = NULL;
  if (include_optional) {
    n4_information = n4_information_create(
      nsmf_pdusession_n4_information__PFCP_SES_EST_REQ,
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_dnai_information(0),
      "0",
      "0",
      list_createList()
    );
  } else {
    n4_information = n4_information_create(
      nsmf_pdusession_n4_information__PFCP_SES_EST_REQ,
      NULL,
      NULL,
      "0",
      "0",
      list_createList()
    );
  }

  return n4_information;
}


#ifdef n4_information_MAIN

void test_n4_information(int include_optional) {
    n4_information_t* n4_information_1 = instantiate_n4_information(include_optional);

	cJSON* jsonn4_information_1 = n4_information_convertToJSON(n4_information_1);
	printf("n4_information :\n%s\n", cJSON_Print(jsonn4_information_1));
	n4_information_t* n4_information_2 = n4_information_parseFromJSON(jsonn4_information_1);
	cJSON* jsonn4_information_2 = n4_information_convertToJSON(n4_information_2);
	printf("repeating n4_information:\n%s\n", cJSON_Print(jsonn4_information_2));
}

int main() {
  test_n4_information(1);
  test_n4_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // n4_information_MAIN
#endif // n4_information_TEST
