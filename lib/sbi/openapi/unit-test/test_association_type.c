#ifndef association_type_TEST
#define association_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define association_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/association_type.h"
association_type_t* instantiate_association_type(int include_optional);



association_type_t* instantiate_association_type(int include_optional) {
  association_type_t* association_type = NULL;
  if (include_optional) {
    association_type = association_type_create(
    );
  } else {
    association_type = association_type_create(
    );
  }

  return association_type;
}


#ifdef association_type_MAIN

void test_association_type(int include_optional) {
    association_type_t* association_type_1 = instantiate_association_type(include_optional);

	cJSON* jsonassociation_type_1 = association_type_convertToJSON(association_type_1);
	printf("association_type :\n%s\n", cJSON_Print(jsonassociation_type_1));
	association_type_t* association_type_2 = association_type_parseFromJSON(jsonassociation_type_1);
	cJSON* jsonassociation_type_2 = association_type_convertToJSON(association_type_2);
	printf("repeating association_type:\n%s\n", cJSON_Print(jsonassociation_type_2));
}

int main() {
  test_association_type(1);
  test_association_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // association_type_MAIN
#endif // association_type_TEST
