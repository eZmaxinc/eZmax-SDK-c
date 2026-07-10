#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_inscription_remunerationtotaltype.h"


char* field_e_inscription_remunerationtotaltype_field_e_inscription_remunerationtotaltype_ToString(ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e field_e_inscription_remunerationtotaltype) {
    char *field_e_inscription_remunerationtotaltypeArray[] =  { "NULL", "Percentage", "Dollars" };
    return field_e_inscription_remunerationtotaltypeArray[field_e_inscription_remunerationtotaltype];
}

ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e field_e_inscription_remunerationtotaltype_field_e_inscription_remunerationtotaltype_FromString(char* field_e_inscription_remunerationtotaltype) {
    int stringToReturn = 0;
    char *field_e_inscription_remunerationtotaltypeArray[] =  { "NULL", "Percentage", "Dollars" };
    size_t sizeofArray = sizeof(field_e_inscription_remunerationtotaltypeArray) / sizeof(field_e_inscription_remunerationtotaltypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_inscription_remunerationtotaltype, field_e_inscription_remunerationtotaltypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_inscription_remunerationtotaltype_convertToJSON(ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e field_e_inscription_remunerationtotaltype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_inscription_remunerationtotaltype", field_e_inscription_remunerationtotaltype_field_e_inscription_remunerationtotaltype_ToString(field_e_inscription_remunerationtotaltype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_inscription_remunerationtotaltype__e field_e_inscription_remunerationtotaltype_parseFromJSON(cJSON *field_e_inscription_remunerationtotaltypeJSON) {
    if(!cJSON_IsString(field_e_inscription_remunerationtotaltypeJSON) || (field_e_inscription_remunerationtotaltypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_inscription_remunerationtotaltype_field_e_inscription_remunerationtotaltype_FromString(field_e_inscription_remunerationtotaltypeJSON->valuestring);
}
