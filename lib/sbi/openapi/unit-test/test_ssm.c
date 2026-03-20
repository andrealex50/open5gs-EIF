#ifndef ssm_TEST
#define ssm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ssm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ssm.h"
ssm_t* instantiate_ssm(int include_optional);

#include "test_ip_addr.c"
#include "test_ip_addr.c"


ssm_t* instantiate_ssm(int include_optional) {
  ssm_t* ssm = NULL;
  if (include_optional) {
    ssm = ssm_create(
       // false, not to have infinite recursion
      instantiate_ip_addr(0),
       // false, not to have infinite recursion
      instantiate_ip_addr(0)
    );
  } else {
    ssm = ssm_create(
      NULL,
      NULL
    );
  }

  return ssm;
}


#ifdef ssm_MAIN

void test_ssm(int include_optional) {
    ssm_t* ssm_1 = instantiate_ssm(include_optional);

	cJSON* jsonssm_1 = ssm_convertToJSON(ssm_1);
	printf("ssm :\n%s\n", cJSON_Print(jsonssm_1));
	ssm_t* ssm_2 = ssm_parseFromJSON(jsonssm_1);
	cJSON* jsonssm_2 = ssm_convertToJSON(ssm_2);
	printf("repeating ssm:\n%s\n", cJSON_Print(jsonssm_2));
}

int main() {
  test_ssm(1);
  test_ssm(0);

  printf("Hello world \n");
  return 0;
}

#endif // ssm_MAIN
#endif // ssm_TEST
