#ifndef acknowledge_info_TEST
#define acknowledge_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acknowledge_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acknowledge_info.h"
acknowledge_info_t* instantiate_acknowledge_info(int include_optional);



acknowledge_info_t* instantiate_acknowledge_info(int include_optional) {
  acknowledge_info_t* acknowledge_info = NULL;
  if (include_optional) {
    acknowledge_info = acknowledge_info_create(
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ==",
      1,
      "YQ=="
    );
  } else {
    acknowledge_info = acknowledge_info_create(
      "a",
      "a",
      "2013-10-20T19:20:30+01:00",
      "YQ==",
      1,
      "YQ=="
    );
  }

  return acknowledge_info;
}


#ifdef acknowledge_info_MAIN

void test_acknowledge_info(int include_optional) {
    acknowledge_info_t* acknowledge_info_1 = instantiate_acknowledge_info(include_optional);

	cJSON* jsonacknowledge_info_1 = acknowledge_info_convertToJSON(acknowledge_info_1);
	printf("acknowledge_info :\n%s\n", cJSON_Print(jsonacknowledge_info_1));
	acknowledge_info_t* acknowledge_info_2 = acknowledge_info_parseFromJSON(jsonacknowledge_info_1);
	cJSON* jsonacknowledge_info_2 = acknowledge_info_convertToJSON(acknowledge_info_2);
	printf("repeating acknowledge_info:\n%s\n", cJSON_Print(jsonacknowledge_info_2));
}

int main() {
  test_acknowledge_info(1);
  test_acknowledge_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // acknowledge_info_MAIN
#endif // acknowledge_info_TEST
