#ifndef dnai_change_type_TEST
#define dnai_change_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnai_change_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnai_change_type.h"
dnai_change_type_t* instantiate_dnai_change_type(int include_optional);



dnai_change_type_t* instantiate_dnai_change_type(int include_optional) {
  dnai_change_type_t* dnai_change_type = NULL;
  if (include_optional) {
    dnai_change_type = dnai_change_type_create(
    );
  } else {
    dnai_change_type = dnai_change_type_create(
    );
  }

  return dnai_change_type;
}


#ifdef dnai_change_type_MAIN

void test_dnai_change_type(int include_optional) {
    dnai_change_type_t* dnai_change_type_1 = instantiate_dnai_change_type(include_optional);

	cJSON* jsondnai_change_type_1 = dnai_change_type_convertToJSON(dnai_change_type_1);
	printf("dnai_change_type :\n%s\n", cJSON_Print(jsondnai_change_type_1));
	dnai_change_type_t* dnai_change_type_2 = dnai_change_type_parseFromJSON(jsondnai_change_type_1);
	cJSON* jsondnai_change_type_2 = dnai_change_type_convertToJSON(dnai_change_type_2);
	printf("repeating dnai_change_type:\n%s\n", cJSON_Print(jsondnai_change_type_2));
}

int main() {
  test_dnai_change_type(1);
  test_dnai_change_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnai_change_type_MAIN
#endif // dnai_change_type_TEST
