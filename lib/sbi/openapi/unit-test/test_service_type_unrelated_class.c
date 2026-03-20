#ifndef service_type_unrelated_class_TEST
#define service_type_unrelated_class_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_type_unrelated_class_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_type_unrelated_class.h"
service_type_unrelated_class_t* instantiate_service_type_unrelated_class(int include_optional);

#include "test_valid_time_period.c"


service_type_unrelated_class_t* instantiate_service_type_unrelated_class(int include_optional) {
  service_type_unrelated_class_t* service_type_unrelated_class = NULL;
  if (include_optional) {
    service_type_unrelated_class = service_type_unrelated_class_create(
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_service_type_unrelated_class__LOCATION_NOT_ALLOWED,
      nudr_datarepository_api_openapi_file_service_type_unrelated_class__CODEWORD_CHECK_IN_UE,
       // false, not to have infinite recursion
      instantiate_valid_time_period(0),
      list_createList()
    );
  } else {
    service_type_unrelated_class = service_type_unrelated_class_create(
      0,
      list_createList(),
      nudr_datarepository_api_openapi_file_service_type_unrelated_class__LOCATION_NOT_ALLOWED,
      nudr_datarepository_api_openapi_file_service_type_unrelated_class__CODEWORD_CHECK_IN_UE,
      NULL,
      list_createList()
    );
  }

  return service_type_unrelated_class;
}


#ifdef service_type_unrelated_class_MAIN

void test_service_type_unrelated_class(int include_optional) {
    service_type_unrelated_class_t* service_type_unrelated_class_1 = instantiate_service_type_unrelated_class(include_optional);

	cJSON* jsonservice_type_unrelated_class_1 = service_type_unrelated_class_convertToJSON(service_type_unrelated_class_1);
	printf("service_type_unrelated_class :\n%s\n", cJSON_Print(jsonservice_type_unrelated_class_1));
	service_type_unrelated_class_t* service_type_unrelated_class_2 = service_type_unrelated_class_parseFromJSON(jsonservice_type_unrelated_class_1);
	cJSON* jsonservice_type_unrelated_class_2 = service_type_unrelated_class_convertToJSON(service_type_unrelated_class_2);
	printf("repeating service_type_unrelated_class:\n%s\n", cJSON_Print(jsonservice_type_unrelated_class_2));
}

int main() {
  test_service_type_unrelated_class(1);
  test_service_type_unrelated_class(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_type_unrelated_class_MAIN
#endif // service_type_unrelated_class_TEST
