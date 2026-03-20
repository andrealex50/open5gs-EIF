#ifndef eps_bearer_info_TEST
#define eps_bearer_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eps_bearer_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eps_bearer_info.h"
eps_bearer_info_t* instantiate_eps_bearer_info(int include_optional);



eps_bearer_info_t* instantiate_eps_bearer_info(int include_optional) {
  eps_bearer_info_t* eps_bearer_info = NULL;
  if (include_optional) {
    eps_bearer_info = eps_bearer_info_create(
      0,
      "YQ==",
      "YQ=="
    );
  } else {
    eps_bearer_info = eps_bearer_info_create(
      0,
      "YQ==",
      "YQ=="
    );
  }

  return eps_bearer_info;
}


#ifdef eps_bearer_info_MAIN

void test_eps_bearer_info(int include_optional) {
    eps_bearer_info_t* eps_bearer_info_1 = instantiate_eps_bearer_info(include_optional);

	cJSON* jsoneps_bearer_info_1 = eps_bearer_info_convertToJSON(eps_bearer_info_1);
	printf("eps_bearer_info :\n%s\n", cJSON_Print(jsoneps_bearer_info_1));
	eps_bearer_info_t* eps_bearer_info_2 = eps_bearer_info_parseFromJSON(jsoneps_bearer_info_1);
	cJSON* jsoneps_bearer_info_2 = eps_bearer_info_convertToJSON(eps_bearer_info_2);
	printf("repeating eps_bearer_info:\n%s\n", cJSON_Print(jsoneps_bearer_info_2));
}

int main() {
  test_eps_bearer_info(1);
  test_eps_bearer_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // eps_bearer_info_MAIN
#endif // eps_bearer_info_TEST
