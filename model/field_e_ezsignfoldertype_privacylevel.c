#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_privacylevel.h"


char* field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel) {
    char *field_e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return field_e_ezsignfoldertype_privacylevelArray[field_e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_FromString(char* field_e_ezsignfoldertype_privacylevel) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_privacylevelArray) / sizeof(field_e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_privacylevel, field_e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_privacylevel", field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_ToString(field_e_ezsignfoldertype_privacylevel)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_parseFromJSON(cJSON *field_e_ezsignfoldertype_privacylevelJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e *field_e_ezsignfoldertype_privacylevel = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e field_e_ezsignfoldertype_privacylevelVariable;
    cJSON *field_e_ezsignfoldertype_privacylevelVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_privacylevelJSON, "field_e_ezsignfoldertype_privacylevel");
    if(!cJSON_IsString(field_e_ezsignfoldertype_privacylevelVar) || (field_e_ezsignfoldertype_privacylevelVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_privacylevelVariable = field_e_ezsignfoldertype_privacylevel_field_e_ezsignfoldertype_privacylevel_FromString(field_e_ezsignfoldertype_privacylevelVar->valuestring);
    return field_e_ezsignfoldertype_privacylevelVariable;
end:
    return 0;
}
