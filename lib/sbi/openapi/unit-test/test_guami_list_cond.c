#ifndef guami_list_cond_TEST
#define guami_list_cond_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define guami_list_cond_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/guami_list_cond.h"
guami_list_cond_t* instantiate_guami_list_cond(int include_optional);



guami_list_cond_t* instantiate_guami_list_cond(int include_optional) {
  guami_list_cond_t* guami_list_cond = NULL;
  if (include_optional) {
    guami_list_cond = guami_list_cond_create(
      list_createList()
    );
  } else {
    guami_list_cond = guami_list_cond_create(
      list_createList()
    );
  }

  return guami_list_cond;
}


#ifdef guami_list_cond_MAIN

void test_guami_list_cond(int include_optional) {
    guami_list_cond_t* guami_list_cond_1 = instantiate_guami_list_cond(include_optional);

	cJSON* jsonguami_list_cond_1 = guami_list_cond_convertToJSON(guami_list_cond_1);
	printf("guami_list_cond :\n%s\n", cJSON_Print(jsonguami_list_cond_1));
	guami_list_cond_t* guami_list_cond_2 = guami_list_cond_parseFromJSON(jsonguami_list_cond_1);
	cJSON* jsonguami_list_cond_2 = guami_list_cond_convertToJSON(guami_list_cond_2);
	printf("repeating guami_list_cond:\n%s\n", cJSON_Print(jsonguami_list_cond_2));
}

int main() {
  test_guami_list_cond(1);
  test_guami_list_cond(0);

  printf("Hello world \n");
  return 0;
}

#endif // guami_list_cond_MAIN
#endif // guami_list_cond_TEST
