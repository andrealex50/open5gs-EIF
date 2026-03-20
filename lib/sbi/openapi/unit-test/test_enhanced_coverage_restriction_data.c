#ifndef enhanced_coverage_restriction_data_TEST
#define enhanced_coverage_restriction_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define enhanced_coverage_restriction_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/enhanced_coverage_restriction_data.h"
enhanced_coverage_restriction_data_t* instantiate_enhanced_coverage_restriction_data(int include_optional);



enhanced_coverage_restriction_data_t* instantiate_enhanced_coverage_restriction_data(int include_optional) {
  enhanced_coverage_restriction_data_t* enhanced_coverage_restriction_data = NULL;
  if (include_optional) {
    enhanced_coverage_restriction_data = enhanced_coverage_restriction_data_create(
      list_createList()
    );
  } else {
    enhanced_coverage_restriction_data = enhanced_coverage_restriction_data_create(
      list_createList()
    );
  }

  return enhanced_coverage_restriction_data;
}


#ifdef enhanced_coverage_restriction_data_MAIN

void test_enhanced_coverage_restriction_data(int include_optional) {
    enhanced_coverage_restriction_data_t* enhanced_coverage_restriction_data_1 = instantiate_enhanced_coverage_restriction_data(include_optional);

	cJSON* jsonenhanced_coverage_restriction_data_1 = enhanced_coverage_restriction_data_convertToJSON(enhanced_coverage_restriction_data_1);
	printf("enhanced_coverage_restriction_data :\n%s\n", cJSON_Print(jsonenhanced_coverage_restriction_data_1));
	enhanced_coverage_restriction_data_t* enhanced_coverage_restriction_data_2 = enhanced_coverage_restriction_data_parseFromJSON(jsonenhanced_coverage_restriction_data_1);
	cJSON* jsonenhanced_coverage_restriction_data_2 = enhanced_coverage_restriction_data_convertToJSON(enhanced_coverage_restriction_data_2);
	printf("repeating enhanced_coverage_restriction_data:\n%s\n", cJSON_Print(jsonenhanced_coverage_restriction_data_2));
}

int main() {
  test_enhanced_coverage_restriction_data(1);
  test_enhanced_coverage_restriction_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // enhanced_coverage_restriction_data_MAIN
#endif // enhanced_coverage_restriction_data_TEST
