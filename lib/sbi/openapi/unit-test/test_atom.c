#ifndef atom_TEST
#define atom_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define atom_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/atom.h"
atom_t* instantiate_atom(int include_optional);



atom_t* instantiate_atom(int include_optional) {
  atom_t* atom = NULL;
  if (include_optional) {
    atom = atom_create(
      "0",
      null,
      1
    );
  } else {
    atom = atom_create(
      "0",
      null,
      1
    );
  }

  return atom;
}


#ifdef atom_MAIN

void test_atom(int include_optional) {
    atom_t* atom_1 = instantiate_atom(include_optional);

	cJSON* jsonatom_1 = atom_convertToJSON(atom_1);
	printf("atom :\n%s\n", cJSON_Print(jsonatom_1));
	atom_t* atom_2 = atom_parseFromJSON(jsonatom_1);
	cJSON* jsonatom_2 = atom_convertToJSON(atom_2);
	printf("repeating atom:\n%s\n", cJSON_Print(jsonatom_2));
}

int main() {
  test_atom(1);
  test_atom(0);

  printf("Hello world \n");
  return 0;
}

#endif // atom_MAIN
#endif // atom_TEST
