#ifndef periodicity_any_of_TEST
#define periodicity_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define periodicity_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/periodicity_any_of.h"
periodicity_any_of_t* instantiate_periodicity_any_of(int include_optional);



periodicity_any_of_t* instantiate_periodicity_any_of(int include_optional) {
  periodicity_any_of_t* periodicity_any_of = NULL;
  if (include_optional) {
    periodicity_any_of = periodicity_any_of_create(
    );
  } else {
    periodicity_any_of = periodicity_any_of_create(
    );
  }

  return periodicity_any_of;
}


#ifdef periodicity_any_of_MAIN

void test_periodicity_any_of(int include_optional) {
    periodicity_any_of_t* periodicity_any_of_1 = instantiate_periodicity_any_of(include_optional);

	cJSON* jsonperiodicity_any_of_1 = periodicity_any_of_convertToJSON(periodicity_any_of_1);
	printf("periodicity_any_of :\n%s\n", cJSON_Print(jsonperiodicity_any_of_1));
	periodicity_any_of_t* periodicity_any_of_2 = periodicity_any_of_parseFromJSON(jsonperiodicity_any_of_1);
	cJSON* jsonperiodicity_any_of_2 = periodicity_any_of_convertToJSON(periodicity_any_of_2);
	printf("repeating periodicity_any_of:\n%s\n", cJSON_Print(jsonperiodicity_any_of_2));
}

int main() {
  test_periodicity_any_of(1);
  test_periodicity_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // periodicity_any_of_MAIN
#endif // periodicity_any_of_TEST
