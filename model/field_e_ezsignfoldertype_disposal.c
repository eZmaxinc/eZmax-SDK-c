#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_disposal.h"


char* field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e field_e_ezsignfoldertype_disposal) {
    char *field_e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    return field_e_ezsignfoldertype_disposalArray[field_e_ezsignfoldertype_disposal];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_FromString(char* field_e_ezsignfoldertype_disposal) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_disposalArray) / sizeof(field_e_ezsignfoldertype_disposalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_disposal, field_e_ezsignfoldertype_disposalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e field_e_ezsignfoldertype_disposal) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_disposal", field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_ToString(field_e_ezsignfoldertype_disposal)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_parseFromJSON(cJSON *field_e_ezsignfoldertype_disposalJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e *field_e_ezsignfoldertype_disposal = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e field_e_ezsignfoldertype_disposalVariable;
    cJSON *field_e_ezsignfoldertype_disposalVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_disposalJSON, "field_e_ezsignfoldertype_disposal");
    if(!cJSON_IsString(field_e_ezsignfoldertype_disposalVar) || (field_e_ezsignfoldertype_disposalVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_disposalVariable = field_e_ezsignfoldertype_disposal_field_e_ezsignfoldertype_disposal_FromString(field_e_ezsignfoldertype_disposalVar->valuestring);
    return field_e_ezsignfoldertype_disposalVariable;
end:
    return 0;
}
