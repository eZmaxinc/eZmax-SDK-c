#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_logintype.h"


char* field_e_user_logintype_field_e_user_logintype_ToString(ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype) {
    char *field_e_user_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion" };
    return field_e_user_logintypeArray[field_e_user_logintype];
}

ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype_field_e_user_logintype_FromString(char* field_e_user_logintype) {
    int stringToReturn = 0;
    char *field_e_user_logintypeArray[] =  { "NULL", "Password", "PasswordPhone", "PasswordQuestion" };
    size_t sizeofArray = sizeof(field_e_user_logintypeArray) / sizeof(field_e_user_logintypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_logintype, field_e_user_logintypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_logintype_convertToJSON(ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_logintype", field_e_user_logintype_field_e_user_logintype_ToString(field_e_user_logintype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype_parseFromJSON(cJSON *field_e_user_logintypeJSON) {
    if(!cJSON_IsString(field_e_user_logintypeJSON) || (field_e_user_logintypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_user_logintype_field_e_user_logintype_FromString(field_e_user_logintypeJSON->valuestring);
}
