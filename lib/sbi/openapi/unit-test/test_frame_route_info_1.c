#ifndef frame_route_info_1_TEST
#define frame_route_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define frame_route_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/frame_route_info_1.h"
frame_route_info_1_t* instantiate_frame_route_info_1(int include_optional);



frame_route_info_1_t* instantiate_frame_route_info_1(int include_optional) {
  frame_route_info_1_t* frame_route_info_1 = NULL;
  if (include_optional) {
    frame_route_info_1 = frame_route_info_1_create(
      "198.51.0.0/16",
      "2001:db8:abcd:12::0/64"
    );
  } else {
    frame_route_info_1 = frame_route_info_1_create(
      "198.51.0.0/16",
      "2001:db8:abcd:12::0/64"
    );
  }

  return frame_route_info_1;
}


#ifdef frame_route_info_1_MAIN

void test_frame_route_info_1(int include_optional) {
    frame_route_info_1_t* frame_route_info_1_1 = instantiate_frame_route_info_1(include_optional);

	cJSON* jsonframe_route_info_1_1 = frame_route_info_1_convertToJSON(frame_route_info_1_1);
	printf("frame_route_info_1 :\n%s\n", cJSON_Print(jsonframe_route_info_1_1));
	frame_route_info_1_t* frame_route_info_1_2 = frame_route_info_1_parseFromJSON(jsonframe_route_info_1_1);
	cJSON* jsonframe_route_info_1_2 = frame_route_info_1_convertToJSON(frame_route_info_1_2);
	printf("repeating frame_route_info_1:\n%s\n", cJSON_Print(jsonframe_route_info_1_2));
}

int main() {
  test_frame_route_info_1(1);
  test_frame_route_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // frame_route_info_1_MAIN
#endif // frame_route_info_1_TEST
