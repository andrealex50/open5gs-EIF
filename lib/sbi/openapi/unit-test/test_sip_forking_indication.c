#ifndef sip_forking_indication_TEST
#define sip_forking_indication_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sip_forking_indication_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sip_forking_indication.h"
sip_forking_indication_t* instantiate_sip_forking_indication(int include_optional);



sip_forking_indication_t* instantiate_sip_forking_indication(int include_optional) {
  sip_forking_indication_t* sip_forking_indication = NULL;
  if (include_optional) {
    sip_forking_indication = sip_forking_indication_create(
    );
  } else {
    sip_forking_indication = sip_forking_indication_create(
    );
  }

  return sip_forking_indication;
}


#ifdef sip_forking_indication_MAIN

void test_sip_forking_indication(int include_optional) {
    sip_forking_indication_t* sip_forking_indication_1 = instantiate_sip_forking_indication(include_optional);

	cJSON* jsonsip_forking_indication_1 = sip_forking_indication_convertToJSON(sip_forking_indication_1);
	printf("sip_forking_indication :\n%s\n", cJSON_Print(jsonsip_forking_indication_1));
	sip_forking_indication_t* sip_forking_indication_2 = sip_forking_indication_parseFromJSON(jsonsip_forking_indication_1);
	cJSON* jsonsip_forking_indication_2 = sip_forking_indication_convertToJSON(sip_forking_indication_2);
	printf("repeating sip_forking_indication:\n%s\n", cJSON_Print(jsonsip_forking_indication_2));
}

int main() {
  test_sip_forking_indication(1);
  test_sip_forking_indication(0);

  printf("Hello world \n");
  return 0;
}

#endif // sip_forking_indication_MAIN
#endif // sip_forking_indication_TEST
