#ifndef pro_se_authentication_info_TEST
#define pro_se_authentication_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_authentication_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_authentication_info.h"
pro_se_authentication_info_t* instantiate_pro_se_authentication_info(int include_optional);



pro_se_authentication_info_t* instantiate_pro_se_authentication_info(int include_optional) {
  pro_se_authentication_info_t* pro_se_authentication_info = NULL;
  if (include_optional) {
    pro_se_authentication_info = pro_se_authentication_info_create(
      "a",
      "a",
      0,
      "YQ==",
      "a"
    );
  } else {
    pro_se_authentication_info = pro_se_authentication_info_create(
      "a",
      "a",
      0,
      "YQ==",
      "a"
    );
  }

  return pro_se_authentication_info;
}


#ifdef pro_se_authentication_info_MAIN

void test_pro_se_authentication_info(int include_optional) {
    pro_se_authentication_info_t* pro_se_authentication_info_1 = instantiate_pro_se_authentication_info(include_optional);

	cJSON* jsonpro_se_authentication_info_1 = pro_se_authentication_info_convertToJSON(pro_se_authentication_info_1);
	printf("pro_se_authentication_info :\n%s\n", cJSON_Print(jsonpro_se_authentication_info_1));
	pro_se_authentication_info_t* pro_se_authentication_info_2 = pro_se_authentication_info_parseFromJSON(jsonpro_se_authentication_info_1);
	cJSON* jsonpro_se_authentication_info_2 = pro_se_authentication_info_convertToJSON(pro_se_authentication_info_2);
	printf("repeating pro_se_authentication_info:\n%s\n", cJSON_Print(jsonpro_se_authentication_info_2));
}

int main() {
  test_pro_se_authentication_info(1);
  test_pro_se_authentication_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_authentication_info_MAIN
#endif // pro_se_authentication_info_TEST
