#ifndef service_specific_authorization_info_TEST
#define service_specific_authorization_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_specific_authorization_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_specific_authorization_info.h"
service_specific_authorization_info_t* instantiate_service_specific_authorization_info(int include_optional);



service_specific_authorization_info_t* instantiate_service_specific_authorization_info(int include_optional) {
  service_specific_authorization_info_t* service_specific_authorization_info = NULL;
  if (include_optional) {
    service_specific_authorization_info = service_specific_authorization_info_create(
      list_createList()
    );
  } else {
    service_specific_authorization_info = service_specific_authorization_info_create(
      list_createList()
    );
  }

  return service_specific_authorization_info;
}


#ifdef service_specific_authorization_info_MAIN

void test_service_specific_authorization_info(int include_optional) {
    service_specific_authorization_info_t* service_specific_authorization_info_1 = instantiate_service_specific_authorization_info(include_optional);

	cJSON* jsonservice_specific_authorization_info_1 = service_specific_authorization_info_convertToJSON(service_specific_authorization_info_1);
	printf("service_specific_authorization_info :\n%s\n", cJSON_Print(jsonservice_specific_authorization_info_1));
	service_specific_authorization_info_t* service_specific_authorization_info_2 = service_specific_authorization_info_parseFromJSON(jsonservice_specific_authorization_info_1);
	cJSON* jsonservice_specific_authorization_info_2 = service_specific_authorization_info_convertToJSON(service_specific_authorization_info_2);
	printf("repeating service_specific_authorization_info:\n%s\n", cJSON_Print(jsonservice_specific_authorization_info_2));
}

int main() {
  test_service_specific_authorization_info(1);
  test_service_specific_authorization_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_specific_authorization_info_MAIN
#endif // service_specific_authorization_info_TEST
