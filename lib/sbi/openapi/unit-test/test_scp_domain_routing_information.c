#ifndef scp_domain_routing_information_TEST
#define scp_domain_routing_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_routing_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_routing_information.h"
scp_domain_routing_information_t* instantiate_scp_domain_routing_information(int include_optional);



scp_domain_routing_information_t* instantiate_scp_domain_routing_information(int include_optional) {
  scp_domain_routing_information_t* scp_domain_routing_information = NULL;
  if (include_optional) {
    scp_domain_routing_information = scp_domain_routing_information_create(
      list_createList()
    );
  } else {
    scp_domain_routing_information = scp_domain_routing_information_create(
      list_createList()
    );
  }

  return scp_domain_routing_information;
}


#ifdef scp_domain_routing_information_MAIN

void test_scp_domain_routing_information(int include_optional) {
    scp_domain_routing_information_t* scp_domain_routing_information_1 = instantiate_scp_domain_routing_information(include_optional);

	cJSON* jsonscp_domain_routing_information_1 = scp_domain_routing_information_convertToJSON(scp_domain_routing_information_1);
	printf("scp_domain_routing_information :\n%s\n", cJSON_Print(jsonscp_domain_routing_information_1));
	scp_domain_routing_information_t* scp_domain_routing_information_2 = scp_domain_routing_information_parseFromJSON(jsonscp_domain_routing_information_1);
	cJSON* jsonscp_domain_routing_information_2 = scp_domain_routing_information_convertToJSON(scp_domain_routing_information_2);
	printf("repeating scp_domain_routing_information:\n%s\n", cJSON_Print(jsonscp_domain_routing_information_2));
}

int main() {
  test_scp_domain_routing_information(1);
  test_scp_domain_routing_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_routing_information_MAIN
#endif // scp_domain_routing_information_TEST
