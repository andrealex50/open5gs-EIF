#ifndef dnai_information_TEST
#define dnai_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnai_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnai_information.h"
dnai_information_t* instantiate_dnai_information(int include_optional);



dnai_information_t* instantiate_dnai_information(int include_optional) {
  dnai_information_t* dnai_information = NULL;
  if (include_optional) {
    dnai_information = dnai_information_create(
      "0",
      1,
      1
    );
  } else {
    dnai_information = dnai_information_create(
      "0",
      1,
      1
    );
  }

  return dnai_information;
}


#ifdef dnai_information_MAIN

void test_dnai_information(int include_optional) {
    dnai_information_t* dnai_information_1 = instantiate_dnai_information(include_optional);

	cJSON* jsondnai_information_1 = dnai_information_convertToJSON(dnai_information_1);
	printf("dnai_information :\n%s\n", cJSON_Print(jsondnai_information_1));
	dnai_information_t* dnai_information_2 = dnai_information_parseFromJSON(jsondnai_information_1);
	cJSON* jsondnai_information_2 = dnai_information_convertToJSON(dnai_information_2);
	printf("repeating dnai_information:\n%s\n", cJSON_Print(jsondnai_information_2));
}

int main() {
  test_dnai_information(1);
  test_dnai_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnai_information_MAIN
#endif // dnai_information_TEST
