#ifndef mnpf_info_TEST
#define mnpf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mnpf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mnpf_info.h"
mnpf_info_t* instantiate_mnpf_info(int include_optional);



mnpf_info_t* instantiate_mnpf_info(int include_optional) {
  mnpf_info_t* mnpf_info = NULL;
  if (include_optional) {
    mnpf_info = mnpf_info_create(
      list_createList()
    );
  } else {
    mnpf_info = mnpf_info_create(
      list_createList()
    );
  }

  return mnpf_info;
}


#ifdef mnpf_info_MAIN

void test_mnpf_info(int include_optional) {
    mnpf_info_t* mnpf_info_1 = instantiate_mnpf_info(include_optional);

	cJSON* jsonmnpf_info_1 = mnpf_info_convertToJSON(mnpf_info_1);
	printf("mnpf_info :\n%s\n", cJSON_Print(jsonmnpf_info_1));
	mnpf_info_t* mnpf_info_2 = mnpf_info_parseFromJSON(jsonmnpf_info_1);
	cJSON* jsonmnpf_info_2 = mnpf_info_convertToJSON(mnpf_info_2);
	printf("repeating mnpf_info:\n%s\n", cJSON_Print(jsonmnpf_info_2));
}

int main() {
  test_mnpf_info(1);
  test_mnpf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mnpf_info_MAIN
#endif // mnpf_info_TEST
