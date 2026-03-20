#ifndef acc_net_ch_id_TEST
#define acc_net_ch_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acc_net_ch_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acc_net_ch_id.h"
acc_net_ch_id_t* instantiate_acc_net_ch_id(int include_optional);



acc_net_ch_id_t* instantiate_acc_net_ch_id(int include_optional) {
  acc_net_ch_id_t* acc_net_ch_id = NULL;
  if (include_optional) {
    acc_net_ch_id = acc_net_ch_id_create(
      0,
      "0",
      list_createList(),
      1
    );
  } else {
    acc_net_ch_id = acc_net_ch_id_create(
      0,
      "0",
      list_createList(),
      1
    );
  }

  return acc_net_ch_id;
}


#ifdef acc_net_ch_id_MAIN

void test_acc_net_ch_id(int include_optional) {
    acc_net_ch_id_t* acc_net_ch_id_1 = instantiate_acc_net_ch_id(include_optional);

	cJSON* jsonacc_net_ch_id_1 = acc_net_ch_id_convertToJSON(acc_net_ch_id_1);
	printf("acc_net_ch_id :\n%s\n", cJSON_Print(jsonacc_net_ch_id_1));
	acc_net_ch_id_t* acc_net_ch_id_2 = acc_net_ch_id_parseFromJSON(jsonacc_net_ch_id_1);
	cJSON* jsonacc_net_ch_id_2 = acc_net_ch_id_convertToJSON(acc_net_ch_id_2);
	printf("repeating acc_net_ch_id:\n%s\n", cJSON_Print(jsonacc_net_ch_id_2));
}

int main() {
  test_acc_net_ch_id(1);
  test_acc_net_ch_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // acc_net_ch_id_MAIN
#endif // acc_net_ch_id_TEST
