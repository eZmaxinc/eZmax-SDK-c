#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_ezsignaccess.h"


char* field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_ToString(ezmax_api_definition__full_field_e_activesession_ezsignaccess__e field_e_activesession_ezsignaccess) {
    char *field_e_activesession_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    return field_e_activesession_ezsignaccessArray[field_e_activesession_ezsignaccess];
}

ezmax_api_definition__full_field_e_activesession_ezsignaccess__e field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_FromString(char* field_e_activesession_ezsignaccess) {
    int stringToReturn = 0;
    char *field_e_activesession_ezsignaccessArray[] =  { "NULL", "No", "PaidByOffice", "PerDocument", "Prepaid" };
    size_t sizeofArray = sizeof(field_e_activesession_ezsignaccessArray) / sizeof(field_e_activesession_ezsignaccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_ezsignaccess, field_e_activesession_ezsignaccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_convertToJSON(ezmax_api_definition__full_field_e_activesession_ezsignaccess__e field_e_activesession_ezsignaccess) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_ezsignaccess", field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_ToString(field_e_activesession_ezsignaccess)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_activesession_ezsignaccess__e field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_parseFromJSON(cJSON *field_e_activesession_ezsignaccessJSON) {
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e *field_e_activesession_ezsignaccess = NULL;
    ezmax_api_definition__full_field_e_activesession_ezsignaccess__e field_e_activesession_ezsignaccessVariable;
    cJSON *field_e_activesession_ezsignaccessVar = cJSON_GetObjectItemCaseSensitive(field_e_activesession_ezsignaccessJSON, "field_e_activesession_ezsignaccess");
    if(!cJSON_IsString(field_e_activesession_ezsignaccessVar) || (field_e_activesession_ezsignaccessVar->valuestring == NULL)){
        goto end;
    }
    field_e_activesession_ezsignaccessVariable = field_e_activesession_ezsignaccess_field_e_activesession_ezsignaccess_FromString(field_e_activesession_ezsignaccessVar->valuestring);
    return field_e_activesession_ezsignaccessVariable;
end:
    return 0;
}
