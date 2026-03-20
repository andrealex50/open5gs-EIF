#ifndef pp_data_entry_list_TEST
#define pp_data_entry_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_data_entry_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_data_entry_list.h"
pp_data_entry_list_t* instantiate_pp_data_entry_list(int include_optional);



pp_data_entry_list_t* instantiate_pp_data_entry_list(int include_optional) {
  pp_data_entry_list_t* pp_data_entry_list = NULL;
  if (include_optional) {
    pp_data_entry_list = pp_data_entry_list_create(
      list_createList(),
      "a"
    );
  } else {
    pp_data_entry_list = pp_data_entry_list_create(
      list_createList(),
      "a"
    );
  }

  return pp_data_entry_list;
}


#ifdef pp_data_entry_list_MAIN

void test_pp_data_entry_list(int include_optional) {
    pp_data_entry_list_t* pp_data_entry_list_1 = instantiate_pp_data_entry_list(include_optional);

	cJSON* jsonpp_data_entry_list_1 = pp_data_entry_list_convertToJSON(pp_data_entry_list_1);
	printf("pp_data_entry_list :\n%s\n", cJSON_Print(jsonpp_data_entry_list_1));
	pp_data_entry_list_t* pp_data_entry_list_2 = pp_data_entry_list_parseFromJSON(jsonpp_data_entry_list_1);
	cJSON* jsonpp_data_entry_list_2 = pp_data_entry_list_convertToJSON(pp_data_entry_list_2);
	printf("repeating pp_data_entry_list:\n%s\n", cJSON_Print(jsonpp_data_entry_list_2));
}

int main() {
  test_pp_data_entry_list(1);
  test_pp_data_entry_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_data_entry_list_MAIN
#endif // pp_data_entry_list_TEST
