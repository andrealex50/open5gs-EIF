#ifndef ue_id_TEST
#define ue_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_id.h"
ue_id_t* instantiate_ue_id(int include_optional);



ue_id_t* instantiate_ue_id(int include_optional) {
  ue_id_t* ue_id = NULL;
  if (include_optional) {
    ue_id = ue_id_create(
      "a",
      list_createList()
    );
  } else {
    ue_id = ue_id_create(
      "a",
      list_createList()
    );
  }

  return ue_id;
}


#ifdef ue_id_MAIN

void test_ue_id(int include_optional) {
    ue_id_t* ue_id_1 = instantiate_ue_id(include_optional);

	cJSON* jsonue_id_1 = ue_id_convertToJSON(ue_id_1);
	printf("ue_id :\n%s\n", cJSON_Print(jsonue_id_1));
	ue_id_t* ue_id_2 = ue_id_parseFromJSON(jsonue_id_1);
	cJSON* jsonue_id_2 = ue_id_convertToJSON(ue_id_2);
	printf("repeating ue_id:\n%s\n", cJSON_Print(jsonue_id_2));
}

int main() {
  test_ue_id(1);
  test_ue_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_id_MAIN
#endif // ue_id_TEST
