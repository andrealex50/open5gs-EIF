#ifndef dl_data_delivery_status_TEST
#define dl_data_delivery_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dl_data_delivery_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dl_data_delivery_status.h"
dl_data_delivery_status_t* instantiate_dl_data_delivery_status(int include_optional);



dl_data_delivery_status_t* instantiate_dl_data_delivery_status(int include_optional) {
  dl_data_delivery_status_t* dl_data_delivery_status = NULL;
  if (include_optional) {
    dl_data_delivery_status = dl_data_delivery_status_create(
    );
  } else {
    dl_data_delivery_status = dl_data_delivery_status_create(
    );
  }

  return dl_data_delivery_status;
}


#ifdef dl_data_delivery_status_MAIN

void test_dl_data_delivery_status(int include_optional) {
    dl_data_delivery_status_t* dl_data_delivery_status_1 = instantiate_dl_data_delivery_status(include_optional);

	cJSON* jsondl_data_delivery_status_1 = dl_data_delivery_status_convertToJSON(dl_data_delivery_status_1);
	printf("dl_data_delivery_status :\n%s\n", cJSON_Print(jsondl_data_delivery_status_1));
	dl_data_delivery_status_t* dl_data_delivery_status_2 = dl_data_delivery_status_parseFromJSON(jsondl_data_delivery_status_1);
	cJSON* jsondl_data_delivery_status_2 = dl_data_delivery_status_convertToJSON(dl_data_delivery_status_2);
	printf("repeating dl_data_delivery_status:\n%s\n", cJSON_Print(jsondl_data_delivery_status_2));
}

int main() {
  test_dl_data_delivery_status(1);
  test_dl_data_delivery_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // dl_data_delivery_status_MAIN
#endif // dl_data_delivery_status_TEST
