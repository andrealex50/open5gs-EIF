#ifndef credit_management_status_TEST
#define credit_management_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define credit_management_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/credit_management_status.h"
credit_management_status_t* instantiate_credit_management_status(int include_optional);



credit_management_status_t* instantiate_credit_management_status(int include_optional) {
  credit_management_status_t* credit_management_status = NULL;
  if (include_optional) {
    credit_management_status = credit_management_status_create(
    );
  } else {
    credit_management_status = credit_management_status_create(
    );
  }

  return credit_management_status;
}


#ifdef credit_management_status_MAIN

void test_credit_management_status(int include_optional) {
    credit_management_status_t* credit_management_status_1 = instantiate_credit_management_status(include_optional);

	cJSON* jsoncredit_management_status_1 = credit_management_status_convertToJSON(credit_management_status_1);
	printf("credit_management_status :\n%s\n", cJSON_Print(jsoncredit_management_status_1));
	credit_management_status_t* credit_management_status_2 = credit_management_status_parseFromJSON(jsoncredit_management_status_1);
	cJSON* jsoncredit_management_status_2 = credit_management_status_convertToJSON(credit_management_status_2);
	printf("repeating credit_management_status:\n%s\n", cJSON_Print(jsoncredit_management_status_2));
}

int main() {
  test_credit_management_status(1);
  test_credit_management_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // credit_management_status_MAIN
#endif // credit_management_status_TEST
