#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_systemconfiguration_ezsignofficeplan.h"


char* field_e_systemconfiguration_ezsignofficeplan_field_e_systemconfiguration_ezsignofficeplan_ToString(ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e field_e_systemconfiguration_ezsignofficeplan) {
    char *field_e_systemconfiguration_ezsignofficeplanArray[] =  { "NULL", "Standard", "Pro" };
    return field_e_systemconfiguration_ezsignofficeplanArray[field_e_systemconfiguration_ezsignofficeplan];
}

ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e field_e_systemconfiguration_ezsignofficeplan_field_e_systemconfiguration_ezsignofficeplan_FromString(char* field_e_systemconfiguration_ezsignofficeplan) {
    int stringToReturn = 0;
    char *field_e_systemconfiguration_ezsignofficeplanArray[] =  { "NULL", "Standard", "Pro" };
    size_t sizeofArray = sizeof(field_e_systemconfiguration_ezsignofficeplanArray) / sizeof(field_e_systemconfiguration_ezsignofficeplanArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_systemconfiguration_ezsignofficeplan, field_e_systemconfiguration_ezsignofficeplanArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_systemconfiguration_ezsignofficeplan_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e field_e_systemconfiguration_ezsignofficeplan) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_systemconfiguration_ezsignofficeplan", field_e_systemconfiguration_ezsignofficeplan_field_e_systemconfiguration_ezsignofficeplan_ToString(field_e_systemconfiguration_ezsignofficeplan)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_systemconfiguration_ezsignofficeplan__e field_e_systemconfiguration_ezsignofficeplan_parseFromJSON(cJSON *field_e_systemconfiguration_ezsignofficeplanJSON) {
    if(!cJSON_IsString(field_e_systemconfiguration_ezsignofficeplanJSON) || (field_e_systemconfiguration_ezsignofficeplanJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_systemconfiguration_ezsignofficeplan_field_e_systemconfiguration_ezsignofficeplan_FromString(field_e_systemconfiguration_ezsignofficeplanJSON->valuestring);
}
