#ifndef psa_information_TEST
#define psa_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define psa_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/psa_information.h"
psa_information_t* instantiate_psa_information(int include_optional);



psa_information_t* instantiate_psa_information(int include_optional) {
  psa_information_t* psa_information = NULL;
  if (include_optional) {
    psa_information = psa_information_create(
      nsmf_pdusession_psa_information__PSA_INSERTED,
      list_createList(),
      "2001:db8:abcd:12::0/64",
      "0"
    );
  } else {
    psa_information = psa_information_create(
      nsmf_pdusession_psa_information__PSA_INSERTED,
      list_createList(),
      "2001:db8:abcd:12::0/64",
      "0"
    );
  }

  return psa_information;
}


#ifdef psa_information_MAIN

void test_psa_information(int include_optional) {
    psa_information_t* psa_information_1 = instantiate_psa_information(include_optional);

	cJSON* jsonpsa_information_1 = psa_information_convertToJSON(psa_information_1);
	printf("psa_information :\n%s\n", cJSON_Print(jsonpsa_information_1));
	psa_information_t* psa_information_2 = psa_information_parseFromJSON(jsonpsa_information_1);
	cJSON* jsonpsa_information_2 = psa_information_convertToJSON(psa_information_2);
	printf("repeating psa_information:\n%s\n", cJSON_Print(jsonpsa_information_2));
}

int main() {
  test_psa_information(1);
  test_psa_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // psa_information_MAIN
#endif // psa_information_TEST
