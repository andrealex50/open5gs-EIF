#ifndef additional_ee_subs_info_TEST
#define additional_ee_subs_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define additional_ee_subs_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/additional_ee_subs_info.h"
additional_ee_subs_info_t* instantiate_additional_ee_subs_info(int include_optional);

#include "test_smf_subscription_info.c"
#include "test_hss_subscription_info.c"


additional_ee_subs_info_t* instantiate_additional_ee_subs_info(int include_optional) {
  additional_ee_subs_info_t* additional_ee_subs_info = NULL;
  if (include_optional) {
    additional_ee_subs_info = additional_ee_subs_info_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_smf_subscription_info(0),
       // false, not to have infinite recursion
      instantiate_hss_subscription_info(0)
    );
  } else {
    additional_ee_subs_info = additional_ee_subs_info_create(
      list_createList(),
      NULL,
      NULL
    );
  }

  return additional_ee_subs_info;
}


#ifdef additional_ee_subs_info_MAIN

void test_additional_ee_subs_info(int include_optional) {
    additional_ee_subs_info_t* additional_ee_subs_info_1 = instantiate_additional_ee_subs_info(include_optional);

	cJSON* jsonadditional_ee_subs_info_1 = additional_ee_subs_info_convertToJSON(additional_ee_subs_info_1);
	printf("additional_ee_subs_info :\n%s\n", cJSON_Print(jsonadditional_ee_subs_info_1));
	additional_ee_subs_info_t* additional_ee_subs_info_2 = additional_ee_subs_info_parseFromJSON(jsonadditional_ee_subs_info_1);
	cJSON* jsonadditional_ee_subs_info_2 = additional_ee_subs_info_convertToJSON(additional_ee_subs_info_2);
	printf("repeating additional_ee_subs_info:\n%s\n", cJSON_Print(jsonadditional_ee_subs_info_2));
}

int main() {
  test_additional_ee_subs_info(1);
  test_additional_ee_subs_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // additional_ee_subs_info_MAIN
#endif // additional_ee_subs_info_TEST
