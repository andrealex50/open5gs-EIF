#ifndef av5g_aka_TEST
#define av5g_aka_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av5g_aka_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av5g_aka.h"
av5g_aka_t* instantiate_av5g_aka(int include_optional);



av5g_aka_t* instantiate_av5g_aka(int include_optional) {
  av5g_aka_t* av5g_aka = NULL;
  if (include_optional) {
    av5g_aka = av5g_aka_create(
      "a",
      "a",
      "a"
    );
  } else {
    av5g_aka = av5g_aka_create(
      "a",
      "a",
      "a"
    );
  }

  return av5g_aka;
}


#ifdef av5g_aka_MAIN

void test_av5g_aka(int include_optional) {
    av5g_aka_t* av5g_aka_1 = instantiate_av5g_aka(include_optional);

	cJSON* jsonav5g_aka_1 = av5g_aka_convertToJSON(av5g_aka_1);
	printf("av5g_aka :\n%s\n", cJSON_Print(jsonav5g_aka_1));
	av5g_aka_t* av5g_aka_2 = av5g_aka_parseFromJSON(jsonav5g_aka_1);
	cJSON* jsonav5g_aka_2 = av5g_aka_convertToJSON(av5g_aka_2);
	printf("repeating av5g_aka:\n%s\n", cJSON_Print(jsonav5g_aka_2));
}

int main() {
  test_av5g_aka(1);
  test_av5g_aka(0);

  printf("Hello world \n");
  return 0;
}

#endif // av5g_aka_MAIN
#endif // av5g_aka_TEST
