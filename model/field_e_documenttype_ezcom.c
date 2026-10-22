#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_ezcom.h"


char* field_e_documenttype_ezcom_field_e_documenttype_ezcom_ToString(ezmax_api_definition__full_field_e_documenttype_ezcom__e field_e_documenttype_ezcom) {
    char *field_e_documenttype_ezcomArray[] =  { "NULL", "PromiseToPurchase", "Annex", "Modification", "CounterOffer", "Conditions", "BankApproval", "Other" };
    return field_e_documenttype_ezcomArray[field_e_documenttype_ezcom];
}

ezmax_api_definition__full_field_e_documenttype_ezcom__e field_e_documenttype_ezcom_field_e_documenttype_ezcom_FromString(char* field_e_documenttype_ezcom) {
    int stringToReturn = 0;
    char *field_e_documenttype_ezcomArray[] =  { "NULL", "PromiseToPurchase", "Annex", "Modification", "CounterOffer", "Conditions", "BankApproval", "Other" };
    size_t sizeofArray = sizeof(field_e_documenttype_ezcomArray) / sizeof(field_e_documenttype_ezcomArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_ezcom, field_e_documenttype_ezcomArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_ezcom_convertToJSON(ezmax_api_definition__full_field_e_documenttype_ezcom__e field_e_documenttype_ezcom) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_ezcom", field_e_documenttype_ezcom_field_e_documenttype_ezcom_ToString(field_e_documenttype_ezcom)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_ezcom__e field_e_documenttype_ezcom_parseFromJSON(cJSON *field_e_documenttype_ezcomJSON) {
    if(!cJSON_IsString(field_e_documenttype_ezcomJSON) || (field_e_documenttype_ezcomJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_ezcom_field_e_documenttype_ezcom_FromString(field_e_documenttype_ezcomJSON->valuestring);
}
