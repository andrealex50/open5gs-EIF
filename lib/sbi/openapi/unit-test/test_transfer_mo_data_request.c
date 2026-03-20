#ifndef transfer_mo_data_request_TEST
#define transfer_mo_data_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_mo_data_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_mo_data_request.h"
transfer_mo_data_request_t* instantiate_transfer_mo_data_request(int include_optional);

#include "test_transfer_mo_data_req_data.c"


transfer_mo_data_request_t* instantiate_transfer_mo_data_request(int include_optional) {
  transfer_mo_data_request_t* transfer_mo_data_request = NULL;
  if (include_optional) {
    transfer_mo_data_request = transfer_mo_data_request_create(
       // false, not to have infinite recursion
      instantiate_transfer_mo_data_req_data(0),
      instantiate_binary_t("blah", 5)
    );
  } else {
    transfer_mo_data_request = transfer_mo_data_request_create(
      NULL,
      instantiate_binary_t("blah", 5)
    );
  }

  return transfer_mo_data_request;
}


#ifdef transfer_mo_data_request_MAIN

void test_transfer_mo_data_request(int include_optional) {
    transfer_mo_data_request_t* transfer_mo_data_request_1 = instantiate_transfer_mo_data_request(include_optional);

	cJSON* jsontransfer_mo_data_request_1 = transfer_mo_data_request_convertToJSON(transfer_mo_data_request_1);
	printf("transfer_mo_data_request :\n%s\n", cJSON_Print(jsontransfer_mo_data_request_1));
	transfer_mo_data_request_t* transfer_mo_data_request_2 = transfer_mo_data_request_parseFromJSON(jsontransfer_mo_data_request_1);
	cJSON* jsontransfer_mo_data_request_2 = transfer_mo_data_request_convertToJSON(transfer_mo_data_request_2);
	printf("repeating transfer_mo_data_request:\n%s\n", cJSON_Print(jsontransfer_mo_data_request_2));
}

int main() {
  test_transfer_mo_data_request(1);
  test_transfer_mo_data_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_mo_data_request_MAIN
#endif // transfer_mo_data_request_TEST
