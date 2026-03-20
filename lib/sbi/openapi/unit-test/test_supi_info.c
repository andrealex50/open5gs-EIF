#ifndef supi_info_TEST
#define supi_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supi_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supi_info.h"
supi_info_t* instantiate_supi_info(int include_optional);



supi_info_t* instantiate_supi_info(int include_optional) {
  supi_info_t* supi_info = NULL;
  if (include_optional) {
    supi_info = supi_info_create(
      list_createList()
    );
  } else {
    supi_info = supi_info_create(
      list_createList()
    );
  }

  return supi_info;
}


#ifdef supi_info_MAIN

void test_supi_info(int include_optional) {
    supi_info_t* supi_info_1 = instantiate_supi_info(include_optional);

	cJSON* jsonsupi_info_1 = supi_info_convertToJSON(supi_info_1);
	printf("supi_info :\n%s\n", cJSON_Print(jsonsupi_info_1));
	supi_info_t* supi_info_2 = supi_info_parseFromJSON(jsonsupi_info_1);
	cJSON* jsonsupi_info_2 = supi_info_convertToJSON(supi_info_2);
	printf("repeating supi_info:\n%s\n", cJSON_Print(jsonsupi_info_2));
}

int main() {
  test_supi_info(1);
  test_supi_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // supi_info_MAIN
#endif // supi_info_TEST
