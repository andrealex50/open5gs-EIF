#ifndef model_5_g_ddnmf_info_TEST
#define model_5_g_ddnmf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_5_g_ddnmf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_5_g_ddnmf_info.h"
model_5_g_ddnmf_info_t* instantiate_model_5_g_ddnmf_info(int include_optional);

#include "test_plmn_id.c"


model_5_g_ddnmf_info_t* instantiate_model_5_g_ddnmf_info(int include_optional) {
  model_5_g_ddnmf_info_t* model_5_g_ddnmf_info = NULL;
  if (include_optional) {
    model_5_g_ddnmf_info = model_5_g_ddnmf_info_create(
       // false, not to have infinite recursion
      instantiate_plmn_id(0)
    );
  } else {
    model_5_g_ddnmf_info = model_5_g_ddnmf_info_create(
      NULL
    );
  }

  return model_5_g_ddnmf_info;
}


#ifdef model_5_g_ddnmf_info_MAIN

void test_model_5_g_ddnmf_info(int include_optional) {
    model_5_g_ddnmf_info_t* model_5_g_ddnmf_info_1 = instantiate_model_5_g_ddnmf_info(include_optional);

	cJSON* jsonmodel_5_g_ddnmf_info_1 = model_5_g_ddnmf_info_convertToJSON(model_5_g_ddnmf_info_1);
	printf("model_5_g_ddnmf_info :\n%s\n", cJSON_Print(jsonmodel_5_g_ddnmf_info_1));
	model_5_g_ddnmf_info_t* model_5_g_ddnmf_info_2 = model_5_g_ddnmf_info_parseFromJSON(jsonmodel_5_g_ddnmf_info_1);
	cJSON* jsonmodel_5_g_ddnmf_info_2 = model_5_g_ddnmf_info_convertToJSON(model_5_g_ddnmf_info_2);
	printf("repeating model_5_g_ddnmf_info:\n%s\n", cJSON_Print(jsonmodel_5_g_ddnmf_info_2));
}

int main() {
  test_model_5_g_ddnmf_info(1);
  test_model_5_g_ddnmf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_5_g_ddnmf_info_MAIN
#endif // model_5_g_ddnmf_info_TEST
