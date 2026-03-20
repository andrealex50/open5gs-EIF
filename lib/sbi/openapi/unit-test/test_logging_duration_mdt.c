#ifndef logging_duration_mdt_TEST
#define logging_duration_mdt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define logging_duration_mdt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/logging_duration_mdt.h"
logging_duration_mdt_t* instantiate_logging_duration_mdt(int include_optional);



logging_duration_mdt_t* instantiate_logging_duration_mdt(int include_optional) {
  logging_duration_mdt_t* logging_duration_mdt = NULL;
  if (include_optional) {
    logging_duration_mdt = logging_duration_mdt_create(
    );
  } else {
    logging_duration_mdt = logging_duration_mdt_create(
    );
  }

  return logging_duration_mdt;
}


#ifdef logging_duration_mdt_MAIN

void test_logging_duration_mdt(int include_optional) {
    logging_duration_mdt_t* logging_duration_mdt_1 = instantiate_logging_duration_mdt(include_optional);

	cJSON* jsonlogging_duration_mdt_1 = logging_duration_mdt_convertToJSON(logging_duration_mdt_1);
	printf("logging_duration_mdt :\n%s\n", cJSON_Print(jsonlogging_duration_mdt_1));
	logging_duration_mdt_t* logging_duration_mdt_2 = logging_duration_mdt_parseFromJSON(jsonlogging_duration_mdt_1);
	cJSON* jsonlogging_duration_mdt_2 = logging_duration_mdt_convertToJSON(logging_duration_mdt_2);
	printf("repeating logging_duration_mdt:\n%s\n", cJSON_Print(jsonlogging_duration_mdt_2));
}

int main() {
  test_logging_duration_mdt(1);
  test_logging_duration_mdt(0);

  printf("Hello world \n");
  return 0;
}

#endif // logging_duration_mdt_MAIN
#endif // logging_duration_mdt_TEST
