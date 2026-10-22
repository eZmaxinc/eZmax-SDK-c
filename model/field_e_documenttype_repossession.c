#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_repossession.h"


char* field_e_documenttype_repossession_field_e_documenttype_repossession_ToString(ezmax_api_definition__full_field_e_documenttype_repossession__e field_e_documenttype_repossession) {
    char *field_e_documenttype_repossessionArray[] =  { "NULL", "All", "No", "Yes" };
    return field_e_documenttype_repossessionArray[field_e_documenttype_repossession];
}

ezmax_api_definition__full_field_e_documenttype_repossession__e field_e_documenttype_repossession_field_e_documenttype_repossession_FromString(char* field_e_documenttype_repossession) {
    int stringToReturn = 0;
    char *field_e_documenttype_repossessionArray[] =  { "NULL", "All", "No", "Yes" };
    size_t sizeofArray = sizeof(field_e_documenttype_repossessionArray) / sizeof(field_e_documenttype_repossessionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_repossession, field_e_documenttype_repossessionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_repossession_convertToJSON(ezmax_api_definition__full_field_e_documenttype_repossession__e field_e_documenttype_repossession) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_repossession", field_e_documenttype_repossession_field_e_documenttype_repossession_ToString(field_e_documenttype_repossession)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_repossession__e field_e_documenttype_repossession_parseFromJSON(cJSON *field_e_documenttype_repossessionJSON) {
    if(!cJSON_IsString(field_e_documenttype_repossessionJSON) || (field_e_documenttype_repossessionJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_repossession_field_e_documenttype_repossession_FromString(field_e_documenttype_repossessionJSON->valuestring);
}
