#ifndef data_ind_any_of_TEST
#define data_ind_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_ind_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_ind_any_of.h"
data_ind_any_of_t* instantiate_data_ind_any_of(int include_optional);



data_ind_any_of_t* instantiate_data_ind_any_of(int include_optional) {
  data_ind_any_of_t* data_ind_any_of = NULL;
  if (include_optional) {
    data_ind_any_of = data_ind_any_of_create(
    );
  } else {
    data_ind_any_of = data_ind_any_of_create(
    );
  }

  return data_ind_any_of;
}


#ifdef data_ind_any_of_MAIN

void test_data_ind_any_of(int include_optional) {
    data_ind_any_of_t* data_ind_any_of_1 = instantiate_data_ind_any_of(include_optional);

	cJSON* jsondata_ind_any_of_1 = data_ind_any_of_convertToJSON(data_ind_any_of_1);
	printf("data_ind_any_of :\n%s\n", cJSON_Print(jsondata_ind_any_of_1));
	data_ind_any_of_t* data_ind_any_of_2 = data_ind_any_of_parseFromJSON(jsondata_ind_any_of_1);
	cJSON* jsondata_ind_any_of_2 = data_ind_any_of_convertToJSON(data_ind_any_of_2);
	printf("repeating data_ind_any_of:\n%s\n", cJSON_Print(jsondata_ind_any_of_2));
}

int main() {
  test_data_ind_any_of(1);
  test_data_ind_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_ind_any_of_MAIN
#endif // data_ind_any_of_TEST
