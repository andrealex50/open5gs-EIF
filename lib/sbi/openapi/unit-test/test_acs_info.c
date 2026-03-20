#ifndef acs_info_TEST
#define acs_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acs_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acs_info.h"
acs_info_t* instantiate_acs_info(int include_optional);



acs_info_t* instantiate_acs_info(int include_optional) {
  acs_info_t* acs_info = NULL;
  if (include_optional) {
    acs_info = acs_info_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    acs_info = acs_info_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return acs_info;
}


#ifdef acs_info_MAIN

void test_acs_info(int include_optional) {
    acs_info_t* acs_info_1 = instantiate_acs_info(include_optional);

	cJSON* jsonacs_info_1 = acs_info_convertToJSON(acs_info_1);
	printf("acs_info :\n%s\n", cJSON_Print(jsonacs_info_1));
	acs_info_t* acs_info_2 = acs_info_parseFromJSON(jsonacs_info_1);
	cJSON* jsonacs_info_2 = acs_info_convertToJSON(acs_info_2);
	printf("repeating acs_info:\n%s\n", cJSON_Print(jsonacs_info_2));
}

int main() {
  test_acs_info(1);
  test_acs_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // acs_info_MAIN
#endif // acs_info_TEST
