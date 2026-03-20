#ifndef nssai_ack_data_TEST
#define nssai_ack_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nssai_ack_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nssai_ack_data.h"
nssai_ack_data_t* instantiate_nssai_ack_data(int include_optional);



nssai_ack_data_t* instantiate_nssai_ack_data(int include_optional) {
  nssai_ack_data_t* nssai_ack_data = NULL;
  if (include_optional) {
    nssai_ack_data = nssai_ack_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_nssai_ack_data__NOT_SENT
    );
  } else {
    nssai_ack_data = nssai_ack_data_create(
      "2013-10-20T19:20:30+01:00",
      nudr_datarepository_api_openapi_file_nssai_ack_data__NOT_SENT
    );
  }

  return nssai_ack_data;
}


#ifdef nssai_ack_data_MAIN

void test_nssai_ack_data(int include_optional) {
    nssai_ack_data_t* nssai_ack_data_1 = instantiate_nssai_ack_data(include_optional);

	cJSON* jsonnssai_ack_data_1 = nssai_ack_data_convertToJSON(nssai_ack_data_1);
	printf("nssai_ack_data :\n%s\n", cJSON_Print(jsonnssai_ack_data_1));
	nssai_ack_data_t* nssai_ack_data_2 = nssai_ack_data_parseFromJSON(jsonnssai_ack_data_1);
	cJSON* jsonnssai_ack_data_2 = nssai_ack_data_convertToJSON(nssai_ack_data_2);
	printf("repeating nssai_ack_data:\n%s\n", cJSON_Print(jsonnssai_ack_data_2));
}

int main() {
  test_nssai_ack_data(1);
  test_nssai_ack_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // nssai_ack_data_MAIN
#endif // nssai_ack_data_TEST
