#ifndef presence_info_rm_TEST
#define presence_info_rm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define presence_info_rm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/presence_info_rm.h"
presence_info_rm_t* instantiate_presence_info_rm(int include_optional);



presence_info_rm_t* instantiate_presence_info_rm(int include_optional) {
  presence_info_rm_t* presence_info_rm = NULL;
  if (include_optional) {
    presence_info_rm = presence_info_rm_create(
      "0",
      "0",
      npcf_ampolicycontrol_presence_info_rm__IN_AREA,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    presence_info_rm = presence_info_rm_create(
      "0",
      "0",
      npcf_ampolicycontrol_presence_info_rm__IN_AREA,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return presence_info_rm;
}


#ifdef presence_info_rm_MAIN

void test_presence_info_rm(int include_optional) {
    presence_info_rm_t* presence_info_rm_1 = instantiate_presence_info_rm(include_optional);

	cJSON* jsonpresence_info_rm_1 = presence_info_rm_convertToJSON(presence_info_rm_1);
	printf("presence_info_rm :\n%s\n", cJSON_Print(jsonpresence_info_rm_1));
	presence_info_rm_t* presence_info_rm_2 = presence_info_rm_parseFromJSON(jsonpresence_info_rm_1);
	cJSON* jsonpresence_info_rm_2 = presence_info_rm_convertToJSON(presence_info_rm_2);
	printf("repeating presence_info_rm:\n%s\n", cJSON_Print(jsonpresence_info_rm_2));
}

int main() {
  test_presence_info_rm(1);
  test_presence_info_rm(0);

  printf("Hello world \n");
  return 0;
}

#endif // presence_info_rm_MAIN
#endif // presence_info_rm_TEST
