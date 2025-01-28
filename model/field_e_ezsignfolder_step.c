#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_step.h"


char* field_e_ezsignfolder_step_field_e_ezsignfolder_step_ToString(ezmax_api_definition__full_field_e_ezsignfolder_step__e field_e_ezsignfolder_step) {
    char *field_e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    return field_e_ezsignfolder_stepArray[field_e_ezsignfolder_step];
}

ezmax_api_definition__full_field_e_ezsignfolder_step__e field_e_ezsignfolder_step_field_e_ezsignfolder_step_FromString(char* field_e_ezsignfolder_step) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_stepArray) / sizeof(field_e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_step, field_e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_step_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_step__e field_e_ezsignfolder_step) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_step", field_e_ezsignfolder_step_field_e_ezsignfolder_step_ToString(field_e_ezsignfolder_step)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfolder_step__e field_e_ezsignfolder_step_parseFromJSON(cJSON *field_e_ezsignfolder_stepJSON) {
    if(!cJSON_IsString(field_e_ezsignfolder_stepJSON) || (field_e_ezsignfolder_stepJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfolder_step_field_e_ezsignfolder_step_FromString(field_e_ezsignfolder_stepJSON->valuestring);
}
