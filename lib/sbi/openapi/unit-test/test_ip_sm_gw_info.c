#ifndef ip_sm_gw_info_TEST
#define ip_sm_gw_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_sm_gw_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_sm_gw_info.h"
ip_sm_gw_info_t* instantiate_ip_sm_gw_info(int include_optional);

#include "test_ip_sm_gw_registration.c"
#include "test_ip_sm_gw_guidance.c"


ip_sm_gw_info_t* instantiate_ip_sm_gw_info(int include_optional) {
  ip_sm_gw_info_t* ip_sm_gw_info = NULL;
  if (include_optional) {
    ip_sm_gw_info = ip_sm_gw_info_create(
       // false, not to have infinite recursion
      instantiate_ip_sm_gw_registration(0),
       // false, not to have infinite recursion
      instantiate_ip_sm_gw_guidance(0)
    );
  } else {
    ip_sm_gw_info = ip_sm_gw_info_create(
      NULL,
      NULL
    );
  }

  return ip_sm_gw_info;
}


#ifdef ip_sm_gw_info_MAIN

void test_ip_sm_gw_info(int include_optional) {
    ip_sm_gw_info_t* ip_sm_gw_info_1 = instantiate_ip_sm_gw_info(include_optional);

	cJSON* jsonip_sm_gw_info_1 = ip_sm_gw_info_convertToJSON(ip_sm_gw_info_1);
	printf("ip_sm_gw_info :\n%s\n", cJSON_Print(jsonip_sm_gw_info_1));
	ip_sm_gw_info_t* ip_sm_gw_info_2 = ip_sm_gw_info_parseFromJSON(jsonip_sm_gw_info_1);
	cJSON* jsonip_sm_gw_info_2 = ip_sm_gw_info_convertToJSON(ip_sm_gw_info_2);
	printf("repeating ip_sm_gw_info:\n%s\n", cJSON_Print(jsonip_sm_gw_info_2));
}

int main() {
  test_ip_sm_gw_info(1);
  test_ip_sm_gw_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_sm_gw_info_MAIN
#endif // ip_sm_gw_info_TEST
