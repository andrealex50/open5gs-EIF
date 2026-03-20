#ifndef acs_info_1_TEST
#define acs_info_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acs_info_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acs_info_1.h"
acs_info_1_t* instantiate_acs_info_1(int include_optional);



acs_info_1_t* instantiate_acs_info_1(int include_optional) {
  acs_info_1_t* acs_info_1 = NULL;
  if (include_optional) {
    acs_info_1 = acs_info_1_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    acs_info_1 = acs_info_1_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return acs_info_1;
}


#ifdef acs_info_1_MAIN

void test_acs_info_1(int include_optional) {
    acs_info_1_t* acs_info_1_1 = instantiate_acs_info_1(include_optional);

	cJSON* jsonacs_info_1_1 = acs_info_1_convertToJSON(acs_info_1_1);
	printf("acs_info_1 :\n%s\n", cJSON_Print(jsonacs_info_1_1));
	acs_info_1_t* acs_info_1_2 = acs_info_1_parseFromJSON(jsonacs_info_1_1);
	cJSON* jsonacs_info_1_2 = acs_info_1_convertToJSON(acs_info_1_2);
	printf("repeating acs_info_1:\n%s\n", cJSON_Print(jsonacs_info_1_2));
}

int main() {
  test_acs_info_1(1);
  test_acs_info_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // acs_info_1_MAIN
#endif // acs_info_1_TEST
