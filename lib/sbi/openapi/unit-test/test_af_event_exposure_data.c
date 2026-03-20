#ifndef af_event_exposure_data_TEST
#define af_event_exposure_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define af_event_exposure_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/af_event_exposure_data.h"
af_event_exposure_data_t* instantiate_af_event_exposure_data(int include_optional);



af_event_exposure_data_t* instantiate_af_event_exposure_data(int include_optional) {
  af_event_exposure_data_t* af_event_exposure_data = NULL;
  if (include_optional) {
    af_event_exposure_data = af_event_exposure_data_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    af_event_exposure_data = af_event_exposure_data_create(
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return af_event_exposure_data;
}


#ifdef af_event_exposure_data_MAIN

void test_af_event_exposure_data(int include_optional) {
    af_event_exposure_data_t* af_event_exposure_data_1 = instantiate_af_event_exposure_data(include_optional);

	cJSON* jsonaf_event_exposure_data_1 = af_event_exposure_data_convertToJSON(af_event_exposure_data_1);
	printf("af_event_exposure_data :\n%s\n", cJSON_Print(jsonaf_event_exposure_data_1));
	af_event_exposure_data_t* af_event_exposure_data_2 = af_event_exposure_data_parseFromJSON(jsonaf_event_exposure_data_1);
	cJSON* jsonaf_event_exposure_data_2 = af_event_exposure_data_convertToJSON(af_event_exposure_data_2);
	printf("repeating af_event_exposure_data:\n%s\n", cJSON_Print(jsonaf_event_exposure_data_2));
}

int main() {
  test_af_event_exposure_data(1);
  test_af_event_exposure_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // af_event_exposure_data_MAIN
#endif // af_event_exposure_data_TEST
