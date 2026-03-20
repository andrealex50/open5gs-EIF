#ifndef upf_info_TEST
#define upf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upf_info.h"
upf_info_t* instantiate_upf_info(int include_optional);

#include "test_atsss_capability.c"
#include "test_w_agf_info.c"
#include "test_tngf_info.c"
#include "test_twif_info.c"


upf_info_t* instantiate_upf_info(int include_optional) {
  upf_info_t* upf_info = NULL;
  if (include_optional) {
    upf_info = upf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
       // false, not to have infinite recursion
      instantiate_atsss_capability(0),
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_w_agf_info(0),
       // false, not to have infinite recursion
      instantiate_tngf_info(0),
       // false, not to have infinite recursion
      instantiate_twif_info(0),
      0,
      1,
      1,
      1,
      "0"
    );
  } else {
    upf_info = upf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      1,
      list_createList(),
      NULL,
      1,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL,
      0,
      1,
      1,
      1,
      "0"
    );
  }

  return upf_info;
}


#ifdef upf_info_MAIN

void test_upf_info(int include_optional) {
    upf_info_t* upf_info_1 = instantiate_upf_info(include_optional);

	cJSON* jsonupf_info_1 = upf_info_convertToJSON(upf_info_1);
	printf("upf_info :\n%s\n", cJSON_Print(jsonupf_info_1));
	upf_info_t* upf_info_2 = upf_info_parseFromJSON(jsonupf_info_1);
	cJSON* jsonupf_info_2 = upf_info_convertToJSON(upf_info_2);
	printf("repeating upf_info:\n%s\n", cJSON_Print(jsonupf_info_2));
}

int main() {
  test_upf_info(1);
  test_upf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // upf_info_MAIN
#endif // upf_info_TEST
