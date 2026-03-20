#ifndef acc_net_charging_address_TEST
#define acc_net_charging_address_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acc_net_charging_address_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acc_net_charging_address.h"
acc_net_charging_address_t* instantiate_acc_net_charging_address(int include_optional);



acc_net_charging_address_t* instantiate_acc_net_charging_address(int include_optional) {
  acc_net_charging_address_t* acc_net_charging_address = NULL;
  if (include_optional) {
    acc_net_charging_address = acc_net_charging_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    acc_net_charging_address = acc_net_charging_address_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return acc_net_charging_address;
}


#ifdef acc_net_charging_address_MAIN

void test_acc_net_charging_address(int include_optional) {
    acc_net_charging_address_t* acc_net_charging_address_1 = instantiate_acc_net_charging_address(include_optional);

	cJSON* jsonacc_net_charging_address_1 = acc_net_charging_address_convertToJSON(acc_net_charging_address_1);
	printf("acc_net_charging_address :\n%s\n", cJSON_Print(jsonacc_net_charging_address_1));
	acc_net_charging_address_t* acc_net_charging_address_2 = acc_net_charging_address_parseFromJSON(jsonacc_net_charging_address_1);
	cJSON* jsonacc_net_charging_address_2 = acc_net_charging_address_convertToJSON(acc_net_charging_address_2);
	printf("repeating acc_net_charging_address:\n%s\n", cJSON_Print(jsonacc_net_charging_address_2));
}

int main() {
  test_acc_net_charging_address(1);
  test_acc_net_charging_address(0);

  printf("Hello world \n");
  return 0;
}

#endif // acc_net_charging_address_MAIN
#endif // acc_net_charging_address_TEST
