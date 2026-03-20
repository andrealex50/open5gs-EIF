#ifndef anchor_smf_features_TEST
#define anchor_smf_features_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define anchor_smf_features_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/anchor_smf_features.h"
anchor_smf_features_t* instantiate_anchor_smf_features(int include_optional);



anchor_smf_features_t* instantiate_anchor_smf_features(int include_optional) {
  anchor_smf_features_t* anchor_smf_features = NULL;
  if (include_optional) {
    anchor_smf_features = anchor_smf_features_create(
      1
    );
  } else {
    anchor_smf_features = anchor_smf_features_create(
      1
    );
  }

  return anchor_smf_features;
}


#ifdef anchor_smf_features_MAIN

void test_anchor_smf_features(int include_optional) {
    anchor_smf_features_t* anchor_smf_features_1 = instantiate_anchor_smf_features(include_optional);

	cJSON* jsonanchor_smf_features_1 = anchor_smf_features_convertToJSON(anchor_smf_features_1);
	printf("anchor_smf_features :\n%s\n", cJSON_Print(jsonanchor_smf_features_1));
	anchor_smf_features_t* anchor_smf_features_2 = anchor_smf_features_parseFromJSON(jsonanchor_smf_features_1);
	cJSON* jsonanchor_smf_features_2 = anchor_smf_features_convertToJSON(anchor_smf_features_2);
	printf("repeating anchor_smf_features:\n%s\n", cJSON_Print(jsonanchor_smf_features_2));
}

int main() {
  test_anchor_smf_features(1);
  test_anchor_smf_features(0);

  printf("Hello world \n");
  return 0;
}

#endif // anchor_smf_features_MAIN
#endif // anchor_smf_features_TEST
