#ifndef mb_upf_info_TEST
#define mb_upf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mb_upf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mb_upf_info.h"
mb_upf_info_t* instantiate_mb_upf_info(int include_optional);



mb_upf_info_t* instantiate_mb_upf_info(int include_optional) {
  mb_upf_info_t* mb_upf_info = NULL;
  if (include_optional) {
    mb_upf_info = mb_upf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      "0"
    );
  } else {
    mb_upf_info = mb_upf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      0,
      "0"
    );
  }

  return mb_upf_info;
}


#ifdef mb_upf_info_MAIN

void test_mb_upf_info(int include_optional) {
    mb_upf_info_t* mb_upf_info_1 = instantiate_mb_upf_info(include_optional);

	cJSON* jsonmb_upf_info_1 = mb_upf_info_convertToJSON(mb_upf_info_1);
	printf("mb_upf_info :\n%s\n", cJSON_Print(jsonmb_upf_info_1));
	mb_upf_info_t* mb_upf_info_2 = mb_upf_info_parseFromJSON(jsonmb_upf_info_1);
	cJSON* jsonmb_upf_info_2 = mb_upf_info_convertToJSON(mb_upf_info_2);
	printf("repeating mb_upf_info:\n%s\n", cJSON_Print(jsonmb_upf_info_2));
}

int main() {
  test_mb_upf_info(1);
  test_mb_upf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mb_upf_info_MAIN
#endif // mb_upf_info_TEST
