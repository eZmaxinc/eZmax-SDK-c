#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_inscriptiontemp_status.h"


char* field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_ToString(ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status) {
    char *field_e_inscriptiontemp_statusArray[] =  { "NULL", "Imported", "Processed", "Modified" };
    return field_e_inscriptiontemp_statusArray[field_e_inscriptiontemp_status];
}

ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_FromString(char* field_e_inscriptiontemp_status) {
    int stringToReturn = 0;
    char *field_e_inscriptiontemp_statusArray[] =  { "NULL", "Imported", "Processed", "Modified" };
    size_t sizeofArray = sizeof(field_e_inscriptiontemp_statusArray) / sizeof(field_e_inscriptiontemp_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_inscriptiontemp_status, field_e_inscriptiontemp_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_inscriptiontemp_status_convertToJSON(ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_inscriptiontemp_status", field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_ToString(field_e_inscriptiontemp_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_inscriptiontemp_status__e field_e_inscriptiontemp_status_parseFromJSON(cJSON *field_e_inscriptiontemp_statusJSON) {
    if(!cJSON_IsString(field_e_inscriptiontemp_statusJSON) || (field_e_inscriptiontemp_statusJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_inscriptiontemp_status_field_e_inscriptiontemp_status_FromString(field_e_inscriptiontemp_statusJSON->valuestring);
}
