#ifndef flows_TEST
#define flows_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define flows_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/flows.h"
flows_t* instantiate_flows(int include_optional);



flows_t* instantiate_flows(int include_optional) {
  flows_t* flows = NULL;
  if (include_optional) {
    flows = flows_create(
      list_createList(),
      list_createList(),
      56
    );
  } else {
    flows = flows_create(
      list_createList(),
      list_createList(),
      56
    );
  }

  return flows;
}


#ifdef flows_MAIN

void test_flows(int include_optional) {
    flows_t* flows_1 = instantiate_flows(include_optional);

	cJSON* jsonflows_1 = flows_convertToJSON(flows_1);
	printf("flows :\n%s\n", cJSON_Print(jsonflows_1));
	flows_t* flows_2 = flows_parseFromJSON(jsonflows_1);
	cJSON* jsonflows_2 = flows_convertToJSON(flows_2);
	printf("repeating flows:\n%s\n", cJSON_Print(jsonflows_2));
}

int main() {
  test_flows(1);
  test_flows(0);

  printf("Hello world \n");
  return 0;
}

#endif // flows_MAIN
#endif // flows_TEST
