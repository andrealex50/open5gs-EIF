#ifndef pro_se_capability_TEST
#define pro_se_capability_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pro_se_capability_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pro_se_capability.h"
pro_se_capability_t* instantiate_pro_se_capability(int include_optional);



pro_se_capability_t* instantiate_pro_se_capability(int include_optional) {
  pro_se_capability_t* pro_se_capability = NULL;
  if (include_optional) {
    pro_se_capability = pro_se_capability_create(
      1,
      1,
      1,
      1,
      1,
      1
    );
  } else {
    pro_se_capability = pro_se_capability_create(
      1,
      1,
      1,
      1,
      1,
      1
    );
  }

  return pro_se_capability;
}


#ifdef pro_se_capability_MAIN

void test_pro_se_capability(int include_optional) {
    pro_se_capability_t* pro_se_capability_1 = instantiate_pro_se_capability(include_optional);

	cJSON* jsonpro_se_capability_1 = pro_se_capability_convertToJSON(pro_se_capability_1);
	printf("pro_se_capability :\n%s\n", cJSON_Print(jsonpro_se_capability_1));
	pro_se_capability_t* pro_se_capability_2 = pro_se_capability_parseFromJSON(jsonpro_se_capability_1);
	cJSON* jsonpro_se_capability_2 = pro_se_capability_convertToJSON(pro_se_capability_2);
	printf("repeating pro_se_capability:\n%s\n", cJSON_Print(jsonpro_se_capability_2));
}

int main() {
  test_pro_se_capability(1);
  test_pro_se_capability(0);

  printf("Hello world \n");
  return 0;
}

#endif // pro_se_capability_MAIN
#endif // pro_se_capability_TEST
