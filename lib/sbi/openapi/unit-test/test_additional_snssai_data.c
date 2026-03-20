#ifndef additional_snssai_data_TEST
#define additional_snssai_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_snssai_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_snssai_data.h"
additional_snssai_data_t* instantiate_additional_snssai_data(int include_optional);

#include "test_slice_mbr_rm.c"


additional_snssai_data_t* instantiate_additional_snssai_data(int include_optional) {
  additional_snssai_data_t* additional_snssai_data = NULL;
  if (include_optional) {
    additional_snssai_data = additional_snssai_data_create(
      1,
      null,
      list_createList()
    );
  } else {
    additional_snssai_data = additional_snssai_data_create(
      1,
      null,
      list_createList()
    );
  }

  return additional_snssai_data;
}


#ifdef additional_snssai_data_MAIN

void test_additional_snssai_data(int include_optional) {
    additional_snssai_data_t* additional_snssai_data_1 = instantiate_additional_snssai_data(include_optional);

	cJSON* jsonadditional_snssai_data_1 = additional_snssai_data_convertToJSON(additional_snssai_data_1);
	printf("additional_snssai_data :\n%s\n", cJSON_Print(jsonadditional_snssai_data_1));
	additional_snssai_data_t* additional_snssai_data_2 = additional_snssai_data_parseFromJSON(jsonadditional_snssai_data_1);
	cJSON* jsonadditional_snssai_data_2 = additional_snssai_data_convertToJSON(additional_snssai_data_2);
	printf("repeating additional_snssai_data:\n%s\n", cJSON_Print(jsonadditional_snssai_data_2));
}

int main() {
  test_additional_snssai_data(1);
  test_additional_snssai_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_snssai_data_MAIN
#endif // additional_snssai_data_TEST
