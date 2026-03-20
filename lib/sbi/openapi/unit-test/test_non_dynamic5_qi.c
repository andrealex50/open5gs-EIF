#ifndef non_dynamic5_qi_TEST
#define non_dynamic5_qi_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define non_dynamic5_qi_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/non_dynamic5_qi.h"
non_dynamic5_qi_t* instantiate_non_dynamic5_qi(int include_optional);



non_dynamic5_qi_t* instantiate_non_dynamic5_qi(int include_optional) {
  non_dynamic5_qi_t* non_dynamic5_qi = NULL;
  if (include_optional) {
    non_dynamic5_qi = non_dynamic5_qi_create(
      1,
      1,
      1,
      4096,
      1,
      1
    );
  } else {
    non_dynamic5_qi = non_dynamic5_qi_create(
      1,
      1,
      1,
      4096,
      1,
      1
    );
  }

  return non_dynamic5_qi;
}


#ifdef non_dynamic5_qi_MAIN

void test_non_dynamic5_qi(int include_optional) {
    non_dynamic5_qi_t* non_dynamic5_qi_1 = instantiate_non_dynamic5_qi(include_optional);

	cJSON* jsonnon_dynamic5_qi_1 = non_dynamic5_qi_convertToJSON(non_dynamic5_qi_1);
	printf("non_dynamic5_qi :\n%s\n", cJSON_Print(jsonnon_dynamic5_qi_1));
	non_dynamic5_qi_t* non_dynamic5_qi_2 = non_dynamic5_qi_parseFromJSON(jsonnon_dynamic5_qi_1);
	cJSON* jsonnon_dynamic5_qi_2 = non_dynamic5_qi_convertToJSON(non_dynamic5_qi_2);
	printf("repeating non_dynamic5_qi:\n%s\n", cJSON_Print(jsonnon_dynamic5_qi_2));
}

int main() {
  test_non_dynamic5_qi(1);
  test_non_dynamic5_qi(0);

  printf("Hello world \n");
  return 0;
}

#endif // non_dynamic5_qi_MAIN
#endif // non_dynamic5_qi_TEST
