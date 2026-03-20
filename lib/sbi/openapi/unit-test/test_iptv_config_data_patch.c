#ifndef iptv_config_data_patch_TEST
#define iptv_config_data_patch_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define iptv_config_data_patch_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/iptv_config_data_patch.h"
iptv_config_data_patch_t* instantiate_iptv_config_data_patch(int include_optional);



iptv_config_data_patch_t* instantiate_iptv_config_data_patch(int include_optional) {
  iptv_config_data_patch_t* iptv_config_data_patch = NULL;
  if (include_optional) {
    iptv_config_data_patch = iptv_config_data_patch_create(
      list_createList()
    );
  } else {
    iptv_config_data_patch = iptv_config_data_patch_create(
      list_createList()
    );
  }

  return iptv_config_data_patch;
}


#ifdef iptv_config_data_patch_MAIN

void test_iptv_config_data_patch(int include_optional) {
    iptv_config_data_patch_t* iptv_config_data_patch_1 = instantiate_iptv_config_data_patch(include_optional);

	cJSON* jsoniptv_config_data_patch_1 = iptv_config_data_patch_convertToJSON(iptv_config_data_patch_1);
	printf("iptv_config_data_patch :\n%s\n", cJSON_Print(jsoniptv_config_data_patch_1));
	iptv_config_data_patch_t* iptv_config_data_patch_2 = iptv_config_data_patch_parseFromJSON(jsoniptv_config_data_patch_1);
	cJSON* jsoniptv_config_data_patch_2 = iptv_config_data_patch_convertToJSON(iptv_config_data_patch_2);
	printf("repeating iptv_config_data_patch:\n%s\n", cJSON_Print(jsoniptv_config_data_patch_2));
}

int main() {
  test_iptv_config_data_patch(1);
  test_iptv_config_data_patch(0);

  printf("Hello world \n");
  return 0;
}

#endif // iptv_config_data_patch_MAIN
#endif // iptv_config_data_patch_TEST
