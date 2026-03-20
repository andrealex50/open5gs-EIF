#ifndef ip_index_TEST
#define ip_index_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ip_index_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ip_index.h"
ip_index_t* instantiate_ip_index(int include_optional);



ip_index_t* instantiate_ip_index(int include_optional) {
  ip_index_t* ip_index = NULL;
  if (include_optional) {
    ip_index = ip_index_create(
    );
  } else {
    ip_index = ip_index_create(
    );
  }

  return ip_index;
}


#ifdef ip_index_MAIN

void test_ip_index(int include_optional) {
    ip_index_t* ip_index_1 = instantiate_ip_index(include_optional);

	cJSON* jsonip_index_1 = ip_index_convertToJSON(ip_index_1);
	printf("ip_index :\n%s\n", cJSON_Print(jsonip_index_1));
	ip_index_t* ip_index_2 = ip_index_parseFromJSON(jsonip_index_1);
	cJSON* jsonip_index_2 = ip_index_convertToJSON(ip_index_2);
	printf("repeating ip_index:\n%s\n", cJSON_Print(jsonip_index_2));
}

int main() {
  test_ip_index(1);
  test_ip_index(0);

  printf("Hello world \n");
  return 0;
}

#endif // ip_index_MAIN
#endif // ip_index_TEST
