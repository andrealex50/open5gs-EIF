#ifndef communication_characteristics_af_TEST
#define communication_characteristics_af_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_characteristics_af_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_characteristics_af.h"
communication_characteristics_af_t* instantiate_communication_characteristics_af(int include_optional);



communication_characteristics_af_t* instantiate_communication_characteristics_af(int include_optional) {
  communication_characteristics_af_t* communication_characteristics_af = NULL;
  if (include_optional) {
    communication_characteristics_af = communication_characteristics_af_create(
      56,
      56,
      56
    );
  } else {
    communication_characteristics_af = communication_characteristics_af_create(
      56,
      56,
      56
    );
  }

  return communication_characteristics_af;
}


#ifdef communication_characteristics_af_MAIN

void test_communication_characteristics_af(int include_optional) {
    communication_characteristics_af_t* communication_characteristics_af_1 = instantiate_communication_characteristics_af(include_optional);

	cJSON* jsoncommunication_characteristics_af_1 = communication_characteristics_af_convertToJSON(communication_characteristics_af_1);
	printf("communication_characteristics_af :\n%s\n", cJSON_Print(jsoncommunication_characteristics_af_1));
	communication_characteristics_af_t* communication_characteristics_af_2 = communication_characteristics_af_parseFromJSON(jsoncommunication_characteristics_af_1);
	cJSON* jsoncommunication_characteristics_af_2 = communication_characteristics_af_convertToJSON(communication_characteristics_af_2);
	printf("repeating communication_characteristics_af:\n%s\n", cJSON_Print(jsoncommunication_characteristics_af_2));
}

int main() {
  test_communication_characteristics_af(1);
  test_communication_characteristics_af(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_characteristics_af_MAIN
#endif // communication_characteristics_af_TEST
