#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_authenticationexternal_type.h"


char* field_e_authenticationexternal_type_field_e_authenticationexternal_type_ToString(ezmax_api_definition__full_field_e_authenticationexternal_type__e field_e_authenticationexternal_type) {
    char *field_e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    return field_e_authenticationexternal_typeArray[field_e_authenticationexternal_type];
}

ezmax_api_definition__full_field_e_authenticationexternal_type__e field_e_authenticationexternal_type_field_e_authenticationexternal_type_FromString(char* field_e_authenticationexternal_type) {
    int stringToReturn = 0;
    char *field_e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    size_t sizeofArray = sizeof(field_e_authenticationexternal_typeArray) / sizeof(field_e_authenticationexternal_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_authenticationexternal_type, field_e_authenticationexternal_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_authenticationexternal_type_field_e_authenticationexternal_type_convertToJSON(ezmax_api_definition__full_field_e_authenticationexternal_type__e field_e_authenticationexternal_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_authenticationexternal_type", field_e_authenticationexternal_type_field_e_authenticationexternal_type_ToString(field_e_authenticationexternal_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_authenticationexternal_type__e field_e_authenticationexternal_type_field_e_authenticationexternal_type_parseFromJSON(cJSON *field_e_authenticationexternal_typeJSON) {
    ezmax_api_definition__full_field_e_authenticationexternal_type__e *field_e_authenticationexternal_type = NULL;
    ezmax_api_definition__full_field_e_authenticationexternal_type__e field_e_authenticationexternal_typeVariable;
    cJSON *field_e_authenticationexternal_typeVar = cJSON_GetObjectItemCaseSensitive(field_e_authenticationexternal_typeJSON, "field_e_authenticationexternal_type");
    if(!cJSON_IsString(field_e_authenticationexternal_typeVar) || (field_e_authenticationexternal_typeVar->valuestring == NULL)){
        goto end;
    }
    field_e_authenticationexternal_typeVariable = field_e_authenticationexternal_type_field_e_authenticationexternal_type_FromString(field_e_authenticationexternal_typeVar->valuestring);
    return field_e_authenticationexternal_typeVariable;
end:
    return 0;
}
