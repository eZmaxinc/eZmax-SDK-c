#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_statusdefault.h"


char* field_e_documenttype_statusdefault_field_e_documenttype_statusdefault_ToString(ezmax_api_definition__full_field_e_documenttype_statusdefault__e field_e_documenttype_statusdefault) {
    char *field_e_documenttype_statusdefaultArray[] =  { "NULL", "Not required", "Required" };
    return field_e_documenttype_statusdefaultArray[field_e_documenttype_statusdefault];
}

ezmax_api_definition__full_field_e_documenttype_statusdefault__e field_e_documenttype_statusdefault_field_e_documenttype_statusdefault_FromString(char* field_e_documenttype_statusdefault) {
    int stringToReturn = 0;
    char *field_e_documenttype_statusdefaultArray[] =  { "NULL", "Not required", "Required" };
    size_t sizeofArray = sizeof(field_e_documenttype_statusdefaultArray) / sizeof(field_e_documenttype_statusdefaultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_statusdefault, field_e_documenttype_statusdefaultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_statusdefault_convertToJSON(ezmax_api_definition__full_field_e_documenttype_statusdefault__e field_e_documenttype_statusdefault) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_statusdefault", field_e_documenttype_statusdefault_field_e_documenttype_statusdefault_ToString(field_e_documenttype_statusdefault)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_statusdefault__e field_e_documenttype_statusdefault_parseFromJSON(cJSON *field_e_documenttype_statusdefaultJSON) {
    if(!cJSON_IsString(field_e_documenttype_statusdefaultJSON) || (field_e_documenttype_statusdefaultJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_statusdefault_field_e_documenttype_statusdefault_FromString(field_e_documenttype_statusdefaultJSON->valuestring);
}
