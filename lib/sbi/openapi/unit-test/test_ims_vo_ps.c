#ifndef ims_vo_ps_TEST
#define ims_vo_ps_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ims_vo_ps_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ims_vo_ps.h"
ims_vo_ps_t* instantiate_ims_vo_ps(int include_optional);



ims_vo_ps_t* instantiate_ims_vo_ps(int include_optional) {
  ims_vo_ps_t* ims_vo_ps = NULL;
  if (include_optional) {
    ims_vo_ps = ims_vo_ps_create(
    );
  } else {
    ims_vo_ps = ims_vo_ps_create(
    );
  }

  return ims_vo_ps;
}


#ifdef ims_vo_ps_MAIN

void test_ims_vo_ps(int include_optional) {
    ims_vo_ps_t* ims_vo_ps_1 = instantiate_ims_vo_ps(include_optional);

	cJSON* jsonims_vo_ps_1 = ims_vo_ps_convertToJSON(ims_vo_ps_1);
	printf("ims_vo_ps :\n%s\n", cJSON_Print(jsonims_vo_ps_1));
	ims_vo_ps_t* ims_vo_ps_2 = ims_vo_ps_parseFromJSON(jsonims_vo_ps_1);
	cJSON* jsonims_vo_ps_2 = ims_vo_ps_convertToJSON(ims_vo_ps_2);
	printf("repeating ims_vo_ps:\n%s\n", cJSON_Print(jsonims_vo_ps_2));
}

int main() {
  test_ims_vo_ps(1);
  test_ims_vo_ps(0);

  printf("Hello world \n");
  return 0;
}

#endif // ims_vo_ps_MAIN
#endif // ims_vo_ps_TEST
