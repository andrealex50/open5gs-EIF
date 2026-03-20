#ifndef cause_TEST
#define cause_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cause_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cause.h"
cause_t* instantiate_cause(int include_optional);



cause_t* instantiate_cause(int include_optional) {
  cause_t* cause = NULL;
  if (include_optional) {
    cause = cause_create(
    );
  } else {
    cause = cause_create(
    );
  }

  return cause;
}


#ifdef cause_MAIN

void test_cause(int include_optional) {
    cause_t* cause_1 = instantiate_cause(include_optional);

	cJSON* jsoncause_1 = cause_convertToJSON(cause_1);
	printf("cause :\n%s\n", cJSON_Print(jsoncause_1));
	cause_t* cause_2 = cause_parseFromJSON(jsoncause_1);
	cJSON* jsoncause_2 = cause_convertToJSON(cause_2);
	printf("repeating cause:\n%s\n", cJSON_Print(jsoncause_2));
}

int main() {
  test_cause(1);
  test_cause(0);

  printf("Hello world \n");
  return 0;
}

#endif // cause_MAIN
#endif // cause_TEST
