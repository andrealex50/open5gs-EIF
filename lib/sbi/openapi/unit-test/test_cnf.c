#ifndef cnf_TEST
#define cnf_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cnf_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cnf.h"
cnf_t* instantiate_cnf(int include_optional);



cnf_t* instantiate_cnf(int include_optional) {
  cnf_t* cnf = NULL;
  if (include_optional) {
    cnf = cnf_create(
      list_createList()
    );
  } else {
    cnf = cnf_create(
      list_createList()
    );
  }

  return cnf;
}


#ifdef cnf_MAIN

void test_cnf(int include_optional) {
    cnf_t* cnf_1 = instantiate_cnf(include_optional);

	cJSON* jsoncnf_1 = cnf_convertToJSON(cnf_1);
	printf("cnf :\n%s\n", cJSON_Print(jsoncnf_1));
	cnf_t* cnf_2 = cnf_parseFromJSON(jsoncnf_1);
	cJSON* jsoncnf_2 = cnf_convertToJSON(cnf_2);
	printf("repeating cnf:\n%s\n", cJSON_Print(jsoncnf_2));
}

int main() {
  test_cnf(1);
  test_cnf(0);

  printf("Hello world \n");
  return 0;
}

#endif // cnf_MAIN
#endif // cnf_TEST
