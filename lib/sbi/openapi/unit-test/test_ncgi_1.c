#ifndef ncgi_1_TEST
#define ncgi_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ncgi_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ncgi_1.h"
ncgi_1_t* instantiate_ncgi_1(int include_optional);

#include "test_plmn_id_1.c"


ncgi_1_t* instantiate_ncgi_1(int include_optional) {
  ncgi_1_t* ncgi_1 = NULL;
  if (include_optional) {
    ncgi_1 = ncgi_1_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      "a",
      "a"
    );
  } else {
    ncgi_1 = ncgi_1_create(
      NULL,
      "a",
      "a"
    );
  }

  return ncgi_1;
}


#ifdef ncgi_1_MAIN

void test_ncgi_1(int include_optional) {
    ncgi_1_t* ncgi_1_1 = instantiate_ncgi_1(include_optional);

	cJSON* jsonncgi_1_1 = ncgi_1_convertToJSON(ncgi_1_1);
	printf("ncgi_1 :\n%s\n", cJSON_Print(jsonncgi_1_1));
	ncgi_1_t* ncgi_1_2 = ncgi_1_parseFromJSON(jsonncgi_1_1);
	cJSON* jsonncgi_1_2 = ncgi_1_convertToJSON(ncgi_1_2);
	printf("repeating ncgi_1:\n%s\n", cJSON_Print(jsonncgi_1_2));
}

int main() {
  test_ncgi_1(1);
  test_ncgi_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // ncgi_1_MAIN
#endif // ncgi_1_TEST
