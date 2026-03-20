#ifndef model_5_gvn_group_configuration_TEST
#define model_5_gvn_group_configuration_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_5_gvn_group_configuration_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_5_gvn_group_configuration.h"
model_5_gvn_group_configuration_t* instantiate_model_5_gvn_group_configuration(int include_optional);

#include "test_model_5_gvn_group_data.c"


model_5_gvn_group_configuration_t* instantiate_model_5_gvn_group_configuration(int include_optional) {
  model_5_gvn_group_configuration_t* model_5_gvn_group_configuration = NULL;
  if (include_optional) {
    model_5_gvn_group_configuration = model_5_gvn_group_configuration_create(
       // false, not to have infinite recursion
      instantiate_model_5_gvn_group_data(0),
      list_createList(),
      56,
      "0",
      "a",
      "0"
    );
  } else {
    model_5_gvn_group_configuration = model_5_gvn_group_configuration_create(
      NULL,
      list_createList(),
      56,
      "0",
      "a",
      "0"
    );
  }

  return model_5_gvn_group_configuration;
}


#ifdef model_5_gvn_group_configuration_MAIN

void test_model_5_gvn_group_configuration(int include_optional) {
    model_5_gvn_group_configuration_t* model_5_gvn_group_configuration_1 = instantiate_model_5_gvn_group_configuration(include_optional);

	cJSON* jsonmodel_5_gvn_group_configuration_1 = model_5_gvn_group_configuration_convertToJSON(model_5_gvn_group_configuration_1);
	printf("model_5_gvn_group_configuration :\n%s\n", cJSON_Print(jsonmodel_5_gvn_group_configuration_1));
	model_5_gvn_group_configuration_t* model_5_gvn_group_configuration_2 = model_5_gvn_group_configuration_parseFromJSON(jsonmodel_5_gvn_group_configuration_1);
	cJSON* jsonmodel_5_gvn_group_configuration_2 = model_5_gvn_group_configuration_convertToJSON(model_5_gvn_group_configuration_2);
	printf("repeating model_5_gvn_group_configuration:\n%s\n", cJSON_Print(jsonmodel_5_gvn_group_configuration_2));
}

int main() {
  test_model_5_gvn_group_configuration(1);
  test_model_5_gvn_group_configuration(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_5_gvn_group_configuration_MAIN
#endif // model_5_gvn_group_configuration_TEST
