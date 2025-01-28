#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_systemconfiguration_language1.h"


char* field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_ToString(ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1) {
    char *field_e_systemconfiguration_language1Array[] =  { "NULL", "fr_QC" };
    return field_e_systemconfiguration_language1Array[field_e_systemconfiguration_language1];
}

ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_FromString(char* field_e_systemconfiguration_language1) {
    int stringToReturn = 0;
    char *field_e_systemconfiguration_language1Array[] =  { "NULL", "fr_QC" };
    size_t sizeofArray = sizeof(field_e_systemconfiguration_language1Array) / sizeof(field_e_systemconfiguration_language1Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_systemconfiguration_language1, field_e_systemconfiguration_language1Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_systemconfiguration_language1_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_systemconfiguration_language1", field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_ToString(field_e_systemconfiguration_language1)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1_parseFromJSON(cJSON *field_e_systemconfiguration_language1JSON) {
    if(!cJSON_IsString(field_e_systemconfiguration_language1JSON) || (field_e_systemconfiguration_language1JSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_FromString(field_e_systemconfiguration_language1JSON->valuestring);
}
