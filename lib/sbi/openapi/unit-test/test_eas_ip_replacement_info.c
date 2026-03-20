#ifndef eas_ip_replacement_info_TEST
#define eas_ip_replacement_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define eas_ip_replacement_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/eas_ip_replacement_info.h"
eas_ip_replacement_info_t* instantiate_eas_ip_replacement_info(int include_optional);

#include "test_eas_server_address.c"
#include "test_eas_server_address.c"


eas_ip_replacement_info_t* instantiate_eas_ip_replacement_info(int include_optional) {
  eas_ip_replacement_info_t* eas_ip_replacement_info = NULL;
  if (include_optional) {
    eas_ip_replacement_info = eas_ip_replacement_info_create(
       // false, not to have infinite recursion
      instantiate_eas_server_address(0),
       // false, not to have infinite recursion
      instantiate_eas_server_address(0)
    );
  } else {
    eas_ip_replacement_info = eas_ip_replacement_info_create(
      NULL,
      NULL
    );
  }

  return eas_ip_replacement_info;
}


#ifdef eas_ip_replacement_info_MAIN

void test_eas_ip_replacement_info(int include_optional) {
    eas_ip_replacement_info_t* eas_ip_replacement_info_1 = instantiate_eas_ip_replacement_info(include_optional);

	cJSON* jsoneas_ip_replacement_info_1 = eas_ip_replacement_info_convertToJSON(eas_ip_replacement_info_1);
	printf("eas_ip_replacement_info :\n%s\n", cJSON_Print(jsoneas_ip_replacement_info_1));
	eas_ip_replacement_info_t* eas_ip_replacement_info_2 = eas_ip_replacement_info_parseFromJSON(jsoneas_ip_replacement_info_1);
	cJSON* jsoneas_ip_replacement_info_2 = eas_ip_replacement_info_convertToJSON(eas_ip_replacement_info_2);
	printf("repeating eas_ip_replacement_info:\n%s\n", cJSON_Print(jsoneas_ip_replacement_info_2));
}

int main() {
  test_eas_ip_replacement_info(1);
  test_eas_ip_replacement_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // eas_ip_replacement_info_MAIN
#endif // eas_ip_replacement_info_TEST
