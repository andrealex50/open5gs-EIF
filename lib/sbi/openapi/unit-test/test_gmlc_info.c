#ifndef gmlc_info_TEST
#define gmlc_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gmlc_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gmlc_info.h"
gmlc_info_t* instantiate_gmlc_info(int include_optional);



gmlc_info_t* instantiate_gmlc_info(int include_optional) {
  gmlc_info_t* gmlc_info = NULL;
  if (include_optional) {
    gmlc_info = gmlc_info_create(
      list_createList(),
      list_createList()
    );
  } else {
    gmlc_info = gmlc_info_create(
      list_createList(),
      list_createList()
    );
  }

  return gmlc_info;
}


#ifdef gmlc_info_MAIN

void test_gmlc_info(int include_optional) {
    gmlc_info_t* gmlc_info_1 = instantiate_gmlc_info(include_optional);

	cJSON* jsongmlc_info_1 = gmlc_info_convertToJSON(gmlc_info_1);
	printf("gmlc_info :\n%s\n", cJSON_Print(jsongmlc_info_1));
	gmlc_info_t* gmlc_info_2 = gmlc_info_parseFromJSON(jsongmlc_info_1);
	cJSON* jsongmlc_info_2 = gmlc_info_convertToJSON(gmlc_info_2);
	printf("repeating gmlc_info:\n%s\n", cJSON_Print(jsongmlc_info_2));
}

int main() {
  test_gmlc_info(1);
  test_gmlc_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // gmlc_info_MAIN
#endif // gmlc_info_TEST
