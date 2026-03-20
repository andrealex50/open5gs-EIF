#ifndef mapping_of_snssai_TEST
#define mapping_of_snssai_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mapping_of_snssai_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mapping_of_snssai.h"
mapping_of_snssai_t* instantiate_mapping_of_snssai(int include_optional);

#include "test_snssai.c"
#include "test_snssai.c"


mapping_of_snssai_t* instantiate_mapping_of_snssai(int include_optional) {
  mapping_of_snssai_t* mapping_of_snssai = NULL;
  if (include_optional) {
    mapping_of_snssai = mapping_of_snssai_create(
       // false, not to have infinite recursion
      instantiate_snssai(0),
       // false, not to have infinite recursion
      instantiate_snssai(0)
    );
  } else {
    mapping_of_snssai = mapping_of_snssai_create(
      NULL,
      NULL
    );
  }

  return mapping_of_snssai;
}


#ifdef mapping_of_snssai_MAIN

void test_mapping_of_snssai(int include_optional) {
    mapping_of_snssai_t* mapping_of_snssai_1 = instantiate_mapping_of_snssai(include_optional);

	cJSON* jsonmapping_of_snssai_1 = mapping_of_snssai_convertToJSON(mapping_of_snssai_1);
	printf("mapping_of_snssai :\n%s\n", cJSON_Print(jsonmapping_of_snssai_1));
	mapping_of_snssai_t* mapping_of_snssai_2 = mapping_of_snssai_parseFromJSON(jsonmapping_of_snssai_1);
	cJSON* jsonmapping_of_snssai_2 = mapping_of_snssai_convertToJSON(mapping_of_snssai_2);
	printf("repeating mapping_of_snssai:\n%s\n", cJSON_Print(jsonmapping_of_snssai_2));
}

int main() {
  test_mapping_of_snssai(1);
  test_mapping_of_snssai(0);

  printf("Hello world \n");
  return 0;
}

#endif // mapping_of_snssai_MAIN
#endif // mapping_of_snssai_TEST
