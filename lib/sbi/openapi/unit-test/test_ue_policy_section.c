#ifndef ue_policy_section_TEST
#define ue_policy_section_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ue_policy_section_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ue_policy_section.h"
ue_policy_section_t* instantiate_ue_policy_section(int include_optional);



ue_policy_section_t* instantiate_ue_policy_section(int include_optional) {
  ue_policy_section_t* ue_policy_section = NULL;
  if (include_optional) {
    ue_policy_section = ue_policy_section_create(
      "YQ==",
      "0"
    );
  } else {
    ue_policy_section = ue_policy_section_create(
      "YQ==",
      "0"
    );
  }

  return ue_policy_section;
}


#ifdef ue_policy_section_MAIN

void test_ue_policy_section(int include_optional) {
    ue_policy_section_t* ue_policy_section_1 = instantiate_ue_policy_section(include_optional);

	cJSON* jsonue_policy_section_1 = ue_policy_section_convertToJSON(ue_policy_section_1);
	printf("ue_policy_section :\n%s\n", cJSON_Print(jsonue_policy_section_1));
	ue_policy_section_t* ue_policy_section_2 = ue_policy_section_parseFromJSON(jsonue_policy_section_1);
	cJSON* jsonue_policy_section_2 = ue_policy_section_convertToJSON(ue_policy_section_2);
	printf("repeating ue_policy_section:\n%s\n", cJSON_Print(jsonue_policy_section_2));
}

int main() {
  test_ue_policy_section(1);
  test_ue_policy_section(0);

  printf("Hello world \n");
  return 0;
}

#endif // ue_policy_section_MAIN
#endif // ue_policy_section_TEST
