#ifndef pfd_data_TEST
#define pfd_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pfd_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pfd_data.h"
pfd_data_t* instantiate_pfd_data(int include_optional);



pfd_data_t* instantiate_pfd_data(int include_optional) {
  pfd_data_t* pfd_data = NULL;
  if (include_optional) {
    pfd_data = pfd_data_create(
      list_createList(),
      list_createList()
    );
  } else {
    pfd_data = pfd_data_create(
      list_createList(),
      list_createList()
    );
  }

  return pfd_data;
}


#ifdef pfd_data_MAIN

void test_pfd_data(int include_optional) {
    pfd_data_t* pfd_data_1 = instantiate_pfd_data(include_optional);

	cJSON* jsonpfd_data_1 = pfd_data_convertToJSON(pfd_data_1);
	printf("pfd_data :\n%s\n", cJSON_Print(jsonpfd_data_1));
	pfd_data_t* pfd_data_2 = pfd_data_parseFromJSON(jsonpfd_data_1);
	cJSON* jsonpfd_data_2 = pfd_data_convertToJSON(pfd_data_2);
	printf("repeating pfd_data:\n%s\n", cJSON_Print(jsonpfd_data_2));
}

int main() {
  test_pfd_data(1);
  test_pfd_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pfd_data_MAIN
#endif // pfd_data_TEST
