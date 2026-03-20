#ifndef odb_packet_services_TEST
#define odb_packet_services_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define odb_packet_services_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/odb_packet_services.h"
odb_packet_services_t* instantiate_odb_packet_services(int include_optional);



odb_packet_services_t* instantiate_odb_packet_services(int include_optional) {
  odb_packet_services_t* odb_packet_services = NULL;
  if (include_optional) {
    odb_packet_services = odb_packet_services_create(
    );
  } else {
    odb_packet_services = odb_packet_services_create(
    );
  }

  return odb_packet_services;
}


#ifdef odb_packet_services_MAIN

void test_odb_packet_services(int include_optional) {
    odb_packet_services_t* odb_packet_services_1 = instantiate_odb_packet_services(include_optional);

	cJSON* jsonodb_packet_services_1 = odb_packet_services_convertToJSON(odb_packet_services_1);
	printf("odb_packet_services :\n%s\n", cJSON_Print(jsonodb_packet_services_1));
	odb_packet_services_t* odb_packet_services_2 = odb_packet_services_parseFromJSON(jsonodb_packet_services_1);
	cJSON* jsonodb_packet_services_2 = odb_packet_services_convertToJSON(odb_packet_services_2);
	printf("repeating odb_packet_services:\n%s\n", cJSON_Print(jsonodb_packet_services_2));
}

int main() {
  test_odb_packet_services(1);
  test_odb_packet_services(0);

  printf("Hello world \n");
  return 0;
}

#endif // odb_packet_services_MAIN
#endif // odb_packet_services_TEST
