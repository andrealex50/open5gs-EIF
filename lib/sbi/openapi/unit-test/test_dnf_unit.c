#ifndef dnf_unit_TEST
#define dnf_unit_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnf_unit_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnf_unit.h"
dnf_unit_t* instantiate_dnf_unit(int include_optional);



dnf_unit_t* instantiate_dnf_unit(int include_optional) {
  dnf_unit_t* dnf_unit = NULL;
  if (include_optional) {
    dnf_unit = dnf_unit_create(
      list_createList()
    );
  } else {
    dnf_unit = dnf_unit_create(
      list_createList()
    );
  }

  return dnf_unit;
}


#ifdef dnf_unit_MAIN

void test_dnf_unit(int include_optional) {
    dnf_unit_t* dnf_unit_1 = instantiate_dnf_unit(include_optional);

	cJSON* jsondnf_unit_1 = dnf_unit_convertToJSON(dnf_unit_1);
	printf("dnf_unit :\n%s\n", cJSON_Print(jsondnf_unit_1));
	dnf_unit_t* dnf_unit_2 = dnf_unit_parseFromJSON(jsondnf_unit_1);
	cJSON* jsondnf_unit_2 = dnf_unit_convertToJSON(dnf_unit_2);
	printf("repeating dnf_unit:\n%s\n", cJSON_Print(jsondnf_unit_2));
}

int main() {
  test_dnf_unit(1);
  test_dnf_unit(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnf_unit_MAIN
#endif // dnf_unit_TEST
