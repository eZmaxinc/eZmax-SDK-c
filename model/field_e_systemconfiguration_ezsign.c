#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_systemconfiguration_ezsign.h"


char* field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_ToString(ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign) {
    char *field_e_systemconfiguration_ezsignArray[] =  { "NULL", "No", "Yes" };
    return field_e_systemconfiguration_ezsignArray[field_e_systemconfiguration_ezsign];
}

ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_FromString(char* field_e_systemconfiguration_ezsign) {
    int stringToReturn = 0;
    char *field_e_systemconfiguration_ezsignArray[] =  { "NULL", "No", "Yes" };
    size_t sizeofArray = sizeof(field_e_systemconfiguration_ezsignArray) / sizeof(field_e_systemconfiguration_ezsignArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_systemconfiguration_ezsign, field_e_systemconfiguration_ezsignArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_systemconfiguration_ezsign", field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_ToString(field_e_systemconfiguration_ezsign)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_parseFromJSON(cJSON *field_e_systemconfiguration_ezsignJSON) {
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e *field_e_systemconfiguration_ezsign = NULL;
    ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsignVariable;
    cJSON *field_e_systemconfiguration_ezsignVar = cJSON_GetObjectItemCaseSensitive(field_e_systemconfiguration_ezsignJSON, "field_e_systemconfiguration_ezsign");
    if(!cJSON_IsString(field_e_systemconfiguration_ezsignVar) || (field_e_systemconfiguration_ezsignVar->valuestring == NULL)){
        goto end;
    }
    field_e_systemconfiguration_ezsignVariable = field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_FromString(field_e_systemconfiguration_ezsignVar->valuestring);
    return field_e_systemconfiguration_ezsignVariable;
end:
    return 0;
}
