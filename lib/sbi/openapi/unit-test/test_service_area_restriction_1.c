#ifndef service_area_restriction_1_TEST
#define service_area_restriction_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_area_restriction_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_area_restriction_1.h"
service_area_restriction_1_t* instantiate_service_area_restriction_1(int include_optional);



service_area_restriction_1_t* instantiate_service_area_restriction_1(int include_optional) {
  service_area_restriction_1_t* service_area_restriction_1 = NULL;
  if (include_optional) {
    service_area_restriction_1 = service_area_restriction_1_create(
      nudr_datarepository_api_openapi_file_service_area_restriction_1__ALLOWED_AREAS,
      list_createList(),
      0,
      0
    );
  } else {
    service_area_restriction_1 = service_area_restriction_1_create(
      nudr_datarepository_api_openapi_file_service_area_restriction_1__ALLOWED_AREAS,
      list_createList(),
      0,
      0
    );
  }

  return service_area_restriction_1;
}


#ifdef service_area_restriction_1_MAIN

void test_service_area_restriction_1(int include_optional) {
    service_area_restriction_1_t* service_area_restriction_1_1 = instantiate_service_area_restriction_1(include_optional);

	cJSON* jsonservice_area_restriction_1_1 = service_area_restriction_1_convertToJSON(service_area_restriction_1_1);
	printf("service_area_restriction_1 :\n%s\n", cJSON_Print(jsonservice_area_restriction_1_1));
	service_area_restriction_1_t* service_area_restriction_1_2 = service_area_restriction_1_parseFromJSON(jsonservice_area_restriction_1_1);
	cJSON* jsonservice_area_restriction_1_2 = service_area_restriction_1_convertToJSON(service_area_restriction_1_2);
	printf("repeating service_area_restriction_1:\n%s\n", cJSON_Print(jsonservice_area_restriction_1_2));
}

int main() {
  test_service_area_restriction_1(1);
  test_service_area_restriction_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_area_restriction_1_MAIN
#endif // service_area_restriction_1_TEST
