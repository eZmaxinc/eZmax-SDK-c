#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateelementdependency_operator.h"


char* field_e_ezsigntemplateelementdependency_operator_field_e_ezsigntemplateelementdependency_operator_ToString(ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e field_e_ezsigntemplateelementdependency_operator) {
    char *field_e_ezsigntemplateelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    return field_e_ezsigntemplateelementdependency_operatorArray[field_e_ezsigntemplateelementdependency_operator];
}

ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e field_e_ezsigntemplateelementdependency_operator_field_e_ezsigntemplateelementdependency_operator_FromString(char* field_e_ezsigntemplateelementdependency_operator) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateelementdependency_operatorArray) / sizeof(field_e_ezsigntemplateelementdependency_operatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateelementdependency_operator, field_e_ezsigntemplateelementdependency_operatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateelementdependency_operator_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e field_e_ezsigntemplateelementdependency_operator) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateelementdependency_operator", field_e_ezsigntemplateelementdependency_operator_field_e_ezsigntemplateelementdependency_operator_ToString(field_e_ezsigntemplateelementdependency_operator)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateelementdependency_operator__e field_e_ezsigntemplateelementdependency_operator_parseFromJSON(cJSON *field_e_ezsigntemplateelementdependency_operatorJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateelementdependency_operatorJSON) || (field_e_ezsigntemplateelementdependency_operatorJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateelementdependency_operator_field_e_ezsigntemplateelementdependency_operator_FromString(field_e_ezsigntemplateelementdependency_operatorJSON->valuestring);
}
