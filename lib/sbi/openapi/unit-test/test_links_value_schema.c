#ifndef links_value_schema_TEST
#define links_value_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define links_value_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/links_value_schema.h"
links_value_schema_t* instantiate_links_value_schema(int include_optional);



links_value_schema_t* instantiate_links_value_schema(int include_optional) {
  links_value_schema_t* links_value_schema = NULL;
  if (include_optional) {
    links_value_schema = links_value_schema_create(
      "0"
    );
  } else {
    links_value_schema = links_value_schema_create(
      "0"
    );
  }

  return links_value_schema;
}


#ifdef links_value_schema_MAIN

void test_links_value_schema(int include_optional) {
    links_value_schema_t* links_value_schema_1 = instantiate_links_value_schema(include_optional);

	cJSON* jsonlinks_value_schema_1 = links_value_schema_convertToJSON(links_value_schema_1);
	printf("links_value_schema :\n%s\n", cJSON_Print(jsonlinks_value_schema_1));
	links_value_schema_t* links_value_schema_2 = links_value_schema_parseFromJSON(jsonlinks_value_schema_1);
	cJSON* jsonlinks_value_schema_2 = links_value_schema_convertToJSON(links_value_schema_2);
	printf("repeating links_value_schema:\n%s\n", cJSON_Print(jsonlinks_value_schema_2));
}

int main() {
  test_links_value_schema(1);
  test_links_value_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // links_value_schema_MAIN
#endif // links_value_schema_TEST
