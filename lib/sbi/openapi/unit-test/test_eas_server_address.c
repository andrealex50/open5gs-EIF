#ifndef eas_server_address_TEST
#define eas_server_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eas_server_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eas_server_address.h"
eas_server_address_t* instantiate_eas_server_address(int include_optional);

#include "test_ip_addr.c"


eas_server_address_t* instantiate_eas_server_address(int include_optional) {
  eas_server_address_t* eas_server_address = NULL;
  if (include_optional) {
    eas_server_address = eas_server_address_create(
       // false, not to have infinite recursion
      instantiate_ip_addr(0),
      0
    );
  } else {
    eas_server_address = eas_server_address_create(
      NULL,
      0
    );
  }

  return eas_server_address;
}


#ifdef eas_server_address_MAIN

void test_eas_server_address(int include_optional) {
    eas_server_address_t* eas_server_address_1 = instantiate_eas_server_address(include_optional);

	cJSON* jsoneas_server_address_1 = eas_server_address_convertToJSON(eas_server_address_1);
	printf("eas_server_address :\n%s\n", cJSON_Print(jsoneas_server_address_1));
	eas_server_address_t* eas_server_address_2 = eas_server_address_parseFromJSON(jsoneas_server_address_1);
	cJSON* jsoneas_server_address_2 = eas_server_address_convertToJSON(eas_server_address_2);
	printf("repeating eas_server_address:\n%s\n", cJSON_Print(jsoneas_server_address_2));
}

int main() {
  test_eas_server_address(1);
  test_eas_server_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // eas_server_address_MAIN
#endif // eas_server_address_TEST
