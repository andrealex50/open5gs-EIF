#ifndef qos_flow_usage_report_TEST
#define qos_flow_usage_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define qos_flow_usage_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/qos_flow_usage_report.h"
qos_flow_usage_report_t* instantiate_qos_flow_usage_report(int include_optional);



qos_flow_usage_report_t* instantiate_qos_flow_usage_report(int include_optional) {
  qos_flow_usage_report_t* qos_flow_usage_report = NULL;
  if (include_optional) {
    qos_flow_usage_report = qos_flow_usage_report_create(
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  } else {
    qos_flow_usage_report = qos_flow_usage_report_create(
      0,
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  }

  return qos_flow_usage_report;
}


#ifdef qos_flow_usage_report_MAIN

void test_qos_flow_usage_report(int include_optional) {
    qos_flow_usage_report_t* qos_flow_usage_report_1 = instantiate_qos_flow_usage_report(include_optional);

	cJSON* jsonqos_flow_usage_report_1 = qos_flow_usage_report_convertToJSON(qos_flow_usage_report_1);
	printf("qos_flow_usage_report :\n%s\n", cJSON_Print(jsonqos_flow_usage_report_1));
	qos_flow_usage_report_t* qos_flow_usage_report_2 = qos_flow_usage_report_parseFromJSON(jsonqos_flow_usage_report_1);
	cJSON* jsonqos_flow_usage_report_2 = qos_flow_usage_report_convertToJSON(qos_flow_usage_report_2);
	printf("repeating qos_flow_usage_report:\n%s\n", cJSON_Print(jsonqos_flow_usage_report_2));
}

int main() {
  test_qos_flow_usage_report(1);
  test_qos_flow_usage_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // qos_flow_usage_report_MAIN
#endif // qos_flow_usage_report_TEST
