#ifndef roaming_odb_TEST
#define roaming_odb_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define roaming_odb_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/roaming_odb.h"
roaming_odb_t* instantiate_roaming_odb(int include_optional);



roaming_odb_t* instantiate_roaming_odb(int include_optional) {
  roaming_odb_t* roaming_odb = NULL;
  if (include_optional) {
    roaming_odb = roaming_odb_create(
    );
  } else {
    roaming_odb = roaming_odb_create(
    );
  }

  return roaming_odb;
}


#ifdef roaming_odb_MAIN

void test_roaming_odb(int include_optional) {
    roaming_odb_t* roaming_odb_1 = instantiate_roaming_odb(include_optional);

	cJSON* jsonroaming_odb_1 = roaming_odb_convertToJSON(roaming_odb_1);
	printf("roaming_odb :\n%s\n", cJSON_Print(jsonroaming_odb_1));
	roaming_odb_t* roaming_odb_2 = roaming_odb_parseFromJSON(jsonroaming_odb_1);
	cJSON* jsonroaming_odb_2 = roaming_odb_convertToJSON(roaming_odb_2);
	printf("repeating roaming_odb:\n%s\n", cJSON_Print(jsonroaming_odb_2));
}

int main() {
  test_roaming_odb(1);
  test_roaming_odb(0);

  printf("Hello world \n");
  return 0;
}

#endif // roaming_odb_MAIN
#endif // roaming_odb_TEST
