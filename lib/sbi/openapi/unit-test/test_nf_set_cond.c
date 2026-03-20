#ifndef nf_set_cond_TEST
#define nf_set_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_set_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_set_cond.h"
nf_set_cond_t* instantiate_nf_set_cond(int include_optional);



nf_set_cond_t* instantiate_nf_set_cond(int include_optional) {
  nf_set_cond_t* nf_set_cond = NULL;
  if (include_optional) {
    nf_set_cond = nf_set_cond_create(
      "0"
    );
  } else {
    nf_set_cond = nf_set_cond_create(
      "0"
    );
  }

  return nf_set_cond;
}


#ifdef nf_set_cond_MAIN

void test_nf_set_cond(int include_optional) {
    nf_set_cond_t* nf_set_cond_1 = instantiate_nf_set_cond(include_optional);

	cJSON* jsonnf_set_cond_1 = nf_set_cond_convertToJSON(nf_set_cond_1);
	printf("nf_set_cond :\n%s\n", cJSON_Print(jsonnf_set_cond_1));
	nf_set_cond_t* nf_set_cond_2 = nf_set_cond_parseFromJSON(jsonnf_set_cond_1);
	cJSON* jsonnf_set_cond_2 = nf_set_cond_convertToJSON(nf_set_cond_2);
	printf("repeating nf_set_cond:\n%s\n", cJSON_Print(jsonnf_set_cond_2));
}

int main() {
  test_nf_set_cond(1);
  test_nf_set_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_set_cond_MAIN
#endif // nf_set_cond_TEST
