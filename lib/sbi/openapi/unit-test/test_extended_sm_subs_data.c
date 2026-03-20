#ifndef extended_sm_subs_data_TEST
#define extended_sm_subs_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define extended_sm_subs_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/extended_sm_subs_data.h"
extended_sm_subs_data_t* instantiate_extended_sm_subs_data(int include_optional);



extended_sm_subs_data_t* instantiate_extended_sm_subs_data(int include_optional) {
  extended_sm_subs_data_t* extended_sm_subs_data = NULL;
  if (include_optional) {
    extended_sm_subs_data = extended_sm_subs_data_create(
      list_createList(),
      list_createList()
    );
  } else {
    extended_sm_subs_data = extended_sm_subs_data_create(
      list_createList(),
      list_createList()
    );
  }

  return extended_sm_subs_data;
}


#ifdef extended_sm_subs_data_MAIN

void test_extended_sm_subs_data(int include_optional) {
    extended_sm_subs_data_t* extended_sm_subs_data_1 = instantiate_extended_sm_subs_data(include_optional);

	cJSON* jsonextended_sm_subs_data_1 = extended_sm_subs_data_convertToJSON(extended_sm_subs_data_1);
	printf("extended_sm_subs_data :\n%s\n", cJSON_Print(jsonextended_sm_subs_data_1));
	extended_sm_subs_data_t* extended_sm_subs_data_2 = extended_sm_subs_data_parseFromJSON(jsonextended_sm_subs_data_1);
	cJSON* jsonextended_sm_subs_data_2 = extended_sm_subs_data_convertToJSON(extended_sm_subs_data_2);
	printf("repeating extended_sm_subs_data:\n%s\n", cJSON_Print(jsonextended_sm_subs_data_2));
}

int main() {
  test_extended_sm_subs_data(1);
  test_extended_sm_subs_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // extended_sm_subs_data_MAIN
#endif // extended_sm_subs_data_TEST
