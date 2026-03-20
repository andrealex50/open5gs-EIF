#ifndef steering_info_TEST
#define steering_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steering_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steering_info.h"
steering_info_t* instantiate_steering_info(int include_optional);

#include "test_plmn_id_1.c"


steering_info_t* instantiate_steering_info(int include_optional) {
  steering_info_t* steering_info = NULL;
  if (include_optional) {
    steering_info = steering_info_create(
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0),
      list_createList()
    );
  } else {
    steering_info = steering_info_create(
      NULL,
      list_createList()
    );
  }

  return steering_info;
}


#ifdef steering_info_MAIN

void test_steering_info(int include_optional) {
    steering_info_t* steering_info_1 = instantiate_steering_info(include_optional);

	cJSON* jsonsteering_info_1 = steering_info_convertToJSON(steering_info_1);
	printf("steering_info :\n%s\n", cJSON_Print(jsonsteering_info_1));
	steering_info_t* steering_info_2 = steering_info_parseFromJSON(jsonsteering_info_1);
	cJSON* jsonsteering_info_2 = steering_info_convertToJSON(steering_info_2);
	printf("repeating steering_info:\n%s\n", cJSON_Print(jsonsteering_info_2));
}

int main() {
  test_steering_info(1);
  test_steering_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // steering_info_MAIN
#endif // steering_info_TEST
