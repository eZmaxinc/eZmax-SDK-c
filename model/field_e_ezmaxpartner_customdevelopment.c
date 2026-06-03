#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezmaxpartner_customdevelopment.h"


char* field_e_ezmaxpartner_customdevelopment_field_e_ezmaxpartner_customdevelopment_ToString(ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e field_e_ezmaxpartner_customdevelopment) {
    char *field_e_ezmaxpartner_customdevelopmentArray[] =  { "NULL", "", "No", "NotListed", "Listed" };
    return field_e_ezmaxpartner_customdevelopmentArray[field_e_ezmaxpartner_customdevelopment];
}

ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e field_e_ezmaxpartner_customdevelopment_field_e_ezmaxpartner_customdevelopment_FromString(char* field_e_ezmaxpartner_customdevelopment) {
    int stringToReturn = 0;
    char *field_e_ezmaxpartner_customdevelopmentArray[] =  { "NULL", "", "No", "NotListed", "Listed" };
    size_t sizeofArray = sizeof(field_e_ezmaxpartner_customdevelopmentArray) / sizeof(field_e_ezmaxpartner_customdevelopmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezmaxpartner_customdevelopment, field_e_ezmaxpartner_customdevelopmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezmaxpartner_customdevelopment_convertToJSON(ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e field_e_ezmaxpartner_customdevelopment) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezmaxpartner_customdevelopment", field_e_ezmaxpartner_customdevelopment_field_e_ezmaxpartner_customdevelopment_ToString(field_e_ezmaxpartner_customdevelopment)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezmaxpartner_customdevelopment__e field_e_ezmaxpartner_customdevelopment_parseFromJSON(cJSON *field_e_ezmaxpartner_customdevelopmentJSON) {
    if(!cJSON_IsString(field_e_ezmaxpartner_customdevelopmentJSON) || (field_e_ezmaxpartner_customdevelopmentJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezmaxpartner_customdevelopment_field_e_ezmaxpartner_customdevelopment_FromString(field_e_ezmaxpartner_customdevelopmentJSON->valuestring);
}
