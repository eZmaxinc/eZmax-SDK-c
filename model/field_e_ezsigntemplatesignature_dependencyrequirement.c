#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignature_dependencyrequirement.h"


char* field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e field_e_ezsigntemplatesignature_dependencyrequirement) {
    char *field_e_ezsigntemplatesignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    return field_e_ezsigntemplatesignature_dependencyrequirementArray[field_e_ezsigntemplatesignature_dependencyrequirement];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_FromString(char* field_e_ezsigntemplatesignature_dependencyrequirement) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignature_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignature_dependencyrequirementArray) / sizeof(field_e_ezsigntemplatesignature_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignature_dependencyrequirement, field_e_ezsigntemplatesignature_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e field_e_ezsigntemplatesignature_dependencyrequirement) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignature_dependencyrequirement", field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_ToString(field_e_ezsigntemplatesignature_dependencyrequirement)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_dependencyrequirementJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e *field_e_ezsigntemplatesignature_dependencyrequirement = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e field_e_ezsigntemplatesignature_dependencyrequirementVariable;
    cJSON *field_e_ezsigntemplatesignature_dependencyrequirementVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplatesignature_dependencyrequirementJSON, "field_e_ezsigntemplatesignature_dependencyrequirement");
    if(!cJSON_IsString(field_e_ezsigntemplatesignature_dependencyrequirementVar) || (field_e_ezsigntemplatesignature_dependencyrequirementVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplatesignature_dependencyrequirementVariable = field_e_ezsigntemplatesignature_dependencyrequirement_field_e_ezsigntemplatesignature_dependencyrequirement_FromString(field_e_ezsigntemplatesignature_dependencyrequirementVar->valuestring);
    return field_e_ezsigntemplatesignature_dependencyrequirementVariable;
end:
    return 0;
}
