#ifndef scp_domain_connectivity_TEST
#define scp_domain_connectivity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_connectivity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_connectivity.h"
scp_domain_connectivity_t* instantiate_scp_domain_connectivity(int include_optional);



scp_domain_connectivity_t* instantiate_scp_domain_connectivity(int include_optional) {
  scp_domain_connectivity_t* scp_domain_connectivity = NULL;
  if (include_optional) {
    scp_domain_connectivity = scp_domain_connectivity_create(
      list_createList()
    );
  } else {
    scp_domain_connectivity = scp_domain_connectivity_create(
      list_createList()
    );
  }

  return scp_domain_connectivity;
}


#ifdef scp_domain_connectivity_MAIN

void test_scp_domain_connectivity(int include_optional) {
    scp_domain_connectivity_t* scp_domain_connectivity_1 = instantiate_scp_domain_connectivity(include_optional);

	cJSON* jsonscp_domain_connectivity_1 = scp_domain_connectivity_convertToJSON(scp_domain_connectivity_1);
	printf("scp_domain_connectivity :\n%s\n", cJSON_Print(jsonscp_domain_connectivity_1));
	scp_domain_connectivity_t* scp_domain_connectivity_2 = scp_domain_connectivity_parseFromJSON(jsonscp_domain_connectivity_1);
	cJSON* jsonscp_domain_connectivity_2 = scp_domain_connectivity_convertToJSON(scp_domain_connectivity_2);
	printf("repeating scp_domain_connectivity:\n%s\n", cJSON_Print(jsonscp_domain_connectivity_2));
}

int main() {
  test_scp_domain_connectivity(1);
  test_scp_domain_connectivity(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_connectivity_MAIN
#endif // scp_domain_connectivity_TEST
