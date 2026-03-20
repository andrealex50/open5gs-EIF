#ifndef transfer_mt_data_error_TEST
#define transfer_mt_data_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_mt_data_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_mt_data_error.h"
transfer_mt_data_error_t* instantiate_transfer_mt_data_error(int include_optional);

#include "test_access_token_err.c"
#include "test_access_token_req.c"


transfer_mt_data_error_t* instantiate_transfer_mt_data_error(int include_optional) {
  transfer_mt_data_error_t* transfer_mt_data_error = NULL;
  if (include_optional) {
    transfer_mt_data_error = transfer_mt_data_error_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
       // false, not to have infinite recursion
      instantiate_access_token_err(0),
       // false, not to have infinite recursion
      instantiate_access_token_req(0),
      "a",
      1,
      56
    );
  } else {
    transfer_mt_data_error = transfer_mt_data_error_create(
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      list_createList(),
      "a",
      NULL,
      NULL,
      "a",
      1,
      56
    );
  }

  return transfer_mt_data_error;
}


#ifdef transfer_mt_data_error_MAIN

void test_transfer_mt_data_error(int include_optional) {
    transfer_mt_data_error_t* transfer_mt_data_error_1 = instantiate_transfer_mt_data_error(include_optional);

	cJSON* jsontransfer_mt_data_error_1 = transfer_mt_data_error_convertToJSON(transfer_mt_data_error_1);
	printf("transfer_mt_data_error :\n%s\n", cJSON_Print(jsontransfer_mt_data_error_1));
	transfer_mt_data_error_t* transfer_mt_data_error_2 = transfer_mt_data_error_parseFromJSON(jsontransfer_mt_data_error_1);
	cJSON* jsontransfer_mt_data_error_2 = transfer_mt_data_error_convertToJSON(transfer_mt_data_error_2);
	printf("repeating transfer_mt_data_error:\n%s\n", cJSON_Print(jsontransfer_mt_data_error_2));
}

int main() {
  test_transfer_mt_data_error(1);
  test_transfer_mt_data_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_mt_data_error_MAIN
#endif // transfer_mt_data_error_TEST
