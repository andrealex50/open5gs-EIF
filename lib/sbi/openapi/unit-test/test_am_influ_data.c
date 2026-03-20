#ifndef am_influ_data_TEST
#define am_influ_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define am_influ_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/am_influ_data.h"
am_influ_data_t* instantiate_am_influ_data(int include_optional);



am_influ_data_t* instantiate_am_influ_data(int include_optional) {
  am_influ_data_t* am_influ_data = NULL;
  if (include_optional) {
    am_influ_data = am_influ_data_create(
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      56,
      list_createList(),
      "0",
      "0",
      list_createList(),
      1,
      list_createList(),
      "a",
      "0",
      list_createList()
    );
  } else {
    am_influ_data = am_influ_data_create(
      list_createList(),
      list_createList(),
      "a",
      "a",
      1,
      56,
      list_createList(),
      "0",
      "0",
      list_createList(),
      1,
      list_createList(),
      "a",
      "0",
      list_createList()
    );
  }

  return am_influ_data;
}


#ifdef am_influ_data_MAIN

void test_am_influ_data(int include_optional) {
    am_influ_data_t* am_influ_data_1 = instantiate_am_influ_data(include_optional);

	cJSON* jsonam_influ_data_1 = am_influ_data_convertToJSON(am_influ_data_1);
	printf("am_influ_data :\n%s\n", cJSON_Print(jsonam_influ_data_1));
	am_influ_data_t* am_influ_data_2 = am_influ_data_parseFromJSON(jsonam_influ_data_1);
	cJSON* jsonam_influ_data_2 = am_influ_data_convertToJSON(am_influ_data_2);
	printf("repeating am_influ_data:\n%s\n", cJSON_Print(jsonam_influ_data_2));
}

int main() {
  test_am_influ_data(1);
  test_am_influ_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // am_influ_data_MAIN
#endif // am_influ_data_TEST
