#ifndef hss_av_type_TEST
#define hss_av_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_av_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_av_type.h"
hss_av_type_t* instantiate_hss_av_type(int include_optional);



hss_av_type_t* instantiate_hss_av_type(int include_optional) {
  hss_av_type_t* hss_av_type = NULL;
  if (include_optional) {
    hss_av_type = hss_av_type_create(
    );
  } else {
    hss_av_type = hss_av_type_create(
    );
  }

  return hss_av_type;
}


#ifdef hss_av_type_MAIN

void test_hss_av_type(int include_optional) {
    hss_av_type_t* hss_av_type_1 = instantiate_hss_av_type(include_optional);

	cJSON* jsonhss_av_type_1 = hss_av_type_convertToJSON(hss_av_type_1);
	printf("hss_av_type :\n%s\n", cJSON_Print(jsonhss_av_type_1));
	hss_av_type_t* hss_av_type_2 = hss_av_type_parseFromJSON(jsonhss_av_type_1);
	cJSON* jsonhss_av_type_2 = hss_av_type_convertToJSON(hss_av_type_2);
	printf("repeating hss_av_type:\n%s\n", cJSON_Print(jsonhss_av_type_2));
}

int main() {
  test_hss_av_type(1);
  test_hss_av_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_av_type_MAIN
#endif // hss_av_type_TEST
