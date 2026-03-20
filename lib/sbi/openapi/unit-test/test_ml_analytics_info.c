#ifndef ml_analytics_info_TEST
#define ml_analytics_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ml_analytics_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ml_analytics_info.h"
ml_analytics_info_t* instantiate_ml_analytics_info(int include_optional);



ml_analytics_info_t* instantiate_ml_analytics_info(int include_optional) {
  ml_analytics_info_t* ml_analytics_info = NULL;
  if (include_optional) {
    ml_analytics_info = ml_analytics_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ml_analytics_info = ml_analytics_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ml_analytics_info;
}


#ifdef ml_analytics_info_MAIN

void test_ml_analytics_info(int include_optional) {
    ml_analytics_info_t* ml_analytics_info_1 = instantiate_ml_analytics_info(include_optional);

	cJSON* jsonml_analytics_info_1 = ml_analytics_info_convertToJSON(ml_analytics_info_1);
	printf("ml_analytics_info :\n%s\n", cJSON_Print(jsonml_analytics_info_1));
	ml_analytics_info_t* ml_analytics_info_2 = ml_analytics_info_parseFromJSON(jsonml_analytics_info_1);
	cJSON* jsonml_analytics_info_2 = ml_analytics_info_convertToJSON(ml_analytics_info_2);
	printf("repeating ml_analytics_info:\n%s\n", cJSON_Print(jsonml_analytics_info_2));
}

int main() {
  test_ml_analytics_info(1);
  test_ml_analytics_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // ml_analytics_info_MAIN
#endif // ml_analytics_info_TEST
