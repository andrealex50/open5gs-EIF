#ifndef data_set_name_TEST
#define data_set_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_set_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_set_name.h"
data_set_name_t* instantiate_data_set_name(int include_optional);



data_set_name_t* instantiate_data_set_name(int include_optional) {
  data_set_name_t* data_set_name = NULL;
  if (include_optional) {
    data_set_name = data_set_name_create(
    );
  } else {
    data_set_name = data_set_name_create(
    );
  }

  return data_set_name;
}


#ifdef data_set_name_MAIN

void test_data_set_name(int include_optional) {
    data_set_name_t* data_set_name_1 = instantiate_data_set_name(include_optional);

	cJSON* jsondata_set_name_1 = data_set_name_convertToJSON(data_set_name_1);
	printf("data_set_name :\n%s\n", cJSON_Print(jsondata_set_name_1));
	data_set_name_t* data_set_name_2 = data_set_name_parseFromJSON(jsondata_set_name_1);
	cJSON* jsondata_set_name_2 = data_set_name_convertToJSON(data_set_name_2);
	printf("repeating data_set_name:\n%s\n", cJSON_Print(jsondata_set_name_2));
}

int main() {
  test_data_set_name(1);
  test_data_set_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_set_name_MAIN
#endif // data_set_name_TEST
