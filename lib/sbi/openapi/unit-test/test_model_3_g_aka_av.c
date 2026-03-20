#ifndef model_3_g_aka_av_TEST
#define model_3_g_aka_av_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define model_3_g_aka_av_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/model_3_g_aka_av.h"
model_3_g_aka_av_t* instantiate_model_3_g_aka_av(int include_optional);



model_3_g_aka_av_t* instantiate_model_3_g_aka_av(int include_optional) {
  model_3_g_aka_av_t* model_3_g_aka_av = NULL;
  if (include_optional) {
    model_3_g_aka_av = model_3_g_aka_av_create(
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    model_3_g_aka_av = model_3_g_aka_av_create(
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  }

  return model_3_g_aka_av;
}


#ifdef model_3_g_aka_av_MAIN

void test_model_3_g_aka_av(int include_optional) {
    model_3_g_aka_av_t* model_3_g_aka_av_1 = instantiate_model_3_g_aka_av(include_optional);

	cJSON* jsonmodel_3_g_aka_av_1 = model_3_g_aka_av_convertToJSON(model_3_g_aka_av_1);
	printf("model_3_g_aka_av :\n%s\n", cJSON_Print(jsonmodel_3_g_aka_av_1));
	model_3_g_aka_av_t* model_3_g_aka_av_2 = model_3_g_aka_av_parseFromJSON(jsonmodel_3_g_aka_av_1);
	cJSON* jsonmodel_3_g_aka_av_2 = model_3_g_aka_av_convertToJSON(model_3_g_aka_av_2);
	printf("repeating model_3_g_aka_av:\n%s\n", cJSON_Print(jsonmodel_3_g_aka_av_2));
}

int main() {
  test_model_3_g_aka_av(1);
  test_model_3_g_aka_av(0);

  printf("Hello world \n");
  return 0;
}

#endif // model_3_g_aka_av_MAIN
#endif // model_3_g_aka_av_TEST
