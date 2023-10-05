#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignelementdependency_operator.h"


char* field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_ToString(ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator) {
    char *field_e_ezsignelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    return field_e_ezsignelementdependency_operatorArray[field_e_ezsignelementdependency_operator];
}

ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_FromString(char* field_e_ezsignelementdependency_operator) {
    int stringToReturn = 0;
    char *field_e_ezsignelementdependency_operatorArray[] =  { "NULL", "eq", "neq", "gt", "gte", "lt", "lte", "in", "nin", "rg", "like", "between" };
    size_t sizeofArray = sizeof(field_e_ezsignelementdependency_operatorArray) / sizeof(field_e_ezsignelementdependency_operatorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignelementdependency_operator, field_e_ezsignelementdependency_operatorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_convertToJSON(ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignelementdependency_operator", field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_ToString(field_e_ezsignelementdependency_operator)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_parseFromJSON(cJSON *field_e_ezsignelementdependency_operatorJSON) {
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e *field_e_ezsignelementdependency_operator = NULL;
    ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operatorVariable;
    cJSON *field_e_ezsignelementdependency_operatorVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsignelementdependency_operatorJSON, "field_e_ezsignelementdependency_operator");
    if(!cJSON_IsString(field_e_ezsignelementdependency_operatorVar) || (field_e_ezsignelementdependency_operatorVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsignelementdependency_operatorVariable = field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_FromString(field_e_ezsignelementdependency_operatorVar->valuestring);
    return field_e_ezsignelementdependency_operatorVariable;
end:
    return 0;
}
