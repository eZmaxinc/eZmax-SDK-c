#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignfoldertype_pdfarequirement.h"


char* field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement) {
    char *field_e_ezsignfoldertype_pdfarequirementArray[] =  { "NULL", "None", "Declared", "Verified" };
    return field_e_ezsignfoldertype_pdfarequirementArray[field_e_ezsignfoldertype_pdfarequirement];
}

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_FromString(char* field_e_ezsignfoldertype_pdfarequirement) {
    int stringToReturn = 0;
    char *field_e_ezsignfoldertype_pdfarequirementArray[] =  { "NULL", "None", "Declared", "Verified" };
    size_t sizeofArray = sizeof(field_e_ezsignfoldertype_pdfarequirementArray) / sizeof(field_e_ezsignfoldertype_pdfarequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignfoldertype_pdfarequirement, field_e_ezsignfoldertype_pdfarequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignfoldertype_pdfarequirement", field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_ToString(field_e_ezsignfoldertype_pdfarequirement)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(cJSON *field_e_ezsignfoldertype_pdfarequirementJSON) {
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e *field_e_ezsignfoldertype_pdfarequirement = NULL;
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirementVariable;
    cJSON *field_e_ezsignfoldertype_pdfarequirementVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignfoldertype_pdfarequirementJSON, "field_e_ezsignfoldertype_pdfarequirement");
    if(!cJSON_IsString(field_e_ezsignfoldertype_pdfarequirementVar) || (field_e_ezsignfoldertype_pdfarequirementVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignfoldertype_pdfarequirementVariable = field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_FromString(field_e_ezsignfoldertype_pdfarequirementVar->valuestring);
    return field_e_ezsignfoldertype_pdfarequirementVariable;
end:
    return 0;
}
