#ifndef odb_data_TEST
#define odb_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define odb_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/odb_data.h"
odb_data_t* instantiate_odb_data(int include_optional);



odb_data_t* instantiate_odb_data(int include_optional) {
  odb_data_t* odb_data = NULL;
  if (include_optional) {
    odb_data = odb_data_create(
      nudr_datarepository_api_openapi_file_odb_data__OUTSIDE_HOME_PLMN
    );
  } else {
    odb_data = odb_data_create(
      nudr_datarepository_api_openapi_file_odb_data__OUTSIDE_HOME_PLMN
    );
  }

  return odb_data;
}


#ifdef odb_data_MAIN

void test_odb_data(int include_optional) {
    odb_data_t* odb_data_1 = instantiate_odb_data(include_optional);

	cJSON* jsonodb_data_1 = odb_data_convertToJSON(odb_data_1);
	printf("odb_data :\n%s\n", cJSON_Print(jsonodb_data_1));
	odb_data_t* odb_data_2 = odb_data_parseFromJSON(jsonodb_data_1);
	cJSON* jsonodb_data_2 = odb_data_convertToJSON(odb_data_2);
	printf("repeating odb_data:\n%s\n", cJSON_Print(jsonodb_data_2));
}

int main() {
  test_odb_data(1);
  test_odb_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // odb_data_MAIN
#endif // odb_data_TEST
