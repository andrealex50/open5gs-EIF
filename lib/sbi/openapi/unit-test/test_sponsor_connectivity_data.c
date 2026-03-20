#ifndef sponsor_connectivity_data_TEST
#define sponsor_connectivity_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sponsor_connectivity_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sponsor_connectivity_data.h"
sponsor_connectivity_data_t* instantiate_sponsor_connectivity_data(int include_optional);



sponsor_connectivity_data_t* instantiate_sponsor_connectivity_data(int include_optional) {
  sponsor_connectivity_data_t* sponsor_connectivity_data = NULL;
  if (include_optional) {
    sponsor_connectivity_data = sponsor_connectivity_data_create(
      list_createList()
    );
  } else {
    sponsor_connectivity_data = sponsor_connectivity_data_create(
      list_createList()
    );
  }

  return sponsor_connectivity_data;
}


#ifdef sponsor_connectivity_data_MAIN

void test_sponsor_connectivity_data(int include_optional) {
    sponsor_connectivity_data_t* sponsor_connectivity_data_1 = instantiate_sponsor_connectivity_data(include_optional);

	cJSON* jsonsponsor_connectivity_data_1 = sponsor_connectivity_data_convertToJSON(sponsor_connectivity_data_1);
	printf("sponsor_connectivity_data :\n%s\n", cJSON_Print(jsonsponsor_connectivity_data_1));
	sponsor_connectivity_data_t* sponsor_connectivity_data_2 = sponsor_connectivity_data_parseFromJSON(jsonsponsor_connectivity_data_1);
	cJSON* jsonsponsor_connectivity_data_2 = sponsor_connectivity_data_convertToJSON(sponsor_connectivity_data_2);
	printf("repeating sponsor_connectivity_data:\n%s\n", cJSON_Print(jsonsponsor_connectivity_data_2));
}

int main() {
  test_sponsor_connectivity_data(1);
  test_sponsor_connectivity_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // sponsor_connectivity_data_MAIN
#endif // sponsor_connectivity_data_TEST
