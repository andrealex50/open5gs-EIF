#ifndef communication_characteristics_TEST
#define communication_characteristics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_characteristics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_characteristics.h"
communication_characteristics_t* instantiate_communication_characteristics(int include_optional);

#include "test_pp_subs_reg_timer.c"
#include "test_pp_active_time.c"
#include "test_pp_dl_packet_count_ext.c"
#include "test_pp_maximum_response_time.c"
#include "test_pp_maximum_latency.c"


communication_characteristics_t* instantiate_communication_characteristics(int include_optional) {
  communication_characteristics_t* communication_characteristics = NULL;
  if (include_optional) {
    communication_characteristics = communication_characteristics_create(
       // false, not to have infinite recursion
      instantiate_pp_subs_reg_timer(0),
       // false, not to have infinite recursion
      instantiate_pp_active_time(0),
      56,
       // false, not to have infinite recursion
      instantiate_pp_dl_packet_count_ext(0),
       // false, not to have infinite recursion
      instantiate_pp_maximum_response_time(0),
       // false, not to have infinite recursion
      instantiate_pp_maximum_latency(0)
    );
  } else {
    communication_characteristics = communication_characteristics_create(
      NULL,
      NULL,
      56,
      NULL,
      NULL,
      NULL
    );
  }

  return communication_characteristics;
}


#ifdef communication_characteristics_MAIN

void test_communication_characteristics(int include_optional) {
    communication_characteristics_t* communication_characteristics_1 = instantiate_communication_characteristics(include_optional);

	cJSON* jsoncommunication_characteristics_1 = communication_characteristics_convertToJSON(communication_characteristics_1);
	printf("communication_characteristics :\n%s\n", cJSON_Print(jsoncommunication_characteristics_1));
	communication_characteristics_t* communication_characteristics_2 = communication_characteristics_parseFromJSON(jsoncommunication_characteristics_1);
	cJSON* jsoncommunication_characteristics_2 = communication_characteristics_convertToJSON(communication_characteristics_2);
	printf("repeating communication_characteristics:\n%s\n", cJSON_Print(jsoncommunication_characteristics_2));
}

int main() {
  test_communication_characteristics(1);
  test_communication_characteristics(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_characteristics_MAIN
#endif // communication_characteristics_TEST
