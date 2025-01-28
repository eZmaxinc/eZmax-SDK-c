#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_origin.h"


char* field_e_user_origin_field_e_user_origin_ToString(ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin) {
    char *field_e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    return field_e_user_originArray[field_e_user_origin];
}

ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin_field_e_user_origin_FromString(char* field_e_user_origin) {
    int stringToReturn = 0;
    char *field_e_user_originArray[] =  { "NULL", "BuiltIn", "External" };
    size_t sizeofArray = sizeof(field_e_user_originArray) / sizeof(field_e_user_originArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_origin, field_e_user_originArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_origin_convertToJSON(ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_origin", field_e_user_origin_field_e_user_origin_ToString(field_e_user_origin)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin_parseFromJSON(cJSON *field_e_user_originJSON) {
    if(!cJSON_IsString(field_e_user_originJSON) || (field_e_user_originJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_user_origin_field_e_user_origin_FromString(field_e_user_originJSON->valuestring);
}
