#ifndef af_requested_data_TEST
#define af_requested_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_requested_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_requested_data.h"
af_requested_data_t* instantiate_af_requested_data(int include_optional);



af_requested_data_t* instantiate_af_requested_data(int include_optional) {
  af_requested_data_t* af_requested_data = NULL;
  if (include_optional) {
    af_requested_data = af_requested_data_create(
    );
  } else {
    af_requested_data = af_requested_data_create(
    );
  }

  return af_requested_data;
}


#ifdef af_requested_data_MAIN

void test_af_requested_data(int include_optional) {
    af_requested_data_t* af_requested_data_1 = instantiate_af_requested_data(include_optional);

	cJSON* jsonaf_requested_data_1 = af_requested_data_convertToJSON(af_requested_data_1);
	printf("af_requested_data :\n%s\n", cJSON_Print(jsonaf_requested_data_1));
	af_requested_data_t* af_requested_data_2 = af_requested_data_parseFromJSON(jsonaf_requested_data_1);
	cJSON* jsonaf_requested_data_2 = af_requested_data_convertToJSON(af_requested_data_2);
	printf("repeating af_requested_data:\n%s\n", cJSON_Print(jsonaf_requested_data_2));
}

int main() {
  test_af_requested_data(1);
  test_af_requested_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_requested_data_MAIN
#endif // af_requested_data_TEST
