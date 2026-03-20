#ifndef ambr_rm_TEST
#define ambr_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ambr_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ambr_rm.h"
ambr_rm_t* instantiate_ambr_rm(int include_optional);



ambr_rm_t* instantiate_ambr_rm(int include_optional) {
  ambr_rm_t* ambr_rm = NULL;
  if (include_optional) {
    ambr_rm = ambr_rm_create(
      "a",
      "a"
    );
  } else {
    ambr_rm = ambr_rm_create(
      "a",
      "a"
    );
  }

  return ambr_rm;
}


#ifdef ambr_rm_MAIN

void test_ambr_rm(int include_optional) {
    ambr_rm_t* ambr_rm_1 = instantiate_ambr_rm(include_optional);

	cJSON* jsonambr_rm_1 = ambr_rm_convertToJSON(ambr_rm_1);
	printf("ambr_rm :\n%s\n", cJSON_Print(jsonambr_rm_1));
	ambr_rm_t* ambr_rm_2 = ambr_rm_parseFromJSON(jsonambr_rm_1);
	cJSON* jsonambr_rm_2 = ambr_rm_convertToJSON(ambr_rm_2);
	printf("repeating ambr_rm:\n%s\n", cJSON_Print(jsonambr_rm_2));
}

int main() {
  test_ambr_rm(1);
  test_ambr_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // ambr_rm_MAIN
#endif // ambr_rm_TEST
