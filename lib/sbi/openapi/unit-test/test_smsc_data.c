#ifndef smsc_data_TEST
#define smsc_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define smsc_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/smsc_data.h"
smsc_data_t* instantiate_smsc_data(int include_optional);

#include "test_network_node_diameter_address_1.c"


smsc_data_t* instantiate_smsc_data(int include_optional) {
  smsc_data_t* smsc_data = NULL;
  if (include_optional) {
    smsc_data = smsc_data_create(
      "a",
       // false, not to have infinite recursion
      instantiate_network_node_diameter_address_1(0)
    );
  } else {
    smsc_data = smsc_data_create(
      "a",
      NULL
    );
  }

  return smsc_data;
}


#ifdef smsc_data_MAIN

void test_smsc_data(int include_optional) {
    smsc_data_t* smsc_data_1 = instantiate_smsc_data(include_optional);

	cJSON* jsonsmsc_data_1 = smsc_data_convertToJSON(smsc_data_1);
	printf("smsc_data :\n%s\n", cJSON_Print(jsonsmsc_data_1));
	smsc_data_t* smsc_data_2 = smsc_data_parseFromJSON(jsonsmsc_data_1);
	cJSON* jsonsmsc_data_2 = smsc_data_convertToJSON(smsc_data_2);
	printf("repeating smsc_data:\n%s\n", cJSON_Print(jsonsmsc_data_2));
}

int main() {
  test_smsc_data(1);
  test_smsc_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // smsc_data_MAIN
#endif // smsc_data_TEST
