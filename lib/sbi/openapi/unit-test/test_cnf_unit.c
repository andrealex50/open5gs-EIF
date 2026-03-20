#ifndef cnf_unit_TEST
#define cnf_unit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cnf_unit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cnf_unit.h"
cnf_unit_t* instantiate_cnf_unit(int include_optional);



cnf_unit_t* instantiate_cnf_unit(int include_optional) {
  cnf_unit_t* cnf_unit = NULL;
  if (include_optional) {
    cnf_unit = cnf_unit_create(
      list_createList()
    );
  } else {
    cnf_unit = cnf_unit_create(
      list_createList()
    );
  }

  return cnf_unit;
}


#ifdef cnf_unit_MAIN

void test_cnf_unit(int include_optional) {
    cnf_unit_t* cnf_unit_1 = instantiate_cnf_unit(include_optional);

	cJSON* jsoncnf_unit_1 = cnf_unit_convertToJSON(cnf_unit_1);
	printf("cnf_unit :\n%s\n", cJSON_Print(jsoncnf_unit_1));
	cnf_unit_t* cnf_unit_2 = cnf_unit_parseFromJSON(jsoncnf_unit_1);
	cJSON* jsoncnf_unit_2 = cnf_unit_convertToJSON(cnf_unit_2);
	printf("repeating cnf_unit:\n%s\n", cJSON_Print(jsoncnf_unit_2));
}

int main() {
  test_cnf_unit(1);
  test_cnf_unit(0);

  printf("Hello world \n");
  return 0;
}

#endif // cnf_unit_MAIN
#endif // cnf_unit_TEST
