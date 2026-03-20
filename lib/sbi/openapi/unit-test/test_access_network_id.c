#ifndef access_network_id_TEST
#define access_network_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define access_network_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/access_network_id.h"
access_network_id_t* instantiate_access_network_id(int include_optional);



access_network_id_t* instantiate_access_network_id(int include_optional) {
  access_network_id_t* access_network_id = NULL;
  if (include_optional) {
    access_network_id = access_network_id_create(
    );
  } else {
    access_network_id = access_network_id_create(
    );
  }

  return access_network_id;
}


#ifdef access_network_id_MAIN

void test_access_network_id(int include_optional) {
    access_network_id_t* access_network_id_1 = instantiate_access_network_id(include_optional);

	cJSON* jsonaccess_network_id_1 = access_network_id_convertToJSON(access_network_id_1);
	printf("access_network_id :\n%s\n", cJSON_Print(jsonaccess_network_id_1));
	access_network_id_t* access_network_id_2 = access_network_id_parseFromJSON(jsonaccess_network_id_1);
	cJSON* jsonaccess_network_id_2 = access_network_id_convertToJSON(access_network_id_2);
	printf("repeating access_network_id:\n%s\n", cJSON_Print(jsonaccess_network_id_2));
}

int main() {
  test_access_network_id(1);
  test_access_network_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // access_network_id_MAIN
#endif // access_network_id_TEST
