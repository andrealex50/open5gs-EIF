#ifndef transfer_mt_data_add_info_TEST
#define transfer_mt_data_add_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transfer_mt_data_add_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transfer_mt_data_add_info.h"
transfer_mt_data_add_info_t* instantiate_transfer_mt_data_add_info(int include_optional);



transfer_mt_data_add_info_t* instantiate_transfer_mt_data_add_info(int include_optional) {
  transfer_mt_data_add_info_t* transfer_mt_data_add_info = NULL;
  if (include_optional) {
    transfer_mt_data_add_info = transfer_mt_data_add_info_create(
      56
    );
  } else {
    transfer_mt_data_add_info = transfer_mt_data_add_info_create(
      56
    );
  }

  return transfer_mt_data_add_info;
}


#ifdef transfer_mt_data_add_info_MAIN

void test_transfer_mt_data_add_info(int include_optional) {
    transfer_mt_data_add_info_t* transfer_mt_data_add_info_1 = instantiate_transfer_mt_data_add_info(include_optional);

	cJSON* jsontransfer_mt_data_add_info_1 = transfer_mt_data_add_info_convertToJSON(transfer_mt_data_add_info_1);
	printf("transfer_mt_data_add_info :\n%s\n", cJSON_Print(jsontransfer_mt_data_add_info_1));
	transfer_mt_data_add_info_t* transfer_mt_data_add_info_2 = transfer_mt_data_add_info_parseFromJSON(jsontransfer_mt_data_add_info_1);
	cJSON* jsontransfer_mt_data_add_info_2 = transfer_mt_data_add_info_convertToJSON(transfer_mt_data_add_info_2);
	printf("repeating transfer_mt_data_add_info:\n%s\n", cJSON_Print(jsontransfer_mt_data_add_info_2));
}

int main() {
  test_transfer_mt_data_add_info(1);
  test_transfer_mt_data_add_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transfer_mt_data_add_info_MAIN
#endif // transfer_mt_data_add_info_TEST
