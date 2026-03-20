#ifndef qos_notif_type_TEST
#define qos_notif_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_notif_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_notif_type.h"
qos_notif_type_t* instantiate_qos_notif_type(int include_optional);



qos_notif_type_t* instantiate_qos_notif_type(int include_optional) {
  qos_notif_type_t* qos_notif_type = NULL;
  if (include_optional) {
    qos_notif_type = qos_notif_type_create(
    );
  } else {
    qos_notif_type = qos_notif_type_create(
    );
  }

  return qos_notif_type;
}


#ifdef qos_notif_type_MAIN

void test_qos_notif_type(int include_optional) {
    qos_notif_type_t* qos_notif_type_1 = instantiate_qos_notif_type(include_optional);

	cJSON* jsonqos_notif_type_1 = qos_notif_type_convertToJSON(qos_notif_type_1);
	printf("qos_notif_type :\n%s\n", cJSON_Print(jsonqos_notif_type_1));
	qos_notif_type_t* qos_notif_type_2 = qos_notif_type_parseFromJSON(jsonqos_notif_type_1);
	cJSON* jsonqos_notif_type_2 = qos_notif_type_convertToJSON(qos_notif_type_2);
	printf("repeating qos_notif_type:\n%s\n", cJSON_Print(jsonqos_notif_type_2));
}

int main() {
  test_qos_notif_type(1);
  test_qos_notif_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_notif_type_MAIN
#endif // qos_notif_type_TEST
