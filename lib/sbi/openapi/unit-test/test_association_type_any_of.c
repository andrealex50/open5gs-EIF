#ifndef association_type_any_of_TEST
#define association_type_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define association_type_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/association_type_any_of.h"
association_type_any_of_t* instantiate_association_type_any_of(int include_optional);



association_type_any_of_t* instantiate_association_type_any_of(int include_optional) {
  association_type_any_of_t* association_type_any_of = NULL;
  if (include_optional) {
    association_type_any_of = association_type_any_of_create(
    );
  } else {
    association_type_any_of = association_type_any_of_create(
    );
  }

  return association_type_any_of;
}


#ifdef association_type_any_of_MAIN

void test_association_type_any_of(int include_optional) {
    association_type_any_of_t* association_type_any_of_1 = instantiate_association_type_any_of(include_optional);

	cJSON* jsonassociation_type_any_of_1 = association_type_any_of_convertToJSON(association_type_any_of_1);
	printf("association_type_any_of :\n%s\n", cJSON_Print(jsonassociation_type_any_of_1));
	association_type_any_of_t* association_type_any_of_2 = association_type_any_of_parseFromJSON(jsonassociation_type_any_of_1);
	cJSON* jsonassociation_type_any_of_2 = association_type_any_of_convertToJSON(association_type_any_of_2);
	printf("repeating association_type_any_of:\n%s\n", cJSON_Print(jsonassociation_type_any_of_2));
}

int main() {
  test_association_type_any_of(1);
  test_association_type_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // association_type_any_of_MAIN
#endif // association_type_any_of_TEST
