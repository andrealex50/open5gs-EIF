#ifndef access_tech_TEST
#define access_tech_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_tech_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_tech.h"
access_tech_t* instantiate_access_tech(int include_optional);



access_tech_t* instantiate_access_tech(int include_optional) {
  access_tech_t* access_tech = NULL;
  if (include_optional) {
    access_tech = access_tech_create(
    );
  } else {
    access_tech = access_tech_create(
    );
  }

  return access_tech;
}


#ifdef access_tech_MAIN

void test_access_tech(int include_optional) {
    access_tech_t* access_tech_1 = instantiate_access_tech(include_optional);

	cJSON* jsonaccess_tech_1 = access_tech_convertToJSON(access_tech_1);
	printf("access_tech :\n%s\n", cJSON_Print(jsonaccess_tech_1));
	access_tech_t* access_tech_2 = access_tech_parseFromJSON(jsonaccess_tech_1);
	cJSON* jsonaccess_tech_2 = access_tech_convertToJSON(access_tech_2);
	printf("repeating access_tech:\n%s\n", cJSON_Print(jsonaccess_tech_2));
}

int main() {
  test_access_tech(1);
  test_access_tech(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_tech_MAIN
#endif // access_tech_TEST
