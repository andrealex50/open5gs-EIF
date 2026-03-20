#ifndef ncgi_tai_TEST
#define ncgi_tai_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ncgi_tai_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ncgi_tai.h"
ncgi_tai_t* instantiate_ncgi_tai(int include_optional);

#include "test_tai.c"


ncgi_tai_t* instantiate_ncgi_tai(int include_optional) {
  ncgi_tai_t* ncgi_tai = NULL;
  if (include_optional) {
    ncgi_tai = ncgi_tai_create(
       // false, not to have infinite recursion
      instantiate_tai(0),
      list_createList()
    );
  } else {
    ncgi_tai = ncgi_tai_create(
      NULL,
      list_createList()
    );
  }

  return ncgi_tai;
}


#ifdef ncgi_tai_MAIN

void test_ncgi_tai(int include_optional) {
    ncgi_tai_t* ncgi_tai_1 = instantiate_ncgi_tai(include_optional);

	cJSON* jsonncgi_tai_1 = ncgi_tai_convertToJSON(ncgi_tai_1);
	printf("ncgi_tai :\n%s\n", cJSON_Print(jsonncgi_tai_1));
	ncgi_tai_t* ncgi_tai_2 = ncgi_tai_parseFromJSON(jsonncgi_tai_1);
	cJSON* jsonncgi_tai_2 = ncgi_tai_convertToJSON(ncgi_tai_2);
	printf("repeating ncgi_tai:\n%s\n", cJSON_Print(jsonncgi_tai_2));
}

int main() {
  test_ncgi_tai(1);
  test_ncgi_tai(0);

  printf("Hello world \n");
  return 0;
}

#endif // ncgi_tai_MAIN
#endif // ncgi_tai_TEST
