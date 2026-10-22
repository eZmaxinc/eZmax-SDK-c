#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_documenttype_transactiontype.h"


char* field_e_documenttype_transactiontype_field_e_documenttype_transactiontype_ToString(ezmax_api_definition__full_field_e_documenttype_transactiontype__e field_e_documenttype_transactiontype) {
    char *field_e_documenttype_transactiontypeArray[] =  { "NULL", "All", "Inscriptor", "InscriptorOnly", "Seller", "SellerOnly", "InscriptorSeller" };
    return field_e_documenttype_transactiontypeArray[field_e_documenttype_transactiontype];
}

ezmax_api_definition__full_field_e_documenttype_transactiontype__e field_e_documenttype_transactiontype_field_e_documenttype_transactiontype_FromString(char* field_e_documenttype_transactiontype) {
    int stringToReturn = 0;
    char *field_e_documenttype_transactiontypeArray[] =  { "NULL", "All", "Inscriptor", "InscriptorOnly", "Seller", "SellerOnly", "InscriptorSeller" };
    size_t sizeofArray = sizeof(field_e_documenttype_transactiontypeArray) / sizeof(field_e_documenttype_transactiontypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_documenttype_transactiontype, field_e_documenttype_transactiontypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_documenttype_transactiontype_convertToJSON(ezmax_api_definition__full_field_e_documenttype_transactiontype__e field_e_documenttype_transactiontype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_documenttype_transactiontype", field_e_documenttype_transactiontype_field_e_documenttype_transactiontype_ToString(field_e_documenttype_transactiontype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_documenttype_transactiontype__e field_e_documenttype_transactiontype_parseFromJSON(cJSON *field_e_documenttype_transactiontypeJSON) {
    if(!cJSON_IsString(field_e_documenttype_transactiontypeJSON) || (field_e_documenttype_transactiontypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_documenttype_transactiontype_field_e_documenttype_transactiontype_FromString(field_e_documenttype_transactiontypeJSON->valuestring);
}
