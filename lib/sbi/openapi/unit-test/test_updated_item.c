#ifndef updated_item_TEST
#define updated_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define updated_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/updated_item.h"
updated_item_t* instantiate_updated_item(int include_optional);



updated_item_t* instantiate_updated_item(int include_optional) {
  updated_item_t* updated_item = NULL;
  if (include_optional) {
    updated_item = updated_item_create(
      "0",
      null
    );
  } else {
    updated_item = updated_item_create(
      "0",
      null
    );
  }

  return updated_item;
}


#ifdef updated_item_MAIN

void test_updated_item(int include_optional) {
    updated_item_t* updated_item_1 = instantiate_updated_item(include_optional);

	cJSON* jsonupdated_item_1 = updated_item_convertToJSON(updated_item_1);
	printf("updated_item :\n%s\n", cJSON_Print(jsonupdated_item_1));
	updated_item_t* updated_item_2 = updated_item_parseFromJSON(jsonupdated_item_1);
	cJSON* jsonupdated_item_2 = updated_item_convertToJSON(updated_item_2);
	printf("repeating updated_item:\n%s\n", cJSON_Print(jsonupdated_item_2));
}

int main() {
  test_updated_item(1);
  test_updated_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // updated_item_MAIN
#endif // updated_item_TEST
