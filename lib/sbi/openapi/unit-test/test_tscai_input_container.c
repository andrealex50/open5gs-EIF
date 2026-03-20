#ifndef tscai_input_container_TEST
#define tscai_input_container_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tscai_input_container_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tscai_input_container.h"
tscai_input_container_t* instantiate_tscai_input_container(int include_optional);



tscai_input_container_t* instantiate_tscai_input_container(int include_optional) {
  tscai_input_container_t* tscai_input_container = NULL;
  if (include_optional) {
    tscai_input_container = tscai_input_container_create(
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      0
    );
  } else {
    tscai_input_container = tscai_input_container_create(
      0,
      "2013-10-20T19:20:30+01:00",
      0,
      0
    );
  }

  return tscai_input_container;
}


#ifdef tscai_input_container_MAIN

void test_tscai_input_container(int include_optional) {
    tscai_input_container_t* tscai_input_container_1 = instantiate_tscai_input_container(include_optional);

	cJSON* jsontscai_input_container_1 = tscai_input_container_convertToJSON(tscai_input_container_1);
	printf("tscai_input_container :\n%s\n", cJSON_Print(jsontscai_input_container_1));
	tscai_input_container_t* tscai_input_container_2 = tscai_input_container_parseFromJSON(jsontscai_input_container_1);
	cJSON* jsontscai_input_container_2 = tscai_input_container_convertToJSON(tscai_input_container_2);
	printf("repeating tscai_input_container:\n%s\n", cJSON_Print(jsontscai_input_container_2));
}

int main() {
  test_tscai_input_container(1);
  test_tscai_input_container(0);

  printf("Hello world \n");
  return 0;
}

#endif // tscai_input_container_MAIN
#endif // tscai_input_container_TEST
