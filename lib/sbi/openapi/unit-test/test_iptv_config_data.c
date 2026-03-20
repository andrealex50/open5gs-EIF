#ifndef iptv_config_data_TEST
#define iptv_config_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iptv_config_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iptv_config_data.h"
iptv_config_data_t* instantiate_iptv_config_data(int include_optional);

#include "test_snssai.c"


iptv_config_data_t* instantiate_iptv_config_data(int include_optional) {
  iptv_config_data_t* iptv_config_data = NULL;
  if (include_optional) {
    iptv_config_data = iptv_config_data_create(
      "a",
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "0",
      list_createList(),
      "a",
      "0",
      list_createList()
    );
  } else {
    iptv_config_data = iptv_config_data_create(
      "a",
      null,
      "0",
      NULL,
      "0",
      list_createList(),
      "a",
      "0",
      list_createList()
    );
  }

  return iptv_config_data;
}


#ifdef iptv_config_data_MAIN

void test_iptv_config_data(int include_optional) {
    iptv_config_data_t* iptv_config_data_1 = instantiate_iptv_config_data(include_optional);

	cJSON* jsoniptv_config_data_1 = iptv_config_data_convertToJSON(iptv_config_data_1);
	printf("iptv_config_data :\n%s\n", cJSON_Print(jsoniptv_config_data_1));
	iptv_config_data_t* iptv_config_data_2 = iptv_config_data_parseFromJSON(jsoniptv_config_data_1);
	cJSON* jsoniptv_config_data_2 = iptv_config_data_convertToJSON(iptv_config_data_2);
	printf("repeating iptv_config_data:\n%s\n", cJSON_Print(jsoniptv_config_data_2));
}

int main() {
  test_iptv_config_data(1);
  test_iptv_config_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // iptv_config_data_MAIN
#endif // iptv_config_data_TEST
