#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/object.h"


// Consult an Ezsignpage
//
common_response_t*
ObjectEzsignpageAPI_ezsignpageConsultV1(apiClient_t *apiClient, int *pkiEzsignpageID, object_t *body);


