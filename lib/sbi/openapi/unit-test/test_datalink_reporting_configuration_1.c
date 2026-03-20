#ifndef datalink_reporting_configuration_1_TEST
#define datalink_reporting_configuration_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define datalink_reporting_configuration_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/datalink_reporting_configuration_1.h"
datalink_reporting_configuration_1_t* instantiate_datalink_reporting_configuration_1(int include_optional);

#include "test_snssai.c"


datalink_reporting_configuration_1_t* instantiate_datalink_reporting_configuration_1(int include_optional) {
  datalink_reporting_configuration_1_t* datalink_reporting_configuration_1 = NULL;
  if (include_optional) {
    datalink_reporting_configuration_1 = datalink_reporting_configuration_1_create(
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList()
    );
  } else {
    datalink_reporting_configuration_1 = datalink_reporting_configuration_1_create(
      list_createList(),
      "0",
      NULL,
      list_createList()
    );
  }

  return datalink_reporting_configuration_1;
}


#ifdef datalink_reporting_configuration_1_MAIN

void test_datalink_reporting_configuration_1(int include_optional) {
    datalink_reporting_configuration_1_t* datalink_reporting_configuration_1_1 = instantiate_datalink_reporting_configuration_1(include_optional);

	cJSON* jsondatalink_reporting_configuration_1_1 = datalink_reporting_configuration_1_convertToJSON(datalink_reporting_configuration_1_1);
	printf("datalink_reporting_configuration_1 :\n%s\n", cJSON_Print(jsondatalink_reporting_configuration_1_1));
	datalink_reporting_configuration_1_t* datalink_reporting_configuration_1_2 = datalink_reporting_configuration_1_parseFromJSON(jsondatalink_reporting_configuration_1_1);
	cJSON* jsondatalink_reporting_configuration_1_2 = datalink_reporting_configuration_1_convertToJSON(datalink_reporting_configuration_1_2);
	printf("repeating datalink_reporting_configuration_1:\n%s\n", cJSON_Print(jsondatalink_reporting_configuration_1_2));
}

int main() {
  test_datalink_reporting_configuration_1(1);
  test_datalink_reporting_configuration_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // datalink_reporting_configuration_1_MAIN
#endif // datalink_reporting_configuration_1_TEST
