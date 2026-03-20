#ifndef sepp_info_TEST
#define sepp_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sepp_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sepp_info.h"
sepp_info_t* instantiate_sepp_info(int include_optional);



sepp_info_t* instantiate_sepp_info(int include_optional) {
  sepp_info_t* sepp_info = NULL;
  if (include_optional) {
    sepp_info = sepp_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    sepp_info = sepp_info_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return sepp_info;
}


#ifdef sepp_info_MAIN

void test_sepp_info(int include_optional) {
    sepp_info_t* sepp_info_1 = instantiate_sepp_info(include_optional);

	cJSON* jsonsepp_info_1 = sepp_info_convertToJSON(sepp_info_1);
	printf("sepp_info :\n%s\n", cJSON_Print(jsonsepp_info_1));
	sepp_info_t* sepp_info_2 = sepp_info_parseFromJSON(jsonsepp_info_1);
	cJSON* jsonsepp_info_2 = sepp_info_convertToJSON(sepp_info_2);
	printf("repeating sepp_info:\n%s\n", cJSON_Print(jsonsepp_info_2));
}

int main() {
  test_sepp_info(1);
  test_sepp_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // sepp_info_MAIN
#endif // sepp_info_TEST
