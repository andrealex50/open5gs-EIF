#ifndef pp_data_entry_TEST
#define pp_data_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_data_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_data_entry.h"
pp_data_entry_t* instantiate_pp_data_entry(int include_optional);

#include "test_communication_characteristics_af.c"
#include "test_ecs_addr_config_info_1.c"
#include "test_ec_restriction_1.c"


pp_data_entry_t* instantiate_pp_data_entry(int include_optional) {
  pp_data_entry_t* pp_data_entry = NULL;
  if (include_optional) {
    pp_data_entry = pp_data_entry_create(
       // false, not to have infinite recursion
      instantiate_communication_characteristics_af(0),
      56,
      "2013-10-20T19:20:30+01:00",
      "0",
      "a",
       // false, not to have infinite recursion
      instantiate_ecs_addr_config_info_1(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ec_restriction_1(0)
    );
  } else {
    pp_data_entry = pp_data_entry_create(
      NULL,
      56,
      "2013-10-20T19:20:30+01:00",
      "0",
      "a",
      NULL,
      list_createList(),
      NULL
    );
  }

  return pp_data_entry;
}


#ifdef pp_data_entry_MAIN

void test_pp_data_entry(int include_optional) {
    pp_data_entry_t* pp_data_entry_1 = instantiate_pp_data_entry(include_optional);

	cJSON* jsonpp_data_entry_1 = pp_data_entry_convertToJSON(pp_data_entry_1);
	printf("pp_data_entry :\n%s\n", cJSON_Print(jsonpp_data_entry_1));
	pp_data_entry_t* pp_data_entry_2 = pp_data_entry_parseFromJSON(jsonpp_data_entry_1);
	cJSON* jsonpp_data_entry_2 = pp_data_entry_convertToJSON(pp_data_entry_2);
	printf("repeating pp_data_entry:\n%s\n", cJSON_Print(jsonpp_data_entry_2));
}

int main() {
  test_pp_data_entry(1);
  test_pp_data_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_data_entry_MAIN
#endif // pp_data_entry_TEST
