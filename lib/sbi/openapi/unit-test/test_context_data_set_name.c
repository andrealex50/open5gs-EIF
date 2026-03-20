#ifndef context_data_set_name_TEST
#define context_data_set_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define context_data_set_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/context_data_set_name.h"
context_data_set_name_t* instantiate_context_data_set_name(int include_optional);



context_data_set_name_t* instantiate_context_data_set_name(int include_optional) {
  context_data_set_name_t* context_data_set_name = NULL;
  if (include_optional) {
    context_data_set_name = context_data_set_name_create(
    );
  } else {
    context_data_set_name = context_data_set_name_create(
    );
  }

  return context_data_set_name;
}


#ifdef context_data_set_name_MAIN

void test_context_data_set_name(int include_optional) {
    context_data_set_name_t* context_data_set_name_1 = instantiate_context_data_set_name(include_optional);

	cJSON* jsoncontext_data_set_name_1 = context_data_set_name_convertToJSON(context_data_set_name_1);
	printf("context_data_set_name :\n%s\n", cJSON_Print(jsoncontext_data_set_name_1));
	context_data_set_name_t* context_data_set_name_2 = context_data_set_name_parseFromJSON(jsoncontext_data_set_name_1);
	cJSON* jsoncontext_data_set_name_2 = context_data_set_name_convertToJSON(context_data_set_name_2);
	printf("repeating context_data_set_name:\n%s\n", cJSON_Print(jsoncontext_data_set_name_2));
}

int main() {
  test_context_data_set_name(1);
  test_context_data_set_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // context_data_set_name_MAIN
#endif // context_data_set_name_TEST
