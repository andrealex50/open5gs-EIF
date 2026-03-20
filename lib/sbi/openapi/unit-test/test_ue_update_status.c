#ifndef ue_update_status_TEST
#define ue_update_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_update_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_update_status.h"
ue_update_status_t* instantiate_ue_update_status(int include_optional);



ue_update_status_t* instantiate_ue_update_status(int include_optional) {
  ue_update_status_t* ue_update_status = NULL;
  if (include_optional) {
    ue_update_status = ue_update_status_create(
    );
  } else {
    ue_update_status = ue_update_status_create(
    );
  }

  return ue_update_status;
}


#ifdef ue_update_status_MAIN

void test_ue_update_status(int include_optional) {
    ue_update_status_t* ue_update_status_1 = instantiate_ue_update_status(include_optional);

	cJSON* jsonue_update_status_1 = ue_update_status_convertToJSON(ue_update_status_1);
	printf("ue_update_status :\n%s\n", cJSON_Print(jsonue_update_status_1));
	ue_update_status_t* ue_update_status_2 = ue_update_status_parseFromJSON(jsonue_update_status_1);
	cJSON* jsonue_update_status_2 = ue_update_status_convertToJSON(ue_update_status_2);
	printf("repeating ue_update_status:\n%s\n", cJSON_Print(jsonue_update_status_2));
}

int main() {
  test_ue_update_status(1);
  test_ue_update_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_update_status_MAIN
#endif // ue_update_status_TEST
