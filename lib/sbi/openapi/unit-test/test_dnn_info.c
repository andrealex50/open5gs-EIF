#ifndef dnn_info_TEST
#define dnn_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dnn_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dnn_info.h"
dnn_info_t* instantiate_dnn_info(int include_optional);



dnn_info_t* instantiate_dnn_info(int include_optional) {
  dnn_info_t* dnn_info = NULL;
  if (include_optional) {
    dnn_info = dnn_info_create(
      "0",
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      1
    );
  } else {
    dnn_info = dnn_info_create(
      "0",
      1,
      1,
      1,
      1,
      1,
      list_createList(),
      1
    );
  }

  return dnn_info;
}


#ifdef dnn_info_MAIN

void test_dnn_info(int include_optional) {
    dnn_info_t* dnn_info_1 = instantiate_dnn_info(include_optional);

	cJSON* jsondnn_info_1 = dnn_info_convertToJSON(dnn_info_1);
	printf("dnn_info :\n%s\n", cJSON_Print(jsondnn_info_1));
	dnn_info_t* dnn_info_2 = dnn_info_parseFromJSON(jsondnn_info_1);
	cJSON* jsondnn_info_2 = dnn_info_convertToJSON(dnn_info_2);
	printf("repeating dnn_info:\n%s\n", cJSON_Print(jsondnn_info_2));
}

int main() {
  test_dnn_info(1);
  test_dnn_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // dnn_info_MAIN
#endif // dnn_info_TEST
