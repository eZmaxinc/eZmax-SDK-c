#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_privacydefault.h"


char* field_e_documenttype_privacydefault_field_e_documenttype_privacydefault_ToString(ezmax_api_definition__full_field_e_documenttype_privacydefault__e field_e_documenttype_privacydefault) {
    char *field_e_documenttype_privacydefaultArray[] =  { "NULL", "Administration", "Administrator", "All", "Creator", "Inscriptor", "Myself", "Seller" };
    return field_e_documenttype_privacydefaultArray[field_e_documenttype_privacydefault];
}

ezmax_api_definition__full_field_e_documenttype_privacydefault__e field_e_documenttype_privacydefault_field_e_documenttype_privacydefault_FromString(char* field_e_documenttype_privacydefault) {
    int stringToReturn = 0;
    char *field_e_documenttype_privacydefaultArray[] =  { "NULL", "Administration", "Administrator", "All", "Creator", "Inscriptor", "Myself", "Seller" };
    size_t sizeofArray = sizeof(field_e_documenttype_privacydefaultArray) / sizeof(field_e_documenttype_privacydefaultArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_privacydefault, field_e_documenttype_privacydefaultArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_privacydefault_convertToJSON(ezmax_api_definition__full_field_e_documenttype_privacydefault__e field_e_documenttype_privacydefault) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_privacydefault", field_e_documenttype_privacydefault_field_e_documenttype_privacydefault_ToString(field_e_documenttype_privacydefault)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_privacydefault__e field_e_documenttype_privacydefault_parseFromJSON(cJSON *field_e_documenttype_privacydefaultJSON) {
    if(!cJSON_IsString(field_e_documenttype_privacydefaultJSON) || (field_e_documenttype_privacydefaultJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_privacydefault_field_e_documenttype_privacydefault_FromString(field_e_documenttype_privacydefaultJSON->valuestring);
}
