#ifndef sdm_subs_modification_TEST
#define sdm_subs_modification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sdm_subs_modification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sdm_subs_modification.h"
sdm_subs_modification_t* instantiate_sdm_subs_modification(int include_optional);



sdm_subs_modification_t* instantiate_sdm_subs_modification(int include_optional) {
  sdm_subs_modification_t* sdm_subs_modification = NULL;
  if (include_optional) {
    sdm_subs_modification = sdm_subs_modification_create(
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  } else {
    sdm_subs_modification = sdm_subs_modification_create(
      "2013-10-20T19:20:30+01:00",
      list_createList()
    );
  }

  return sdm_subs_modification;
}


#ifdef sdm_subs_modification_MAIN

void test_sdm_subs_modification(int include_optional) {
    sdm_subs_modification_t* sdm_subs_modification_1 = instantiate_sdm_subs_modification(include_optional);

	cJSON* jsonsdm_subs_modification_1 = sdm_subs_modification_convertToJSON(sdm_subs_modification_1);
	printf("sdm_subs_modification :\n%s\n", cJSON_Print(jsonsdm_subs_modification_1));
	sdm_subs_modification_t* sdm_subs_modification_2 = sdm_subs_modification_parseFromJSON(jsonsdm_subs_modification_1);
	cJSON* jsonsdm_subs_modification_2 = sdm_subs_modification_convertToJSON(sdm_subs_modification_2);
	printf("repeating sdm_subs_modification:\n%s\n", cJSON_Print(jsonsdm_subs_modification_2));
}

int main() {
  test_sdm_subs_modification(1);
  test_sdm_subs_modification(0);

  printf("Hello world \n");
  return 0;
}

#endif // sdm_subs_modification_MAIN
#endif // sdm_subs_modification_TEST
