#ifndef vn_group_data_TEST
#define vn_group_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define vn_group_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/vn_group_data.h"
vn_group_data_t* instantiate_vn_group_data(int include_optional);

#include "test_pdu_session_types_1.c"
#include "test_snssai.c"


vn_group_data_t* instantiate_vn_group_data(int include_optional) {
  vn_group_data_t* vn_group_data = NULL;
  if (include_optional) {
    vn_group_data = vn_group_data_create(
       // false, not to have infinite recursion
      instantiate_pdu_session_types_1(0),
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      list_createList()
    );
  } else {
    vn_group_data = vn_group_data_create(
      NULL,
      "0",
      NULL,
      list_createList()
    );
  }

  return vn_group_data;
}


#ifdef vn_group_data_MAIN

void test_vn_group_data(int include_optional) {
    vn_group_data_t* vn_group_data_1 = instantiate_vn_group_data(include_optional);

	cJSON* jsonvn_group_data_1 = vn_group_data_convertToJSON(vn_group_data_1);
	printf("vn_group_data :\n%s\n", cJSON_Print(jsonvn_group_data_1));
	vn_group_data_t* vn_group_data_2 = vn_group_data_parseFromJSON(jsonvn_group_data_1);
	cJSON* jsonvn_group_data_2 = vn_group_data_convertToJSON(vn_group_data_2);
	printf("repeating vn_group_data:\n%s\n", cJSON_Print(jsonvn_group_data_2));
}

int main() {
  test_vn_group_data(1);
  test_vn_group_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // vn_group_data_MAIN
#endif // vn_group_data_TEST
