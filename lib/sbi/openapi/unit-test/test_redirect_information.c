#ifndef redirect_information_TEST
#define redirect_information_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define redirect_information_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/redirect_information.h"
redirect_information_t* instantiate_redirect_information(int include_optional);



redirect_information_t* instantiate_redirect_information(int include_optional) {
  redirect_information_t* redirect_information = NULL;
  if (include_optional) {
    redirect_information = redirect_information_create(
      1,
      npcf_smpolicycontrol_api_redirect_information__IPV4_ADDR,
      "0"
    );
  } else {
    redirect_information = redirect_information_create(
      1,
      npcf_smpolicycontrol_api_redirect_information__IPV4_ADDR,
      "0"
    );
  }

  return redirect_information;
}


#ifdef redirect_information_MAIN

void test_redirect_information(int include_optional) {
    redirect_information_t* redirect_information_1 = instantiate_redirect_information(include_optional);

	cJSON* jsonredirect_information_1 = redirect_information_convertToJSON(redirect_information_1);
	printf("redirect_information :\n%s\n", cJSON_Print(jsonredirect_information_1));
	redirect_information_t* redirect_information_2 = redirect_information_parseFromJSON(jsonredirect_information_1);
	cJSON* jsonredirect_information_2 = redirect_information_convertToJSON(redirect_information_2);
	printf("repeating redirect_information:\n%s\n", cJSON_Print(jsonredirect_information_2));
}

int main() {
  test_redirect_information(1);
  test_redirect_information(0);

  printf("Hello world \n");
  return 0;
}

#endif // redirect_information_MAIN
#endif // redirect_information_TEST
