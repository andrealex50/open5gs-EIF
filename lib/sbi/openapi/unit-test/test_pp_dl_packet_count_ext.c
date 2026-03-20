#ifndef pp_dl_packet_count_ext_TEST
#define pp_dl_packet_count_ext_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pp_dl_packet_count_ext_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pp_dl_packet_count_ext.h"
pp_dl_packet_count_ext_t* instantiate_pp_dl_packet_count_ext(int include_optional);

#include "test_snssai.c"


pp_dl_packet_count_ext_t* instantiate_pp_dl_packet_count_ext(int include_optional) {
  pp_dl_packet_count_ext_t* pp_dl_packet_count_ext = NULL;
  if (include_optional) {
    pp_dl_packet_count_ext = pp_dl_packet_count_ext_create(
      "0",
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  } else {
    pp_dl_packet_count_ext = pp_dl_packet_count_ext_create(
      "0",
      56,
      "0",
      NULL,
      "2013-10-20T19:20:30+01:00",
      "0"
    );
  }

  return pp_dl_packet_count_ext;
}


#ifdef pp_dl_packet_count_ext_MAIN

void test_pp_dl_packet_count_ext(int include_optional) {
    pp_dl_packet_count_ext_t* pp_dl_packet_count_ext_1 = instantiate_pp_dl_packet_count_ext(include_optional);

	cJSON* jsonpp_dl_packet_count_ext_1 = pp_dl_packet_count_ext_convertToJSON(pp_dl_packet_count_ext_1);
	printf("pp_dl_packet_count_ext :\n%s\n", cJSON_Print(jsonpp_dl_packet_count_ext_1));
	pp_dl_packet_count_ext_t* pp_dl_packet_count_ext_2 = pp_dl_packet_count_ext_parseFromJSON(jsonpp_dl_packet_count_ext_1);
	cJSON* jsonpp_dl_packet_count_ext_2 = pp_dl_packet_count_ext_convertToJSON(pp_dl_packet_count_ext_2);
	printf("repeating pp_dl_packet_count_ext:\n%s\n", cJSON_Print(jsonpp_dl_packet_count_ext_2));
}

int main() {
  test_pp_dl_packet_count_ext(1);
  test_pp_dl_packet_count_ext(0);

  printf("Hello world \n");
  return 0;
}

#endif // pp_dl_packet_count_ext_MAIN
#endif // pp_dl_packet_count_ext_TEST
