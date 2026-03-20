#ifndef additional_snssai_data_1_TEST
#define additional_snssai_data_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_snssai_data_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_snssai_data_1.h"
additional_snssai_data_1_t* instantiate_additional_snssai_data_1(int include_optional);

#include "test_slice_mbr_rm.c"


additional_snssai_data_1_t* instantiate_additional_snssai_data_1(int include_optional) {
  additional_snssai_data_1_t* additional_snssai_data_1 = NULL;
  if (include_optional) {
    additional_snssai_data_1 = additional_snssai_data_1_create(
      1,
      null,
      list_createList()
    );
  } else {
    additional_snssai_data_1 = additional_snssai_data_1_create(
      1,
      null,
      list_createList()
    );
  }

  return additional_snssai_data_1;
}


#ifdef additional_snssai_data_1_MAIN

void test_additional_snssai_data_1(int include_optional) {
    additional_snssai_data_1_t* additional_snssai_data_1_1 = instantiate_additional_snssai_data_1(include_optional);

	cJSON* jsonadditional_snssai_data_1_1 = additional_snssai_data_1_convertToJSON(additional_snssai_data_1_1);
	printf("additional_snssai_data_1 :\n%s\n", cJSON_Print(jsonadditional_snssai_data_1_1));
	additional_snssai_data_1_t* additional_snssai_data_1_2 = additional_snssai_data_1_parseFromJSON(jsonadditional_snssai_data_1_1);
	cJSON* jsonadditional_snssai_data_1_2 = additional_snssai_data_1_convertToJSON(additional_snssai_data_1_2);
	printf("repeating additional_snssai_data_1:\n%s\n", cJSON_Print(jsonadditional_snssai_data_1_2));
}

int main() {
  test_additional_snssai_data_1(1);
  test_additional_snssai_data_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_snssai_data_1_MAIN
#endif // additional_snssai_data_1_TEST
