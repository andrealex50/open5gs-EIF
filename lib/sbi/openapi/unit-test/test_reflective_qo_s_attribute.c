#ifndef reflective_qo_s_attribute_TEST
#define reflective_qo_s_attribute_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reflective_qo_s_attribute_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reflective_qo_s_attribute.h"
reflective_qo_s_attribute_t* instantiate_reflective_qo_s_attribute(int include_optional);



reflective_qo_s_attribute_t* instantiate_reflective_qo_s_attribute(int include_optional) {
  reflective_qo_s_attribute_t* reflective_qo_s_attribute = NULL;
  if (include_optional) {
    reflective_qo_s_attribute = reflective_qo_s_attribute_create(
    );
  } else {
    reflective_qo_s_attribute = reflective_qo_s_attribute_create(
    );
  }

  return reflective_qo_s_attribute;
}


#ifdef reflective_qo_s_attribute_MAIN

void test_reflective_qo_s_attribute(int include_optional) {
    reflective_qo_s_attribute_t* reflective_qo_s_attribute_1 = instantiate_reflective_qo_s_attribute(include_optional);

	cJSON* jsonreflective_qo_s_attribute_1 = reflective_qo_s_attribute_convertToJSON(reflective_qo_s_attribute_1);
	printf("reflective_qo_s_attribute :\n%s\n", cJSON_Print(jsonreflective_qo_s_attribute_1));
	reflective_qo_s_attribute_t* reflective_qo_s_attribute_2 = reflective_qo_s_attribute_parseFromJSON(jsonreflective_qo_s_attribute_1);
	cJSON* jsonreflective_qo_s_attribute_2 = reflective_qo_s_attribute_convertToJSON(reflective_qo_s_attribute_2);
	printf("repeating reflective_qo_s_attribute:\n%s\n", cJSON_Print(jsonreflective_qo_s_attribute_2));
}

int main() {
  test_reflective_qo_s_attribute(1);
  test_reflective_qo_s_attribute(0);

  printf("Hello world \n");
  return 0;
}

#endif // reflective_qo_s_attribute_MAIN
#endif // reflective_qo_s_attribute_TEST
