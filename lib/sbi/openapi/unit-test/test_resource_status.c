#ifndef resource_status_TEST
#define resource_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_status.h"
resource_status_t* instantiate_resource_status(int include_optional);



resource_status_t* instantiate_resource_status(int include_optional) {
  resource_status_t* resource_status = NULL;
  if (include_optional) {
    resource_status = resource_status_create(
    );
  } else {
    resource_status = resource_status_create(
    );
  }

  return resource_status;
}


#ifdef resource_status_MAIN

void test_resource_status(int include_optional) {
    resource_status_t* resource_status_1 = instantiate_resource_status(include_optional);

	cJSON* jsonresource_status_1 = resource_status_convertToJSON(resource_status_1);
	printf("resource_status :\n%s\n", cJSON_Print(jsonresource_status_1));
	resource_status_t* resource_status_2 = resource_status_parseFromJSON(jsonresource_status_1);
	cJSON* jsonresource_status_2 = resource_status_convertToJSON(resource_status_2);
	printf("repeating resource_status:\n%s\n", cJSON_Print(jsonresource_status_2));
}

int main() {
  test_resource_status(1);
  test_resource_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_status_MAIN
#endif // resource_status_TEST
