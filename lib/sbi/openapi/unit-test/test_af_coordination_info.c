#ifndef af_coordination_info_TEST
#define af_coordination_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_coordination_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_coordination_info.h"
af_coordination_info_t* instantiate_af_coordination_info(int include_optional);



af_coordination_info_t* instantiate_af_coordination_info(int include_optional) {
  af_coordination_info_t* af_coordination_info = NULL;
  if (include_optional) {
    af_coordination_info = af_coordination_info_create(
      "0",
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      list_createList()
    );
  } else {
    af_coordination_info = af_coordination_info_create(
      "0",
      "198.51.100.1",
      "2001:db8:abcd:12::0/64",
      list_createList()
    );
  }

  return af_coordination_info;
}


#ifdef af_coordination_info_MAIN

void test_af_coordination_info(int include_optional) {
    af_coordination_info_t* af_coordination_info_1 = instantiate_af_coordination_info(include_optional);

	cJSON* jsonaf_coordination_info_1 = af_coordination_info_convertToJSON(af_coordination_info_1);
	printf("af_coordination_info :\n%s\n", cJSON_Print(jsonaf_coordination_info_1));
	af_coordination_info_t* af_coordination_info_2 = af_coordination_info_parseFromJSON(jsonaf_coordination_info_1);
	cJSON* jsonaf_coordination_info_2 = af_coordination_info_convertToJSON(af_coordination_info_2);
	printf("repeating af_coordination_info:\n%s\n", cJSON_Print(jsonaf_coordination_info_2));
}

int main() {
  test_af_coordination_info(1);
  test_af_coordination_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_coordination_info_MAIN
#endif // af_coordination_info_TEST
