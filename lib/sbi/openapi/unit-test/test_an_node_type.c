#ifndef an_node_type_TEST
#define an_node_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define an_node_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/an_node_type.h"
an_node_type_t* instantiate_an_node_type(int include_optional);



an_node_type_t* instantiate_an_node_type(int include_optional) {
  an_node_type_t* an_node_type = NULL;
  if (include_optional) {
    an_node_type = an_node_type_create(
    );
  } else {
    an_node_type = an_node_type_create(
    );
  }

  return an_node_type;
}


#ifdef an_node_type_MAIN

void test_an_node_type(int include_optional) {
    an_node_type_t* an_node_type_1 = instantiate_an_node_type(include_optional);

	cJSON* jsonan_node_type_1 = an_node_type_convertToJSON(an_node_type_1);
	printf("an_node_type :\n%s\n", cJSON_Print(jsonan_node_type_1));
	an_node_type_t* an_node_type_2 = an_node_type_parseFromJSON(jsonan_node_type_1);
	cJSON* jsonan_node_type_2 = an_node_type_convertToJSON(an_node_type_2);
	printf("repeating an_node_type:\n%s\n", cJSON_Print(jsonan_node_type_2));
}

int main() {
  test_an_node_type(1);
  test_an_node_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // an_node_type_MAIN
#endif // an_node_type_TEST
