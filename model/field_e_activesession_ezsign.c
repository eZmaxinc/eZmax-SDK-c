#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_ezsign.h"


char* field_e_activesession_ezsign_field_e_activesession_ezsign_ToString(ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign) {
    char *field_e_activesession_ezsignArray[] =  { "NULL", "No", "Read", "Modify", "Full" };
    return field_e_activesession_ezsignArray[field_e_activesession_ezsign];
}

ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign_field_e_activesession_ezsign_FromString(char* field_e_activesession_ezsign) {
    int stringToReturn = 0;
    char *field_e_activesession_ezsignArray[] =  { "NULL", "No", "Read", "Modify", "Full" };
    size_t sizeofArray = sizeof(field_e_activesession_ezsignArray) / sizeof(field_e_activesession_ezsignArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_ezsign, field_e_activesession_ezsignArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_ezsign_field_e_activesession_ezsign_convertToJSON(ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_ezsign", field_e_activesession_ezsign_field_e_activesession_ezsign_ToString(field_e_activesession_ezsign)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign_field_e_activesession_ezsign_parseFromJSON(cJSON *field_e_activesession_ezsignJSON) {
    ezmax_api_definition__full_field_e_activesession_ezsign__e *field_e_activesession_ezsign = NULL;
    ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsignVariable;
    cJSON *field_e_activesession_ezsignVar = cJSON_GetObjectItemCaseSensitive(field_e_activesession_ezsignJSON, "field_e_activesession_ezsign");
    if(!cJSON_IsString(field_e_activesession_ezsignVar) || (field_e_activesession_ezsignVar->valuestring == NULL)){
        goto end;
    }
    field_e_activesession_ezsignVariable = field_e_activesession_ezsign_field_e_activesession_ezsign_FromString(field_e_activesession_ezsignVar->valuestring);
    return field_e_activesession_ezsignVariable;
end:
    return 0;
}
