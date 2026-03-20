#ifndef condition_data_TEST
#define condition_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define condition_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/condition_data.h"
condition_data_t* instantiate_condition_data(int include_optional);



condition_data_t* instantiate_condition_data(int include_optional) {
  condition_data_t* condition_data = NULL;
  if (include_optional) {
    condition_data = condition_data_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      npcf_smpolicycontrol_api_condition_data__3GPP_ACCESS,
      npcf_smpolicycontrol_api_condition_data__NR
    );
  } else {
    condition_data = condition_data_create(
      "0",
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      npcf_smpolicycontrol_api_condition_data__3GPP_ACCESS,
      npcf_smpolicycontrol_api_condition_data__NR
    );
  }

  return condition_data;
}


#ifdef condition_data_MAIN

void test_condition_data(int include_optional) {
    condition_data_t* condition_data_1 = instantiate_condition_data(include_optional);

	cJSON* jsoncondition_data_1 = condition_data_convertToJSON(condition_data_1);
	printf("condition_data :\n%s\n", cJSON_Print(jsoncondition_data_1));
	condition_data_t* condition_data_2 = condition_data_parseFromJSON(jsoncondition_data_1);
	cJSON* jsoncondition_data_2 = condition_data_convertToJSON(condition_data_2);
	printf("repeating condition_data:\n%s\n", cJSON_Print(jsoncondition_data_2));
}

int main() {
  test_condition_data(1);
  test_condition_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // condition_data_MAIN
#endif // condition_data_TEST
