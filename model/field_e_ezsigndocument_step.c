#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigndocument_step.h"


char* field_e_ezsigndocument_step_field_e_ezsigndocument_step_ToString(ezmax_api_definition__full_field_e_ezsigndocument_step__e field_e_ezsigndocument_step) {
    char *field_e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "PendingCompletion", "Completed", "Disposed" };
    return field_e_ezsigndocument_stepArray[field_e_ezsigndocument_step];
}

ezmax_api_definition__full_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_field_e_ezsigndocument_step_FromString(char* field_e_ezsigndocument_step) {
    int stringToReturn = 0;
    char *field_e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "PendingCompletion", "Completed", "Disposed" };
    size_t sizeofArray = sizeof(field_e_ezsigndocument_stepArray) / sizeof(field_e_ezsigndocument_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigndocument_step, field_e_ezsigndocument_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigndocument_step_convertToJSON(ezmax_api_definition__full_field_e_ezsigndocument_step__e field_e_ezsigndocument_step) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigndocument_step", field_e_ezsigndocument_step_field_e_ezsigndocument_step_ToString(field_e_ezsigndocument_step)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_parseFromJSON(cJSON *field_e_ezsigndocument_stepJSON) {
    if(!cJSON_IsString(field_e_ezsigndocument_stepJSON) || (field_e_ezsigndocument_stepJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigndocument_step_field_e_ezsigndocument_step_FromString(field_e_ezsigndocument_stepJSON->valuestring);
}
