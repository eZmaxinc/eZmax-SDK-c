#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfolder_completion.h"


char* field_e_ezsignfolder_completion_field_e_ezsignfolder_completion_ToString(ezmax_api_definition__full_field_e_ezsignfolder_completion__e field_e_ezsignfolder_completion) {
    char *field_e_ezsignfolder_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    return field_e_ezsignfolder_completionArray[field_e_ezsignfolder_completion];
}

ezmax_api_definition__full_field_e_ezsignfolder_completion__e field_e_ezsignfolder_completion_field_e_ezsignfolder_completion_FromString(char* field_e_ezsignfolder_completion) {
    int stringToReturn = 0;
    char *field_e_ezsignfolder_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    size_t sizeofArray = sizeof(field_e_ezsignfolder_completionArray) / sizeof(field_e_ezsignfolder_completionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfolder_completion, field_e_ezsignfolder_completionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfolder_completion_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_completion__e field_e_ezsignfolder_completion) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfolder_completion", field_e_ezsignfolder_completion_field_e_ezsignfolder_completion_ToString(field_e_ezsignfolder_completion)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfolder_completion__e field_e_ezsignfolder_completion_parseFromJSON(cJSON *field_e_ezsignfolder_completionJSON) {
    if(!cJSON_IsString(field_e_ezsignfolder_completionJSON) || (field_e_ezsignfolder_completionJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignfolder_completion_field_e_ezsignfolder_completion_FromString(field_e_ezsignfolder_completionJSON->valuestring);
}
