#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/enhanced_coverage_restriction_data.h"


// Retrieves the subscribed enhanced Coverage Restriction Data of a UE
//
enhanced_coverage_restriction_data_t*
EnhancedCoverageRestrictionDataAPI_queryCoverageRestrictionData(apiClient_t *apiClient, char * ueId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


