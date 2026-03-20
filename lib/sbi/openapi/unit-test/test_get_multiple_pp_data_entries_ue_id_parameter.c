#ifndef get_multiple_pp_data_entries_ue_id_parameter_TEST
#define get_multiple_pp_data_entries_ue_id_parameter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define get_multiple_pp_data_entries_ue_id_parameter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/get_multiple_pp_data_entries_ue_id_parameter.h"
get_multiple_pp_data_entries_ue_id_parameter_t* instantiate_get_multiple_pp_data_entries_ue_id_parameter(int include_optional);



get_multiple_pp_data_entries_ue_id_parameter_t* instantiate_get_multiple_pp_data_entries_ue_id_parameter(int include_optional) {
  get_multiple_pp_data_entries_ue_id_parameter_t* get_multiple_pp_data_entries_ue_id_parameter = NULL;
  if (include_optional) {
    get_multiple_pp_data_entries_ue_id_parameter = get_multiple_pp_data_entries_ue_id_parameter_create(
    );
  } else {
    get_multiple_pp_data_entries_ue_id_parameter = get_multiple_pp_data_entries_ue_id_parameter_create(
    );
  }

  return get_multiple_pp_data_entries_ue_id_parameter;
}


#ifdef get_multiple_pp_data_entries_ue_id_parameter_MAIN

void test_get_multiple_pp_data_entries_ue_id_parameter(int include_optional) {
    get_multiple_pp_data_entries_ue_id_parameter_t* get_multiple_pp_data_entries_ue_id_parameter_1 = instantiate_get_multiple_pp_data_entries_ue_id_parameter(include_optional);

	cJSON* jsonget_multiple_pp_data_entries_ue_id_parameter_1 = get_multiple_pp_data_entries_ue_id_parameter_convertToJSON(get_multiple_pp_data_entries_ue_id_parameter_1);
	printf("get_multiple_pp_data_entries_ue_id_parameter :\n%s\n", cJSON_Print(jsonget_multiple_pp_data_entries_ue_id_parameter_1));
	get_multiple_pp_data_entries_ue_id_parameter_t* get_multiple_pp_data_entries_ue_id_parameter_2 = get_multiple_pp_data_entries_ue_id_parameter_parseFromJSON(jsonget_multiple_pp_data_entries_ue_id_parameter_1);
	cJSON* jsonget_multiple_pp_data_entries_ue_id_parameter_2 = get_multiple_pp_data_entries_ue_id_parameter_convertToJSON(get_multiple_pp_data_entries_ue_id_parameter_2);
	printf("repeating get_multiple_pp_data_entries_ue_id_parameter:\n%s\n", cJSON_Print(jsonget_multiple_pp_data_entries_ue_id_parameter_2));
}

int main() {
  test_get_multiple_pp_data_entries_ue_id_parameter(1);
  test_get_multiple_pp_data_entries_ue_id_parameter(0);

  printf("Hello world \n");
  return 0;
}

#endif // get_multiple_pp_data_entries_ue_id_parameter_MAIN
#endif // get_multiple_pp_data_entries_ue_id_parameter_TEST
