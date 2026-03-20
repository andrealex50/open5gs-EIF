#ifndef net_loc_access_support_TEST
#define net_loc_access_support_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define net_loc_access_support_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/net_loc_access_support.h"
net_loc_access_support_t* instantiate_net_loc_access_support(int include_optional);



net_loc_access_support_t* instantiate_net_loc_access_support(int include_optional) {
  net_loc_access_support_t* net_loc_access_support = NULL;
  if (include_optional) {
    net_loc_access_support = net_loc_access_support_create(
    );
  } else {
    net_loc_access_support = net_loc_access_support_create(
    );
  }

  return net_loc_access_support;
}


#ifdef net_loc_access_support_MAIN

void test_net_loc_access_support(int include_optional) {
    net_loc_access_support_t* net_loc_access_support_1 = instantiate_net_loc_access_support(include_optional);

	cJSON* jsonnet_loc_access_support_1 = net_loc_access_support_convertToJSON(net_loc_access_support_1);
	printf("net_loc_access_support :\n%s\n", cJSON_Print(jsonnet_loc_access_support_1));
	net_loc_access_support_t* net_loc_access_support_2 = net_loc_access_support_parseFromJSON(jsonnet_loc_access_support_1);
	cJSON* jsonnet_loc_access_support_2 = net_loc_access_support_convertToJSON(net_loc_access_support_2);
	printf("repeating net_loc_access_support:\n%s\n", cJSON_Print(jsonnet_loc_access_support_2));
}

int main() {
  test_net_loc_access_support(1);
  test_net_loc_access_support(0);

  printf("Hello world \n");
  return 0;
}

#endif // net_loc_access_support_MAIN
#endif // net_loc_access_support_TEST
