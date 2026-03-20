#ifndef out_of_credit_information_TEST
#define out_of_credit_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define out_of_credit_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/out_of_credit_information.h"
out_of_credit_information_t* instantiate_out_of_credit_information(int include_optional);

#include "test_final_unit_action.c"


out_of_credit_information_t* instantiate_out_of_credit_information(int include_optional) {
  out_of_credit_information_t* out_of_credit_information = NULL;
  if (include_optional) {
    out_of_credit_information = out_of_credit_information_create(
      null,
      list_createList()
    );
  } else {
    out_of_credit_information = out_of_credit_information_create(
      null,
      list_createList()
    );
  }

  return out_of_credit_information;
}


#ifdef out_of_credit_information_MAIN

void test_out_of_credit_information(int include_optional) {
    out_of_credit_information_t* out_of_credit_information_1 = instantiate_out_of_credit_information(include_optional);

	cJSON* jsonout_of_credit_information_1 = out_of_credit_information_convertToJSON(out_of_credit_information_1);
	printf("out_of_credit_information :\n%s\n", cJSON_Print(jsonout_of_credit_information_1));
	out_of_credit_information_t* out_of_credit_information_2 = out_of_credit_information_parseFromJSON(jsonout_of_credit_information_1);
	cJSON* jsonout_of_credit_information_2 = out_of_credit_information_convertToJSON(out_of_credit_information_2);
	printf("repeating out_of_credit_information:\n%s\n", cJSON_Print(jsonout_of_credit_information_2));
}

int main() {
  test_out_of_credit_information(1);
  test_out_of_credit_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // out_of_credit_information_MAIN
#endif // out_of_credit_information_TEST
