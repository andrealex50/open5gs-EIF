#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/enhanced_coverage_restriction_data.h"
#include "../model/problem_details.h"


// retrieve a UE's subscribed Enhanced Coverage Restriction Data
//
enhanced_coverage_restriction_data_t*
EnhancedCoverageRestrictionDataRetrievalAPI_getEcrData(apiClient_t *apiClient, char * supi , char * supported_features , char * If_None_Match , char * If_Modified_Since );


