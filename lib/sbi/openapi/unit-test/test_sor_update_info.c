#ifndef sor_update_info_TEST
#define sor_update_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sor_update_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sor_update_info.h"
sor_update_info_t* instantiate_sor_update_info(int include_optional);

#include "test_plmn_id.c"


sor_update_info_t* instantiate_sor_update_info(int include_optional) {
  sor_update_info_t* sor_update_info = NULL;
  if (include_optional) {
    sor_update_info = sor_update_info_create(
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      "a"
    );
  } else {
    sor_update_info = sor_update_info_create(
      NULL,
      "a"
    );
  }

  return sor_update_info;
}


#ifdef sor_update_info_MAIN

void test_sor_update_info(int include_optional) {
    sor_update_info_t* sor_update_info_1 = instantiate_sor_update_info(include_optional);

	cJSON* jsonsor_update_info_1 = sor_update_info_convertToJSON(sor_update_info_1);
	printf("sor_update_info :\n%s\n", cJSON_Print(jsonsor_update_info_1));
	sor_update_info_t* sor_update_info_2 = sor_update_info_parseFromJSON(jsonsor_update_info_1);
	cJSON* jsonsor_update_info_2 = sor_update_info_convertToJSON(sor_update_info_2);
	printf("repeating sor_update_info:\n%s\n", cJSON_Print(jsonsor_update_info_2));
}

int main() {
  test_sor_update_info(1);
  test_sor_update_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // sor_update_info_MAIN
#endif // sor_update_info_TEST
