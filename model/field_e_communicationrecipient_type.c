#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communicationrecipient_type.h"


char* field_e_communicationrecipient_type_field_e_communicationrecipient_type_ToString(ezmax_api_definition__full_field_e_communicationrecipient_type__e field_e_communicationrecipient_type) {
    char *field_e_communicationrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    return field_e_communicationrecipient_typeArray[field_e_communicationrecipient_type];
}

ezmax_api_definition__full_field_e_communicationrecipient_type__e field_e_communicationrecipient_type_field_e_communicationrecipient_type_FromString(char* field_e_communicationrecipient_type) {
    int stringToReturn = 0;
    char *field_e_communicationrecipient_typeArray[] =  { "NULL", "To", "Cc", "Bcc" };
    size_t sizeofArray = sizeof(field_e_communicationrecipient_typeArray) / sizeof(field_e_communicationrecipient_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communicationrecipient_type, field_e_communicationrecipient_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communicationrecipient_type_field_e_communicationrecipient_type_convertToJSON(ezmax_api_definition__full_field_e_communicationrecipient_type__e field_e_communicationrecipient_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communicationrecipient_type", field_e_communicationrecipient_type_field_e_communicationrecipient_type_ToString(field_e_communicationrecipient_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communicationrecipient_type__e field_e_communicationrecipient_type_field_e_communicationrecipient_type_parseFromJSON(cJSON *field_e_communicationrecipient_typeJSON) {
    ezmax_api_definition__full_field_e_communicationrecipient_type__e *field_e_communicationrecipient_type = NULL;
    ezmax_api_definition__full_field_e_communicationrecipient_type__e field_e_communicationrecipient_typeVariable;
    cJSON *field_e_communicationrecipient_typeVar = cJSON_GetObjectItemCaseSensitive(field_e_communicationrecipient_typeJSON, "field_e_communicationrecipient_type");
    if(!cJSON_IsString(field_e_communicationrecipient_typeVar) || (field_e_communicationrecipient_typeVar->valuestring == NULL)){
        goto end;
    }
    field_e_communicationrecipient_typeVariable = field_e_communicationrecipient_type_field_e_communicationrecipient_type_FromString(field_e_communicationrecipient_typeVar->valuestring);
    return field_e_communicationrecipient_typeVariable;
end:
    return 0;
}
