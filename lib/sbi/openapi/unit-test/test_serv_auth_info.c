#ifndef serv_auth_info_TEST
#define serv_auth_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define serv_auth_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/serv_auth_info.h"
serv_auth_info_t* instantiate_serv_auth_info(int include_optional);



serv_auth_info_t* instantiate_serv_auth_info(int include_optional) {
  serv_auth_info_t* serv_auth_info = NULL;
  if (include_optional) {
    serv_auth_info = serv_auth_info_create(
    );
  } else {
    serv_auth_info = serv_auth_info_create(
    );
  }

  return serv_auth_info;
}


#ifdef serv_auth_info_MAIN

void test_serv_auth_info(int include_optional) {
    serv_auth_info_t* serv_auth_info_1 = instantiate_serv_auth_info(include_optional);

	cJSON* jsonserv_auth_info_1 = serv_auth_info_convertToJSON(serv_auth_info_1);
	printf("serv_auth_info :\n%s\n", cJSON_Print(jsonserv_auth_info_1));
	serv_auth_info_t* serv_auth_info_2 = serv_auth_info_parseFromJSON(jsonserv_auth_info_1);
	cJSON* jsonserv_auth_info_2 = serv_auth_info_convertToJSON(serv_auth_info_2);
	printf("repeating serv_auth_info:\n%s\n", cJSON_Print(jsonserv_auth_info_2));
}

int main() {
  test_serv_auth_info(1);
  test_serv_auth_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // serv_auth_info_MAIN
#endif // serv_auth_info_TEST
