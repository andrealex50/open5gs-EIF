#ifndef frame_route_info_TEST
#define frame_route_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define frame_route_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/frame_route_info.h"
frame_route_info_t* instantiate_frame_route_info(int include_optional);



frame_route_info_t* instantiate_frame_route_info(int include_optional) {
  frame_route_info_t* frame_route_info = NULL;
  if (include_optional) {
    frame_route_info = frame_route_info_create(
      "198.51.0.0/16",
      "2001:db8:abcd:12::0/64"
    );
  } else {
    frame_route_info = frame_route_info_create(
      "198.51.0.0/16",
      "2001:db8:abcd:12::0/64"
    );
  }

  return frame_route_info;
}


#ifdef frame_route_info_MAIN

void test_frame_route_info(int include_optional) {
    frame_route_info_t* frame_route_info_1 = instantiate_frame_route_info(include_optional);

	cJSON* jsonframe_route_info_1 = frame_route_info_convertToJSON(frame_route_info_1);
	printf("frame_route_info :\n%s\n", cJSON_Print(jsonframe_route_info_1));
	frame_route_info_t* frame_route_info_2 = frame_route_info_parseFromJSON(jsonframe_route_info_1);
	cJSON* jsonframe_route_info_2 = frame_route_info_convertToJSON(frame_route_info_2);
	printf("repeating frame_route_info:\n%s\n", cJSON_Print(jsonframe_route_info_2));
}

int main() {
  test_frame_route_info(1);
  test_frame_route_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // frame_route_info_MAIN
#endif // frame_route_info_TEST
