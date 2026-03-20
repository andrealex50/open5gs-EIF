#ifndef hss_subscription_info_TEST
#define hss_subscription_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define hss_subscription_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/hss_subscription_info.h"
hss_subscription_info_t* instantiate_hss_subscription_info(int include_optional);



hss_subscription_info_t* instantiate_hss_subscription_info(int include_optional) {
  hss_subscription_info_t* hss_subscription_info = NULL;
  if (include_optional) {
    hss_subscription_info = hss_subscription_info_create(
      list_createList()
    );
  } else {
    hss_subscription_info = hss_subscription_info_create(
      list_createList()
    );
  }

  return hss_subscription_info;
}


#ifdef hss_subscription_info_MAIN

void test_hss_subscription_info(int include_optional) {
    hss_subscription_info_t* hss_subscription_info_1 = instantiate_hss_subscription_info(include_optional);

	cJSON* jsonhss_subscription_info_1 = hss_subscription_info_convertToJSON(hss_subscription_info_1);
	printf("hss_subscription_info :\n%s\n", cJSON_Print(jsonhss_subscription_info_1));
	hss_subscription_info_t* hss_subscription_info_2 = hss_subscription_info_parseFromJSON(jsonhss_subscription_info_1);
	cJSON* jsonhss_subscription_info_2 = hss_subscription_info_convertToJSON(hss_subscription_info_2);
	printf("repeating hss_subscription_info:\n%s\n", cJSON_Print(jsonhss_subscription_info_2));
}

int main() {
  test_hss_subscription_info(1);
  test_hss_subscription_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // hss_subscription_info_MAIN
#endif // hss_subscription_info_TEST
