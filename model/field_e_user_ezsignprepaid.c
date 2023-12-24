#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_ezsignprepaid.h"


char* field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_ToString(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid) {
    char *field_e_user_ezsignprepaidArray[] =  { "NULL", "Basic", "Unlimited", "Pro" };
    return field_e_user_ezsignprepaidArray[field_e_user_ezsignprepaid];
}

ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_FromString(char* field_e_user_ezsignprepaid) {
    int stringToReturn = 0;
    char *field_e_user_ezsignprepaidArray[] =  { "NULL", "Basic", "Unlimited", "Pro" };
    size_t sizeofArray = sizeof(field_e_user_ezsignprepaidArray) / sizeof(field_e_user_ezsignprepaidArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_ezsignprepaid, field_e_user_ezsignprepaidArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_ezsignprepaid", field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_ToString(field_e_user_ezsignprepaid)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_parseFromJSON(cJSON *field_e_user_ezsignprepaidJSON) {
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e *field_e_user_ezsignprepaid = NULL;
    ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaidVariable;
    cJSON *field_e_user_ezsignprepaidVar = cJSON_GetObjectItemCaseSensitive(field_e_user_ezsignprepaidJSON, "field_e_user_ezsignprepaid");
    if(!cJSON_IsString(field_e_user_ezsignprepaidVar) || (field_e_user_ezsignprepaidVar->valuestring == NULL)){
        goto end;
    }
    field_e_user_ezsignprepaidVariable = field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_FromString(field_e_user_ezsignprepaidVar->valuestring);
    return field_e_user_ezsignprepaidVariable;
end:
    return 0;
}
