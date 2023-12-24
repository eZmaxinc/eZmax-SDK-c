#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response.h"
#include "../model/ezsignbulksendtransmission_get_forms_data_v1_response.h"
#include "../model/ezsignbulksendtransmission_get_object_v2_response.h"


// Retrieve an existing Ezsignbulksendtransmission's Csv containing errors
//
// 
//
char*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);


// Retrieve an existing Ezsignbulksendtransmission's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);


// Retrieve an existing Ezsignbulksendtransmission's forms data
//
// 
//
ezsignbulksendtransmission_get_forms_data_v1_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);


// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v2_response_t*
ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);


