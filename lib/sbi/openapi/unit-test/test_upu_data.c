#ifndef upu_data_TEST
#define upu_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define upu_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/upu_data.h"
upu_data_t* instantiate_upu_data(int include_optional);



upu_data_t* instantiate_upu_data(int include_optional) {
  upu_data_t* upu_data = NULL;
  if (include_optional) {
    upu_data = upu_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_upu_data__NOT_SENT,
      "a",
      "a"
    );
  } else {
    upu_data = upu_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_upu_data__NOT_SENT,
      "a",
      "a"
    );
  }

  return upu_data;
}


#ifdef upu_data_MAIN

void test_upu_data(int include_optional) {
    upu_data_t* upu_data_1 = instantiate_upu_data(include_optional);

	cJSON* jsonupu_data_1 = upu_data_convertToJSON(upu_data_1);
	printf("upu_data :\n%s\n", cJSON_Print(jsonupu_data_1));
	upu_data_t* upu_data_2 = upu_data_parseFromJSON(jsonupu_data_1);
	cJSON* jsonupu_data_2 = upu_data_convertToJSON(upu_data_2);
	printf("repeating upu_data:\n%s\n", cJSON_Print(jsonupu_data_2));
}

int main() {
  test_upu_data(1);
  test_upu_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // upu_data_MAIN
#endif // upu_data_TEST
