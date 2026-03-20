#ifndef suggested_packet_num_dl_TEST
#define suggested_packet_num_dl_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define suggested_packet_num_dl_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/suggested_packet_num_dl.h"
suggested_packet_num_dl_t* instantiate_suggested_packet_num_dl(int include_optional);



suggested_packet_num_dl_t* instantiate_suggested_packet_num_dl(int include_optional) {
  suggested_packet_num_dl_t* suggested_packet_num_dl = NULL;
  if (include_optional) {
    suggested_packet_num_dl = suggested_packet_num_dl_create(
      1,
      "2013-10-20T19:20:30+01:00"
    );
  } else {
    suggested_packet_num_dl = suggested_packet_num_dl_create(
      1,
      "2013-10-20T19:20:30+01:00"
    );
  }

  return suggested_packet_num_dl;
}


#ifdef suggested_packet_num_dl_MAIN

void test_suggested_packet_num_dl(int include_optional) {
    suggested_packet_num_dl_t* suggested_packet_num_dl_1 = instantiate_suggested_packet_num_dl(include_optional);

	cJSON* jsonsuggested_packet_num_dl_1 = suggested_packet_num_dl_convertToJSON(suggested_packet_num_dl_1);
	printf("suggested_packet_num_dl :\n%s\n", cJSON_Print(jsonsuggested_packet_num_dl_1));
	suggested_packet_num_dl_t* suggested_packet_num_dl_2 = suggested_packet_num_dl_parseFromJSON(jsonsuggested_packet_num_dl_1);
	cJSON* jsonsuggested_packet_num_dl_2 = suggested_packet_num_dl_convertToJSON(suggested_packet_num_dl_2);
	printf("repeating suggested_packet_num_dl:\n%s\n", cJSON_Print(jsonsuggested_packet_num_dl_2));
}

int main() {
  test_suggested_packet_num_dl(1);
  test_suggested_packet_num_dl(0);

  printf("Hello world \n");
  return 0;
}

#endif // suggested_packet_num_dl_MAIN
#endif // suggested_packet_num_dl_TEST
