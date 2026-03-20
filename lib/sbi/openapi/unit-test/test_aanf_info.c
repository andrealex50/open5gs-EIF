#ifndef aanf_info_TEST
#define aanf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define aanf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/aanf_info.h"
aanf_info_t* instantiate_aanf_info(int include_optional);



aanf_info_t* instantiate_aanf_info(int include_optional) {
  aanf_info_t* aanf_info = NULL;
  if (include_optional) {
    aanf_info = aanf_info_create(
      list_createList()
    );
  } else {
    aanf_info = aanf_info_create(
      list_createList()
    );
  }

  return aanf_info;
}


#ifdef aanf_info_MAIN

void test_aanf_info(int include_optional) {
    aanf_info_t* aanf_info_1 = instantiate_aanf_info(include_optional);

	cJSON* jsonaanf_info_1 = aanf_info_convertToJSON(aanf_info_1);
	printf("aanf_info :\n%s\n", cJSON_Print(jsonaanf_info_1));
	aanf_info_t* aanf_info_2 = aanf_info_parseFromJSON(jsonaanf_info_1);
	cJSON* jsonaanf_info_2 = aanf_info_convertToJSON(aanf_info_2);
	printf("repeating aanf_info:\n%s\n", cJSON_Print(jsonaanf_info_2));
}

int main() {
  test_aanf_info(1);
  test_aanf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // aanf_info_MAIN
#endif // aanf_info_TEST
