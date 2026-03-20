#ifndef service_area_coverage_info_TEST
#define service_area_coverage_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_area_coverage_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_area_coverage_info.h"
service_area_coverage_info_t* instantiate_service_area_coverage_info(int include_optional);

#include "test_plmn_id_nid_1.c"


service_area_coverage_info_t* instantiate_service_area_coverage_info(int include_optional) {
  service_area_coverage_info_t* service_area_coverage_info = NULL;
  if (include_optional) {
    service_area_coverage_info = service_area_coverage_info_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid_1(0)
    );
  } else {
    service_area_coverage_info = service_area_coverage_info_create(
      list_createList(),
      NULL
    );
  }

  return service_area_coverage_info;
}


#ifdef service_area_coverage_info_MAIN

void test_service_area_coverage_info(int include_optional) {
    service_area_coverage_info_t* service_area_coverage_info_1 = instantiate_service_area_coverage_info(include_optional);

	cJSON* jsonservice_area_coverage_info_1 = service_area_coverage_info_convertToJSON(service_area_coverage_info_1);
	printf("service_area_coverage_info :\n%s\n", cJSON_Print(jsonservice_area_coverage_info_1));
	service_area_coverage_info_t* service_area_coverage_info_2 = service_area_coverage_info_parseFromJSON(jsonservice_area_coverage_info_1);
	cJSON* jsonservice_area_coverage_info_2 = service_area_coverage_info_convertToJSON(service_area_coverage_info_2);
	printf("repeating service_area_coverage_info:\n%s\n", cJSON_Print(jsonservice_area_coverage_info_2));
}

int main() {
  test_service_area_coverage_info(1);
  test_service_area_coverage_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_area_coverage_info_MAIN
#endif // service_area_coverage_info_TEST
