#ifndef nwdaf_data_TEST
#define nwdaf_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nwdaf_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nwdaf_data.h"
nwdaf_data_t* instantiate_nwdaf_data(int include_optional);



nwdaf_data_t* instantiate_nwdaf_data(int include_optional) {
  nwdaf_data_t* nwdaf_data = NULL;
  if (include_optional) {
    nwdaf_data = nwdaf_data_create(
      "0",
      list_createList()
    );
  } else {
    nwdaf_data = nwdaf_data_create(
      "0",
      list_createList()
    );
  }

  return nwdaf_data;
}


#ifdef nwdaf_data_MAIN

void test_nwdaf_data(int include_optional) {
    nwdaf_data_t* nwdaf_data_1 = instantiate_nwdaf_data(include_optional);

	cJSON* jsonnwdaf_data_1 = nwdaf_data_convertToJSON(nwdaf_data_1);
	printf("nwdaf_data :\n%s\n", cJSON_Print(jsonnwdaf_data_1));
	nwdaf_data_t* nwdaf_data_2 = nwdaf_data_parseFromJSON(jsonnwdaf_data_1);
	cJSON* jsonnwdaf_data_2 = nwdaf_data_convertToJSON(nwdaf_data_2);
	printf("repeating nwdaf_data:\n%s\n", cJSON_Print(jsonnwdaf_data_2));
}

int main() {
  test_nwdaf_data(1);
  test_nwdaf_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // nwdaf_data_MAIN
#endif // nwdaf_data_TEST
