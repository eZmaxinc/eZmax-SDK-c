#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communicationexternalrecipient_type.h"


char* field_e_communicationexternalrecipient_type_field_e_communicationexternalrecipient_type_ToString(ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e field_e_communicationexternalrecipient_type) {
    char *field_e_communicationexternalrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    return field_e_communicationexternalrecipient_typeArray[field_e_communicationexternalrecipient_type];
}

ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e field_e_communicationexternalrecipient_type_field_e_communicationexternalrecipient_type_FromString(char* field_e_communicationexternalrecipient_type) {
    int stringToReturn = 0;
    char *field_e_communicationexternalrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    size_t sizeofArray = sizeof(field_e_communicationexternalrecipient_typeArray) / sizeof(field_e_communicationexternalrecipient_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communicationexternalrecipient_type, field_e_communicationexternalrecipient_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communicationexternalrecipient_type_convertToJSON(ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e field_e_communicationexternalrecipient_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communicationexternalrecipient_type", field_e_communicationexternalrecipient_type_field_e_communicationexternalrecipient_type_ToString(field_e_communicationexternalrecipient_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communicationexternalrecipient_type__e field_e_communicationexternalrecipient_type_parseFromJSON(cJSON *field_e_communicationexternalrecipient_typeJSON) {
    if(!cJSON_IsString(field_e_communicationexternalrecipient_typeJSON) || (field_e_communicationexternalrecipient_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_communicationexternalrecipient_type_field_e_communicationexternalrecipient_type_FromString(field_e_communicationexternalrecipient_typeJSON->valuestring);
}
