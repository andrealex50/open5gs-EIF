#ifndef steering_container_TEST
#define steering_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define steering_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/steering_container.h"
steering_container_t* instantiate_steering_container(int include_optional);



steering_container_t* instantiate_steering_container(int include_optional) {
  steering_container_t* steering_container = NULL;
  if (include_optional) {
    steering_container = steering_container_create(
    );
  } else {
    steering_container = steering_container_create(
    );
  }

  return steering_container;
}


#ifdef steering_container_MAIN

void test_steering_container(int include_optional) {
    steering_container_t* steering_container_1 = instantiate_steering_container(include_optional);

	cJSON* jsonsteering_container_1 = steering_container_convertToJSON(steering_container_1);
	printf("steering_container :\n%s\n", cJSON_Print(jsonsteering_container_1));
	steering_container_t* steering_container_2 = steering_container_parseFromJSON(jsonsteering_container_1);
	cJSON* jsonsteering_container_2 = steering_container_convertToJSON(steering_container_2);
	printf("repeating steering_container:\n%s\n", cJSON_Print(jsonsteering_container_2));
}

int main() {
  test_steering_container(1);
  test_steering_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // steering_container_MAIN
#endif // steering_container_TEST
