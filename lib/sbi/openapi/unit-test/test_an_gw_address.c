#ifndef an_gw_address_TEST
#define an_gw_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define an_gw_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/an_gw_address.h"
an_gw_address_t* instantiate_an_gw_address(int include_optional);



an_gw_address_t* instantiate_an_gw_address(int include_optional) {
  an_gw_address_t* an_gw_address = NULL;
  if (include_optional) {
    an_gw_address = an_gw_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    an_gw_address = an_gw_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return an_gw_address;
}


#ifdef an_gw_address_MAIN

void test_an_gw_address(int include_optional) {
    an_gw_address_t* an_gw_address_1 = instantiate_an_gw_address(include_optional);

	cJSON* jsonan_gw_address_1 = an_gw_address_convertToJSON(an_gw_address_1);
	printf("an_gw_address :\n%s\n", cJSON_Print(jsonan_gw_address_1));
	an_gw_address_t* an_gw_address_2 = an_gw_address_parseFromJSON(jsonan_gw_address_1);
	cJSON* jsonan_gw_address_2 = an_gw_address_convertToJSON(an_gw_address_2);
	printf("repeating an_gw_address:\n%s\n", cJSON_Print(jsonan_gw_address_2));
}

int main() {
  test_an_gw_address(1);
  test_an_gw_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // an_gw_address_MAIN
#endif // an_gw_address_TEST
