#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_salebyowner.h"


char* field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_ToString(ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner) {
    char *field_e_documenttype_salebyownerArray[] =  { "NULL", "All", "Yes", "No" };
    return field_e_documenttype_salebyownerArray[field_e_documenttype_salebyowner];
}

ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_FromString(char* field_e_documenttype_salebyowner) {
    int stringToReturn = 0;
    char *field_e_documenttype_salebyownerArray[] =  { "NULL", "All", "Yes", "No" };
    size_t sizeofArray = sizeof(field_e_documenttype_salebyownerArray) / sizeof(field_e_documenttype_salebyownerArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_salebyowner, field_e_documenttype_salebyownerArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_salebyowner_convertToJSON(ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_salebyowner", field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_ToString(field_e_documenttype_salebyowner)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner_parseFromJSON(cJSON *field_e_documenttype_salebyownerJSON) {
    if(!cJSON_IsString(field_e_documenttype_salebyownerJSON) || (field_e_documenttype_salebyownerJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_FromString(field_e_documenttype_salebyownerJSON->valuestring);
}
