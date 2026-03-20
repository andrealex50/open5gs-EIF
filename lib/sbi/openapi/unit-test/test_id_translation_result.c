#ifndef id_translation_result_TEST
#define id_translation_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define id_translation_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/id_translation_result.h"
id_translation_result_t* instantiate_id_translation_result(int include_optional);



id_translation_result_t* instantiate_id_translation_result(int include_optional) {
  id_translation_result_t* id_translation_result = NULL;
  if (include_optional) {
    id_translation_result = id_translation_result_create(
      "a",
      "a",
      "a",
      list_createList(),
      list_createList()
    );
  } else {
    id_translation_result = id_translation_result_create(
      "a",
      "a",
      "a",
      list_createList(),
      list_createList()
    );
  }

  return id_translation_result;
}


#ifdef id_translation_result_MAIN

void test_id_translation_result(int include_optional) {
    id_translation_result_t* id_translation_result_1 = instantiate_id_translation_result(include_optional);

	cJSON* jsonid_translation_result_1 = id_translation_result_convertToJSON(id_translation_result_1);
	printf("id_translation_result :\n%s\n", cJSON_Print(jsonid_translation_result_1));
	id_translation_result_t* id_translation_result_2 = id_translation_result_parseFromJSON(jsonid_translation_result_1);
	cJSON* jsonid_translation_result_2 = id_translation_result_convertToJSON(id_translation_result_2);
	printf("repeating id_translation_result:\n%s\n", cJSON_Print(jsonid_translation_result_2));
}

int main() {
  test_id_translation_result(1);
  test_id_translation_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // id_translation_result_MAIN
#endif // id_translation_result_TEST
