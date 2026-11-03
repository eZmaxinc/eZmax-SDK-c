#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "computed_e_documenttype_step.h"


char* computed_e_documenttype_step_computed_e_documenttype_step_ToString(ezmax_api_definition__full_computed_e_documenttype_step__e computed_e_documenttype_step) {
    char *computed_e_documenttype_stepArray[] =  { "NULL", "Agentbroker", "Buyercontract", "Inscription", "NotAuthenticated", "Otherincome", "RejectedOfferToPurchase" };
    return computed_e_documenttype_stepArray[computed_e_documenttype_step];
}

ezmax_api_definition__full_computed_e_documenttype_step__e computed_e_documenttype_step_computed_e_documenttype_step_FromString(char* computed_e_documenttype_step) {
    int stringToReturn = 0;
    char *computed_e_documenttype_stepArray[] =  { "NULL", "Agentbroker", "Buyercontract", "Inscription", "NotAuthenticated", "Otherincome", "RejectedOfferToPurchase" };
    size_t sizeofArray = sizeof(computed_e_documenttype_stepArray) / sizeof(computed_e_documenttype_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(computed_e_documenttype_step, computed_e_documenttype_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *computed_e_documenttype_step_convertToJSON(ezmax_api_definition__full_computed_e_documenttype_step__e computed_e_documenttype_step) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "computed_e_documenttype_step", computed_e_documenttype_step_computed_e_documenttype_step_ToString(computed_e_documenttype_step)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_computed_e_documenttype_step__e computed_e_documenttype_step_parseFromJSON(cJSON *computed_e_documenttype_stepJSON) {
    if(!cJSON_IsString(computed_e_documenttype_stepJSON) || (computed_e_documenttype_stepJSON->valuestring == NULL)) {
        return 0;
    }
    return computed_e_documenttype_step_computed_e_documenttype_step_FromString(computed_e_documenttype_stepJSON->valuestring);
}
