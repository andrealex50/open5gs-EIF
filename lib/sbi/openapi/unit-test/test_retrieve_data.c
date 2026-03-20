#ifndef retrieve_data_TEST
#define retrieve_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define retrieve_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/retrieve_data.h"
retrieve_data_t* instantiate_retrieve_data(int include_optional);



retrieve_data_t* instantiate_retrieve_data(int include_optional) {
  retrieve_data_t* retrieve_data = NULL;
  if (include_optional) {
    retrieve_data = retrieve_data_create(
      1,
      nsmf_pdusession_retrieve_data__AF_COORDINATION_INFO
    );
  } else {
    retrieve_data = retrieve_data_create(
      1,
      nsmf_pdusession_retrieve_data__AF_COORDINATION_INFO
    );
  }

  return retrieve_data;
}


#ifdef retrieve_data_MAIN

void test_retrieve_data(int include_optional) {
    retrieve_data_t* retrieve_data_1 = instantiate_retrieve_data(include_optional);

	cJSON* jsonretrieve_data_1 = retrieve_data_convertToJSON(retrieve_data_1);
	printf("retrieve_data :\n%s\n", cJSON_Print(jsonretrieve_data_1));
	retrieve_data_t* retrieve_data_2 = retrieve_data_parseFromJSON(jsonretrieve_data_1);
	cJSON* jsonretrieve_data_2 = retrieve_data_convertToJSON(retrieve_data_2);
	printf("repeating retrieve_data:\n%s\n", cJSON_Print(jsonretrieve_data_2));
}

int main() {
  test_retrieve_data(1);
  test_retrieve_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // retrieve_data_MAIN
#endif // retrieve_data_TEST
