#ifndef send_mo_data_req_data_TEST
#define send_mo_data_req_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_mo_data_req_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_mo_data_req_data.h"
send_mo_data_req_data_t* instantiate_send_mo_data_req_data(int include_optional);

#include "test_ref_to_binary_data.c"
#include "test_mo_exp_data_counter.c"
#include "test_user_location.c"


send_mo_data_req_data_t* instantiate_send_mo_data_req_data(int include_optional) {
  send_mo_data_req_data_t* send_mo_data_req_data = NULL;
  if (include_optional) {
    send_mo_data_req_data = send_mo_data_req_data_create(
       // false, not to have infinite recursion
      instantiate_ref_to_binary_data(0),
       // false, not to have infinite recursion
      instantiate_mo_exp_data_counter(0),
       // false, not to have infinite recursion
      instantiate_user_location(0)
    );
  } else {
    send_mo_data_req_data = send_mo_data_req_data_create(
      NULL,
      NULL,
      NULL
    );
  }

  return send_mo_data_req_data;
}


#ifdef send_mo_data_req_data_MAIN

void test_send_mo_data_req_data(int include_optional) {
    send_mo_data_req_data_t* send_mo_data_req_data_1 = instantiate_send_mo_data_req_data(include_optional);

	cJSON* jsonsend_mo_data_req_data_1 = send_mo_data_req_data_convertToJSON(send_mo_data_req_data_1);
	printf("send_mo_data_req_data :\n%s\n", cJSON_Print(jsonsend_mo_data_req_data_1));
	send_mo_data_req_data_t* send_mo_data_req_data_2 = send_mo_data_req_data_parseFromJSON(jsonsend_mo_data_req_data_1);
	cJSON* jsonsend_mo_data_req_data_2 = send_mo_data_req_data_convertToJSON(send_mo_data_req_data_2);
	printf("repeating send_mo_data_req_data:\n%s\n", cJSON_Print(jsonsend_mo_data_req_data_2));
}

int main() {
  test_send_mo_data_req_data(1);
  test_send_mo_data_req_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_mo_data_req_data_MAIN
#endif // send_mo_data_req_data_TEST
