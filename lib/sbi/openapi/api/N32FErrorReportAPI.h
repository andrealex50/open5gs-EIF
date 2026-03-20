#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/n32f_error_info.h"
#include "../model/problem_details.h"


// N32-f Error Reporting Procedure
//
void
N32FErrorReportAPI_postN32fError(apiClient_t *apiClient, n32f_error_info_t * n32f_error_info );


