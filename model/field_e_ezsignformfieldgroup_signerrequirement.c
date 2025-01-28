#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignformfieldgroup_signerrequirement.h"


char* field_e_ezsignformfieldgroup_signerrequirement_field_e_ezsignformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e field_e_ezsignformfieldgroup_signerrequirement) {
    char *field_e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    return field_e_ezsignformfieldgroup_signerrequirementArray[field_e_ezsignformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e field_e_ezsignformfieldgroup_signerrequirement_field_e_ezsignformfieldgroup_signerrequirement_FromString(char* field_e_ezsignformfieldgroup_signerrequirement) {
    int stringToReturn = 0;
    char *field_e_ezsignformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    size_t sizeofArray = sizeof(field_e_ezsignformfieldgroup_signerrequirementArray) / sizeof(field_e_ezsignformfieldgroup_signerrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignformfieldgroup_signerrequirement, field_e_ezsignformfieldgroup_signerrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e field_e_ezsignformfieldgroup_signerrequirement) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignformfieldgroup_signerrequirement", field_e_ezsignformfieldgroup_signerrequirement_field_e_ezsignformfieldgroup_signerrequirement_ToString(field_e_ezsignformfieldgroup_signerrequirement)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(cJSON *field_e_ezsignformfieldgroup_signerrequirementJSON) {
    if(!cJSON_IsString(field_e_ezsignformfieldgroup_signerrequirementJSON) || (field_e_ezsignformfieldgroup_signerrequirementJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignformfieldgroup_signerrequirement_field_e_ezsignformfieldgroup_signerrequirement_FromString(field_e_ezsignformfieldgroup_signerrequirementJSON->valuestring);
}
