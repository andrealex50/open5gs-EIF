#ifndef am_policy_data_TEST
#define am_policy_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define am_policy_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/am_policy_data.h"
am_policy_data_t* instantiate_am_policy_data(int include_optional);



am_policy_data_t* instantiate_am_policy_data(int include_optional) {
  am_policy_data_t* am_policy_data = NULL;
  if (include_optional) {
    am_policy_data = am_policy_data_create(
      list_createList(),
      list_createList()
    );
  } else {
    am_policy_data = am_policy_data_create(
      list_createList(),
      list_createList()
    );
  }

  return am_policy_data;
}


#ifdef am_policy_data_MAIN

void test_am_policy_data(int include_optional) {
    am_policy_data_t* am_policy_data_1 = instantiate_am_policy_data(include_optional);

	cJSON* jsonam_policy_data_1 = am_policy_data_convertToJSON(am_policy_data_1);
	printf("am_policy_data :\n%s\n", cJSON_Print(jsonam_policy_data_1));
	am_policy_data_t* am_policy_data_2 = am_policy_data_parseFromJSON(jsonam_policy_data_1);
	cJSON* jsonam_policy_data_2 = am_policy_data_convertToJSON(am_policy_data_2);
	printf("repeating am_policy_data:\n%s\n", cJSON_Print(jsonam_policy_data_2));
}

int main() {
  test_am_policy_data(1);
  test_am_policy_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // am_policy_data_MAIN
#endif // am_policy_data_TEST
