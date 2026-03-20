#ifndef packet_filter_info_TEST
#define packet_filter_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define packet_filter_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/packet_filter_info.h"
packet_filter_info_t* instantiate_packet_filter_info(int include_optional);



packet_filter_info_t* instantiate_packet_filter_info(int include_optional) {
  packet_filter_info_t* packet_filter_info = NULL;
  if (include_optional) {
    packet_filter_info = packet_filter_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      npcf_smpolicycontrol_api_packet_filter_info__DOWNLINK
    );
  } else {
    packet_filter_info = packet_filter_info_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      npcf_smpolicycontrol_api_packet_filter_info__DOWNLINK
    );
  }

  return packet_filter_info;
}


#ifdef packet_filter_info_MAIN

void test_packet_filter_info(int include_optional) {
    packet_filter_info_t* packet_filter_info_1 = instantiate_packet_filter_info(include_optional);

	cJSON* jsonpacket_filter_info_1 = packet_filter_info_convertToJSON(packet_filter_info_1);
	printf("packet_filter_info :\n%s\n", cJSON_Print(jsonpacket_filter_info_1));
	packet_filter_info_t* packet_filter_info_2 = packet_filter_info_parseFromJSON(jsonpacket_filter_info_1);
	cJSON* jsonpacket_filter_info_2 = packet_filter_info_convertToJSON(packet_filter_info_2);
	printf("repeating packet_filter_info:\n%s\n", cJSON_Print(jsonpacket_filter_info_2));
}

int main() {
  test_packet_filter_info(1);
  test_packet_filter_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // packet_filter_info_MAIN
#endif // packet_filter_info_TEST
