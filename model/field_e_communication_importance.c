#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communication_importance.h"


char* field_e_communication_importance_field_e_communication_importance_ToString(ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance) {
    char *field_e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
    return field_e_communication_importanceArray[field_e_communication_importance];
}

ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance_field_e_communication_importance_FromString(char* field_e_communication_importance) {
    int stringToReturn = 0;
    char *field_e_communication_importanceArray[] =  { "NULL", "High", "Normal", "Low" };
    size_t sizeofArray = sizeof(field_e_communication_importanceArray) / sizeof(field_e_communication_importanceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communication_importance, field_e_communication_importanceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communication_importance_field_e_communication_importance_convertToJSON(ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communication_importance", field_e_communication_importance_field_e_communication_importance_ToString(field_e_communication_importance)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance_field_e_communication_importance_parseFromJSON(cJSON *field_e_communication_importanceJSON) {
    ezmax_api_definition__full_field_e_communication_importance__e *field_e_communication_importance = NULL;
    ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importanceVariable;
    cJSON *field_e_communication_importanceVar = cJSON_GetObjectItemCaseSensitive(field_e_communication_importanceJSON, "field_e_communication_importance");
    if(!cJSON_IsString(field_e_communication_importanceVar) || (field_e_communication_importanceVar->valuestring == NULL)){
        goto end;
    }
    field_e_communication_importanceVariable = field_e_communication_importance_field_e_communication_importance_FromString(field_e_communication_importanceVar->valuestring);
    return field_e_communication_importanceVariable;
end:
    return 0;
}
