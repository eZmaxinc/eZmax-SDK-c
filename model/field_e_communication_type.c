#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communication_type.h"


char* field_e_communication_type_field_e_communication_type_ToString(ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type) {
    char *field_e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
    return field_e_communication_typeArray[field_e_communication_type];
}

ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type_field_e_communication_type_FromString(char* field_e_communication_type) {
    int stringToReturn = 0;
    char *field_e_communication_typeArray[] =  { "NULL", "Email", "Fax", "Sms" };
    size_t sizeofArray = sizeof(field_e_communication_typeArray) / sizeof(field_e_communication_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communication_type, field_e_communication_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communication_type_convertToJSON(ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communication_type", field_e_communication_type_field_e_communication_type_ToString(field_e_communication_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type_parseFromJSON(cJSON *field_e_communication_typeJSON) {
    if(!cJSON_IsString(field_e_communication_typeJSON) || (field_e_communication_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_communication_type_field_e_communication_type_FromString(field_e_communication_typeJSON->valuestring);
}
