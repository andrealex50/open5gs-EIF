#ifndef send_mo_data_request_TEST
#define send_mo_data_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define send_mo_data_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/send_mo_data_request.h"
send_mo_data_request_t* instantiate_send_mo_data_request(int include_optional);

#include "test_send_mo_data_req_data.c"


send_mo_data_request_t* instantiate_send_mo_data_request(int include_optional) {
  send_mo_data_request_t* send_mo_data_request = NULL;
  if (include_optional) {
    send_mo_data_request = send_mo_data_request_create(
       // false, not to have infinite recursion
      instantiate_send_mo_data_req_data(0),
      instantiate_binary_t("blah", 5)
    );
  } else {
    send_mo_data_request = send_mo_data_request_create(
      NULL,
      instantiate_binary_t("blah", 5)
    );
  }

  return send_mo_data_request;
}


#ifdef send_mo_data_request_MAIN

void test_send_mo_data_request(int include_optional) {
    send_mo_data_request_t* send_mo_data_request_1 = instantiate_send_mo_data_request(include_optional);

	cJSON* jsonsend_mo_data_request_1 = send_mo_data_request_convertToJSON(send_mo_data_request_1);
	printf("send_mo_data_request :\n%s\n", cJSON_Print(jsonsend_mo_data_request_1));
	send_mo_data_request_t* send_mo_data_request_2 = send_mo_data_request_parseFromJSON(jsonsend_mo_data_request_1);
	cJSON* jsonsend_mo_data_request_2 = send_mo_data_request_convertToJSON(send_mo_data_request_2);
	printf("repeating send_mo_data_request:\n%s\n", cJSON_Print(jsonsend_mo_data_request_2));
}

int main() {
  test_send_mo_data_request(1);
  test_send_mo_data_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // send_mo_data_request_MAIN
#endif // send_mo_data_request_TEST
