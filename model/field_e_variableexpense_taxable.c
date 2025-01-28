#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_variableexpense_taxable.h"


char* field_e_variableexpense_taxable_field_e_variableexpense_taxable_ToString(ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable) {
    char *field_e_variableexpense_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    return field_e_variableexpense_taxableArray[field_e_variableexpense_taxable];
}

ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable_field_e_variableexpense_taxable_FromString(char* field_e_variableexpense_taxable) {
    int stringToReturn = 0;
    char *field_e_variableexpense_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    size_t sizeofArray = sizeof(field_e_variableexpense_taxableArray) / sizeof(field_e_variableexpense_taxableArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_variableexpense_taxable, field_e_variableexpense_taxableArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_variableexpense_taxable_convertToJSON(ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_variableexpense_taxable", field_e_variableexpense_taxable_field_e_variableexpense_taxable_ToString(field_e_variableexpense_taxable)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable_parseFromJSON(cJSON *field_e_variableexpense_taxableJSON) {
    if(!cJSON_IsString(field_e_variableexpense_taxableJSON) || (field_e_variableexpense_taxableJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_variableexpense_taxable_field_e_variableexpense_taxable_FromString(field_e_variableexpense_taxableJSON->valuestring);
}
