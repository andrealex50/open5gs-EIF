#ifndef access_right_status_TEST
#define access_right_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_right_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_right_status.h"
access_right_status_t* instantiate_access_right_status(int include_optional);



access_right_status_t* instantiate_access_right_status(int include_optional) {
  access_right_status_t* access_right_status = NULL;
  if (include_optional) {
    access_right_status = access_right_status_create(
    );
  } else {
    access_right_status = access_right_status_create(
    );
  }

  return access_right_status;
}


#ifdef access_right_status_MAIN

void test_access_right_status(int include_optional) {
    access_right_status_t* access_right_status_1 = instantiate_access_right_status(include_optional);

	cJSON* jsonaccess_right_status_1 = access_right_status_convertToJSON(access_right_status_1);
	printf("access_right_status :\n%s\n", cJSON_Print(jsonaccess_right_status_1));
	access_right_status_t* access_right_status_2 = access_right_status_parseFromJSON(jsonaccess_right_status_1);
	cJSON* jsonaccess_right_status_2 = access_right_status_convertToJSON(access_right_status_2);
	printf("repeating access_right_status:\n%s\n", cJSON_Print(jsonaccess_right_status_2));
}

int main() {
  test_access_right_status(1);
  test_access_right_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_right_status_MAIN
#endif // access_right_status_TEST
