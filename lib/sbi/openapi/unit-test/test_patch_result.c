#ifndef patch_result_TEST
#define patch_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define patch_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/patch_result.h"
patch_result_t* instantiate_patch_result(int include_optional);



patch_result_t* instantiate_patch_result(int include_optional) {
  patch_result_t* patch_result = NULL;
  if (include_optional) {
    patch_result = patch_result_create(
      list_createList()
    );
  } else {
    patch_result = patch_result_create(
      list_createList()
    );
  }

  return patch_result;
}


#ifdef patch_result_MAIN

void test_patch_result(int include_optional) {
    patch_result_t* patch_result_1 = instantiate_patch_result(include_optional);

	cJSON* jsonpatch_result_1 = patch_result_convertToJSON(patch_result_1);
	printf("patch_result :\n%s\n", cJSON_Print(jsonpatch_result_1));
	patch_result_t* patch_result_2 = patch_result_parseFromJSON(jsonpatch_result_1);
	cJSON* jsonpatch_result_2 = patch_result_convertToJSON(patch_result_2);
	printf("repeating patch_result:\n%s\n", cJSON_Print(jsonpatch_result_2));
}

int main() {
  test_patch_result(1);
  test_patch_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // patch_result_MAIN
#endif // patch_result_TEST
