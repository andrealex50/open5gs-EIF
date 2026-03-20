#ifndef pcf_for_pdu_session_info_TEST
#define pcf_for_pdu_session_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pcf_for_pdu_session_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pcf_for_pdu_session_info.h"
pcf_for_pdu_session_info_t* instantiate_pcf_for_pdu_session_info(int include_optional);

#include "test_snssai.c"


pcf_for_pdu_session_info_t* instantiate_pcf_for_pdu_session_info(int include_optional) {
  pcf_for_pdu_session_info_t* pcf_for_pdu_session_info = NULL;
  if (include_optional) {
    pcf_for_pdu_session_info = pcf_for_pdu_session_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_snssai(0),
      "a",
      list_createList(),
      "198.51.100.1",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_for_pdu_session_info__NF_SET
    );
  } else {
    pcf_for_pdu_session_info = pcf_for_pdu_session_info_create(
      "0",
      NULL,
      "a",
      list_createList(),
      "198.51.100.1",
      "0",
      list_createList(),
      list_createList(),
      "0",
      "0",
      nbsf_management_pcf_for_pdu_session_info__NF_SET
    );
  }

  return pcf_for_pdu_session_info;
}


#ifdef pcf_for_pdu_session_info_MAIN

void test_pcf_for_pdu_session_info(int include_optional) {
    pcf_for_pdu_session_info_t* pcf_for_pdu_session_info_1 = instantiate_pcf_for_pdu_session_info(include_optional);

	cJSON* jsonpcf_for_pdu_session_info_1 = pcf_for_pdu_session_info_convertToJSON(pcf_for_pdu_session_info_1);
	printf("pcf_for_pdu_session_info :\n%s\n", cJSON_Print(jsonpcf_for_pdu_session_info_1));
	pcf_for_pdu_session_info_t* pcf_for_pdu_session_info_2 = pcf_for_pdu_session_info_parseFromJSON(jsonpcf_for_pdu_session_info_1);
	cJSON* jsonpcf_for_pdu_session_info_2 = pcf_for_pdu_session_info_convertToJSON(pcf_for_pdu_session_info_2);
	printf("repeating pcf_for_pdu_session_info:\n%s\n", cJSON_Print(jsonpcf_for_pdu_session_info_2));
}

int main() {
  test_pcf_for_pdu_session_info(1);
  test_pcf_for_pdu_session_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // pcf_for_pdu_session_info_MAIN
#endif // pcf_for_pdu_session_info_TEST
