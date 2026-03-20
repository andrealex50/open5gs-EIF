#ifndef pp_profile_data_TEST
#define pp_profile_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_profile_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_profile_data.h"
pp_profile_data_t* instantiate_pp_profile_data(int include_optional);



pp_profile_data_t* instantiate_pp_profile_data(int include_optional) {
  pp_profile_data_t* pp_profile_data = NULL;
  if (include_optional) {
    pp_profile_data = pp_profile_data_create(
      list_createList(),
      "a"
    );
  } else {
    pp_profile_data = pp_profile_data_create(
      list_createList(),
      "a"
    );
  }

  return pp_profile_data;
}


#ifdef pp_profile_data_MAIN

void test_pp_profile_data(int include_optional) {
    pp_profile_data_t* pp_profile_data_1 = instantiate_pp_profile_data(include_optional);

	cJSON* jsonpp_profile_data_1 = pp_profile_data_convertToJSON(pp_profile_data_1);
	printf("pp_profile_data :\n%s\n", cJSON_Print(jsonpp_profile_data_1));
	pp_profile_data_t* pp_profile_data_2 = pp_profile_data_parseFromJSON(jsonpp_profile_data_1);
	cJSON* jsonpp_profile_data_2 = pp_profile_data_convertToJSON(pp_profile_data_2);
	printf("repeating pp_profile_data:\n%s\n", cJSON_Print(jsonpp_profile_data_2));
}

int main() {
  test_pp_profile_data(1);
  test_pp_profile_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_profile_data_MAIN
#endif // pp_profile_data_TEST
