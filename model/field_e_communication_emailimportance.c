#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_communication_emailimportance.h"


char* field_e_communication_emailimportance_field_e_communication_emailimportance_ToString(ezmax_api_definition__full_field_e_communication_emailimportance__e field_e_communication_emailimportance) {
    char *field_e_communication_emailimportanceArray[] =  { "NULL", "High", "Normal", "Low" };
    return field_e_communication_emailimportanceArray[field_e_communication_emailimportance];
}

ezmax_api_definition__full_field_e_communication_emailimportance__e field_e_communication_emailimportance_field_e_communication_emailimportance_FromString(char* field_e_communication_emailimportance) {
    int stringToReturn = 0;
    char *field_e_communication_emailimportanceArray[] =  { "NULL", "High", "Normal", "Low" };
    size_t sizeofArray = sizeof(field_e_communication_emailimportanceArray) / sizeof(field_e_communication_emailimportanceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_communication_emailimportance, field_e_communication_emailimportanceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_communication_emailimportance_field_e_communication_emailimportance_convertToJSON(ezmax_api_definition__full_field_e_communication_emailimportance__e field_e_communication_emailimportance) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_communication_emailimportance", field_e_communication_emailimportance_field_e_communication_emailimportance_ToString(field_e_communication_emailimportance)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_communication_emailimportance__e field_e_communication_emailimportance_field_e_communication_emailimportance_parseFromJSON(cJSON *field_e_communication_emailimportanceJSON) {
    ezmax_api_definition__full_field_e_communication_emailimportance__e *field_e_communication_emailimportance = NULL;
    ezmax_api_definition__full_field_e_communication_emailimportance__e field_e_communication_emailimportanceVariable;
    cJSON *field_e_communication_emailimportanceVar = cJSON_GetObjectItemCaseSensitive(field_e_communication_emailimportanceJSON, "field_e_communication_emailimportance");
    if(!cJSON_IsString(field_e_communication_emailimportanceVar) || (field_e_communication_emailimportanceVar->valuestring == NULL)){
        goto end;
    }
    field_e_communication_emailimportanceVariable = field_e_communication_emailimportance_field_e_communication_emailimportance_FromString(field_e_communication_emailimportanceVar->valuestring);
    return field_e_communication_emailimportanceVariable;
end:
    return 0;
}
