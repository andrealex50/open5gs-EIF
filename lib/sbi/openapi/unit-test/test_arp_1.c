#ifndef arp_1_TEST
#define arp_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define arp_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/arp_1.h"
arp_1_t* instantiate_arp_1(int include_optional);



arp_1_t* instantiate_arp_1(int include_optional) {
  arp_1_t* arp_1 = NULL;
  if (include_optional) {
    arp_1 = arp_1_create(
      1,
      nudr_datarepository_api_openapi_file_arp_1__NOT_PREEMPT,
      nudr_datarepository_api_openapi_file_arp_1__NOT_PREEMPTABLE
    );
  } else {
    arp_1 = arp_1_create(
      1,
      nudr_datarepository_api_openapi_file_arp_1__NOT_PREEMPT,
      nudr_datarepository_api_openapi_file_arp_1__NOT_PREEMPTABLE
    );
  }

  return arp_1;
}


#ifdef arp_1_MAIN

void test_arp_1(int include_optional) {
    arp_1_t* arp_1_1 = instantiate_arp_1(include_optional);

	cJSON* jsonarp_1_1 = arp_1_convertToJSON(arp_1_1);
	printf("arp_1 :\n%s\n", cJSON_Print(jsonarp_1_1));
	arp_1_t* arp_1_2 = arp_1_parseFromJSON(jsonarp_1_1);
	cJSON* jsonarp_1_2 = arp_1_convertToJSON(arp_1_2);
	printf("repeating arp_1:\n%s\n", cJSON_Print(jsonarp_1_2));
}

int main() {
  test_arp_1(1);
  test_arp_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // arp_1_MAIN
#endif // arp_1_TEST
