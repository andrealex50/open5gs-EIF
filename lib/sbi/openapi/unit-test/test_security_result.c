#ifndef security_result_TEST
#define security_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define security_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/security_result.h"
security_result_t* instantiate_security_result(int include_optional);



security_result_t* instantiate_security_result(int include_optional) {
  security_result_t* security_result = NULL;
  if (include_optional) {
    security_result = security_result_create(
      nsmf_pdusession_security_result__PERFORMED,
      nsmf_pdusession_security_result__PERFORMED
    );
  } else {
    security_result = security_result_create(
      nsmf_pdusession_security_result__PERFORMED,
      nsmf_pdusession_security_result__PERFORMED
    );
  }

  return security_result;
}


#ifdef security_result_MAIN

void test_security_result(int include_optional) {
    security_result_t* security_result_1 = instantiate_security_result(include_optional);

	cJSON* jsonsecurity_result_1 = security_result_convertToJSON(security_result_1);
	printf("security_result :\n%s\n", cJSON_Print(jsonsecurity_result_1));
	security_result_t* security_result_2 = security_result_parseFromJSON(jsonsecurity_result_1);
	cJSON* jsonsecurity_result_2 = security_result_convertToJSON(security_result_2);
	printf("repeating security_result:\n%s\n", cJSON_Print(jsonsecurity_result_2));
}

int main() {
  test_security_result(1);
  test_security_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // security_result_MAIN
#endif // security_result_TEST
