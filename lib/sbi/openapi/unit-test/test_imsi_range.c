#ifndef imsi_range_TEST
#define imsi_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define imsi_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/imsi_range.h"
imsi_range_t* instantiate_imsi_range(int include_optional);



imsi_range_t* instantiate_imsi_range(int include_optional) {
  imsi_range_t* imsi_range = NULL;
  if (include_optional) {
    imsi_range = imsi_range_create(
      "a",
      "a",
      "0"
    );
  } else {
    imsi_range = imsi_range_create(
      "a",
      "a",
      "0"
    );
  }

  return imsi_range;
}


#ifdef imsi_range_MAIN

void test_imsi_range(int include_optional) {
    imsi_range_t* imsi_range_1 = instantiate_imsi_range(include_optional);

	cJSON* jsonimsi_range_1 = imsi_range_convertToJSON(imsi_range_1);
	printf("imsi_range :\n%s\n", cJSON_Print(jsonimsi_range_1));
	imsi_range_t* imsi_range_2 = imsi_range_parseFromJSON(jsonimsi_range_1);
	cJSON* jsonimsi_range_2 = imsi_range_convertToJSON(imsi_range_2);
	printf("repeating imsi_range:\n%s\n", cJSON_Print(jsonimsi_range_2));
}

int main() {
  test_imsi_range(1);
  test_imsi_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // imsi_range_MAIN
#endif // imsi_range_TEST
