#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignature_attachmentnamesource.h"


char* field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource) {
    char *field_e_ezsigntemplatesignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    return field_e_ezsigntemplatesignature_attachmentnamesourceArray[field_e_ezsigntemplatesignature_attachmentnamesource];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_FromString(char* field_e_ezsigntemplatesignature_attachmentnamesource) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignature_attachmentnamesourceArray[] =  { "NULL", "Description", "Customer", "DescriptionCustomer" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignature_attachmentnamesourceArray) / sizeof(field_e_ezsigntemplatesignature_attachmentnamesourceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignature_attachmentnamesource, field_e_ezsigntemplatesignature_attachmentnamesourceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignature_attachmentnamesource_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignature_attachmentnamesource", field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_ToString(field_e_ezsigntemplatesignature_attachmentnamesource)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_attachmentnamesourceJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplatesignature_attachmentnamesourceJSON) || (field_e_ezsigntemplatesignature_attachmentnamesourceJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplatesignature_attachmentnamesource_field_e_ezsigntemplatesignature_attachmentnamesource_FromString(field_e_ezsigntemplatesignature_attachmentnamesourceJSON->valuestring);
}
