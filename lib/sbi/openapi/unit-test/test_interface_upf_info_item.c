#ifndef interface_upf_info_item_TEST
#define interface_upf_info_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define interface_upf_info_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/interface_upf_info_item.h"
interface_upf_info_item_t* instantiate_interface_upf_info_item(int include_optional);



interface_upf_info_item_t* instantiate_interface_upf_info_item(int include_optional) {
  interface_upf_info_item_t* interface_upf_info_item = NULL;
  if (include_optional) {
    interface_upf_info_item = interface_upf_info_item_create(
      nrf_nfdiscovery_service_interface_upf_info_item__N3,
      list_createList(),
      list_createList(),
      "a",
      "0"
    );
  } else {
    interface_upf_info_item = interface_upf_info_item_create(
      nrf_nfdiscovery_service_interface_upf_info_item__N3,
      list_createList(),
      list_createList(),
      "a",
      "0"
    );
  }

  return interface_upf_info_item;
}


#ifdef interface_upf_info_item_MAIN

void test_interface_upf_info_item(int include_optional) {
    interface_upf_info_item_t* interface_upf_info_item_1 = instantiate_interface_upf_info_item(include_optional);

	cJSON* jsoninterface_upf_info_item_1 = interface_upf_info_item_convertToJSON(interface_upf_info_item_1);
	printf("interface_upf_info_item :\n%s\n", cJSON_Print(jsoninterface_upf_info_item_1));
	interface_upf_info_item_t* interface_upf_info_item_2 = interface_upf_info_item_parseFromJSON(jsoninterface_upf_info_item_1);
	cJSON* jsoninterface_upf_info_item_2 = interface_upf_info_item_convertToJSON(interface_upf_info_item_2);
	printf("repeating interface_upf_info_item:\n%s\n", cJSON_Print(jsoninterface_upf_info_item_2));
}

int main() {
  test_interface_upf_info_item(1);
  test_interface_upf_info_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // interface_upf_info_item_MAIN
#endif // interface_upf_info_item_TEST
