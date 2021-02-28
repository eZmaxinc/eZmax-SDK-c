#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_user_type_sspr.h"


char* field_e_user_type_sspr_field_e_user_type_sspr_ToString(ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr) {
    char *field_e_user_type_ssprArray[] =  { "NULL", "EzsignUser", "Native" };
    return field_e_user_type_ssprArray[field_e_user_type_sspr];
}

ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr_field_e_user_type_sspr_FromString(char* field_e_user_type_sspr) {
    int stringToReturn = 0;
    char *field_e_user_type_ssprArray[] =  { "NULL", "EzsignUser", "Native" };
    size_t sizeofArray = sizeof(field_e_user_type_ssprArray) / sizeof(field_e_user_type_ssprArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_user_type_sspr, field_e_user_type_ssprArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_user_type_sspr_field_e_user_type_sspr_convertToJSON(ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_user_type_sspr", field_e_user_type_sspr_field_e_user_type_sspr_ToString(field_e_user_type_sspr)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_sspr_field_e_user_type_sspr_parseFromJSON(cJSON *field_e_user_type_ssprJSON) {
    ezmax_api_definition_field_e_user_type_sspr__e *field_e_user_type_sspr = NULL;
    ezmax_api_definition_field_e_user_type_sspr__e field_e_user_type_ssprVariable;
    cJSON *field_e_user_type_ssprVar = cJSON_GetObjectItemCaseSensitive(field_e_user_type_ssprJSON, "field_e_user_type_sspr");
    if(!cJSON_IsString(field_e_user_type_ssprVar) || (field_e_user_type_ssprVar->valuestring == NULL)){
        goto end;
    }
    field_e_user_type_ssprVariable = field_e_user_type_sspr_field_e_user_type_sspr_FromString(field_e_user_type_ssprVar->valuestring);
    return field_e_user_type_ssprVariable;
end:
    return 0;
}
