#ifndef dynamic5_qi_TEST
#define dynamic5_qi_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dynamic5_qi_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dynamic5_qi.h"
dynamic5_qi_t* instantiate_dynamic5_qi(int include_optional);



dynamic5_qi_t* instantiate_dynamic5_qi(int include_optional) {
  dynamic5_qi_t* dynamic5_qi = NULL;
  if (include_optional) {
    dynamic5_qi = dynamic5_qi_create(
      nsmf_pdusession_dynamic5_qi__NON_GBR,
      1,
      1,
      "a",
      1,
      1,
      4096,
      1,
      1,
      1
    );
  } else {
    dynamic5_qi = dynamic5_qi_create(
      nsmf_pdusession_dynamic5_qi__NON_GBR,
      1,
      1,
      "a",
      1,
      1,
      4096,
      1,
      1,
      1
    );
  }

  return dynamic5_qi;
}


#ifdef dynamic5_qi_MAIN

void test_dynamic5_qi(int include_optional) {
    dynamic5_qi_t* dynamic5_qi_1 = instantiate_dynamic5_qi(include_optional);

	cJSON* jsondynamic5_qi_1 = dynamic5_qi_convertToJSON(dynamic5_qi_1);
	printf("dynamic5_qi :\n%s\n", cJSON_Print(jsondynamic5_qi_1));
	dynamic5_qi_t* dynamic5_qi_2 = dynamic5_qi_parseFromJSON(jsondynamic5_qi_1);
	cJSON* jsondynamic5_qi_2 = dynamic5_qi_convertToJSON(dynamic5_qi_2);
	printf("repeating dynamic5_qi:\n%s\n", cJSON_Print(jsondynamic5_qi_2));
}

int main() {
  test_dynamic5_qi(1);
  test_dynamic5_qi(0);

  printf("Hello world \n");
  return 0;
}

#endif // dynamic5_qi_MAIN
#endif // dynamic5_qi_TEST
