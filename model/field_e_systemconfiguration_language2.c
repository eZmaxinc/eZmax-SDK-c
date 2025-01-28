#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_systemconfiguration_language2.h"


char* field_e_systemconfiguration_language2_field_e_systemconfiguration_language2_ToString(ezmax_api_definition__full_field_e_systemconfiguration_language2__e field_e_systemconfiguration_language2) {
    char *field_e_systemconfiguration_language2Array[] =  { "NULL", "en_CA", "en_QC", "en_US" };
    return field_e_systemconfiguration_language2Array[field_e_systemconfiguration_language2];
}

ezmax_api_definition__full_field_e_systemconfiguration_language2__e field_e_systemconfiguration_language2_field_e_systemconfiguration_language2_FromString(char* field_e_systemconfiguration_language2) {
    int stringToReturn = 0;
    char *field_e_systemconfiguration_language2Array[] =  { "NULL", "en_CA", "en_QC", "en_US" };
    size_t sizeofArray = sizeof(field_e_systemconfiguration_language2Array) / sizeof(field_e_systemconfiguration_language2Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_systemconfiguration_language2, field_e_systemconfiguration_language2Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_systemconfiguration_language2_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_language2__e field_e_systemconfiguration_language2) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_systemconfiguration_language2", field_e_systemconfiguration_language2_field_e_systemconfiguration_language2_ToString(field_e_systemconfiguration_language2)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_systemconfiguration_language2__e field_e_systemconfiguration_language2_parseFromJSON(cJSON *field_e_systemconfiguration_language2JSON) {
    if(!cJSON_IsString(field_e_systemconfiguration_language2JSON) || (field_e_systemconfiguration_language2JSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_systemconfiguration_language2_field_e_systemconfiguration_language2_FromString(field_e_systemconfiguration_language2JSON->valuestring);
}
