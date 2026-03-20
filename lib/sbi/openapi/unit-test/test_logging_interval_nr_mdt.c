#ifndef logging_interval_nr_mdt_TEST
#define logging_interval_nr_mdt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define logging_interval_nr_mdt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/logging_interval_nr_mdt.h"
logging_interval_nr_mdt_t* instantiate_logging_interval_nr_mdt(int include_optional);



logging_interval_nr_mdt_t* instantiate_logging_interval_nr_mdt(int include_optional) {
  logging_interval_nr_mdt_t* logging_interval_nr_mdt = NULL;
  if (include_optional) {
    logging_interval_nr_mdt = logging_interval_nr_mdt_create(
    );
  } else {
    logging_interval_nr_mdt = logging_interval_nr_mdt_create(
    );
  }

  return logging_interval_nr_mdt;
}


#ifdef logging_interval_nr_mdt_MAIN

void test_logging_interval_nr_mdt(int include_optional) {
    logging_interval_nr_mdt_t* logging_interval_nr_mdt_1 = instantiate_logging_interval_nr_mdt(include_optional);

	cJSON* jsonlogging_interval_nr_mdt_1 = logging_interval_nr_mdt_convertToJSON(logging_interval_nr_mdt_1);
	printf("logging_interval_nr_mdt :\n%s\n", cJSON_Print(jsonlogging_interval_nr_mdt_1));
	logging_interval_nr_mdt_t* logging_interval_nr_mdt_2 = logging_interval_nr_mdt_parseFromJSON(jsonlogging_interval_nr_mdt_1);
	cJSON* jsonlogging_interval_nr_mdt_2 = logging_interval_nr_mdt_convertToJSON(logging_interval_nr_mdt_2);
	printf("repeating logging_interval_nr_mdt:\n%s\n", cJSON_Print(jsonlogging_interval_nr_mdt_2));
}

int main() {
  test_logging_interval_nr_mdt(1);
  test_logging_interval_nr_mdt(0);

  printf("Hello world \n");
  return 0;
}

#endif // logging_interval_nr_mdt_MAIN
#endif // logging_interval_nr_mdt_TEST
