#ifndef eps_pdn_cnx_info_TEST
#define eps_pdn_cnx_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eps_pdn_cnx_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eps_pdn_cnx_info.h"
eps_pdn_cnx_info_t* instantiate_eps_pdn_cnx_info(int include_optional);



eps_pdn_cnx_info_t* instantiate_eps_pdn_cnx_info(int include_optional) {
  eps_pdn_cnx_info_t* eps_pdn_cnx_info = NULL;
  if (include_optional) {
    eps_pdn_cnx_info = eps_pdn_cnx_info_create(
      "YQ==",
      "YQ==",
      0
    );
  } else {
    eps_pdn_cnx_info = eps_pdn_cnx_info_create(
      "YQ==",
      "YQ==",
      0
    );
  }

  return eps_pdn_cnx_info;
}


#ifdef eps_pdn_cnx_info_MAIN

void test_eps_pdn_cnx_info(int include_optional) {
    eps_pdn_cnx_info_t* eps_pdn_cnx_info_1 = instantiate_eps_pdn_cnx_info(include_optional);

	cJSON* jsoneps_pdn_cnx_info_1 = eps_pdn_cnx_info_convertToJSON(eps_pdn_cnx_info_1);
	printf("eps_pdn_cnx_info :\n%s\n", cJSON_Print(jsoneps_pdn_cnx_info_1));
	eps_pdn_cnx_info_t* eps_pdn_cnx_info_2 = eps_pdn_cnx_info_parseFromJSON(jsoneps_pdn_cnx_info_1);
	cJSON* jsoneps_pdn_cnx_info_2 = eps_pdn_cnx_info_convertToJSON(eps_pdn_cnx_info_2);
	printf("repeating eps_pdn_cnx_info:\n%s\n", cJSON_Print(jsoneps_pdn_cnx_info_2));
}

int main() {
  test_eps_pdn_cnx_info(1);
  test_eps_pdn_cnx_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // eps_pdn_cnx_info_MAIN
#endif // eps_pdn_cnx_info_TEST
