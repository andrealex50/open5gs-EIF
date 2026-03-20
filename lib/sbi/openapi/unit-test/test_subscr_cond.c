#ifndef subscr_cond_TEST
#define subscr_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define subscr_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/subscr_cond.h"
subscr_cond_t* instantiate_subscr_cond(int include_optional);



subscr_cond_t* instantiate_subscr_cond(int include_optional) {
  subscr_cond_t* subscr_cond = NULL;
  if (include_optional) {
    subscr_cond = subscr_cond_create(
      "0",
      list_createList(),
      nrf_nfmanagement_service_subscr_cond__NRF,
      "0",
      list_createList(),
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      list_createList()
    );
  } else {
    subscr_cond = subscr_cond_create(
      "0",
      list_createList(),
      nrf_nfmanagement_service_subscr_cond__NRF,
      "0",
      list_createList(),
      "a",
      "a",
      list_createList(),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      list_createList()
    );
  }

  return subscr_cond;
}


#ifdef subscr_cond_MAIN

void test_subscr_cond(int include_optional) {
    subscr_cond_t* subscr_cond_1 = instantiate_subscr_cond(include_optional);

	cJSON* jsonsubscr_cond_1 = subscr_cond_convertToJSON(subscr_cond_1);
	printf("subscr_cond :\n%s\n", cJSON_Print(jsonsubscr_cond_1));
	subscr_cond_t* subscr_cond_2 = subscr_cond_parseFromJSON(jsonsubscr_cond_1);
	cJSON* jsonsubscr_cond_2 = subscr_cond_convertToJSON(subscr_cond_2);
	printf("repeating subscr_cond:\n%s\n", cJSON_Print(jsonsubscr_cond_2));
}

int main() {
  test_subscr_cond(1);
  test_subscr_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // subscr_cond_MAIN
#endif // subscr_cond_TEST
