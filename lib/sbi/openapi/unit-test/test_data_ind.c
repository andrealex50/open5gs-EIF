#ifndef data_ind_TEST
#define data_ind_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_ind_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_ind.h"
data_ind_t* instantiate_data_ind(int include_optional);



data_ind_t* instantiate_data_ind(int include_optional) {
  data_ind_t* data_ind = NULL;
  if (include_optional) {
    data_ind = data_ind_create(
    );
  } else {
    data_ind = data_ind_create(
    );
  }

  return data_ind;
}


#ifdef data_ind_MAIN

void test_data_ind(int include_optional) {
    data_ind_t* data_ind_1 = instantiate_data_ind(include_optional);

	cJSON* jsondata_ind_1 = data_ind_convertToJSON(data_ind_1);
	printf("data_ind :\n%s\n", cJSON_Print(jsondata_ind_1));
	data_ind_t* data_ind_2 = data_ind_parseFromJSON(jsondata_ind_1);
	cJSON* jsondata_ind_2 = data_ind_convertToJSON(data_ind_2);
	printf("repeating data_ind:\n%s\n", cJSON_Print(jsondata_ind_2));
}

int main() {
  test_data_ind(1);
  test_data_ind(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_ind_MAIN
#endif // data_ind_TEST
