#ifndef service_parameter_data_TEST
#define service_parameter_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_parameter_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_parameter_data.h"
service_parameter_data_t* instantiate_service_parameter_data(int include_optional);

#include "test_snssai.c"


service_parameter_data_t* instantiate_service_parameter_data(int include_optional) {
  service_parameter_data_t* service_parameter_data = NULL;
  if (include_optional) {
    service_parameter_data = service_parameter_data_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a",
      "a",
      "0",
      "0",
      "a",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "a",
      "0",
      list_createList(),
      list_createList()
    );
  } else {
    service_parameter_data = service_parameter_data_create(
      "0",
      "0",
      NULL,
      "a",
      "a",
      "0",
      "0",
      "a",
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      "a",
      "0",
      list_createList(),
      list_createList()
    );
  }

  return service_parameter_data;
}


#ifdef service_parameter_data_MAIN

void test_service_parameter_data(int include_optional) {
    service_parameter_data_t* service_parameter_data_1 = instantiate_service_parameter_data(include_optional);

	cJSON* jsonservice_parameter_data_1 = service_parameter_data_convertToJSON(service_parameter_data_1);
	printf("service_parameter_data :\n%s\n", cJSON_Print(jsonservice_parameter_data_1));
	service_parameter_data_t* service_parameter_data_2 = service_parameter_data_parseFromJSON(jsonservice_parameter_data_1);
	cJSON* jsonservice_parameter_data_2 = service_parameter_data_convertToJSON(service_parameter_data_2);
	printf("repeating service_parameter_data:\n%s\n", cJSON_Print(jsonservice_parameter_data_2));
}

int main() {
  test_service_parameter_data(1);
  test_service_parameter_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_parameter_data_MAIN
#endif // service_parameter_data_TEST
