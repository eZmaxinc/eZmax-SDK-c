#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_ezsignprepaid.h"


char* field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_ToString(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid) {
    char *field_e_user_ezsignprepaidArray[] =  { "NULL", "No", "Basic", "Standard", "Pro" };
    return field_e_user_ezsignprepaidArray[field_e_user_ezsignprepaid];
}

ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_FromString(char* field_e_user_ezsignprepaid) {
    int stringToReturn = 0;
    char *field_e_user_ezsignprepaidArray[] =  { "NULL", "No", "Basic", "Standard", "Pro" };
    size_t sizeofArray = sizeof(field_e_user_ezsignprepaidArray) / sizeof(field_e_user_ezsignprepaidArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_ezsignprepaid, field_e_user_ezsignprepaidArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_ezsignprepaid_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_ezsignprepaid", field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_ToString(field_e_user_ezsignprepaid)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_parseFromJSON(cJSON *field_e_user_ezsignprepaidJSON) {
    if(!cJSON_IsString(field_e_user_ezsignprepaidJSON) || (field_e_user_ezsignprepaidJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_FromString(field_e_user_ezsignprepaidJSON->valuestring);
}
