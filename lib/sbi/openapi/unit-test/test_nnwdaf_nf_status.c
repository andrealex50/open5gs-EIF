#ifndef nnwdaf_nf_status_TEST
#define nnwdaf_nf_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nnwdaf_nf_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nnwdaf_nf_status.h"
nnwdaf_nf_status_t* instantiate_nnwdaf_nf_status(int include_optional);



nnwdaf_nf_status_t* instantiate_nnwdaf_nf_status(int include_optional) {
  nnwdaf_nf_status_t* nnwdaf_nf_status = NULL;
  if (include_optional) {
    nnwdaf_nf_status = nnwdaf_nf_status_create(
      1,
      1,
      1
    );
  } else {
    nnwdaf_nf_status = nnwdaf_nf_status_create(
      1,
      1,
      1
    );
  }

  return nnwdaf_nf_status;
}


#ifdef nnwdaf_nf_status_MAIN

void test_nnwdaf_nf_status(int include_optional) {
    nnwdaf_nf_status_t* nnwdaf_nf_status_1 = instantiate_nnwdaf_nf_status(include_optional);

	cJSON* jsonnnwdaf_nf_status_1 = nnwdaf_nf_status_convertToJSON(nnwdaf_nf_status_1);
	printf("nnwdaf_nf_status :\n%s\n", cJSON_Print(jsonnnwdaf_nf_status_1));
	nnwdaf_nf_status_t* nnwdaf_nf_status_2 = nnwdaf_nf_status_parseFromJSON(jsonnnwdaf_nf_status_1);
	cJSON* jsonnnwdaf_nf_status_2 = nnwdaf_nf_status_convertToJSON(nnwdaf_nf_status_2);
	printf("repeating nnwdaf_nf_status:\n%s\n", cJSON_Print(jsonnnwdaf_nf_status_2));
}

int main() {
  test_nnwdaf_nf_status(1);
  test_nnwdaf_nf_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // nnwdaf_nf_status_MAIN
#endif // nnwdaf_nf_status_TEST
