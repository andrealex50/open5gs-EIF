#ifndef indirect_data_forwarding_tunnel_info_TEST
#define indirect_data_forwarding_tunnel_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirect_data_forwarding_tunnel_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirect_data_forwarding_tunnel_info.h"
indirect_data_forwarding_tunnel_info_t* instantiate_indirect_data_forwarding_tunnel_info(int include_optional);



indirect_data_forwarding_tunnel_info_t* instantiate_indirect_data_forwarding_tunnel_info(int include_optional) {
  indirect_data_forwarding_tunnel_info_t* indirect_data_forwarding_tunnel_info = NULL;
  if (include_optional) {
    indirect_data_forwarding_tunnel_info = indirect_data_forwarding_tunnel_info_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      1,
      1
    );
  } else {
    indirect_data_forwarding_tunnel_info = indirect_data_forwarding_tunnel_info_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      1,
      1
    );
  }

  return indirect_data_forwarding_tunnel_info;
}


#ifdef indirect_data_forwarding_tunnel_info_MAIN

void test_indirect_data_forwarding_tunnel_info(int include_optional) {
    indirect_data_forwarding_tunnel_info_t* indirect_data_forwarding_tunnel_info_1 = instantiate_indirect_data_forwarding_tunnel_info(include_optional);

	cJSON* jsonindirect_data_forwarding_tunnel_info_1 = indirect_data_forwarding_tunnel_info_convertToJSON(indirect_data_forwarding_tunnel_info_1);
	printf("indirect_data_forwarding_tunnel_info :\n%s\n", cJSON_Print(jsonindirect_data_forwarding_tunnel_info_1));
	indirect_data_forwarding_tunnel_info_t* indirect_data_forwarding_tunnel_info_2 = indirect_data_forwarding_tunnel_info_parseFromJSON(jsonindirect_data_forwarding_tunnel_info_1);
	cJSON* jsonindirect_data_forwarding_tunnel_info_2 = indirect_data_forwarding_tunnel_info_convertToJSON(indirect_data_forwarding_tunnel_info_2);
	printf("repeating indirect_data_forwarding_tunnel_info:\n%s\n", cJSON_Print(jsonindirect_data_forwarding_tunnel_info_2));
}

int main() {
  test_indirect_data_forwarding_tunnel_info(1);
  test_indirect_data_forwarding_tunnel_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirect_data_forwarding_tunnel_info_MAIN
#endif // indirect_data_forwarding_tunnel_info_TEST
