#ifndef nf_instance_id_cond_TEST
#define nf_instance_id_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define nf_instance_id_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/nf_instance_id_cond.h"
nf_instance_id_cond_t* instantiate_nf_instance_id_cond(int include_optional);



nf_instance_id_cond_t* instantiate_nf_instance_id_cond(int include_optional) {
  nf_instance_id_cond_t* nf_instance_id_cond = NULL;
  if (include_optional) {
    nf_instance_id_cond = nf_instance_id_cond_create(
      "0"
    );
  } else {
    nf_instance_id_cond = nf_instance_id_cond_create(
      "0"
    );
  }

  return nf_instance_id_cond;
}


#ifdef nf_instance_id_cond_MAIN

void test_nf_instance_id_cond(int include_optional) {
    nf_instance_id_cond_t* nf_instance_id_cond_1 = instantiate_nf_instance_id_cond(include_optional);

	cJSON* jsonnf_instance_id_cond_1 = nf_instance_id_cond_convertToJSON(nf_instance_id_cond_1);
	printf("nf_instance_id_cond :\n%s\n", cJSON_Print(jsonnf_instance_id_cond_1));
	nf_instance_id_cond_t* nf_instance_id_cond_2 = nf_instance_id_cond_parseFromJSON(jsonnf_instance_id_cond_1);
	cJSON* jsonnf_instance_id_cond_2 = nf_instance_id_cond_convertToJSON(nf_instance_id_cond_2);
	printf("repeating nf_instance_id_cond:\n%s\n", cJSON_Print(jsonnf_instance_id_cond_2));
}

int main() {
  test_nf_instance_id_cond(1);
  test_nf_instance_id_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // nf_instance_id_cond_MAIN
#endif // nf_instance_id_cond_TEST
