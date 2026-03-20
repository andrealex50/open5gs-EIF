#ifndef context_data_sets_TEST
#define context_data_sets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define context_data_sets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/context_data_sets.h"
context_data_sets_t* instantiate_context_data_sets(int include_optional);

#include "test_amf3_gpp_access_registration.c"
#include "test_amf_non3_gpp_access_registration.c"
#include "test_smsf_registration.c"
#include "test_smsf_registration.c"
#include "test_ip_sm_gw_registration.c"
#include "test_roaming_info_update.c"
#include "test_pei_update_info.c"


context_data_sets_t* instantiate_context_data_sets(int include_optional) {
  context_data_sets_t* context_data_sets = NULL;
  if (include_optional) {
    context_data_sets = context_data_sets_create(
       // false, not to have infinite recursion
      instantiate_amf3_gpp_access_registration(0),
       // false, not to have infinite recursion
      instantiate_amf_non3_gpp_access_registration(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
       // false, not to have infinite recursion
      instantiate_smsf_registration(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_ip_sm_gw_registration(0),
       // false, not to have infinite recursion
      instantiate_roaming_info_update(0),
       // false, not to have infinite recursion
      instantiate_pei_update_info(0)
    );
  } else {
    context_data_sets = context_data_sets_create(
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      NULL,
      NULL,
      NULL
    );
  }

  return context_data_sets;
}


#ifdef context_data_sets_MAIN

void test_context_data_sets(int include_optional) {
    context_data_sets_t* context_data_sets_1 = instantiate_context_data_sets(include_optional);

	cJSON* jsoncontext_data_sets_1 = context_data_sets_convertToJSON(context_data_sets_1);
	printf("context_data_sets :\n%s\n", cJSON_Print(jsoncontext_data_sets_1));
	context_data_sets_t* context_data_sets_2 = context_data_sets_parseFromJSON(jsoncontext_data_sets_1);
	cJSON* jsoncontext_data_sets_2 = context_data_sets_convertToJSON(context_data_sets_2);
	printf("repeating context_data_sets:\n%s\n", cJSON_Print(jsoncontext_data_sets_2));
}

int main() {
  test_context_data_sets(1);
  test_context_data_sets(0);

  printf("Hello world \n");
  return 0;
}

#endif // context_data_sets_MAIN
#endif // context_data_sets_TEST
