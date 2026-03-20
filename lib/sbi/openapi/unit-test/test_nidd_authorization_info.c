#ifndef nidd_authorization_info_TEST
#define nidd_authorization_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nidd_authorization_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nidd_authorization_info.h"
nidd_authorization_info_t* instantiate_nidd_authorization_info(int include_optional);



nidd_authorization_info_t* instantiate_nidd_authorization_info(int include_optional) {
  nidd_authorization_info_t* nidd_authorization_info = NULL;
  if (include_optional) {
    nidd_authorization_info = nidd_authorization_info_create(
      list_createList()
    );
  } else {
    nidd_authorization_info = nidd_authorization_info_create(
      list_createList()
    );
  }

  return nidd_authorization_info;
}


#ifdef nidd_authorization_info_MAIN

void test_nidd_authorization_info(int include_optional) {
    nidd_authorization_info_t* nidd_authorization_info_1 = instantiate_nidd_authorization_info(include_optional);

	cJSON* jsonnidd_authorization_info_1 = nidd_authorization_info_convertToJSON(nidd_authorization_info_1);
	printf("nidd_authorization_info :\n%s\n", cJSON_Print(jsonnidd_authorization_info_1));
	nidd_authorization_info_t* nidd_authorization_info_2 = nidd_authorization_info_parseFromJSON(jsonnidd_authorization_info_1);
	cJSON* jsonnidd_authorization_info_2 = nidd_authorization_info_convertToJSON(nidd_authorization_info_2);
	printf("repeating nidd_authorization_info:\n%s\n", cJSON_Print(jsonnidd_authorization_info_2));
}

int main() {
  test_nidd_authorization_info(1);
  test_nidd_authorization_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // nidd_authorization_info_MAIN
#endif // nidd_authorization_info_TEST
