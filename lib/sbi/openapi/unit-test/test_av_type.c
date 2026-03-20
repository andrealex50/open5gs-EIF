#ifndef av_type_TEST
#define av_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av_type.h"
av_type_t* instantiate_av_type(int include_optional);



av_type_t* instantiate_av_type(int include_optional) {
  av_type_t* av_type = NULL;
  if (include_optional) {
    av_type = av_type_create(
    );
  } else {
    av_type = av_type_create(
    );
  }

  return av_type;
}


#ifdef av_type_MAIN

void test_av_type(int include_optional) {
    av_type_t* av_type_1 = instantiate_av_type(include_optional);

	cJSON* jsonav_type_1 = av_type_convertToJSON(av_type_1);
	printf("av_type :\n%s\n", cJSON_Print(jsonav_type_1));
	av_type_t* av_type_2 = av_type_parseFromJSON(jsonav_type_1);
	cJSON* jsonav_type_2 = av_type_convertToJSON(av_type_2);
	printf("repeating av_type:\n%s\n", cJSON_Print(jsonav_type_2));
}

int main() {
  test_av_type(1);
  test_av_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // av_type_MAIN
#endif // av_type_TEST
