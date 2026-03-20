#ifndef sec_negotiate_rsp_data_TEST
#define sec_negotiate_rsp_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sec_negotiate_rsp_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sec_negotiate_rsp_data.h"
sec_negotiate_rsp_data_t* instantiate_sec_negotiate_rsp_data(int include_optional);



sec_negotiate_rsp_data_t* instantiate_sec_negotiate_rsp_data(int include_optional) {
  sec_negotiate_rsp_data_t* sec_negotiate_rsp_data = NULL;
  if (include_optional) {
    sec_negotiate_rsp_data = sec_negotiate_rsp_data_create(
      "a",
      n32_handshake_api_sec_negotiate_rsp_data__TLS,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  } else {
    sec_negotiate_rsp_data = sec_negotiate_rsp_data_create(
      "a",
      n32_handshake_api_sec_negotiate_rsp_data__TLS,
      1,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      "a"
    );
  }

  return sec_negotiate_rsp_data;
}


#ifdef sec_negotiate_rsp_data_MAIN

void test_sec_negotiate_rsp_data(int include_optional) {
    sec_negotiate_rsp_data_t* sec_negotiate_rsp_data_1 = instantiate_sec_negotiate_rsp_data(include_optional);

	cJSON* jsonsec_negotiate_rsp_data_1 = sec_negotiate_rsp_data_convertToJSON(sec_negotiate_rsp_data_1);
	printf("sec_negotiate_rsp_data :\n%s\n", cJSON_Print(jsonsec_negotiate_rsp_data_1));
	sec_negotiate_rsp_data_t* sec_negotiate_rsp_data_2 = sec_negotiate_rsp_data_parseFromJSON(jsonsec_negotiate_rsp_data_1);
	cJSON* jsonsec_negotiate_rsp_data_2 = sec_negotiate_rsp_data_convertToJSON(sec_negotiate_rsp_data_2);
	printf("repeating sec_negotiate_rsp_data:\n%s\n", cJSON_Print(jsonsec_negotiate_rsp_data_2));
}

int main() {
  test_sec_negotiate_rsp_data(1);
  test_sec_negotiate_rsp_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sec_negotiate_rsp_data_MAIN
#endif // sec_negotiate_rsp_data_TEST
