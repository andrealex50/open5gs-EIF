#ifndef data_set_id_TEST
#define data_set_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define data_set_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/data_set_id.h"
data_set_id_t* instantiate_data_set_id(int include_optional);



data_set_id_t* instantiate_data_set_id(int include_optional) {
  data_set_id_t* data_set_id = NULL;
  if (include_optional) {
    data_set_id = data_set_id_create(
    );
  } else {
    data_set_id = data_set_id_create(
    );
  }

  return data_set_id;
}


#ifdef data_set_id_MAIN

void test_data_set_id(int include_optional) {
    data_set_id_t* data_set_id_1 = instantiate_data_set_id(include_optional);

	cJSON* jsondata_set_id_1 = data_set_id_convertToJSON(data_set_id_1);
	printf("data_set_id :\n%s\n", cJSON_Print(jsondata_set_id_1));
	data_set_id_t* data_set_id_2 = data_set_id_parseFromJSON(jsondata_set_id_1);
	cJSON* jsondata_set_id_2 = data_set_id_convertToJSON(data_set_id_2);
	printf("repeating data_set_id:\n%s\n", cJSON_Print(jsondata_set_id_2));
}

int main() {
  test_data_set_id(1);
  test_data_set_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // data_set_id_MAIN
#endif // data_set_id_TEST
