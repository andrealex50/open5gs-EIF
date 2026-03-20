#ifndef vendor_specific_feature_TEST
#define vendor_specific_feature_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vendor_specific_feature_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vendor_specific_feature.h"
vendor_specific_feature_t* instantiate_vendor_specific_feature(int include_optional);



vendor_specific_feature_t* instantiate_vendor_specific_feature(int include_optional) {
  vendor_specific_feature_t* vendor_specific_feature = NULL;
  if (include_optional) {
    vendor_specific_feature = vendor_specific_feature_create(
      "0",
      "0"
    );
  } else {
    vendor_specific_feature = vendor_specific_feature_create(
      "0",
      "0"
    );
  }

  return vendor_specific_feature;
}


#ifdef vendor_specific_feature_MAIN

void test_vendor_specific_feature(int include_optional) {
    vendor_specific_feature_t* vendor_specific_feature_1 = instantiate_vendor_specific_feature(include_optional);

	cJSON* jsonvendor_specific_feature_1 = vendor_specific_feature_convertToJSON(vendor_specific_feature_1);
	printf("vendor_specific_feature :\n%s\n", cJSON_Print(jsonvendor_specific_feature_1));
	vendor_specific_feature_t* vendor_specific_feature_2 = vendor_specific_feature_parseFromJSON(jsonvendor_specific_feature_1);
	cJSON* jsonvendor_specific_feature_2 = vendor_specific_feature_convertToJSON(vendor_specific_feature_2);
	printf("repeating vendor_specific_feature:\n%s\n", cJSON_Print(jsonvendor_specific_feature_2));
}

int main() {
  test_vendor_specific_feature(1);
  test_vendor_specific_feature(0);

  printf("Hello world \n");
  return 0;
}

#endif // vendor_specific_feature_MAIN
#endif // vendor_specific_feature_TEST
