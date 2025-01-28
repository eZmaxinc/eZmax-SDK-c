#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsignsignature_consultationtrigger.h"


char* field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_ToString(ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger) {
    char *field_e_ezsignsignature_consultationtriggerArray[] =  { "NULL", "Automatic", "Manual" };
    return field_e_ezsignsignature_consultationtriggerArray[field_e_ezsignsignature_consultationtrigger];
}

ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_FromString(char* field_e_ezsignsignature_consultationtrigger) {
    int stringToReturn = 0;
    char *field_e_ezsignsignature_consultationtriggerArray[] =  { "NULL", "Automatic", "Manual" };
    size_t sizeofArray = sizeof(field_e_ezsignsignature_consultationtriggerArray) / sizeof(field_e_ezsignsignature_consultationtriggerArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsignsignature_consultationtrigger, field_e_ezsignsignature_consultationtriggerArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsignsignature_consultationtrigger_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsignsignature_consultationtrigger", field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_ToString(field_e_ezsignsignature_consultationtrigger)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger_parseFromJSON(cJSON *field_e_ezsignsignature_consultationtriggerJSON) {
    if(!cJSON_IsString(field_e_ezsignsignature_consultationtriggerJSON) || (field_e_ezsignsignature_consultationtriggerJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_FromString(field_e_ezsignsignature_consultationtriggerJSON->valuestring);
}
