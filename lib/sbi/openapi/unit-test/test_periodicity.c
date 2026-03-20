#ifndef periodicity_TEST
#define periodicity_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define periodicity_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/periodicity.h"
periodicity_t* instantiate_periodicity(int include_optional);



periodicity_t* instantiate_periodicity(int include_optional) {
  periodicity_t* periodicity = NULL;
  if (include_optional) {
    periodicity = periodicity_create(
    );
  } else {
    periodicity = periodicity_create(
    );
  }

  return periodicity;
}


#ifdef periodicity_MAIN

void test_periodicity(int include_optional) {
    periodicity_t* periodicity_1 = instantiate_periodicity(include_optional);

	cJSON* jsonperiodicity_1 = periodicity_convertToJSON(periodicity_1);
	printf("periodicity :\n%s\n", cJSON_Print(jsonperiodicity_1));
	periodicity_t* periodicity_2 = periodicity_parseFromJSON(jsonperiodicity_1);
	cJSON* jsonperiodicity_2 = periodicity_convertToJSON(periodicity_2);
	printf("repeating periodicity:\n%s\n", cJSON_Print(jsonperiodicity_2));
}

int main() {
  test_periodicity(1);
  test_periodicity(0);

  printf("Hello world \n");
  return 0;
}

#endif // periodicity_MAIN
#endif // periodicity_TEST
