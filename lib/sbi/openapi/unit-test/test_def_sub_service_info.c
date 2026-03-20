#ifndef def_sub_service_info_TEST
#define def_sub_service_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define def_sub_service_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/def_sub_service_info.h"
def_sub_service_info_t* instantiate_def_sub_service_info(int include_optional);



def_sub_service_info_t* instantiate_def_sub_service_info(int include_optional) {
  def_sub_service_info_t* def_sub_service_info = NULL;
  if (include_optional) {
    def_sub_service_info = def_sub_service_info_create(
      list_createList(),
      "a"
    );
  } else {
    def_sub_service_info = def_sub_service_info_create(
      list_createList(),
      "a"
    );
  }

  return def_sub_service_info;
}


#ifdef def_sub_service_info_MAIN

void test_def_sub_service_info(int include_optional) {
    def_sub_service_info_t* def_sub_service_info_1 = instantiate_def_sub_service_info(include_optional);

	cJSON* jsondef_sub_service_info_1 = def_sub_service_info_convertToJSON(def_sub_service_info_1);
	printf("def_sub_service_info :\n%s\n", cJSON_Print(jsondef_sub_service_info_1));
	def_sub_service_info_t* def_sub_service_info_2 = def_sub_service_info_parseFromJSON(jsondef_sub_service_info_1);
	cJSON* jsondef_sub_service_info_2 = def_sub_service_info_convertToJSON(def_sub_service_info_2);
	printf("repeating def_sub_service_info:\n%s\n", cJSON_Print(jsondef_sub_service_info_2));
}

int main() {
  test_def_sub_service_info(1);
  test_def_sub_service_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // def_sub_service_info_MAIN
#endif // def_sub_service_info_TEST
