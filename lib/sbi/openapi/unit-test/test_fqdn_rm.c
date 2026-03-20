#ifndef fqdn_rm_TEST
#define fqdn_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define fqdn_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/fqdn_rm.h"
fqdn_rm_t* instantiate_fqdn_rm(int include_optional);



fqdn_rm_t* instantiate_fqdn_rm(int include_optional) {
  fqdn_rm_t* fqdn_rm = NULL;
  if (include_optional) {
    fqdn_rm = fqdn_rm_create(
    );
  } else {
    fqdn_rm = fqdn_rm_create(
    );
  }

  return fqdn_rm;
}


#ifdef fqdn_rm_MAIN

void test_fqdn_rm(int include_optional) {
    fqdn_rm_t* fqdn_rm_1 = instantiate_fqdn_rm(include_optional);

	cJSON* jsonfqdn_rm_1 = fqdn_rm_convertToJSON(fqdn_rm_1);
	printf("fqdn_rm :\n%s\n", cJSON_Print(jsonfqdn_rm_1));
	fqdn_rm_t* fqdn_rm_2 = fqdn_rm_parseFromJSON(jsonfqdn_rm_1);
	cJSON* jsonfqdn_rm_2 = fqdn_rm_convertToJSON(fqdn_rm_2);
	printf("repeating fqdn_rm:\n%s\n", cJSON_Print(jsonfqdn_rm_2));
}

int main() {
  test_fqdn_rm(1);
  test_fqdn_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // fqdn_rm_MAIN
#endif // fqdn_rm_TEST
