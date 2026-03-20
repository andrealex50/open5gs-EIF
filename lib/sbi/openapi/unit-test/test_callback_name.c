#ifndef callback_name_TEST
#define callback_name_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define callback_name_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/callback_name.h"
callback_name_t* instantiate_callback_name(int include_optional);



callback_name_t* instantiate_callback_name(int include_optional) {
  callback_name_t* callback_name = NULL;
  if (include_optional) {
    callback_name = callback_name_create(
      "0"
    );
  } else {
    callback_name = callback_name_create(
      "0"
    );
  }

  return callback_name;
}


#ifdef callback_name_MAIN

void test_callback_name(int include_optional) {
    callback_name_t* callback_name_1 = instantiate_callback_name(include_optional);

	cJSON* jsoncallback_name_1 = callback_name_convertToJSON(callback_name_1);
	printf("callback_name :\n%s\n", cJSON_Print(jsoncallback_name_1));
	callback_name_t* callback_name_2 = callback_name_parseFromJSON(jsoncallback_name_1);
	cJSON* jsoncallback_name_2 = callback_name_convertToJSON(callback_name_2);
	printf("repeating callback_name:\n%s\n", cJSON_Print(jsoncallback_name_2));
}

int main() {
  test_callback_name(1);
  test_callback_name(0);

  printf("Hello world \n");
  return 0;
}

#endif // callback_name_MAIN
#endif // callback_name_TEST
