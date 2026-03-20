#ifndef pfd_data_for_app_ext_TEST
#define pfd_data_for_app_ext_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pfd_data_for_app_ext_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pfd_data_for_app_ext.h"
pfd_data_for_app_ext_t* instantiate_pfd_data_for_app_ext(int include_optional);



pfd_data_for_app_ext_t* instantiate_pfd_data_for_app_ext(int include_optional) {
  pfd_data_for_app_ext_t* pfd_data_for_app_ext = NULL;
  if (include_optional) {
    pfd_data_for_app_ext = pfd_data_for_app_ext_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList(),
      56
    );
  } else {
    pfd_data_for_app_ext = pfd_data_for_app_ext_create(
      "0",
      list_createList(),
      "2013-10-20T19:20:30+01:00",
      "a",
      list_createList(),
      56
    );
  }

  return pfd_data_for_app_ext;
}


#ifdef pfd_data_for_app_ext_MAIN

void test_pfd_data_for_app_ext(int include_optional) {
    pfd_data_for_app_ext_t* pfd_data_for_app_ext_1 = instantiate_pfd_data_for_app_ext(include_optional);

	cJSON* jsonpfd_data_for_app_ext_1 = pfd_data_for_app_ext_convertToJSON(pfd_data_for_app_ext_1);
	printf("pfd_data_for_app_ext :\n%s\n", cJSON_Print(jsonpfd_data_for_app_ext_1));
	pfd_data_for_app_ext_t* pfd_data_for_app_ext_2 = pfd_data_for_app_ext_parseFromJSON(jsonpfd_data_for_app_ext_1);
	cJSON* jsonpfd_data_for_app_ext_2 = pfd_data_for_app_ext_convertToJSON(pfd_data_for_app_ext_2);
	printf("repeating pfd_data_for_app_ext:\n%s\n", cJSON_Print(jsonpfd_data_for_app_ext_2));
}

int main() {
  test_pfd_data_for_app_ext(1);
  test_pfd_data_for_app_ext(0);

  printf("Hello world \n");
  return 0;
}

#endif // pfd_data_for_app_ext_MAIN
#endif // pfd_data_for_app_ext_TEST
