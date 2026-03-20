#ifndef limit_id_to_monitoring_key_TEST
#define limit_id_to_monitoring_key_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define limit_id_to_monitoring_key_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/limit_id_to_monitoring_key.h"
limit_id_to_monitoring_key_t* instantiate_limit_id_to_monitoring_key(int include_optional);



limit_id_to_monitoring_key_t* instantiate_limit_id_to_monitoring_key(int include_optional) {
  limit_id_to_monitoring_key_t* limit_id_to_monitoring_key = NULL;
  if (include_optional) {
    limit_id_to_monitoring_key = limit_id_to_monitoring_key_create(
      "0",
      list_createList()
    );
  } else {
    limit_id_to_monitoring_key = limit_id_to_monitoring_key_create(
      "0",
      list_createList()
    );
  }

  return limit_id_to_monitoring_key;
}


#ifdef limit_id_to_monitoring_key_MAIN

void test_limit_id_to_monitoring_key(int include_optional) {
    limit_id_to_monitoring_key_t* limit_id_to_monitoring_key_1 = instantiate_limit_id_to_monitoring_key(include_optional);

	cJSON* jsonlimit_id_to_monitoring_key_1 = limit_id_to_monitoring_key_convertToJSON(limit_id_to_monitoring_key_1);
	printf("limit_id_to_monitoring_key :\n%s\n", cJSON_Print(jsonlimit_id_to_monitoring_key_1));
	limit_id_to_monitoring_key_t* limit_id_to_monitoring_key_2 = limit_id_to_monitoring_key_parseFromJSON(jsonlimit_id_to_monitoring_key_1);
	cJSON* jsonlimit_id_to_monitoring_key_2 = limit_id_to_monitoring_key_convertToJSON(limit_id_to_monitoring_key_2);
	printf("repeating limit_id_to_monitoring_key:\n%s\n", cJSON_Print(jsonlimit_id_to_monitoring_key_2));
}

int main() {
  test_limit_id_to_monitoring_key(1);
  test_limit_id_to_monitoring_key(0);

  printf("Hello world \n");
  return 0;
}

#endif // limit_id_to_monitoring_key_MAIN
#endif // limit_id_to_monitoring_key_TEST
