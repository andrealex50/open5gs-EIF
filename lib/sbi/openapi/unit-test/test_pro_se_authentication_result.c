#ifndef pro_se_authentication_result_TEST
#define pro_se_authentication_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_authentication_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_authentication_result.h"
pro_se_authentication_result_t* instantiate_pro_se_authentication_result(int include_optional);



pro_se_authentication_result_t* instantiate_pro_se_authentication_result(int include_optional) {
  pro_se_authentication_result_t* pro_se_authentication_result = NULL;
  if (include_optional) {
    pro_se_authentication_result = pro_se_authentication_result_create(
      "a",
      "YQ==",
      "a"
    );
  } else {
    pro_se_authentication_result = pro_se_authentication_result_create(
      "a",
      "YQ==",
      "a"
    );
  }

  return pro_se_authentication_result;
}


#ifdef pro_se_authentication_result_MAIN

void test_pro_se_authentication_result(int include_optional) {
    pro_se_authentication_result_t* pro_se_authentication_result_1 = instantiate_pro_se_authentication_result(include_optional);

	cJSON* jsonpro_se_authentication_result_1 = pro_se_authentication_result_convertToJSON(pro_se_authentication_result_1);
	printf("pro_se_authentication_result :\n%s\n", cJSON_Print(jsonpro_se_authentication_result_1));
	pro_se_authentication_result_t* pro_se_authentication_result_2 = pro_se_authentication_result_parseFromJSON(jsonpro_se_authentication_result_1);
	cJSON* jsonpro_se_authentication_result_2 = pro_se_authentication_result_convertToJSON(pro_se_authentication_result_2);
	printf("repeating pro_se_authentication_result:\n%s\n", cJSON_Print(jsonpro_se_authentication_result_2));
}

int main() {
  test_pro_se_authentication_result(1);
  test_pro_se_authentication_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_authentication_result_MAIN
#endif // pro_se_authentication_result_TEST
