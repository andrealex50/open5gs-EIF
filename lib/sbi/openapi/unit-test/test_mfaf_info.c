#ifndef mfaf_info_TEST
#define mfaf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mfaf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mfaf_info.h"
mfaf_info_t* instantiate_mfaf_info(int include_optional);



mfaf_info_t* instantiate_mfaf_info(int include_optional) {
  mfaf_info_t* mfaf_info = NULL;
  if (include_optional) {
    mfaf_info = mfaf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    mfaf_info = mfaf_info_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return mfaf_info;
}


#ifdef mfaf_info_MAIN

void test_mfaf_info(int include_optional) {
    mfaf_info_t* mfaf_info_1 = instantiate_mfaf_info(include_optional);

	cJSON* jsonmfaf_info_1 = mfaf_info_convertToJSON(mfaf_info_1);
	printf("mfaf_info :\n%s\n", cJSON_Print(jsonmfaf_info_1));
	mfaf_info_t* mfaf_info_2 = mfaf_info_parseFromJSON(jsonmfaf_info_1);
	cJSON* jsonmfaf_info_2 = mfaf_info_convertToJSON(mfaf_info_2);
	printf("repeating mfaf_info:\n%s\n", cJSON_Print(jsonmfaf_info_2));
}

int main() {
  test_mfaf_info(1);
  test_mfaf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mfaf_info_MAIN
#endif // mfaf_info_TEST
