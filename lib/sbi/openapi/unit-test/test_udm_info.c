#ifndef udm_info_TEST
#define udm_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define udm_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/udm_info.h"
udm_info_t* instantiate_udm_info(int include_optional);



udm_info_t* instantiate_udm_info(int include_optional) {
  udm_info_t* udm_info = NULL;
  if (include_optional) {
    udm_info = udm_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    udm_info = udm_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return udm_info;
}


#ifdef udm_info_MAIN

void test_udm_info(int include_optional) {
    udm_info_t* udm_info_1 = instantiate_udm_info(include_optional);

	cJSON* jsonudm_info_1 = udm_info_convertToJSON(udm_info_1);
	printf("udm_info :\n%s\n", cJSON_Print(jsonudm_info_1));
	udm_info_t* udm_info_2 = udm_info_parseFromJSON(jsonudm_info_1);
	cJSON* jsonudm_info_2 = udm_info_convertToJSON(udm_info_2);
	printf("repeating udm_info:\n%s\n", cJSON_Print(jsonudm_info_2));
}

int main() {
  test_udm_info(1);
  test_udm_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // udm_info_MAIN
#endif // udm_info_TEST
