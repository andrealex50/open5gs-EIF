#ifndef app_detection_report_TEST
#define app_detection_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define app_detection_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/app_detection_report.h"
app_detection_report_t* instantiate_app_detection_report(int include_optional);



app_detection_report_t* instantiate_app_detection_report(int include_optional) {
  app_detection_report_t* app_detection_report = NULL;
  if (include_optional) {
    app_detection_report = app_detection_report_create(
      npcf_policyauthorization_service_api_app_detection_report__APP_START,
      "0"
    );
  } else {
    app_detection_report = app_detection_report_create(
      npcf_policyauthorization_service_api_app_detection_report__APP_START,
      "0"
    );
  }

  return app_detection_report;
}


#ifdef app_detection_report_MAIN

void test_app_detection_report(int include_optional) {
    app_detection_report_t* app_detection_report_1 = instantiate_app_detection_report(include_optional);

	cJSON* jsonapp_detection_report_1 = app_detection_report_convertToJSON(app_detection_report_1);
	printf("app_detection_report :\n%s\n", cJSON_Print(jsonapp_detection_report_1));
	app_detection_report_t* app_detection_report_2 = app_detection_report_parseFromJSON(jsonapp_detection_report_1);
	cJSON* jsonapp_detection_report_2 = app_detection_report_convertToJSON(app_detection_report_2);
	printf("repeating app_detection_report:\n%s\n", cJSON_Print(jsonapp_detection_report_2));
}

int main() {
  test_app_detection_report(1);
  test_app_detection_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // app_detection_report_MAIN
#endif // app_detection_report_TEST
