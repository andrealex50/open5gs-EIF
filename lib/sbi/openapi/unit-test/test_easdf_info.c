#ifndef easdf_info_TEST
#define easdf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define easdf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/easdf_info.h"
easdf_info_t* instantiate_easdf_info(int include_optional);



easdf_info_t* instantiate_easdf_info(int include_optional) {
  easdf_info_t* easdf_info = NULL;
  if (include_optional) {
    easdf_info = easdf_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    easdf_info = easdf_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return easdf_info;
}


#ifdef easdf_info_MAIN

void test_easdf_info(int include_optional) {
    easdf_info_t* easdf_info_1 = instantiate_easdf_info(include_optional);

	cJSON* jsoneasdf_info_1 = easdf_info_convertToJSON(easdf_info_1);
	printf("easdf_info :\n%s\n", cJSON_Print(jsoneasdf_info_1));
	easdf_info_t* easdf_info_2 = easdf_info_parseFromJSON(jsoneasdf_info_1);
	cJSON* jsoneasdf_info_2 = easdf_info_convertToJSON(easdf_info_2);
	printf("repeating easdf_info:\n%s\n", cJSON_Print(jsoneasdf_info_2));
}

int main() {
  test_easdf_info(1);
  test_easdf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // easdf_info_MAIN
#endif // easdf_info_TEST
