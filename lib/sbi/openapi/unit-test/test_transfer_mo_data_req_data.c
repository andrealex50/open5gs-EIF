#ifndef transfer_mo_data_req_data_TEST
#define transfer_mo_data_req_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_mo_data_req_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_mo_data_req_data.h"
transfer_mo_data_req_data_t* instantiate_transfer_mo_data_req_data(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_mo_exp_data_counter.c"
#include "test_user_location.c"


transfer_mo_data_req_data_t* instantiate_transfer_mo_data_req_data(int include_optional) {
  transfer_mo_data_req_data_t* transfer_mo_data_req_data = NULL;
  if (include_optional) {
    transfer_mo_data_req_data = transfer_mo_data_req_data_create(
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_mo_exp_data_counter(0),
       // false, not to have infinite recursion
      instantiate_user_location(0)
    );
  } else {
    transfer_mo_data_req_data = transfer_mo_data_req_data_create(
      NULL,
      NULL,
      NULL
    );
  }

  return transfer_mo_data_req_data;
}


#ifdef transfer_mo_data_req_data_MAIN

void test_transfer_mo_data_req_data(int include_optional) {
    transfer_mo_data_req_data_t* transfer_mo_data_req_data_1 = instantiate_transfer_mo_data_req_data(include_optional);

	cJSON* jsontransfer_mo_data_req_data_1 = transfer_mo_data_req_data_convertToJSON(transfer_mo_data_req_data_1);
	printf("transfer_mo_data_req_data :\n%s\n", cJSON_Print(jsontransfer_mo_data_req_data_1));
	transfer_mo_data_req_data_t* transfer_mo_data_req_data_2 = transfer_mo_data_req_data_parseFromJSON(jsontransfer_mo_data_req_data_1);
	cJSON* jsontransfer_mo_data_req_data_2 = transfer_mo_data_req_data_convertToJSON(transfer_mo_data_req_data_2);
	printf("repeating transfer_mo_data_req_data:\n%s\n", cJSON_Print(jsontransfer_mo_data_req_data_2));
}

int main() {
  test_transfer_mo_data_req_data(1);
  test_transfer_mo_data_req_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_mo_data_req_data_MAIN
#endif // transfer_mo_data_req_data_TEST
