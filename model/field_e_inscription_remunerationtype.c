#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_inscription_remunerationtype.h"


char* field_e_inscription_remunerationtype_field_e_inscription_remunerationtype_ToString(ezmax_api_definition__full_field_e_inscription_remunerationtype__e field_e_inscription_remunerationtype) {
    char *field_e_inscription_remunerationtypeArray[] =  { "NULL", "Percentage", "Dollars" };
    return field_e_inscription_remunerationtypeArray[field_e_inscription_remunerationtype];
}

ezmax_api_definition__full_field_e_inscription_remunerationtype__e field_e_inscription_remunerationtype_field_e_inscription_remunerationtype_FromString(char* field_e_inscription_remunerationtype) {
    int stringToReturn = 0;
    char *field_e_inscription_remunerationtypeArray[] =  { "NULL", "Percentage", "Dollars" };
    size_t sizeofArray = sizeof(field_e_inscription_remunerationtypeArray) / sizeof(field_e_inscription_remunerationtypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_inscription_remunerationtype, field_e_inscription_remunerationtypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_inscription_remunerationtype_convertToJSON(ezmax_api_definition__full_field_e_inscription_remunerationtype__e field_e_inscription_remunerationtype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_inscription_remunerationtype", field_e_inscription_remunerationtype_field_e_inscription_remunerationtype_ToString(field_e_inscription_remunerationtype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_inscription_remunerationtype__e field_e_inscription_remunerationtype_parseFromJSON(cJSON *field_e_inscription_remunerationtypeJSON) {
    if(!cJSON_IsString(field_e_inscription_remunerationtypeJSON) || (field_e_inscription_remunerationtypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_inscription_remunerationtype_field_e_inscription_remunerationtype_FromString(field_e_inscription_remunerationtypeJSON->valuestring);
}
