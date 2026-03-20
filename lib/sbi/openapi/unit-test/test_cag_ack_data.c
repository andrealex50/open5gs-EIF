#ifndef cag_ack_data_TEST
#define cag_ack_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cag_ack_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cag_ack_data.h"
cag_ack_data_t* instantiate_cag_ack_data(int include_optional);



cag_ack_data_t* instantiate_cag_ack_data(int include_optional) {
  cag_ack_data_t* cag_ack_data = NULL;
  if (include_optional) {
    cag_ack_data = cag_ack_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_cag_ack_data__NOT_SENT
    );
  } else {
    cag_ack_data = cag_ack_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_cag_ack_data__NOT_SENT
    );
  }

  return cag_ack_data;
}


#ifdef cag_ack_data_MAIN

void test_cag_ack_data(int include_optional) {
    cag_ack_data_t* cag_ack_data_1 = instantiate_cag_ack_data(include_optional);

	cJSON* jsoncag_ack_data_1 = cag_ack_data_convertToJSON(cag_ack_data_1);
	printf("cag_ack_data :\n%s\n", cJSON_Print(jsoncag_ack_data_1));
	cag_ack_data_t* cag_ack_data_2 = cag_ack_data_parseFromJSON(jsoncag_ack_data_1);
	cJSON* jsoncag_ack_data_2 = cag_ack_data_convertToJSON(cag_ack_data_2);
	printf("repeating cag_ack_data:\n%s\n", cJSON_Print(jsoncag_ack_data_2));
}

int main() {
  test_cag_ack_data(1);
  test_cag_ack_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // cag_ack_data_MAIN
#endif // cag_ack_data_TEST
