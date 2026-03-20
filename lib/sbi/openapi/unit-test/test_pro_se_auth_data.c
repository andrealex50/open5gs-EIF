#ifndef pro_se_auth_data_TEST
#define pro_se_auth_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_auth_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_auth_data.h"
pro_se_auth_data_t* instantiate_pro_se_auth_data(int include_optional);



pro_se_auth_data_t* instantiate_pro_se_auth_data(int include_optional) {
  pro_se_auth_data_t* pro_se_auth_data = NULL;
  if (include_optional) {
    pro_se_auth_data = pro_se_auth_data_create(
    );
  } else {
    pro_se_auth_data = pro_se_auth_data_create(
    );
  }

  return pro_se_auth_data;
}


#ifdef pro_se_auth_data_MAIN

void test_pro_se_auth_data(int include_optional) {
    pro_se_auth_data_t* pro_se_auth_data_1 = instantiate_pro_se_auth_data(include_optional);

	cJSON* jsonpro_se_auth_data_1 = pro_se_auth_data_convertToJSON(pro_se_auth_data_1);
	printf("pro_se_auth_data :\n%s\n", cJSON_Print(jsonpro_se_auth_data_1));
	pro_se_auth_data_t* pro_se_auth_data_2 = pro_se_auth_data_parseFromJSON(jsonpro_se_auth_data_1);
	cJSON* jsonpro_se_auth_data_2 = pro_se_auth_data_convertToJSON(pro_se_auth_data_2);
	printf("repeating pro_se_auth_data:\n%s\n", cJSON_Print(jsonpro_se_auth_data_2));
}

int main() {
  test_pro_se_auth_data(1);
  test_pro_se_auth_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_auth_data_MAIN
#endif // pro_se_auth_data_TEST
