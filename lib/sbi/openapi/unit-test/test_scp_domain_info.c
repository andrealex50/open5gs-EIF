#ifndef scp_domain_info_TEST
#define scp_domain_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define scp_domain_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/scp_domain_info.h"
scp_domain_info_t* instantiate_scp_domain_info(int include_optional);



scp_domain_info_t* instantiate_scp_domain_info(int include_optional) {
  scp_domain_info_t* scp_domain_info = NULL;
  if (include_optional) {
    scp_domain_info = scp_domain_info_create(
      "a",
      list_createList(),
      "0",
      list_createList()
    );
  } else {
    scp_domain_info = scp_domain_info_create(
      "a",
      list_createList(),
      "0",
      list_createList()
    );
  }

  return scp_domain_info;
}


#ifdef scp_domain_info_MAIN

void test_scp_domain_info(int include_optional) {
    scp_domain_info_t* scp_domain_info_1 = instantiate_scp_domain_info(include_optional);

	cJSON* jsonscp_domain_info_1 = scp_domain_info_convertToJSON(scp_domain_info_1);
	printf("scp_domain_info :\n%s\n", cJSON_Print(jsonscp_domain_info_1));
	scp_domain_info_t* scp_domain_info_2 = scp_domain_info_parseFromJSON(jsonscp_domain_info_1);
	cJSON* jsonscp_domain_info_2 = scp_domain_info_convertToJSON(scp_domain_info_2);
	printf("repeating scp_domain_info:\n%s\n", cJSON_Print(jsonscp_domain_info_2));
}

int main() {
  test_scp_domain_info(1);
  test_scp_domain_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // scp_domain_info_MAIN
#endif // scp_domain_info_TEST
