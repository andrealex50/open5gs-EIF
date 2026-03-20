#ifndef backup_amf_info_TEST
#define backup_amf_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define backup_amf_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/backup_amf_info.h"
backup_amf_info_t* instantiate_backup_amf_info(int include_optional);



backup_amf_info_t* instantiate_backup_amf_info(int include_optional) {
  backup_amf_info_t* backup_amf_info = NULL;
  if (include_optional) {
    backup_amf_info = backup_amf_info_create(
      "a",
      list_createList()
    );
  } else {
    backup_amf_info = backup_amf_info_create(
      "a",
      list_createList()
    );
  }

  return backup_amf_info;
}


#ifdef backup_amf_info_MAIN

void test_backup_amf_info(int include_optional) {
    backup_amf_info_t* backup_amf_info_1 = instantiate_backup_amf_info(include_optional);

	cJSON* jsonbackup_amf_info_1 = backup_amf_info_convertToJSON(backup_amf_info_1);
	printf("backup_amf_info :\n%s\n", cJSON_Print(jsonbackup_amf_info_1));
	backup_amf_info_t* backup_amf_info_2 = backup_amf_info_parseFromJSON(jsonbackup_amf_info_1);
	cJSON* jsonbackup_amf_info_2 = backup_amf_info_convertToJSON(backup_amf_info_2);
	printf("repeating backup_amf_info:\n%s\n", cJSON_Print(jsonbackup_amf_info_2));
}

int main() {
  test_backup_amf_info(1);
  test_backup_amf_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // backup_amf_info_MAIN
#endif // backup_amf_info_TEST
