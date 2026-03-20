#ifndef reserv_priority_TEST
#define reserv_priority_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reserv_priority_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reserv_priority.h"
reserv_priority_t* instantiate_reserv_priority(int include_optional);



reserv_priority_t* instantiate_reserv_priority(int include_optional) {
  reserv_priority_t* reserv_priority = NULL;
  if (include_optional) {
    reserv_priority = reserv_priority_create(
    );
  } else {
    reserv_priority = reserv_priority_create(
    );
  }

  return reserv_priority;
}


#ifdef reserv_priority_MAIN

void test_reserv_priority(int include_optional) {
    reserv_priority_t* reserv_priority_1 = instantiate_reserv_priority(include_optional);

	cJSON* jsonreserv_priority_1 = reserv_priority_convertToJSON(reserv_priority_1);
	printf("reserv_priority :\n%s\n", cJSON_Print(jsonreserv_priority_1));
	reserv_priority_t* reserv_priority_2 = reserv_priority_parseFromJSON(jsonreserv_priority_1);
	cJSON* jsonreserv_priority_2 = reserv_priority_convertToJSON(reserv_priority_2);
	printf("repeating reserv_priority:\n%s\n", cJSON_Print(jsonreserv_priority_2));
}

int main() {
  test_reserv_priority(1);
  test_reserv_priority(0);

  printf("Hello world \n");
  return 0;
}

#endif // reserv_priority_MAIN
#endif // reserv_priority_TEST
