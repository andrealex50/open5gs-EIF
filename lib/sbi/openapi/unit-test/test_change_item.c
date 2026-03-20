#ifndef change_item_TEST
#define change_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define change_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/change_item.h"
change_item_t* instantiate_change_item(int include_optional);



change_item_t* instantiate_change_item(int include_optional) {
  change_item_t* change_item = NULL;
  if (include_optional) {
    change_item = change_item_create(
      nudr_datarepository_api_openapi_file_change_item__ADD,
      "0",
      "0",
      null,
      null
    );
  } else {
    change_item = change_item_create(
      nudr_datarepository_api_openapi_file_change_item__ADD,
      "0",
      "0",
      null,
      null
    );
  }

  return change_item;
}


#ifdef change_item_MAIN

void test_change_item(int include_optional) {
    change_item_t* change_item_1 = instantiate_change_item(include_optional);

	cJSON* jsonchange_item_1 = change_item_convertToJSON(change_item_1);
	printf("change_item :\n%s\n", cJSON_Print(jsonchange_item_1));
	change_item_t* change_item_2 = change_item_parseFromJSON(jsonchange_item_1);
	cJSON* jsonchange_item_2 = change_item_convertToJSON(change_item_2);
	printf("repeating change_item:\n%s\n", cJSON_Print(jsonchange_item_2));
}

int main() {
  test_change_item(1);
  test_change_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // change_item_MAIN
#endif // change_item_TEST
