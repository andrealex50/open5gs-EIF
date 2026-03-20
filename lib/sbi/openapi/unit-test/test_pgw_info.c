#ifndef pgw_info_TEST
#define pgw_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pgw_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pgw_info.h"
pgw_info_t* instantiate_pgw_info(int include_optional);

#include "test_ip_address.c"
#include "test_plmn_id.c"


pgw_info_t* instantiate_pgw_info(int include_optional) {
  pgw_info_t* pgw_info = NULL;
  if (include_optional) {
    pgw_info = pgw_info_create(
      "0",
      "a",
       // false, not to have infinite recursion
      instantiate_ip_address(0),
       // false, not to have infinite recursion
      instantiate_plmn_id(0),
      1,
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    pgw_info = pgw_info_create(
      "0",
      "a",
      NULL,
      NULL,
      1,
      "0",
      "2013-10-20T19:20:30+01:00"
    );
  }

  return pgw_info;
}


#ifdef pgw_info_MAIN

void test_pgw_info(int include_optional) {
    pgw_info_t* pgw_info_1 = instantiate_pgw_info(include_optional);

	cJSON* jsonpgw_info_1 = pgw_info_convertToJSON(pgw_info_1);
	printf("pgw_info :\n%s\n", cJSON_Print(jsonpgw_info_1));
	pgw_info_t* pgw_info_2 = pgw_info_parseFromJSON(jsonpgw_info_1);
	cJSON* jsonpgw_info_2 = pgw_info_convertToJSON(pgw_info_2);
	printf("repeating pgw_info:\n%s\n", cJSON_Print(jsonpgw_info_2));
}

int main() {
  test_pgw_info(1);
  test_pgw_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pgw_info_MAIN
#endif // pgw_info_TEST
