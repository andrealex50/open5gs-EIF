#ifndef tunnel_info_TEST
#define tunnel_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tunnel_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tunnel_info.h"
tunnel_info_t* instantiate_tunnel_info(int include_optional);



tunnel_info_t* instantiate_tunnel_info(int include_optional) {
  tunnel_info_t* tunnel_info = NULL;
  if (include_optional) {
    tunnel_info = tunnel_info_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      nsmf_pdusession_tunnel_info__3GPP_ACCESS
    );
  } else {
    tunnel_info = tunnel_info_create(
      "198.51.100.1",
      "2001:db8:85a3::8a2e:370:7334",
      "a",
      nsmf_pdusession_tunnel_info__3GPP_ACCESS
    );
  }

  return tunnel_info;
}


#ifdef tunnel_info_MAIN

void test_tunnel_info(int include_optional) {
    tunnel_info_t* tunnel_info_1 = instantiate_tunnel_info(include_optional);

	cJSON* jsontunnel_info_1 = tunnel_info_convertToJSON(tunnel_info_1);
	printf("tunnel_info :\n%s\n", cJSON_Print(jsontunnel_info_1));
	tunnel_info_t* tunnel_info_2 = tunnel_info_parseFromJSON(jsontunnel_info_1);
	cJSON* jsontunnel_info_2 = tunnel_info_convertToJSON(tunnel_info_2);
	printf("repeating tunnel_info:\n%s\n", cJSON_Print(jsontunnel_info_2));
}

int main() {
  test_tunnel_info(1);
  test_tunnel_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // tunnel_info_MAIN
#endif // tunnel_info_TEST
