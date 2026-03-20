#ifndef service_parameter_data_patch_TEST
#define service_parameter_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define service_parameter_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/service_parameter_data_patch.h"
service_parameter_data_patch_t* instantiate_service_parameter_data_patch(int include_optional);



service_parameter_data_patch_t* instantiate_service_parameter_data_patch(int include_optional) {
  service_parameter_data_patch_t* service_parameter_data_patch = NULL;
  if (include_optional) {
    service_parameter_data_patch = service_parameter_data_patch_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0"
    );
  } else {
    service_parameter_data_patch = service_parameter_data_patch_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      list_createList(),
      "0"
    );
  }

  return service_parameter_data_patch;
}


#ifdef service_parameter_data_patch_MAIN

void test_service_parameter_data_patch(int include_optional) {
    service_parameter_data_patch_t* service_parameter_data_patch_1 = instantiate_service_parameter_data_patch(include_optional);

	cJSON* jsonservice_parameter_data_patch_1 = service_parameter_data_patch_convertToJSON(service_parameter_data_patch_1);
	printf("service_parameter_data_patch :\n%s\n", cJSON_Print(jsonservice_parameter_data_patch_1));
	service_parameter_data_patch_t* service_parameter_data_patch_2 = service_parameter_data_patch_parseFromJSON(jsonservice_parameter_data_patch_1);
	cJSON* jsonservice_parameter_data_patch_2 = service_parameter_data_patch_convertToJSON(service_parameter_data_patch_2);
	printf("repeating service_parameter_data_patch:\n%s\n", cJSON_Print(jsonservice_parameter_data_patch_2));
}

int main() {
  test_service_parameter_data_patch(1);
  test_service_parameter_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // service_parameter_data_patch_MAIN
#endif // service_parameter_data_patch_TEST
