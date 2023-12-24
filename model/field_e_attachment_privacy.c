#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_attachment_privacy.h"


char* field_e_attachment_privacy_field_e_attachment_privacy_ToString(ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy) {
    char *field_e_attachment_privacyArray[] =  { "NULL", "All", "Inscriptor", "Seller", "Administration", "Creator", "Specificuser" };
    return field_e_attachment_privacyArray[field_e_attachment_privacy];
}

ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy_field_e_attachment_privacy_FromString(char* field_e_attachment_privacy) {
    int stringToReturn = 0;
    char *field_e_attachment_privacyArray[] =  { "NULL", "All", "Inscriptor", "Seller", "Administration", "Creator", "Specificuser" };
    size_t sizeofArray = sizeof(field_e_attachment_privacyArray) / sizeof(field_e_attachment_privacyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_attachment_privacy, field_e_attachment_privacyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_attachment_privacy_field_e_attachment_privacy_convertToJSON(ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_attachment_privacy", field_e_attachment_privacy_field_e_attachment_privacy_ToString(field_e_attachment_privacy)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacy_field_e_attachment_privacy_parseFromJSON(cJSON *field_e_attachment_privacyJSON) {
    ezmax_api_definition__full_field_e_attachment_privacy__e *field_e_attachment_privacy = NULL;
    ezmax_api_definition__full_field_e_attachment_privacy__e field_e_attachment_privacyVariable;
    cJSON *field_e_attachment_privacyVar = cJSON_GetObjectItemCaseSensitive(field_e_attachment_privacyJSON, "field_e_attachment_privacy");
    if(!cJSON_IsString(field_e_attachment_privacyVar) || (field_e_attachment_privacyVar->valuestring == NULL)){
        goto end;
    }
    field_e_attachment_privacyVariable = field_e_attachment_privacy_field_e_attachment_privacy_FromString(field_e_attachment_privacyVar->valuestring);
    return field_e_attachment_privacyVariable;
end:
    return 0;
}
