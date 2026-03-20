#ifndef eps_interworking_indication_TEST
#define eps_interworking_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eps_interworking_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eps_interworking_indication.h"
eps_interworking_indication_t* instantiate_eps_interworking_indication(int include_optional);



eps_interworking_indication_t* instantiate_eps_interworking_indication(int include_optional) {
  eps_interworking_indication_t* eps_interworking_indication = NULL;
  if (include_optional) {
    eps_interworking_indication = eps_interworking_indication_create(
    );
  } else {
    eps_interworking_indication = eps_interworking_indication_create(
    );
  }

  return eps_interworking_indication;
}


#ifdef eps_interworking_indication_MAIN

void test_eps_interworking_indication(int include_optional) {
    eps_interworking_indication_t* eps_interworking_indication_1 = instantiate_eps_interworking_indication(include_optional);

	cJSON* jsoneps_interworking_indication_1 = eps_interworking_indication_convertToJSON(eps_interworking_indication_1);
	printf("eps_interworking_indication :\n%s\n", cJSON_Print(jsoneps_interworking_indication_1));
	eps_interworking_indication_t* eps_interworking_indication_2 = eps_interworking_indication_parseFromJSON(jsoneps_interworking_indication_1);
	cJSON* jsoneps_interworking_indication_2 = eps_interworking_indication_convertToJSON(eps_interworking_indication_2);
	printf("repeating eps_interworking_indication:\n%s\n", cJSON_Print(jsoneps_interworking_indication_2));
}

int main() {
  test_eps_interworking_indication(1);
  test_eps_interworking_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // eps_interworking_indication_MAIN
#endif // eps_interworking_indication_TEST
