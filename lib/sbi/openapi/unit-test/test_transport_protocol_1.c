#ifndef transport_protocol_1_TEST
#define transport_protocol_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_protocol_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_protocol_1.h"
transport_protocol_1_t* instantiate_transport_protocol_1(int include_optional);



transport_protocol_1_t* instantiate_transport_protocol_1(int include_optional) {
  transport_protocol_1_t* transport_protocol_1 = NULL;
  if (include_optional) {
    transport_protocol_1 = transport_protocol_1_create(
    );
  } else {
    transport_protocol_1 = transport_protocol_1_create(
    );
  }

  return transport_protocol_1;
}


#ifdef transport_protocol_1_MAIN

void test_transport_protocol_1(int include_optional) {
    transport_protocol_1_t* transport_protocol_1_1 = instantiate_transport_protocol_1(include_optional);

	cJSON* jsontransport_protocol_1_1 = transport_protocol_1_convertToJSON(transport_protocol_1_1);
	printf("transport_protocol_1 :\n%s\n", cJSON_Print(jsontransport_protocol_1_1));
	transport_protocol_1_t* transport_protocol_1_2 = transport_protocol_1_parseFromJSON(jsontransport_protocol_1_1);
	cJSON* jsontransport_protocol_1_2 = transport_protocol_1_convertToJSON(transport_protocol_1_2);
	printf("repeating transport_protocol_1:\n%s\n", cJSON_Print(jsontransport_protocol_1_2));
}

int main() {
  test_transport_protocol_1(1);
  test_transport_protocol_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_protocol_1_MAIN
#endif // transport_protocol_1_TEST
