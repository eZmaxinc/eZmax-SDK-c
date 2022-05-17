#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignbulksendtransmission_get_forms_data_v1_response.h"
#include "../model/ezsignbulksendtransmission_get_object_v1_response.h"


// Retrieve an existing Ezsignbulksendtransmission's Csv containing errors
//
// 
//
char*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID );


// Retrieve an existing Ezsignbulksendtransmission's forms data
//
// 
//
ezsignbulksendtransmission_get_forms_data_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID );


// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendtransmissionID );


