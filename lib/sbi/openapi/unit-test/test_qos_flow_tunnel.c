#ifndef qos_flow_tunnel_TEST
#define qos_flow_tunnel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_tunnel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_tunnel.h"
qos_flow_tunnel_t* instantiate_qos_flow_tunnel(int include_optional);

#include "test_tunnel_info.c"


qos_flow_tunnel_t* instantiate_qos_flow_tunnel(int include_optional) {
  qos_flow_tunnel_t* qos_flow_tunnel = NULL;
  if (include_optional) {
    qos_flow_tunnel = qos_flow_tunnel_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_tunnel_info(0)
    );
  } else {
    qos_flow_tunnel = qos_flow_tunnel_create(
      list_createList(),
      NULL
    );
  }

  return qos_flow_tunnel;
}


#ifdef qos_flow_tunnel_MAIN

void test_qos_flow_tunnel(int include_optional) {
    qos_flow_tunnel_t* qos_flow_tunnel_1 = instantiate_qos_flow_tunnel(include_optional);

	cJSON* jsonqos_flow_tunnel_1 = qos_flow_tunnel_convertToJSON(qos_flow_tunnel_1);
	printf("qos_flow_tunnel :\n%s\n", cJSON_Print(jsonqos_flow_tunnel_1));
	qos_flow_tunnel_t* qos_flow_tunnel_2 = qos_flow_tunnel_parseFromJSON(jsonqos_flow_tunnel_1);
	cJSON* jsonqos_flow_tunnel_2 = qos_flow_tunnel_convertToJSON(qos_flow_tunnel_2);
	printf("repeating qos_flow_tunnel:\n%s\n", cJSON_Print(jsonqos_flow_tunnel_2));
}

int main() {
  test_qos_flow_tunnel(1);
  test_qos_flow_tunnel(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_tunnel_MAIN
#endif // qos_flow_tunnel_TEST
