#ifndef application_data_change_notif_TEST
#define application_data_change_notif_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define application_data_change_notif_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/application_data_change_notif.h"
application_data_change_notif_t* instantiate_application_data_change_notif(int include_optional);

#include "test_iptv_config_data.c"
#include "test_pfd_change_notification.c"
#include "test_bdt_policy_data.c"
#include "test_service_parameter_data.c"
#include "test_am_influ_data.c"


application_data_change_notif_t* instantiate_application_data_change_notif(int include_optional) {
  application_data_change_notif_t* application_data_change_notif = NULL;
  if (include_optional) {
    application_data_change_notif = application_data_change_notif_create(
       // false, not to have infinite recursion
      instantiate_iptv_config_data(0),
       // false, not to have infinite recursion
      instantiate_pfd_change_notification(0),
       // false, not to have infinite recursion
      instantiate_bdt_policy_data(0),
      "0",
       // false, not to have infinite recursion
      instantiate_service_parameter_data(0),
       // false, not to have infinite recursion
      instantiate_am_influ_data(0)
    );
  } else {
    application_data_change_notif = application_data_change_notif_create(
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      NULL
    );
  }

  return application_data_change_notif;
}


#ifdef application_data_change_notif_MAIN

void test_application_data_change_notif(int include_optional) {
    application_data_change_notif_t* application_data_change_notif_1 = instantiate_application_data_change_notif(include_optional);

	cJSON* jsonapplication_data_change_notif_1 = application_data_change_notif_convertToJSON(application_data_change_notif_1);
	printf("application_data_change_notif :\n%s\n", cJSON_Print(jsonapplication_data_change_notif_1));
	application_data_change_notif_t* application_data_change_notif_2 = application_data_change_notif_parseFromJSON(jsonapplication_data_change_notif_1);
	cJSON* jsonapplication_data_change_notif_2 = application_data_change_notif_convertToJSON(application_data_change_notif_2);
	printf("repeating application_data_change_notif:\n%s\n", cJSON_Print(jsonapplication_data_change_notif_2));
}

int main() {
  test_application_data_change_notif(1);
  test_application_data_change_notif(0);

  printf("Hello world \n");
  return 0;
}

#endif // application_data_change_notif_MAIN
#endif // application_data_change_notif_TEST
