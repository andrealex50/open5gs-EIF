#ifndef access_tech_any_of_TEST
#define access_tech_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_tech_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_tech_any_of.h"
access_tech_any_of_t* instantiate_access_tech_any_of(int include_optional);



access_tech_any_of_t* instantiate_access_tech_any_of(int include_optional) {
  access_tech_any_of_t* access_tech_any_of = NULL;
  if (include_optional) {
    access_tech_any_of = access_tech_any_of_create(
    );
  } else {
    access_tech_any_of = access_tech_any_of_create(
    );
  }

  return access_tech_any_of;
}


#ifdef access_tech_any_of_MAIN

void test_access_tech_any_of(int include_optional) {
    access_tech_any_of_t* access_tech_any_of_1 = instantiate_access_tech_any_of(include_optional);

	cJSON* jsonaccess_tech_any_of_1 = access_tech_any_of_convertToJSON(access_tech_any_of_1);
	printf("access_tech_any_of :\n%s\n", cJSON_Print(jsonaccess_tech_any_of_1));
	access_tech_any_of_t* access_tech_any_of_2 = access_tech_any_of_parseFromJSON(jsonaccess_tech_any_of_1);
	cJSON* jsonaccess_tech_any_of_2 = access_tech_any_of_convertToJSON(access_tech_any_of_2);
	printf("repeating access_tech_any_of:\n%s\n", cJSON_Print(jsonaccess_tech_any_of_2));
}

int main() {
  test_access_tech_any_of(1);
  test_access_tech_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_tech_any_of_MAIN
#endif // access_tech_any_of_TEST
