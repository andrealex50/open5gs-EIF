#ifndef psa_indication_TEST
#define psa_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define psa_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/psa_indication.h"
psa_indication_t* instantiate_psa_indication(int include_optional);



psa_indication_t* instantiate_psa_indication(int include_optional) {
  psa_indication_t* psa_indication = NULL;
  if (include_optional) {
    psa_indication = psa_indication_create(
    );
  } else {
    psa_indication = psa_indication_create(
    );
  }

  return psa_indication;
}


#ifdef psa_indication_MAIN

void test_psa_indication(int include_optional) {
    psa_indication_t* psa_indication_1 = instantiate_psa_indication(include_optional);

	cJSON* jsonpsa_indication_1 = psa_indication_convertToJSON(psa_indication_1);
	printf("psa_indication :\n%s\n", cJSON_Print(jsonpsa_indication_1));
	psa_indication_t* psa_indication_2 = psa_indication_parseFromJSON(jsonpsa_indication_1);
	cJSON* jsonpsa_indication_2 = psa_indication_convertToJSON(psa_indication_2);
	printf("repeating psa_indication:\n%s\n", cJSON_Print(jsonpsa_indication_2));
}

int main() {
  test_psa_indication(1);
  test_psa_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // psa_indication_MAIN
#endif // psa_indication_TEST
