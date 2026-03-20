#ifndef volume_timed_report_TEST
#define volume_timed_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define volume_timed_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/volume_timed_report.h"
volume_timed_report_t* instantiate_volume_timed_report(int include_optional);



volume_timed_report_t* instantiate_volume_timed_report(int include_optional) {
  volume_timed_report_t* volume_timed_report = NULL;
  if (include_optional) {
    volume_timed_report = volume_timed_report_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  } else {
    volume_timed_report = volume_timed_report_create(
      "2013-10-20T19:20:30+01:00",
      "2013-10-20T19:20:30+01:00",
      56,
      56
    );
  }

  return volume_timed_report;
}


#ifdef volume_timed_report_MAIN

void test_volume_timed_report(int include_optional) {
    volume_timed_report_t* volume_timed_report_1 = instantiate_volume_timed_report(include_optional);

	cJSON* jsonvolume_timed_report_1 = volume_timed_report_convertToJSON(volume_timed_report_1);
	printf("volume_timed_report :\n%s\n", cJSON_Print(jsonvolume_timed_report_1));
	volume_timed_report_t* volume_timed_report_2 = volume_timed_report_parseFromJSON(jsonvolume_timed_report_1);
	cJSON* jsonvolume_timed_report_2 = volume_timed_report_convertToJSON(volume_timed_report_2);
	printf("repeating volume_timed_report:\n%s\n", cJSON_Print(jsonvolume_timed_report_2));
}

int main() {
  test_volume_timed_report(1);
  test_volume_timed_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // volume_timed_report_MAIN
#endif // volume_timed_report_TEST
