#ifndef av_eap_aka_prime_TEST
#define av_eap_aka_prime_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define av_eap_aka_prime_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/av_eap_aka_prime.h"
av_eap_aka_prime_t* instantiate_av_eap_aka_prime(int include_optional);



av_eap_aka_prime_t* instantiate_av_eap_aka_prime(int include_optional) {
  av_eap_aka_prime_t* av_eap_aka_prime = NULL;
  if (include_optional) {
    av_eap_aka_prime = av_eap_aka_prime_create(
      nudm_ueau_av_eap_aka_prime__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  } else {
    av_eap_aka_prime = av_eap_aka_prime_create(
      nudm_ueau_av_eap_aka_prime__5G_HE_AKA,
      "a",
      "a",
      "a",
      "a",
      "a"
    );
  }

  return av_eap_aka_prime;
}


#ifdef av_eap_aka_prime_MAIN

void test_av_eap_aka_prime(int include_optional) {
    av_eap_aka_prime_t* av_eap_aka_prime_1 = instantiate_av_eap_aka_prime(include_optional);

	cJSON* jsonav_eap_aka_prime_1 = av_eap_aka_prime_convertToJSON(av_eap_aka_prime_1);
	printf("av_eap_aka_prime :\n%s\n", cJSON_Print(jsonav_eap_aka_prime_1));
	av_eap_aka_prime_t* av_eap_aka_prime_2 = av_eap_aka_prime_parseFromJSON(jsonav_eap_aka_prime_1);
	cJSON* jsonav_eap_aka_prime_2 = av_eap_aka_prime_convertToJSON(av_eap_aka_prime_2);
	printf("repeating av_eap_aka_prime:\n%s\n", cJSON_Print(jsonav_eap_aka_prime_2));
}

int main() {
  test_av_eap_aka_prime(1);
  test_av_eap_aka_prime(0);

  printf("Hello world \n");
  return 0;
}

#endif // av_eap_aka_prime_MAIN
#endif // av_eap_aka_prime_TEST
