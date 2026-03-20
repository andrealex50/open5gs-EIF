#ifndef ssm_1_TEST
#define ssm_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ssm_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ssm_1.h"
ssm_1_t* instantiate_ssm_1(int include_optional);

#include "test_ip_addr_1.c"
#include "test_ip_addr_1.c"


ssm_1_t* instantiate_ssm_1(int include_optional) {
  ssm_1_t* ssm_1 = NULL;
  if (include_optional) {
    ssm_1 = ssm_1_create(
       // false, not to have infinite recursion
      instantiate_ip_addr_1(0),
       // false, not to have infinite recursion
      instantiate_ip_addr_1(0)
    );
  } else {
    ssm_1 = ssm_1_create(
      NULL,
      NULL
    );
  }

  return ssm_1;
}


#ifdef ssm_1_MAIN

void test_ssm_1(int include_optional) {
    ssm_1_t* ssm_1_1 = instantiate_ssm_1(include_optional);

	cJSON* jsonssm_1_1 = ssm_1_convertToJSON(ssm_1_1);
	printf("ssm_1 :\n%s\n", cJSON_Print(jsonssm_1_1));
	ssm_1_t* ssm_1_2 = ssm_1_parseFromJSON(jsonssm_1_1);
	cJSON* jsonssm_1_2 = ssm_1_convertToJSON(ssm_1_2);
	printf("repeating ssm_1:\n%s\n", cJSON_Print(jsonssm_1_2));
}

int main() {
  test_ssm_1(1);
  test_ssm_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ssm_1_MAIN
#endif // ssm_1_TEST
