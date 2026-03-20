#ifndef context_info_TEST
#define context_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define context_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/context_info.h"
context_info_t* instantiate_context_info(int include_optional);



context_info_t* instantiate_context_info(int include_optional) {
  context_info_t* context_info = NULL;
  if (include_optional) {
    context_info = context_info_create(
      list_createList(),
      list_createList()
    );
  } else {
    context_info = context_info_create(
      list_createList(),
      list_createList()
    );
  }

  return context_info;
}


#ifdef context_info_MAIN

void test_context_info(int include_optional) {
    context_info_t* context_info_1 = instantiate_context_info(include_optional);

	cJSON* jsoncontext_info_1 = context_info_convertToJSON(context_info_1);
	printf("context_info :\n%s\n", cJSON_Print(jsoncontext_info_1));
	context_info_t* context_info_2 = context_info_parseFromJSON(jsoncontext_info_1);
	cJSON* jsoncontext_info_2 = context_info_convertToJSON(context_info_2);
	printf("repeating context_info:\n%s\n", cJSON_Print(jsoncontext_info_2));
}

int main() {
  test_context_info(1);
  test_context_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // context_info_MAIN
#endif // context_info_TEST
