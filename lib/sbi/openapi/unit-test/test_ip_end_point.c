#ifndef ip_end_point_TEST
#define ip_end_point_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_end_point_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_end_point.h"
ip_end_point_t* instantiate_ip_end_point(int include_optional);



ip_end_point_t* instantiate_ip_end_point(int include_optional) {
  ip_end_point_t* ip_end_point = NULL;
  if (include_optional) {
    ip_end_point = ip_end_point_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      nbsf_management_ip_end_point__TCP,
      0
    );
  } else {
    ip_end_point = ip_end_point_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      nbsf_management_ip_end_point__TCP,
      0
    );
  }

  return ip_end_point;
}


#ifdef ip_end_point_MAIN

void test_ip_end_point(int include_optional) {
    ip_end_point_t* ip_end_point_1 = instantiate_ip_end_point(include_optional);

	cJSON* jsonip_end_point_1 = ip_end_point_convertToJSON(ip_end_point_1);
	printf("ip_end_point :\n%s\n", cJSON_Print(jsonip_end_point_1));
	ip_end_point_t* ip_end_point_2 = ip_end_point_parseFromJSON(jsonip_end_point_1);
	cJSON* jsonip_end_point_2 = ip_end_point_convertToJSON(ip_end_point_2);
	printf("repeating ip_end_point:\n%s\n", cJSON_Print(jsonip_end_point_2));
}

int main() {
  test_ip_end_point(1);
  test_ip_end_point(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_end_point_MAIN
#endif // ip_end_point_TEST
