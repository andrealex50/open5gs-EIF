#ifndef af_sig_protocol_TEST
#define af_sig_protocol_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_sig_protocol_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_sig_protocol.h"
af_sig_protocol_t* instantiate_af_sig_protocol(int include_optional);



af_sig_protocol_t* instantiate_af_sig_protocol(int include_optional) {
  af_sig_protocol_t* af_sig_protocol = NULL;
  if (include_optional) {
    af_sig_protocol = af_sig_protocol_create(
    );
  } else {
    af_sig_protocol = af_sig_protocol_create(
    );
  }

  return af_sig_protocol;
}


#ifdef af_sig_protocol_MAIN

void test_af_sig_protocol(int include_optional) {
    af_sig_protocol_t* af_sig_protocol_1 = instantiate_af_sig_protocol(include_optional);

	cJSON* jsonaf_sig_protocol_1 = af_sig_protocol_convertToJSON(af_sig_protocol_1);
	printf("af_sig_protocol :\n%s\n", cJSON_Print(jsonaf_sig_protocol_1));
	af_sig_protocol_t* af_sig_protocol_2 = af_sig_protocol_parseFromJSON(jsonaf_sig_protocol_1);
	cJSON* jsonaf_sig_protocol_2 = af_sig_protocol_convertToJSON(af_sig_protocol_2);
	printf("repeating af_sig_protocol:\n%s\n", cJSON_Print(jsonaf_sig_protocol_2));
}

int main() {
  test_af_sig_protocol(1);
  test_af_sig_protocol(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_sig_protocol_MAIN
#endif // af_sig_protocol_TEST
