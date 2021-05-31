#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigndocument_step.h"


char* field_e_ezsigndocument_step_field_e_ezsigndocument_step_ToString(ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step) {
    char *field_e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "Completed" };
    return field_e_ezsigndocument_stepArray[field_e_ezsigndocument_step];
}

ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_field_e_ezsigndocument_step_FromString(char* field_e_ezsigndocument_step) {
    int stringToReturn = 0;
    char *field_e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "Completed" };
    size_t sizeofArray = sizeof(field_e_ezsigndocument_stepArray) / sizeof(field_e_ezsigndocument_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigndocument_step, field_e_ezsigndocument_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigndocument_step_field_e_ezsigndocument_step_convertToJSON(ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigndocument_step", field_e_ezsigndocument_step_field_e_ezsigndocument_step_ToString(field_e_ezsigndocument_step)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_step_field_e_ezsigndocument_step_parseFromJSON(cJSON *field_e_ezsigndocument_stepJSON) {
    ezmax_api_definition_field_e_ezsigndocument_step__e *field_e_ezsigndocument_step = NULL;
    ezmax_api_definition_field_e_ezsigndocument_step__e field_e_ezsigndocument_stepVariable;
    cJSON *field_e_ezsigndocument_stepVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigndocument_stepJSON, "field_e_ezsigndocument_step");
    if(!cJSON_IsString(field_e_ezsigndocument_stepVar) || (field_e_ezsigndocument_stepVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigndocument_stepVariable = field_e_ezsigndocument_step_field_e_ezsigndocument_step_FromString(field_e_ezsigndocument_stepVar->valuestring);
    return field_e_ezsigndocument_stepVariable;
end:
    return 0;
}
