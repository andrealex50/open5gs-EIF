#ifndef server_addressing_info_TEST
#define server_addressing_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define server_addressing_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/server_addressing_info.h"
server_addressing_info_t* instantiate_server_addressing_info(int include_optional);



server_addressing_info_t* instantiate_server_addressing_info(int include_optional) {
  server_addressing_info_t* server_addressing_info = NULL;
  if (include_optional) {
    server_addressing_info = server_addressing_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    server_addressing_info = server_addressing_info_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return server_addressing_info;
}


#ifdef server_addressing_info_MAIN

void test_server_addressing_info(int include_optional) {
    server_addressing_info_t* server_addressing_info_1 = instantiate_server_addressing_info(include_optional);

	cJSON* jsonserver_addressing_info_1 = server_addressing_info_convertToJSON(server_addressing_info_1);
	printf("server_addressing_info :\n%s\n", cJSON_Print(jsonserver_addressing_info_1));
	server_addressing_info_t* server_addressing_info_2 = server_addressing_info_parseFromJSON(jsonserver_addressing_info_1);
	cJSON* jsonserver_addressing_info_2 = server_addressing_info_convertToJSON(server_addressing_info_2);
	printf("repeating server_addressing_info:\n%s\n", cJSON_Print(jsonserver_addressing_info_2));
}

int main() {
  test_server_addressing_info(1);
  test_server_addressing_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // server_addressing_info_MAIN
#endif // server_addressing_info_TEST
