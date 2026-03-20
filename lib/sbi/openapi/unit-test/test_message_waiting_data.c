#ifndef message_waiting_data_TEST
#define message_waiting_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define message_waiting_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/message_waiting_data.h"
message_waiting_data_t* instantiate_message_waiting_data(int include_optional);



message_waiting_data_t* instantiate_message_waiting_data(int include_optional) {
  message_waiting_data_t* message_waiting_data = NULL;
  if (include_optional) {
    message_waiting_data = message_waiting_data_create(
      list_createList()
    );
  } else {
    message_waiting_data = message_waiting_data_create(
      list_createList()
    );
  }

  return message_waiting_data;
}


#ifdef message_waiting_data_MAIN

void test_message_waiting_data(int include_optional) {
    message_waiting_data_t* message_waiting_data_1 = instantiate_message_waiting_data(include_optional);

	cJSON* jsonmessage_waiting_data_1 = message_waiting_data_convertToJSON(message_waiting_data_1);
	printf("message_waiting_data :\n%s\n", cJSON_Print(jsonmessage_waiting_data_1));
	message_waiting_data_t* message_waiting_data_2 = message_waiting_data_parseFromJSON(jsonmessage_waiting_data_1);
	cJSON* jsonmessage_waiting_data_2 = message_waiting_data_convertToJSON(message_waiting_data_2);
	printf("repeating message_waiting_data:\n%s\n", cJSON_Print(jsonmessage_waiting_data_2));
}

int main() {
  test_message_waiting_data(1);
  test_message_waiting_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // message_waiting_data_MAIN
#endif // message_waiting_data_TEST
