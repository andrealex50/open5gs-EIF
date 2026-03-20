#ifndef pro_se_allowed_plmn_TEST
#define pro_se_allowed_plmn_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_allowed_plmn_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_allowed_plmn.h"
pro_se_allowed_plmn_t* instantiate_pro_se_allowed_plmn(int include_optional);

#include "test_plmn_id.c"


pro_se_allowed_plmn_t* instantiate_pro_se_allowed_plmn(int include_optional) {
  pro_se_allowed_plmn_t* pro_se_allowed_plmn = NULL;
  if (include_optional) {
    pro_se_allowed_plmn = pro_se_allowed_plmn_create(
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      list_createList()
    );
  } else {
    pro_se_allowed_plmn = pro_se_allowed_plmn_create(
      NULL,
      list_createList()
    );
  }

  return pro_se_allowed_plmn;
}


#ifdef pro_se_allowed_plmn_MAIN

void test_pro_se_allowed_plmn(int include_optional) {
    pro_se_allowed_plmn_t* pro_se_allowed_plmn_1 = instantiate_pro_se_allowed_plmn(include_optional);

	cJSON* jsonpro_se_allowed_plmn_1 = pro_se_allowed_plmn_convertToJSON(pro_se_allowed_plmn_1);
	printf("pro_se_allowed_plmn :\n%s\n", cJSON_Print(jsonpro_se_allowed_plmn_1));
	pro_se_allowed_plmn_t* pro_se_allowed_plmn_2 = pro_se_allowed_plmn_parseFromJSON(jsonpro_se_allowed_plmn_1);
	cJSON* jsonpro_se_allowed_plmn_2 = pro_se_allowed_plmn_convertToJSON(pro_se_allowed_plmn_2);
	printf("repeating pro_se_allowed_plmn:\n%s\n", cJSON_Print(jsonpro_se_allowed_plmn_2));
}

int main() {
  test_pro_se_allowed_plmn(1);
  test_pro_se_allowed_plmn(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_allowed_plmn_MAIN
#endif // pro_se_allowed_plmn_TEST
