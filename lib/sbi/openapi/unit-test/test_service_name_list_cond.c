#ifndef service_name_list_cond_TEST
#define service_name_list_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_name_list_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_name_list_cond.h"
service_name_list_cond_t* instantiate_service_name_list_cond(int include_optional);



service_name_list_cond_t* instantiate_service_name_list_cond(int include_optional) {
  service_name_list_cond_t* service_name_list_cond = NULL;
  if (include_optional) {
    service_name_list_cond = service_name_list_cond_create(
      nrf_nfmanagement_service_service_name_list_cond_CONDITIONTYPE_SERVICE_NAME_LIST_COND,
      list_createList()
    );
  } else {
    service_name_list_cond = service_name_list_cond_create(
      nrf_nfmanagement_service_service_name_list_cond_CONDITIONTYPE_SERVICE_NAME_LIST_COND,
      list_createList()
    );
  }

  return service_name_list_cond;
}


#ifdef service_name_list_cond_MAIN

void test_service_name_list_cond(int include_optional) {
    service_name_list_cond_t* service_name_list_cond_1 = instantiate_service_name_list_cond(include_optional);

	cJSON* jsonservice_name_list_cond_1 = service_name_list_cond_convertToJSON(service_name_list_cond_1);
	printf("service_name_list_cond :\n%s\n", cJSON_Print(jsonservice_name_list_cond_1));
	service_name_list_cond_t* service_name_list_cond_2 = service_name_list_cond_parseFromJSON(jsonservice_name_list_cond_1);
	cJSON* jsonservice_name_list_cond_2 = service_name_list_cond_convertToJSON(service_name_list_cond_2);
	printf("repeating service_name_list_cond:\n%s\n", cJSON_Print(jsonservice_name_list_cond_2));
}

int main() {
  test_service_name_list_cond(1);
  test_service_name_list_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_name_list_cond_MAIN
#endif // service_name_list_cond_TEST
