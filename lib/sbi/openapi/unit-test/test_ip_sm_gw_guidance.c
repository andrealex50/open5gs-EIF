#ifndef ip_sm_gw_guidance_TEST
#define ip_sm_gw_guidance_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_sm_gw_guidance_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_sm_gw_guidance.h"
ip_sm_gw_guidance_t* instantiate_ip_sm_gw_guidance(int include_optional);



ip_sm_gw_guidance_t* instantiate_ip_sm_gw_guidance(int include_optional) {
  ip_sm_gw_guidance_t* ip_sm_gw_guidance = NULL;
  if (include_optional) {
    ip_sm_gw_guidance = ip_sm_gw_guidance_create(
      30,
      30
    );
  } else {
    ip_sm_gw_guidance = ip_sm_gw_guidance_create(
      30,
      30
    );
  }

  return ip_sm_gw_guidance;
}


#ifdef ip_sm_gw_guidance_MAIN

void test_ip_sm_gw_guidance(int include_optional) {
    ip_sm_gw_guidance_t* ip_sm_gw_guidance_1 = instantiate_ip_sm_gw_guidance(include_optional);

	cJSON* jsonip_sm_gw_guidance_1 = ip_sm_gw_guidance_convertToJSON(ip_sm_gw_guidance_1);
	printf("ip_sm_gw_guidance :\n%s\n", cJSON_Print(jsonip_sm_gw_guidance_1));
	ip_sm_gw_guidance_t* ip_sm_gw_guidance_2 = ip_sm_gw_guidance_parseFromJSON(jsonip_sm_gw_guidance_1);
	cJSON* jsonip_sm_gw_guidance_2 = ip_sm_gw_guidance_convertToJSON(ip_sm_gw_guidance_2);
	printf("repeating ip_sm_gw_guidance:\n%s\n", cJSON_Print(jsonip_sm_gw_guidance_2));
}

int main() {
  test_ip_sm_gw_guidance(1);
  test_ip_sm_gw_guidance(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_sm_gw_guidance_MAIN
#endif // ip_sm_gw_guidance_TEST
