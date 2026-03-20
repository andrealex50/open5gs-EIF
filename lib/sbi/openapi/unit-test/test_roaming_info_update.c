#ifndef roaming_info_update_TEST
#define roaming_info_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_info_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_info_update.h"
roaming_info_update_t* instantiate_roaming_info_update(int include_optional);

#include "test_plmn_id_1.c"


roaming_info_update_t* instantiate_roaming_info_update(int include_optional) {
  roaming_info_update_t* roaming_info_update = NULL;
  if (include_optional) {
    roaming_info_update = roaming_info_update_create(
      1,
       // false, not to have infinite recursion
      instantiate_plmn_id_1(0)
    );
  } else {
    roaming_info_update = roaming_info_update_create(
      1,
      NULL
    );
  }

  return roaming_info_update;
}


#ifdef roaming_info_update_MAIN

void test_roaming_info_update(int include_optional) {
    roaming_info_update_t* roaming_info_update_1 = instantiate_roaming_info_update(include_optional);

	cJSON* jsonroaming_info_update_1 = roaming_info_update_convertToJSON(roaming_info_update_1);
	printf("roaming_info_update :\n%s\n", cJSON_Print(jsonroaming_info_update_1));
	roaming_info_update_t* roaming_info_update_2 = roaming_info_update_parseFromJSON(jsonroaming_info_update_1);
	cJSON* jsonroaming_info_update_2 = roaming_info_update_convertToJSON(roaming_info_update_2);
	printf("repeating roaming_info_update:\n%s\n", cJSON_Print(jsonroaming_info_update_2));
}

int main() {
  test_roaming_info_update(1);
  test_roaming_info_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_info_update_MAIN
#endif // roaming_info_update_TEST
