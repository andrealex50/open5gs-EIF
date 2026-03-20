#ifndef sor_data_TEST
#define sor_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sor_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sor_data.h"
sor_data_t* instantiate_sor_data(int include_optional);



sor_data_t* instantiate_sor_data(int include_optional) {
  sor_data_t* sor_data = NULL;
  if (include_optional) {
    sor_data = sor_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_sor_data__NOT_SENT,
      "a",
      "a",
      1
    );
  } else {
    sor_data = sor_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_sor_data__NOT_SENT,
      "a",
      "a",
      1
    );
  }

  return sor_data;
}


#ifdef sor_data_MAIN

void test_sor_data(int include_optional) {
    sor_data_t* sor_data_1 = instantiate_sor_data(include_optional);

	cJSON* jsonsor_data_1 = sor_data_convertToJSON(sor_data_1);
	printf("sor_data :\n%s\n", cJSON_Print(jsonsor_data_1));
	sor_data_t* sor_data_2 = sor_data_parseFromJSON(jsonsor_data_1);
	cJSON* jsonsor_data_2 = sor_data_convertToJSON(sor_data_2);
	printf("repeating sor_data:\n%s\n", cJSON_Print(jsonsor_data_2));
}

int main() {
  test_sor_data(1);
  test_sor_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sor_data_MAIN
#endif // sor_data_TEST
