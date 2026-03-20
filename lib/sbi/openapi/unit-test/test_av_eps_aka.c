#ifndef av_eps_aka_TEST
#define av_eps_aka_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av_eps_aka_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av_eps_aka.h"
av_eps_aka_t* instantiate_av_eps_aka(int include_optional);



av_eps_aka_t* instantiate_av_eps_aka(int include_optional) {
  av_eps_aka_t* av_eps_aka = NULL;
  if (include_optional) {
    av_eps_aka = av_eps_aka_create(
      nudm_ueau_av_eps_aka__EPS_AKA,
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    av_eps_aka = av_eps_aka_create(
      nudm_ueau_av_eps_aka__EPS_AKA,
      "a",
      "a",
      "a",
      "a"
    );
  }

  return av_eps_aka;
}


#ifdef av_eps_aka_MAIN

void test_av_eps_aka(int include_optional) {
    av_eps_aka_t* av_eps_aka_1 = instantiate_av_eps_aka(include_optional);

	cJSON* jsonav_eps_aka_1 = av_eps_aka_convertToJSON(av_eps_aka_1);
	printf("av_eps_aka :\n%s\n", cJSON_Print(jsonav_eps_aka_1));
	av_eps_aka_t* av_eps_aka_2 = av_eps_aka_parseFromJSON(jsonav_eps_aka_1);
	cJSON* jsonav_eps_aka_2 = av_eps_aka_convertToJSON(av_eps_aka_2);
	printf("repeating av_eps_aka:\n%s\n", cJSON_Print(jsonav_eps_aka_2));
}

int main() {
  test_av_eps_aka(1);
  test_av_eps_aka(0);

  printf("Hello world \n");
  return 0;
}

#endif // av_eps_aka_MAIN
#endif // av_eps_aka_TEST
