#ifndef pfd_content_TEST
#define pfd_content_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pfd_content_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pfd_content.h"
pfd_content_t* instantiate_pfd_content(int include_optional);

#include "test_domain_name_protocol.c"


pfd_content_t* instantiate_pfd_content(int include_optional) {
  pfd_content_t* pfd_content = NULL;
  if (include_optional) {
    pfd_content = pfd_content_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      null
    );
  } else {
    pfd_content = pfd_content_create(
      "0",
      list_createList(),
      list_createList(),
      list_createList(),
      null
    );
  }

  return pfd_content;
}


#ifdef pfd_content_MAIN

void test_pfd_content(int include_optional) {
    pfd_content_t* pfd_content_1 = instantiate_pfd_content(include_optional);

	cJSON* jsonpfd_content_1 = pfd_content_convertToJSON(pfd_content_1);
	printf("pfd_content :\n%s\n", cJSON_Print(jsonpfd_content_1));
	pfd_content_t* pfd_content_2 = pfd_content_parseFromJSON(jsonpfd_content_1);
	cJSON* jsonpfd_content_2 = pfd_content_convertToJSON(pfd_content_2);
	printf("repeating pfd_content:\n%s\n", cJSON_Print(jsonpfd_content_2));
}

int main() {
  test_pfd_content(1);
  test_pfd_content(0);

  printf("Hello world \n");
  return 0;
}

#endif // pfd_content_MAIN
#endif // pfd_content_TEST
