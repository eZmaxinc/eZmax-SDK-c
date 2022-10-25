#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezmaxinvoicingagent_variationezsign.h"


char* field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_ToString(ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e field_e_ezmaxinvoicingagent_variationezsign) {
    char *field_e_ezmaxinvoicingagent_variationezsignArray[] =  { "NULL", "Charge", "Refund", "Same" };
    return field_e_ezmaxinvoicingagent_variationezsignArray[field_e_ezmaxinvoicingagent_variationezsign];
}

ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_FromString(char* field_e_ezmaxinvoicingagent_variationezsign) {
    int stringToReturn = 0;
    char *field_e_ezmaxinvoicingagent_variationezsignArray[] =  { "NULL", "Charge", "Refund", "Same" };
    size_t sizeofArray = sizeof(field_e_ezmaxinvoicingagent_variationezsignArray) / sizeof(field_e_ezmaxinvoicingagent_variationezsignArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezmaxinvoicingagent_variationezsign, field_e_ezmaxinvoicingagent_variationezsignArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_convertToJSON(ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e field_e_ezmaxinvoicingagent_variationezsign) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezmaxinvoicingagent_variationezsign", field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_ToString(field_e_ezmaxinvoicingagent_variationezsign)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_parseFromJSON(cJSON *field_e_ezmaxinvoicingagent_variationezsignJSON) {
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e *field_e_ezmaxinvoicingagent_variationezsign = NULL;
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e field_e_ezmaxinvoicingagent_variationezsignVariable;
    cJSON *field_e_ezmaxinvoicingagent_variationezsignVar = cJSON_GetObjectItemCaseSensitive(field_e_ezmaxinvoicingagent_variationezsignJSON, "field_e_ezmaxinvoicingagent_variationezsign");
    if(!cJSON_IsString(field_e_ezmaxinvoicingagent_variationezsignVar) || (field_e_ezmaxinvoicingagent_variationezsignVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezmaxinvoicingagent_variationezsignVariable = field_e_ezmaxinvoicingagent_variationezsign_field_e_ezmaxinvoicingagent_variationezsign_FromString(field_e_ezmaxinvoicingagent_variationezsignVar->valuestring);
    return field_e_ezmaxinvoicingagent_variationezsignVariable;
end:
    return 0;
}
