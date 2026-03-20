#ifndef suci_info_TEST
#define suci_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define suci_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/suci_info.h"
suci_info_t* instantiate_suci_info(int include_optional);



suci_info_t* instantiate_suci_info(int include_optional) {
  suci_info_t* suci_info = NULL;
  if (include_optional) {
    suci_info = suci_info_create(
      list_createList(),
      list_createList()
    );
  } else {
    suci_info = suci_info_create(
      list_createList(),
      list_createList()
    );
  }

  return suci_info;
}


#ifdef suci_info_MAIN

void test_suci_info(int include_optional) {
    suci_info_t* suci_info_1 = instantiate_suci_info(include_optional);

	cJSON* jsonsuci_info_1 = suci_info_convertToJSON(suci_info_1);
	printf("suci_info :\n%s\n", cJSON_Print(jsonsuci_info_1));
	suci_info_t* suci_info_2 = suci_info_parseFromJSON(jsonsuci_info_1);
	cJSON* jsonsuci_info_2 = suci_info_convertToJSON(suci_info_2);
	printf("repeating suci_info:\n%s\n", cJSON_Print(jsonsuci_info_2));
}

int main() {
  test_suci_info(1);
  test_suci_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // suci_info_MAIN
#endif // suci_info_TEST
