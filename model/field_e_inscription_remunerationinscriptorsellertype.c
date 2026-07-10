#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_inscription_remunerationinscriptorsellertype.h"


char* field_e_inscription_remunerationinscriptorsellertype_field_e_inscription_remunerationinscriptorsellertype_ToString(ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e field_e_inscription_remunerationinscriptorsellertype) {
    char *field_e_inscription_remunerationinscriptorsellertypeArray[] =  { "NULL", "Percentage", "Dollars" };
    return field_e_inscription_remunerationinscriptorsellertypeArray[field_e_inscription_remunerationinscriptorsellertype];
}

ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e field_e_inscription_remunerationinscriptorsellertype_field_e_inscription_remunerationinscriptorsellertype_FromString(char* field_e_inscription_remunerationinscriptorsellertype) {
    int stringToReturn = 0;
    char *field_e_inscription_remunerationinscriptorsellertypeArray[] =  { "NULL", "Percentage", "Dollars" };
    size_t sizeofArray = sizeof(field_e_inscription_remunerationinscriptorsellertypeArray) / sizeof(field_e_inscription_remunerationinscriptorsellertypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_inscription_remunerationinscriptorsellertype, field_e_inscription_remunerationinscriptorsellertypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_inscription_remunerationinscriptorsellertype_convertToJSON(ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e field_e_inscription_remunerationinscriptorsellertype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_inscription_remunerationinscriptorsellertype", field_e_inscription_remunerationinscriptorsellertype_field_e_inscription_remunerationinscriptorsellertype_ToString(field_e_inscription_remunerationinscriptorsellertype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_inscription_remunerationinscriptorsellertype__e field_e_inscription_remunerationinscriptorsellertype_parseFromJSON(cJSON *field_e_inscription_remunerationinscriptorsellertypeJSON) {
    if(!cJSON_IsString(field_e_inscription_remunerationinscriptorsellertypeJSON) || (field_e_inscription_remunerationinscriptorsellertypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_inscription_remunerationinscriptorsellertype_field_e_inscription_remunerationinscriptorsellertype_FromString(field_e_inscription_remunerationinscriptorsellertypeJSON->valuestring);
}
