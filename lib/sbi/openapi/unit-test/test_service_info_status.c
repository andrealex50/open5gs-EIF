#ifndef service_info_status_TEST
#define service_info_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_info_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_info_status.h"
service_info_status_t* instantiate_service_info_status(int include_optional);



service_info_status_t* instantiate_service_info_status(int include_optional) {
  service_info_status_t* service_info_status = NULL;
  if (include_optional) {
    service_info_status = service_info_status_create(
    );
  } else {
    service_info_status = service_info_status_create(
    );
  }

  return service_info_status;
}


#ifdef service_info_status_MAIN

void test_service_info_status(int include_optional) {
    service_info_status_t* service_info_status_1 = instantiate_service_info_status(include_optional);

	cJSON* jsonservice_info_status_1 = service_info_status_convertToJSON(service_info_status_1);
	printf("service_info_status :\n%s\n", cJSON_Print(jsonservice_info_status_1));
	service_info_status_t* service_info_status_2 = service_info_status_parseFromJSON(jsonservice_info_status_1);
	cJSON* jsonservice_info_status_2 = service_info_status_convertToJSON(service_info_status_2);
	printf("repeating service_info_status:\n%s\n", cJSON_Print(jsonservice_info_status_2));
}

int main() {
  test_service_info_status(1);
  test_service_info_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_info_status_MAIN
#endif // service_info_status_TEST
