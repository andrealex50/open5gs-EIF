#ifndef sec_negotiate_req_data_TEST
#define sec_negotiate_req_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sec_negotiate_req_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sec_negotiate_req_data.h"
sec_negotiate_req_data_t* instantiate_sec_negotiate_req_data(int include_optional);

#include "test_plmn_id.c"
#include "test_plmn_id_nid.c"


sec_negotiate_req_data_t* instantiate_sec_negotiate_req_data(int include_optional) {
  sec_negotiate_req_data_t* sec_negotiate_req_data = NULL;
  if (include_optional) {
    sec_negotiate_req_data = sec_negotiate_req_data_create(
      "a",
      list_createList(),
      1,
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
       // false, not to have infinite recursion
      instantiate_plmn_id_nid(0),
      list_createList(),
      "a"
    );
  } else {
    sec_negotiate_req_data = sec_negotiate_req_data_create(
      "a",
      list_createList(),
      1,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      "a"
    );
  }

  return sec_negotiate_req_data;
}


#ifdef sec_negotiate_req_data_MAIN

void test_sec_negotiate_req_data(int include_optional) {
    sec_negotiate_req_data_t* sec_negotiate_req_data_1 = instantiate_sec_negotiate_req_data(include_optional);

	cJSON* jsonsec_negotiate_req_data_1 = sec_negotiate_req_data_convertToJSON(sec_negotiate_req_data_1);
	printf("sec_negotiate_req_data :\n%s\n", cJSON_Print(jsonsec_negotiate_req_data_1));
	sec_negotiate_req_data_t* sec_negotiate_req_data_2 = sec_negotiate_req_data_parseFromJSON(jsonsec_negotiate_req_data_1);
	cJSON* jsonsec_negotiate_req_data_2 = sec_negotiate_req_data_convertToJSON(sec_negotiate_req_data_2);
	printf("repeating sec_negotiate_req_data:\n%s\n", cJSON_Print(jsonsec_negotiate_req_data_2));
}

int main() {
  test_sec_negotiate_req_data(1);
  test_sec_negotiate_req_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sec_negotiate_req_data_MAIN
#endif // sec_negotiate_req_data_TEST
