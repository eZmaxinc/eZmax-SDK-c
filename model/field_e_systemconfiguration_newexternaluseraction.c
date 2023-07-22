#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_systemconfiguration_newexternaluseraction.h"


char* field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_ToString(ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e field_e_systemconfiguration_newexternaluseraction) {
    char *field_e_systemconfiguration_newexternaluseractionArray[] =  { "NULL", "Stage", "AutoCreate" };
    return field_e_systemconfiguration_newexternaluseractionArray[field_e_systemconfiguration_newexternaluseraction];
}

ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_FromString(char* field_e_systemconfiguration_newexternaluseraction) {
    int stringToReturn = 0;
    char *field_e_systemconfiguration_newexternaluseractionArray[] =  { "NULL", "Stage", "AutoCreate" };
    size_t sizeofArray = sizeof(field_e_systemconfiguration_newexternaluseractionArray) / sizeof(field_e_systemconfiguration_newexternaluseractionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_systemconfiguration_newexternaluseraction, field_e_systemconfiguration_newexternaluseractionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e field_e_systemconfiguration_newexternaluseraction) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_systemconfiguration_newexternaluseraction", field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_ToString(field_e_systemconfiguration_newexternaluseraction)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_parseFromJSON(cJSON *field_e_systemconfiguration_newexternaluseractionJSON) {
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e *field_e_systemconfiguration_newexternaluseraction = NULL;
    ezmax_api_definition__full_field_e_systemconfiguration_newexternaluseraction__e field_e_systemconfiguration_newexternaluseractionVariable;
    cJSON *field_e_systemconfiguration_newexternaluseractionVar = cJSON_GetObjectItemCaseSensitive(field_e_systemconfiguration_newexternaluseractionJSON, "field_e_systemconfiguration_newexternaluseraction");
    if(!cJSON_IsString(field_e_systemconfiguration_newexternaluseractionVar) || (field_e_systemconfiguration_newexternaluseractionVar->valuestring == NULL)){
        goto end;
    }
    field_e_systemconfiguration_newexternaluseractionVariable = field_e_systemconfiguration_newexternaluseraction_field_e_systemconfiguration_newexternaluseraction_FromString(field_e_systemconfiguration_newexternaluseractionVar->valuestring);
    return field_e_systemconfiguration_newexternaluseractionVariable;
end:
    return 0;
}
