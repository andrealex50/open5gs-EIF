#ifndef dnf_TEST
#define dnf_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnf_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnf.h"
dnf_t* instantiate_dnf(int include_optional);



dnf_t* instantiate_dnf(int include_optional) {
  dnf_t* dnf = NULL;
  if (include_optional) {
    dnf = dnf_create(
      list_createList()
    );
  } else {
    dnf = dnf_create(
      list_createList()
    );
  }

  return dnf;
}


#ifdef dnf_MAIN

void test_dnf(int include_optional) {
    dnf_t* dnf_1 = instantiate_dnf(include_optional);

	cJSON* jsondnf_1 = dnf_convertToJSON(dnf_1);
	printf("dnf :\n%s\n", cJSON_Print(jsondnf_1));
	dnf_t* dnf_2 = dnf_parseFromJSON(jsondnf_1);
	cJSON* jsondnf_2 = dnf_convertToJSON(dnf_2);
	printf("repeating dnf:\n%s\n", cJSON_Print(jsondnf_2));
}

int main() {
  test_dnf(1);
  test_dnf(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnf_MAIN
#endif // dnf_TEST
