#ifndef un_trust_af_info_TEST
#define un_trust_af_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define un_trust_af_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/un_trust_af_info.h"
un_trust_af_info_t* instantiate_un_trust_af_info(int include_optional);



un_trust_af_info_t* instantiate_un_trust_af_info(int include_optional) {
  un_trust_af_info_t* un_trust_af_info = NULL;
  if (include_optional) {
    un_trust_af_info = un_trust_af_info_create(
      "0",
      list_createList(),
      1
    );
  } else {
    un_trust_af_info = un_trust_af_info_create(
      "0",
      list_createList(),
      1
    );
  }

  return un_trust_af_info;
}


#ifdef un_trust_af_info_MAIN

void test_un_trust_af_info(int include_optional) {
    un_trust_af_info_t* un_trust_af_info_1 = instantiate_un_trust_af_info(include_optional);

	cJSON* jsonun_trust_af_info_1 = un_trust_af_info_convertToJSON(un_trust_af_info_1);
	printf("un_trust_af_info :\n%s\n", cJSON_Print(jsonun_trust_af_info_1));
	un_trust_af_info_t* un_trust_af_info_2 = un_trust_af_info_parseFromJSON(jsonun_trust_af_info_1);
	cJSON* jsonun_trust_af_info_2 = un_trust_af_info_convertToJSON(un_trust_af_info_2);
	printf("repeating un_trust_af_info:\n%s\n", cJSON_Print(jsonun_trust_af_info_2));
}

int main() {
  test_un_trust_af_info(1);
  test_un_trust_af_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // un_trust_af_info_MAIN
#endif // un_trust_af_info_TEST
