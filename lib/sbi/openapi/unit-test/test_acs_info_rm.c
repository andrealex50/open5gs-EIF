#ifndef acs_info_rm_TEST
#define acs_info_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define acs_info_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/acs_info_rm.h"
acs_info_rm_t* instantiate_acs_info_rm(int include_optional);



acs_info_rm_t* instantiate_acs_info_rm(int include_optional) {
  acs_info_rm_t* acs_info_rm = NULL;
  if (include_optional) {
    acs_info_rm = acs_info_rm_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  } else {
    acs_info_rm = acs_info_rm_create(
      "0",
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334"
    );
  }

  return acs_info_rm;
}


#ifdef acs_info_rm_MAIN

void test_acs_info_rm(int include_optional) {
    acs_info_rm_t* acs_info_rm_1 = instantiate_acs_info_rm(include_optional);

	cJSON* jsonacs_info_rm_1 = acs_info_rm_convertToJSON(acs_info_rm_1);
	printf("acs_info_rm :\n%s\n", cJSON_Print(jsonacs_info_rm_1));
	acs_info_rm_t* acs_info_rm_2 = acs_info_rm_parseFromJSON(jsonacs_info_rm_1);
	cJSON* jsonacs_info_rm_2 = acs_info_rm_convertToJSON(acs_info_rm_2);
	printf("repeating acs_info_rm:\n%s\n", cJSON_Print(jsonacs_info_rm_2));
}

int main() {
  test_acs_info_rm(1);
  test_acs_info_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // acs_info_rm_MAIN
#endif // acs_info_rm_TEST
