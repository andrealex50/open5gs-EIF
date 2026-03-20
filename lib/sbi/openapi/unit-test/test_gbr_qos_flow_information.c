#ifndef gbr_qos_flow_information_TEST
#define gbr_qos_flow_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define gbr_qos_flow_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/gbr_qos_flow_information.h"
gbr_qos_flow_information_t* instantiate_gbr_qos_flow_information(int include_optional);



gbr_qos_flow_information_t* instantiate_gbr_qos_flow_information(int include_optional) {
  gbr_qos_flow_information_t* gbr_qos_flow_information = NULL;
  if (include_optional) {
    gbr_qos_flow_information = gbr_qos_flow_information_create(
      "a",
      "a",
      "a",
      "a",
      nsmf_pdusession_gbr_qos_flow_information__REQUESTED,
      0,
      0,
      list_createList()
    );
  } else {
    gbr_qos_flow_information = gbr_qos_flow_information_create(
      "a",
      "a",
      "a",
      "a",
      nsmf_pdusession_gbr_qos_flow_information__REQUESTED,
      0,
      0,
      list_createList()
    );
  }

  return gbr_qos_flow_information;
}


#ifdef gbr_qos_flow_information_MAIN

void test_gbr_qos_flow_information(int include_optional) {
    gbr_qos_flow_information_t* gbr_qos_flow_information_1 = instantiate_gbr_qos_flow_information(include_optional);

	cJSON* jsongbr_qos_flow_information_1 = gbr_qos_flow_information_convertToJSON(gbr_qos_flow_information_1);
	printf("gbr_qos_flow_information :\n%s\n", cJSON_Print(jsongbr_qos_flow_information_1));
	gbr_qos_flow_information_t* gbr_qos_flow_information_2 = gbr_qos_flow_information_parseFromJSON(jsongbr_qos_flow_information_1);
	cJSON* jsongbr_qos_flow_information_2 = gbr_qos_flow_information_convertToJSON(gbr_qos_flow_information_2);
	printf("repeating gbr_qos_flow_information:\n%s\n", cJSON_Print(jsongbr_qos_flow_information_2));
}

int main() {
  test_gbr_qos_flow_information(1);
  test_gbr_qos_flow_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // gbr_qos_flow_information_MAIN
#endif // gbr_qos_flow_information_TEST
