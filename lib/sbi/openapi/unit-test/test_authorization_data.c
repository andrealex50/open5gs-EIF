#ifndef authorization_data_TEST
#define authorization_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define authorization_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/authorization_data.h"
authorization_data_t* instantiate_authorization_data(int include_optional);



authorization_data_t* instantiate_authorization_data(int include_optional) {
  authorization_data_t* authorization_data = NULL;
  if (include_optional) {
    authorization_data = authorization_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    authorization_data = authorization_data_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "2013-10-20T19:20:30+01:00"
    );
  }

  return authorization_data;
}


#ifdef authorization_data_MAIN

void test_authorization_data(int include_optional) {
    authorization_data_t* authorization_data_1 = instantiate_authorization_data(include_optional);

	cJSON* jsonauthorization_data_1 = authorization_data_convertToJSON(authorization_data_1);
	printf("authorization_data :\n%s\n", cJSON_Print(jsonauthorization_data_1));
	authorization_data_t* authorization_data_2 = authorization_data_parseFromJSON(jsonauthorization_data_1);
	cJSON* jsonauthorization_data_2 = authorization_data_convertToJSON(authorization_data_2);
	printf("repeating authorization_data:\n%s\n", cJSON_Print(jsonauthorization_data_2));
}

int main() {
  test_authorization_data(1);
  test_authorization_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // authorization_data_MAIN
#endif // authorization_data_TEST
