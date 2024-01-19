#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_completion.h"


char* field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion) {
    char *field_e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    return field_e_ezsignfoldertype_completionArray[field_e_ezsignfoldertype_completion];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_FromString(char* field_e_ezsignfoldertype_completion) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_completionArray) / sizeof(field_e_ezsignfoldertype_completionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_completion, field_e_ezsignfoldertype_completionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_completion", field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_ToString(field_e_ezsignfoldertype_completion)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_parseFromJSON(cJSON *field_e_ezsignfoldertype_completionJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e *field_e_ezsignfoldertype_completion = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completionVariable;
    cJSON *field_e_ezsignfoldertype_completionVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_completionJSON, "field_e_ezsignfoldertype_completion");
    if(!cJSON_IsString(field_e_ezsignfoldertype_completionVar) || (field_e_ezsignfoldertype_completionVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_completionVariable = field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_FromString(field_e_ezsignfoldertype_completionVar->valuestring);
    return field_e_ezsignfoldertype_completionVariable;
end:
    return 0;
}
