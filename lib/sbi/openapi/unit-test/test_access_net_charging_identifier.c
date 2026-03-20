#ifndef access_net_charging_identifier_TEST
#define access_net_charging_identifier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_net_charging_identifier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_net_charging_identifier.h"
access_net_charging_identifier_t* instantiate_access_net_charging_identifier(int include_optional);



access_net_charging_identifier_t* instantiate_access_net_charging_identifier(int include_optional) {
  access_net_charging_identifier_t* access_net_charging_identifier = NULL;
  if (include_optional) {
    access_net_charging_identifier = access_net_charging_identifier_create(
      0,
      "0",
      list_createList()
    );
  } else {
    access_net_charging_identifier = access_net_charging_identifier_create(
      0,
      "0",
      list_createList()
    );
  }

  return access_net_charging_identifier;
}


#ifdef access_net_charging_identifier_MAIN

void test_access_net_charging_identifier(int include_optional) {
    access_net_charging_identifier_t* access_net_charging_identifier_1 = instantiate_access_net_charging_identifier(include_optional);

	cJSON* jsonaccess_net_charging_identifier_1 = access_net_charging_identifier_convertToJSON(access_net_charging_identifier_1);
	printf("access_net_charging_identifier :\n%s\n", cJSON_Print(jsonaccess_net_charging_identifier_1));
	access_net_charging_identifier_t* access_net_charging_identifier_2 = access_net_charging_identifier_parseFromJSON(jsonaccess_net_charging_identifier_1);
	cJSON* jsonaccess_net_charging_identifier_2 = access_net_charging_identifier_convertToJSON(access_net_charging_identifier_2);
	printf("repeating access_net_charging_identifier:\n%s\n", cJSON_Print(jsonaccess_net_charging_identifier_2));
}

int main() {
  test_access_net_charging_identifier(1);
  test_access_net_charging_identifier(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_net_charging_identifier_MAIN
#endif // access_net_charging_identifier_TEST
