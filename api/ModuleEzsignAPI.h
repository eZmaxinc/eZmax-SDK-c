#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ezsign_suggest_signers_v1_response.h"
#include "../model/ezsign_suggest_templates_v1_response.h"


// Suggest signers
//
// Retrieve previously used Ezsignsigners and all users from the system
//
ezsign_suggest_signers_v1_response_t*
ModuleEzsignAPI_ezsignSuggestSignersV1(apiClient_t *apiClient);


// Suggest templates
//
// Retrieve Ezsigntemplates and Ezsigntemplatepackages that can be imported in a Ezsignfolder
//
ezsign_suggest_templates_v1_response_t*
ModuleEzsignAPI_ezsignSuggestTemplatesV1(apiClient_t *apiClient, int fkiEzsignfoldertypeID );


