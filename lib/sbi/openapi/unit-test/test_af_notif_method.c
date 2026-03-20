#ifndef af_notif_method_TEST
#define af_notif_method_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_notif_method_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_notif_method.h"
af_notif_method_t* instantiate_af_notif_method(int include_optional);



af_notif_method_t* instantiate_af_notif_method(int include_optional) {
  af_notif_method_t* af_notif_method = NULL;
  if (include_optional) {
    af_notif_method = af_notif_method_create(
    );
  } else {
    af_notif_method = af_notif_method_create(
    );
  }

  return af_notif_method;
}


#ifdef af_notif_method_MAIN

void test_af_notif_method(int include_optional) {
    af_notif_method_t* af_notif_method_1 = instantiate_af_notif_method(include_optional);

	cJSON* jsonaf_notif_method_1 = af_notif_method_convertToJSON(af_notif_method_1);
	printf("af_notif_method :\n%s\n", cJSON_Print(jsonaf_notif_method_1));
	af_notif_method_t* af_notif_method_2 = af_notif_method_parseFromJSON(jsonaf_notif_method_1);
	cJSON* jsonaf_notif_method_2 = af_notif_method_convertToJSON(af_notif_method_2);
	printf("repeating af_notif_method:\n%s\n", cJSON_Print(jsonaf_notif_method_2));
}

int main() {
  test_af_notif_method(1);
  test_af_notif_method(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_notif_method_MAIN
#endif // af_notif_method_TEST
