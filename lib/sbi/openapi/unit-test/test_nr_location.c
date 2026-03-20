#ifndef nr_location_TEST
#define nr_location_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nr_location_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nr_location.h"
nr_location_t* instantiate_nr_location(int include_optional);

#include "test_tai_1.c"
#include "test_ncgi_1.c"
#include "test_global_ran_node_id_1.c"


nr_location_t* instantiate_nr_location(int include_optional) {
  nr_location_t* nr_location = NULL;
  if (include_optional) {
    nr_location = nr_location_create(
       // false, not to have infinite recursion
      instantiate_tai_1(0),
       // false, not to have infinite recursion
      instantiate_ncgi_1(0),
      1,
      0,
      "2013-10-20T19:20:30+01:00",
      "a",
      "a",
       // false, not to have infinite recursion
      instantiate_global_ran_node_id_1(0)
    );
  } else {
    nr_location = nr_location_create(
      NULL,
      NULL,
      1,
      0,
      "2013-10-20T19:20:30+01:00",
      "a",
      "a",
      NULL
    );
  }

  return nr_location;
}


#ifdef nr_location_MAIN

void test_nr_location(int include_optional) {
    nr_location_t* nr_location_1 = instantiate_nr_location(include_optional);

	cJSON* jsonnr_location_1 = nr_location_convertToJSON(nr_location_1);
	printf("nr_location :\n%s\n", cJSON_Print(jsonnr_location_1));
	nr_location_t* nr_location_2 = nr_location_parseFromJSON(jsonnr_location_1);
	cJSON* jsonnr_location_2 = nr_location_convertToJSON(nr_location_2);
	printf("repeating nr_location:\n%s\n", cJSON_Print(jsonnr_location_2));
}

int main() {
  test_nr_location(1);
  test_nr_location(0);

  printf("Hello world \n");
  return 0;
}

#endif // nr_location_MAIN
#endif // nr_location_TEST
