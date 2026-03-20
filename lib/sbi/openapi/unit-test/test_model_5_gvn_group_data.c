#ifndef model_5_gvn_group_data_TEST
#define model_5_gvn_group_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_5_gvn_group_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_5_gvn_group_data.h"
model_5_gvn_group_data_t* instantiate_model_5_gvn_group_data(int include_optional);

#include "test_snssai.c"
#include "test_ip_address_1.c"


model_5_gvn_group_data_t* instantiate_model_5_gvn_group_data(int include_optional) {
  model_5_gvn_group_data_t* model_5_gvn_group_data = NULL;
  if (include_optional) {
    model_5_gvn_group_data = model_5_gvn_group_data_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList(),
      list_createList(),
      1,
      1,
       // false, not to have infinite recursion
      instantiate_ip_address_1(0),
      list_createList(),
      "a"
    );
  } else {
    model_5_gvn_group_data = model_5_gvn_group_data_create(
      "0",
      NULL,
      list_createList(),
      list_createList(),
      1,
      1,
      NULL,
      list_createList(),
      "a"
    );
  }

  return model_5_gvn_group_data;
}


#ifdef model_5_gvn_group_data_MAIN

void test_model_5_gvn_group_data(int include_optional) {
    model_5_gvn_group_data_t* model_5_gvn_group_data_1 = instantiate_model_5_gvn_group_data(include_optional);

	cJSON* jsonmodel_5_gvn_group_data_1 = model_5_gvn_group_data_convertToJSON(model_5_gvn_group_data_1);
	printf("model_5_gvn_group_data :\n%s\n", cJSON_Print(jsonmodel_5_gvn_group_data_1));
	model_5_gvn_group_data_t* model_5_gvn_group_data_2 = model_5_gvn_group_data_parseFromJSON(jsonmodel_5_gvn_group_data_1);
	cJSON* jsonmodel_5_gvn_group_data_2 = model_5_gvn_group_data_convertToJSON(model_5_gvn_group_data_2);
	printf("repeating model_5_gvn_group_data:\n%s\n", cJSON_Print(jsonmodel_5_gvn_group_data_2));
}

int main() {
  test_model_5_gvn_group_data(1);
  test_model_5_gvn_group_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_5_gvn_group_data_MAIN
#endif // model_5_gvn_group_data_TEST
