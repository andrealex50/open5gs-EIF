#ifndef loss_connectivity_cfg_TEST
#define loss_connectivity_cfg_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define loss_connectivity_cfg_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/loss_connectivity_cfg.h"
loss_connectivity_cfg_t* instantiate_loss_connectivity_cfg(int include_optional);



loss_connectivity_cfg_t* instantiate_loss_connectivity_cfg(int include_optional) {
  loss_connectivity_cfg_t* loss_connectivity_cfg = NULL;
  if (include_optional) {
    loss_connectivity_cfg = loss_connectivity_cfg_create(
      56
    );
  } else {
    loss_connectivity_cfg = loss_connectivity_cfg_create(
      56
    );
  }

  return loss_connectivity_cfg;
}


#ifdef loss_connectivity_cfg_MAIN

void test_loss_connectivity_cfg(int include_optional) {
    loss_connectivity_cfg_t* loss_connectivity_cfg_1 = instantiate_loss_connectivity_cfg(include_optional);

	cJSON* jsonloss_connectivity_cfg_1 = loss_connectivity_cfg_convertToJSON(loss_connectivity_cfg_1);
	printf("loss_connectivity_cfg :\n%s\n", cJSON_Print(jsonloss_connectivity_cfg_1));
	loss_connectivity_cfg_t* loss_connectivity_cfg_2 = loss_connectivity_cfg_parseFromJSON(jsonloss_connectivity_cfg_1);
	cJSON* jsonloss_connectivity_cfg_2 = loss_connectivity_cfg_convertToJSON(loss_connectivity_cfg_2);
	printf("repeating loss_connectivity_cfg:\n%s\n", cJSON_Print(jsonloss_connectivity_cfg_2));
}

int main() {
  test_loss_connectivity_cfg(1);
  test_loss_connectivity_cfg(0);

  printf("Hello world \n");
  return 0;
}

#endif // loss_connectivity_cfg_MAIN
#endif // loss_connectivity_cfg_TEST
