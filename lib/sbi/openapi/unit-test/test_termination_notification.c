#ifndef termination_notification_TEST
#define termination_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define termination_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/termination_notification.h"
termination_notification_t* instantiate_termination_notification(int include_optional);



termination_notification_t* instantiate_termination_notification(int include_optional) {
  termination_notification_t* termination_notification = NULL;
  if (include_optional) {
    termination_notification = termination_notification_create(
      "0",
      npcf_ampolicycontrol_termination_notification__UNSPECIFIED
    );
  } else {
    termination_notification = termination_notification_create(
      "0",
      npcf_ampolicycontrol_termination_notification__UNSPECIFIED
    );
  }

  return termination_notification;
}


#ifdef termination_notification_MAIN

void test_termination_notification(int include_optional) {
    termination_notification_t* termination_notification_1 = instantiate_termination_notification(include_optional);

	cJSON* jsontermination_notification_1 = termination_notification_convertToJSON(termination_notification_1);
	printf("termination_notification :\n%s\n", cJSON_Print(jsontermination_notification_1));
	termination_notification_t* termination_notification_2 = termination_notification_parseFromJSON(jsontermination_notification_1);
	cJSON* jsontermination_notification_2 = termination_notification_convertToJSON(termination_notification_2);
	printf("repeating termination_notification:\n%s\n", cJSON_Print(jsontermination_notification_2));
}

int main() {
  test_termination_notification(1);
  test_termination_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // termination_notification_MAIN
#endif // termination_notification_TEST
