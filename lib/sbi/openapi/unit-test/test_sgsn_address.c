#ifndef sgsn_address_TEST
#define sgsn_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sgsn_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sgsn_address.h"
sgsn_address_t* instantiate_sgsn_address(int include_optional);



sgsn_address_t* instantiate_sgsn_address(int include_optional) {
  sgsn_address_t* sgsn_address = NULL;
  if (include_optional) {
    sgsn_address = sgsn_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    sgsn_address = sgsn_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return sgsn_address;
}


#ifdef sgsn_address_MAIN

void test_sgsn_address(int include_optional) {
    sgsn_address_t* sgsn_address_1 = instantiate_sgsn_address(include_optional);

	cJSON* jsonsgsn_address_1 = sgsn_address_convertToJSON(sgsn_address_1);
	printf("sgsn_address :\n%s\n", cJSON_Print(jsonsgsn_address_1));
	sgsn_address_t* sgsn_address_2 = sgsn_address_parseFromJSON(jsonsgsn_address_1);
	cJSON* jsonsgsn_address_2 = sgsn_address_convertToJSON(sgsn_address_2);
	printf("repeating sgsn_address:\n%s\n", cJSON_Print(jsonsgsn_address_2));
}

int main() {
  test_sgsn_address(1);
  test_sgsn_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // sgsn_address_MAIN
#endif // sgsn_address_TEST
