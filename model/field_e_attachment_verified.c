#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_attachment_verified.h"


char* field_e_attachment_verified_field_e_attachment_verified_ToString(ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified) {
    char *field_e_attachment_verifiedArray[] =  { "NULL", "No", "Yes", "Rejected" };
    return field_e_attachment_verifiedArray[field_e_attachment_verified];
}

ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified_field_e_attachment_verified_FromString(char* field_e_attachment_verified) {
    int stringToReturn = 0;
    char *field_e_attachment_verifiedArray[] =  { "NULL", "No", "Yes", "Rejected" };
    size_t sizeofArray = sizeof(field_e_attachment_verifiedArray) / sizeof(field_e_attachment_verifiedArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_attachment_verified, field_e_attachment_verifiedArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_attachment_verified_convertToJSON(ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_attachment_verified", field_e_attachment_verified_field_e_attachment_verified_ToString(field_e_attachment_verified)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified_parseFromJSON(cJSON *field_e_attachment_verifiedJSON) {
    if(!cJSON_IsString(field_e_attachment_verifiedJSON) || (field_e_attachment_verifiedJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_attachment_verified_field_e_attachment_verified_FromString(field_e_attachment_verifiedJSON->valuestring);
}
