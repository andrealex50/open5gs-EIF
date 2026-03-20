#ifndef multicast_access_control_TEST
#define multicast_access_control_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multicast_access_control_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multicast_access_control.h"
multicast_access_control_t* instantiate_multicast_access_control(int include_optional);

#include "test_access_right_status.c"


multicast_access_control_t* instantiate_multicast_access_control(int include_optional) {
  multicast_access_control_t* multicast_access_control = NULL;
  if (include_optional) {
    multicast_access_control = multicast_access_control_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      null
    );
  } else {
    multicast_access_control = multicast_access_control_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      null
    );
  }

  return multicast_access_control;
}


#ifdef multicast_access_control_MAIN

void test_multicast_access_control(int include_optional) {
    multicast_access_control_t* multicast_access_control_1 = instantiate_multicast_access_control(include_optional);

	cJSON* jsonmulticast_access_control_1 = multicast_access_control_convertToJSON(multicast_access_control_1);
	printf("multicast_access_control :\n%s\n", cJSON_Print(jsonmulticast_access_control_1));
	multicast_access_control_t* multicast_access_control_2 = multicast_access_control_parseFromJSON(jsonmulticast_access_control_1);
	cJSON* jsonmulticast_access_control_2 = multicast_access_control_convertToJSON(multicast_access_control_2);
	printf("repeating multicast_access_control:\n%s\n", cJSON_Print(jsonmulticast_access_control_2));
}

int main() {
  test_multicast_access_control(1);
  test_multicast_access_control(0);

  printf("Hello world \n");
  return 0;
}

#endif // multicast_access_control_MAIN
#endif // multicast_access_control_TEST
