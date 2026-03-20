#ifndef av5_ghe_aka_TEST
#define av5_ghe_aka_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av5_ghe_aka_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av5_ghe_aka.h"
av5_ghe_aka_t* instantiate_av5_ghe_aka(int include_optional);



av5_ghe_aka_t* instantiate_av5_ghe_aka(int include_optional) {
  av5_ghe_aka_t* av5_ghe_aka = NULL;
  if (include_optional) {
    av5_ghe_aka = av5_ghe_aka_create(
      nudm_ueau_av5_ghe_aka__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    av5_ghe_aka = av5_ghe_aka_create(
      nudm_ueau_av5_ghe_aka__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a"
    );
  }

  return av5_ghe_aka;
}


#ifdef av5_ghe_aka_MAIN

void test_av5_ghe_aka(int include_optional) {
    av5_ghe_aka_t* av5_ghe_aka_1 = instantiate_av5_ghe_aka(include_optional);

	cJSON* jsonav5_ghe_aka_1 = av5_ghe_aka_convertToJSON(av5_ghe_aka_1);
	printf("av5_ghe_aka :\n%s\n", cJSON_Print(jsonav5_ghe_aka_1));
	av5_ghe_aka_t* av5_ghe_aka_2 = av5_ghe_aka_parseFromJSON(jsonav5_ghe_aka_1);
	cJSON* jsonav5_ghe_aka_2 = av5_ghe_aka_convertToJSON(av5_ghe_aka_2);
	printf("repeating av5_ghe_aka:\n%s\n", cJSON_Print(jsonav5_ghe_aka_2));
}

int main() {
  test_av5_ghe_aka(1);
  test_av5_ghe_aka(0);

  printf("Hello world \n");
  return 0;
}

#endif // av5_ghe_aka_MAIN
#endif // av5_ghe_aka_TEST
