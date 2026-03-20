#ifndef resources_allocation_info_TEST
#define resources_allocation_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resources_allocation_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resources_allocation_info.h"
resources_allocation_info_t* instantiate_resources_allocation_info(int include_optional);



resources_allocation_info_t* instantiate_resources_allocation_info(int include_optional) {
  resources_allocation_info_t* resources_allocation_info = NULL;
  if (include_optional) {
    resources_allocation_info = resources_allocation_info_create(
      npcf_policyauthorization_service_api_resources_allocation_info__ACTIVE,
      list_createList(),
      "0"
    );
  } else {
    resources_allocation_info = resources_allocation_info_create(
      npcf_policyauthorization_service_api_resources_allocation_info__ACTIVE,
      list_createList(),
      "0"
    );
  }

  return resources_allocation_info;
}


#ifdef resources_allocation_info_MAIN

void test_resources_allocation_info(int include_optional) {
    resources_allocation_info_t* resources_allocation_info_1 = instantiate_resources_allocation_info(include_optional);

	cJSON* jsonresources_allocation_info_1 = resources_allocation_info_convertToJSON(resources_allocation_info_1);
	printf("resources_allocation_info :\n%s\n", cJSON_Print(jsonresources_allocation_info_1));
	resources_allocation_info_t* resources_allocation_info_2 = resources_allocation_info_parseFromJSON(jsonresources_allocation_info_1);
	cJSON* jsonresources_allocation_info_2 = resources_allocation_info_convertToJSON(resources_allocation_info_2);
	printf("repeating resources_allocation_info:\n%s\n", cJSON_Print(jsonresources_allocation_info_2));
}

int main() {
  test_resources_allocation_info(1);
  test_resources_allocation_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // resources_allocation_info_MAIN
#endif // resources_allocation_info_TEST
