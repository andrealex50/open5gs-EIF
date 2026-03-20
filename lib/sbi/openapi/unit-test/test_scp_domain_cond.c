#ifndef scp_domain_cond_TEST
#define scp_domain_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_cond.h"
scp_domain_cond_t* instantiate_scp_domain_cond(int include_optional);



scp_domain_cond_t* instantiate_scp_domain_cond(int include_optional) {
  scp_domain_cond_t* scp_domain_cond = NULL;
  if (include_optional) {
    scp_domain_cond = scp_domain_cond_create(
      list_createList(),
      list_createList()
    );
  } else {
    scp_domain_cond = scp_domain_cond_create(
      list_createList(),
      list_createList()
    );
  }

  return scp_domain_cond;
}


#ifdef scp_domain_cond_MAIN

void test_scp_domain_cond(int include_optional) {
    scp_domain_cond_t* scp_domain_cond_1 = instantiate_scp_domain_cond(include_optional);

	cJSON* jsonscp_domain_cond_1 = scp_domain_cond_convertToJSON(scp_domain_cond_1);
	printf("scp_domain_cond :\n%s\n", cJSON_Print(jsonscp_domain_cond_1));
	scp_domain_cond_t* scp_domain_cond_2 = scp_domain_cond_parseFromJSON(jsonscp_domain_cond_1);
	cJSON* jsonscp_domain_cond_2 = scp_domain_cond_convertToJSON(scp_domain_cond_2);
	printf("repeating scp_domain_cond:\n%s\n", cJSON_Print(jsonscp_domain_cond_2));
}

int main() {
  test_scp_domain_cond(1);
  test_scp_domain_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_cond_MAIN
#endif // scp_domain_cond_TEST
