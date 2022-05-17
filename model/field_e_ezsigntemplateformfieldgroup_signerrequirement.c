#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateformfieldgroup_signerrequirement.h"


char* field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e field_e_ezsigntemplateformfieldgroup_signerrequirement) {
    char *field_e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    return field_e_ezsigntemplateformfieldgroup_signerrequirementArray[field_e_ezsigntemplateformfieldgroup_signerrequirement];
}

ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(char* field_e_ezsigntemplateformfieldgroup_signerrequirement) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateformfieldgroup_signerrequirementArray[] =  { "NULL", "All", "One" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateformfieldgroup_signerrequirementArray) / sizeof(field_e_ezsigntemplateformfieldgroup_signerrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateformfieldgroup_signerrequirement, field_e_ezsigntemplateformfieldgroup_signerrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e field_e_ezsigntemplateformfieldgroup_signerrequirement) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateformfieldgroup_signerrequirement", field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_ToString(field_e_ezsigntemplateformfieldgroup_signerrequirement)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_parseFromJSON(cJSON *field_e_ezsigntemplateformfieldgroup_signerrequirementJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e *field_e_ezsigntemplateformfieldgroup_signerrequirement = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e field_e_ezsigntemplateformfieldgroup_signerrequirementVariable;
    cJSON *field_e_ezsigntemplateformfieldgroup_signerrequirementVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplateformfieldgroup_signerrequirementJSON, "field_e_ezsigntemplateformfieldgroup_signerrequirement");
    if(!cJSON_IsString(field_e_ezsigntemplateformfieldgroup_signerrequirementVar) || (field_e_ezsigntemplateformfieldgroup_signerrequirementVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplateformfieldgroup_signerrequirementVariable = field_e_ezsigntemplateformfieldgroup_signerrequirement_field_e_ezsigntemplateformfieldgroup_signerrequirement_FromString(field_e_ezsigntemplateformfieldgroup_signerrequirementVar->valuestring);
    return field_e_ezsigntemplateformfieldgroup_signerrequirementVariable;
end:
    return 0;
}
