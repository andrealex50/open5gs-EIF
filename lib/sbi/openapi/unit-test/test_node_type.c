#ifndef node_type_TEST
#define node_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define node_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/node_type.h"
node_type_t* instantiate_node_type(int include_optional);



node_type_t* instantiate_node_type(int include_optional) {
  node_type_t* node_type = NULL;
  if (include_optional) {
    node_type = node_type_create(
    );
  } else {
    node_type = node_type_create(
    );
  }

  return node_type;
}


#ifdef node_type_MAIN

void test_node_type(int include_optional) {
    node_type_t* node_type_1 = instantiate_node_type(include_optional);

	cJSON* jsonnode_type_1 = node_type_convertToJSON(node_type_1);
	printf("node_type :\n%s\n", cJSON_Print(jsonnode_type_1));
	node_type_t* node_type_2 = node_type_parseFromJSON(jsonnode_type_1);
	cJSON* jsonnode_type_2 = node_type_convertToJSON(node_type_2);
	printf("repeating node_type:\n%s\n", cJSON_Print(jsonnode_type_2));
}

int main() {
  test_node_type(1);
  test_node_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // node_type_MAIN
#endif // node_type_TEST
