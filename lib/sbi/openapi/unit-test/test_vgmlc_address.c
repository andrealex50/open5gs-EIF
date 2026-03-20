#ifndef vgmlc_address_TEST
#define vgmlc_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vgmlc_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vgmlc_address.h"
vgmlc_address_t* instantiate_vgmlc_address(int include_optional);



vgmlc_address_t* instantiate_vgmlc_address(int include_optional) {
  vgmlc_address_t* vgmlc_address = NULL;
  if (include_optional) {
    vgmlc_address = vgmlc_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  } else {
    vgmlc_address = vgmlc_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a"
    );
  }

  return vgmlc_address;
}


#ifdef vgmlc_address_MAIN

void test_vgmlc_address(int include_optional) {
    vgmlc_address_t* vgmlc_address_1 = instantiate_vgmlc_address(include_optional);

	cJSON* jsonvgmlc_address_1 = vgmlc_address_convertToJSON(vgmlc_address_1);
	printf("vgmlc_address :\n%s\n", cJSON_Print(jsonvgmlc_address_1));
	vgmlc_address_t* vgmlc_address_2 = vgmlc_address_parseFromJSON(jsonvgmlc_address_1);
	cJSON* jsonvgmlc_address_2 = vgmlc_address_convertToJSON(vgmlc_address_2);
	printf("repeating vgmlc_address:\n%s\n", cJSON_Print(jsonvgmlc_address_2));
}

int main() {
  test_vgmlc_address(1);
  test_vgmlc_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // vgmlc_address_MAIN
#endif // vgmlc_address_TEST
