#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignature_signaturepadrequired.h"


char* field_e_ezsigntemplatesignature_signaturepadrequired_field_e_ezsigntemplatesignature_signaturepadrequired_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e field_e_ezsigntemplatesignature_signaturepadrequired) {
    char *field_e_ezsigntemplatesignature_signaturepadrequiredArray[] =  { "NULL", "No", "BestEffort", "Mandatory" };
    return field_e_ezsigntemplatesignature_signaturepadrequiredArray[field_e_ezsigntemplatesignature_signaturepadrequired];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e field_e_ezsigntemplatesignature_signaturepadrequired_field_e_ezsigntemplatesignature_signaturepadrequired_FromString(char* field_e_ezsigntemplatesignature_signaturepadrequired) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignature_signaturepadrequiredArray[] =  { "NULL", "No", "BestEffort", "Mandatory" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignature_signaturepadrequiredArray) / sizeof(field_e_ezsigntemplatesignature_signaturepadrequiredArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignature_signaturepadrequired, field_e_ezsigntemplatesignature_signaturepadrequiredArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignature_signaturepadrequired_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e field_e_ezsigntemplatesignature_signaturepadrequired) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignature_signaturepadrequired", field_e_ezsigntemplatesignature_signaturepadrequired_field_e_ezsigntemplatesignature_signaturepadrequired_ToString(field_e_ezsigntemplatesignature_signaturepadrequired)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e field_e_ezsigntemplatesignature_signaturepadrequired_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_signaturepadrequiredJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplatesignature_signaturepadrequiredJSON) || (field_e_ezsigntemplatesignature_signaturepadrequiredJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplatesignature_signaturepadrequired_field_e_ezsigntemplatesignature_signaturepadrequired_FromString(field_e_ezsigntemplatesignature_signaturepadrequiredJSON->valuestring);
}
