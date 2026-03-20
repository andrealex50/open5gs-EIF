#ifndef pp_subs_reg_timer_TEST
#define pp_subs_reg_timer_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_subs_reg_timer_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_subs_reg_timer.h"
pp_subs_reg_timer_t* instantiate_pp_subs_reg_timer(int include_optional);



pp_subs_reg_timer_t* instantiate_pp_subs_reg_timer(int include_optional) {
  pp_subs_reg_timer_t* pp_subs_reg_timer = NULL;
  if (include_optional) {
    pp_subs_reg_timer = pp_subs_reg_timer_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    pp_subs_reg_timer = pp_subs_reg_timer_create(
      56,
      "0",
      56,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return pp_subs_reg_timer;
}


#ifdef pp_subs_reg_timer_MAIN

void test_pp_subs_reg_timer(int include_optional) {
    pp_subs_reg_timer_t* pp_subs_reg_timer_1 = instantiate_pp_subs_reg_timer(include_optional);

	cJSON* jsonpp_subs_reg_timer_1 = pp_subs_reg_timer_convertToJSON(pp_subs_reg_timer_1);
	printf("pp_subs_reg_timer :\n%s\n", cJSON_Print(jsonpp_subs_reg_timer_1));
	pp_subs_reg_timer_t* pp_subs_reg_timer_2 = pp_subs_reg_timer_parseFromJSON(jsonpp_subs_reg_timer_1);
	cJSON* jsonpp_subs_reg_timer_2 = pp_subs_reg_timer_convertToJSON(pp_subs_reg_timer_2);
	printf("repeating pp_subs_reg_timer:\n%s\n", cJSON_Print(jsonpp_subs_reg_timer_2));
}

int main() {
  test_pp_subs_reg_timer(1);
  test_pp_subs_reg_timer(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_subs_reg_timer_MAIN
#endif // pp_subs_reg_timer_TEST
