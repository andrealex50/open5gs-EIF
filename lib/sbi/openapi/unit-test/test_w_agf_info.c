#ifndef w_agf_info_TEST
#define w_agf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define w_agf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/w_agf_info.h"
w_agf_info_t* instantiate_w_agf_info(int include_optional);



w_agf_info_t* instantiate_w_agf_info(int include_optional) {
  w_agf_info_t* w_agf_info = NULL;
  if (include_optional) {
    w_agf_info = w_agf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    w_agf_info = w_agf_info_create(
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return w_agf_info;
}


#ifdef w_agf_info_MAIN

void test_w_agf_info(int include_optional) {
    w_agf_info_t* w_agf_info_1 = instantiate_w_agf_info(include_optional);

	cJSON* jsonw_agf_info_1 = w_agf_info_convertToJSON(w_agf_info_1);
	printf("w_agf_info :\n%s\n", cJSON_Print(jsonw_agf_info_1));
	w_agf_info_t* w_agf_info_2 = w_agf_info_parseFromJSON(jsonw_agf_info_1);
	cJSON* jsonw_agf_info_2 = w_agf_info_convertToJSON(w_agf_info_2);
	printf("repeating w_agf_info:\n%s\n", cJSON_Print(jsonw_agf_info_2));
}

int main() {
  test_w_agf_info(1);
  test_w_agf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // w_agf_info_MAIN
#endif // w_agf_info_TEST
