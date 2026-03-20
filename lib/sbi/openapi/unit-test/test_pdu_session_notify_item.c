#ifndef pdu_session_notify_item_TEST
#define pdu_session_notify_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdu_session_notify_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdu_session_notify_item.h"
pdu_session_notify_item_t* instantiate_pdu_session_notify_item(int include_optional);



pdu_session_notify_item_t* instantiate_pdu_session_notify_item(int include_optional) {
  pdu_session_notify_item_t* pdu_session_notify_item = NULL;
  if (include_optional) {
    pdu_session_notify_item = pdu_session_notify_item_create(
      nsmf_pdusession_pdu_session_notify_item__QOS_FULFILLED
    );
  } else {
    pdu_session_notify_item = pdu_session_notify_item_create(
      nsmf_pdusession_pdu_session_notify_item__QOS_FULFILLED
    );
  }

  return pdu_session_notify_item;
}


#ifdef pdu_session_notify_item_MAIN

void test_pdu_session_notify_item(int include_optional) {
    pdu_session_notify_item_t* pdu_session_notify_item_1 = instantiate_pdu_session_notify_item(include_optional);

	cJSON* jsonpdu_session_notify_item_1 = pdu_session_notify_item_convertToJSON(pdu_session_notify_item_1);
	printf("pdu_session_notify_item :\n%s\n", cJSON_Print(jsonpdu_session_notify_item_1));
	pdu_session_notify_item_t* pdu_session_notify_item_2 = pdu_session_notify_item_parseFromJSON(jsonpdu_session_notify_item_1);
	cJSON* jsonpdu_session_notify_item_2 = pdu_session_notify_item_convertToJSON(pdu_session_notify_item_2);
	printf("repeating pdu_session_notify_item:\n%s\n", cJSON_Print(jsonpdu_session_notify_item_2));
}

int main() {
  test_pdu_session_notify_item(1);
  test_pdu_session_notify_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdu_session_notify_item_MAIN
#endif // pdu_session_notify_item_TEST
