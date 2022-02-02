#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_activesession_sessiontype.h"


char* field_e_activesession_sessiontype_field_e_activesession_sessiontype_ToString(ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype) {
    char *field_e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
    return field_e_activesession_sessiontypeArray[field_e_activesession_sessiontype];
}

ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype_field_e_activesession_sessiontype_FromString(char* field_e_activesession_sessiontype) {
    int stringToReturn = 0;
    char *field_e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
    size_t sizeofArray = sizeof(field_e_activesession_sessiontypeArray) / sizeof(field_e_activesession_sessiontypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_activesession_sessiontype, field_e_activesession_sessiontypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_activesession_sessiontype_field_e_activesession_sessiontype_convertToJSON(ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_activesession_sessiontype", field_e_activesession_sessiontype_field_e_activesession_sessiontype_ToString(field_e_activesession_sessiontype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype_field_e_activesession_sessiontype_parseFromJSON(cJSON *field_e_activesession_sessiontypeJSON) {
    ezmax_api_definition_field_e_activesession_sessiontype__e *field_e_activesession_sessiontype = NULL;
    ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontypeVariable;
    cJSON *field_e_activesession_sessiontypeVar = cJSON_GetObjectItemCaseSensitive(field_e_activesession_sessiontypeJSON, "field_e_activesession_sessiontype");
    if(!cJSON_IsString(field_e_activesession_sessiontypeVar) || (field_e_activesession_sessiontypeVar->valuestring == NULL)){
        goto end;
    }
    field_e_activesession_sessiontypeVariable = field_e_activesession_sessiontype_field_e_activesession_sessiontype_FromString(field_e_activesession_sessiontypeVar->valuestring);
    return field_e_activesession_sessiontypeVariable;
end:
    return 0;
}
