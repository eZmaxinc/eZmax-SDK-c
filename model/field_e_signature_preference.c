#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_signature_preference.h"


char* field_e_signature_preference_field_e_signature_preference_ToString(ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference) {
    char *field_e_signature_preferenceArray[] =  { "NULL", "Text", "Handwritten" };
    return field_e_signature_preferenceArray[field_e_signature_preference];
}

ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference_field_e_signature_preference_FromString(char* field_e_signature_preference) {
    int stringToReturn = 0;
    char *field_e_signature_preferenceArray[] =  { "NULL", "Text", "Handwritten" };
    size_t sizeofArray = sizeof(field_e_signature_preferenceArray) / sizeof(field_e_signature_preferenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_signature_preference, field_e_signature_preferenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_signature_preference_field_e_signature_preference_convertToJSON(ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_signature_preference", field_e_signature_preference_field_e_signature_preference_ToString(field_e_signature_preference)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference_field_e_signature_preference_parseFromJSON(cJSON *field_e_signature_preferenceJSON) {
    ezmax_api_definition__full_field_e_signature_preference__e *field_e_signature_preference = NULL;
    ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preferenceVariable;
    cJSON *field_e_signature_preferenceVar = cJSON_GetObjectItemCaseSensitive(field_e_signature_preferenceJSON, "field_e_signature_preference");
    if(!cJSON_IsString(field_e_signature_preferenceVar) || (field_e_signature_preferenceVar->valuestring == NULL)){
        goto end;
    }
    field_e_signature_preferenceVariable = field_e_signature_preference_field_e_signature_preference_FromString(field_e_signature_preferenceVar->valuestring);
    return field_e_signature_preferenceVariable;
end:
    return 0;
}
