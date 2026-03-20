#ifndef traffic_influ_data_notif_TEST
#define traffic_influ_data_notif_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define traffic_influ_data_notif_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/traffic_influ_data_notif.h"
traffic_influ_data_notif_t* instantiate_traffic_influ_data_notif(int include_optional);

#include "test_traffic_influ_data.c"


traffic_influ_data_notif_t* instantiate_traffic_influ_data_notif(int include_optional) {
  traffic_influ_data_notif_t* traffic_influ_data_notif = NULL;
  if (include_optional) {
    traffic_influ_data_notif = traffic_influ_data_notif_create(
      "0",
       // false, not to have infinite recursion
      instantiate_traffic_influ_data(0)
    );
  } else {
    traffic_influ_data_notif = traffic_influ_data_notif_create(
      "0",
      NULL
    );
  }

  return traffic_influ_data_notif;
}


#ifdef traffic_influ_data_notif_MAIN

void test_traffic_influ_data_notif(int include_optional) {
    traffic_influ_data_notif_t* traffic_influ_data_notif_1 = instantiate_traffic_influ_data_notif(include_optional);

	cJSON* jsontraffic_influ_data_notif_1 = traffic_influ_data_notif_convertToJSON(traffic_influ_data_notif_1);
	printf("traffic_influ_data_notif :\n%s\n", cJSON_Print(jsontraffic_influ_data_notif_1));
	traffic_influ_data_notif_t* traffic_influ_data_notif_2 = traffic_influ_data_notif_parseFromJSON(jsontraffic_influ_data_notif_1);
	cJSON* jsontraffic_influ_data_notif_2 = traffic_influ_data_notif_convertToJSON(traffic_influ_data_notif_2);
	printf("repeating traffic_influ_data_notif:\n%s\n", cJSON_Print(jsontraffic_influ_data_notif_2));
}

int main() {
  test_traffic_influ_data_notif(1);
  test_traffic_influ_data_notif(0);

  printf("Hello world \n");
  return 0;
}

#endif // traffic_influ_data_notif_MAIN
#endif // traffic_influ_data_notif_TEST
