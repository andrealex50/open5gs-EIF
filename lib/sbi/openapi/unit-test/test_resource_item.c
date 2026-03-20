#ifndef resource_item_TEST
#define resource_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resource_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resource_item.h"
resource_item_t* instantiate_resource_item(int include_optional);



resource_item_t* instantiate_resource_item(int include_optional) {
  resource_item_t* resource_item = NULL;
  if (include_optional) {
    resource_item = resource_item_create(
      "0",
      list_createList()
    );
  } else {
    resource_item = resource_item_create(
      "0",
      list_createList()
    );
  }

  return resource_item;
}


#ifdef resource_item_MAIN

void test_resource_item(int include_optional) {
    resource_item_t* resource_item_1 = instantiate_resource_item(include_optional);

	cJSON* jsonresource_item_1 = resource_item_convertToJSON(resource_item_1);
	printf("resource_item :\n%s\n", cJSON_Print(jsonresource_item_1));
	resource_item_t* resource_item_2 = resource_item_parseFromJSON(jsonresource_item_1);
	cJSON* jsonresource_item_2 = resource_item_convertToJSON(resource_item_2);
	printf("repeating resource_item:\n%s\n", cJSON_Print(jsonresource_item_2));
}

int main() {
  test_resource_item(1);
  test_resource_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // resource_item_MAIN
#endif // resource_item_TEST
