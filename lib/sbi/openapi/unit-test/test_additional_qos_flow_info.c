#ifndef additional_qos_flow_info_TEST
#define additional_qos_flow_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_qos_flow_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_qos_flow_info.h"
additional_qos_flow_info_t* instantiate_additional_qos_flow_info(int include_optional);



additional_qos_flow_info_t* instantiate_additional_qos_flow_info(int include_optional) {
  additional_qos_flow_info_t* additional_qos_flow_info = NULL;
  if (include_optional) {
    additional_qos_flow_info = additional_qos_flow_info_create(
    );
  } else {
    additional_qos_flow_info = additional_qos_flow_info_create(
    );
  }

  return additional_qos_flow_info;
}


#ifdef additional_qos_flow_info_MAIN

void test_additional_qos_flow_info(int include_optional) {
    additional_qos_flow_info_t* additional_qos_flow_info_1 = instantiate_additional_qos_flow_info(include_optional);

	cJSON* jsonadditional_qos_flow_info_1 = additional_qos_flow_info_convertToJSON(additional_qos_flow_info_1);
	printf("additional_qos_flow_info :\n%s\n", cJSON_Print(jsonadditional_qos_flow_info_1));
	additional_qos_flow_info_t* additional_qos_flow_info_2 = additional_qos_flow_info_parseFromJSON(jsonadditional_qos_flow_info_1);
	cJSON* jsonadditional_qos_flow_info_2 = additional_qos_flow_info_convertToJSON(additional_qos_flow_info_2);
	printf("repeating additional_qos_flow_info:\n%s\n", cJSON_Print(jsonadditional_qos_flow_info_2));
}

int main() {
  test_additional_qos_flow_info(1);
  test_additional_qos_flow_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_qos_flow_info_MAIN
#endif // additional_qos_flow_info_TEST
