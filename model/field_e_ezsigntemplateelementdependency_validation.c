#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateelementdependency_validation.h"


char* field_e_ezsigntemplateelementdependency_validation_field_e_ezsigntemplateelementdependency_validation_ToString(ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e field_e_ezsigntemplateelementdependency_validation) {
    char *field_e_ezsigntemplateelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    return field_e_ezsigntemplateelementdependency_validationArray[field_e_ezsigntemplateelementdependency_validation];
}

ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e field_e_ezsigntemplateelementdependency_validation_field_e_ezsigntemplateelementdependency_validation_FromString(char* field_e_ezsigntemplateelementdependency_validation) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateelementdependency_validationArray[] =  { "NULL", "Value", "Selected", "Filled" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateelementdependency_validationArray) / sizeof(field_e_ezsigntemplateelementdependency_validationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateelementdependency_validation, field_e_ezsigntemplateelementdependency_validationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateelementdependency_validation_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e field_e_ezsigntemplateelementdependency_validation) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateelementdependency_validation", field_e_ezsigntemplateelementdependency_validation_field_e_ezsigntemplateelementdependency_validation_ToString(field_e_ezsigntemplateelementdependency_validation)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_validation__e field_e_ezsigntemplateelementdependency_validation_parseFromJSON(cJSON *field_e_ezsigntemplateelementdependency_validationJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateelementdependency_validationJSON) || (field_e_ezsigntemplateelementdependency_validationJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateelementdependency_validation_field_e_ezsigntemplateelementdependency_validation_FromString(field_e_ezsigntemplateelementdependency_validationJSON->valuestring);
}
