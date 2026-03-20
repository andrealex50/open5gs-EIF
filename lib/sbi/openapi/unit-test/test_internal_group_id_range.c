#ifndef internal_group_id_range_TEST
#define internal_group_id_range_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define internal_group_id_range_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/internal_group_id_range.h"
internal_group_id_range_t* instantiate_internal_group_id_range(int include_optional);



internal_group_id_range_t* instantiate_internal_group_id_range(int include_optional) {
  internal_group_id_range_t* internal_group_id_range = NULL;
  if (include_optional) {
    internal_group_id_range = internal_group_id_range_create(
      "a",
      "a",
      "0"
    );
  } else {
    internal_group_id_range = internal_group_id_range_create(
      "a",
      "a",
      "0"
    );
  }

  return internal_group_id_range;
}


#ifdef internal_group_id_range_MAIN

void test_internal_group_id_range(int include_optional) {
    internal_group_id_range_t* internal_group_id_range_1 = instantiate_internal_group_id_range(include_optional);

	cJSON* jsoninternal_group_id_range_1 = internal_group_id_range_convertToJSON(internal_group_id_range_1);
	printf("internal_group_id_range :\n%s\n", cJSON_Print(jsoninternal_group_id_range_1));
	internal_group_id_range_t* internal_group_id_range_2 = internal_group_id_range_parseFromJSON(jsoninternal_group_id_range_1);
	cJSON* jsoninternal_group_id_range_2 = internal_group_id_range_convertToJSON(internal_group_id_range_2);
	printf("repeating internal_group_id_range:\n%s\n", cJSON_Print(jsoninternal_group_id_range_2));
}

int main() {
  test_internal_group_id_range(1);
  test_internal_group_id_range(0);

  printf("Hello world \n");
  return 0;
}

#endif // internal_group_id_range_MAIN
#endif // internal_group_id_range_TEST
