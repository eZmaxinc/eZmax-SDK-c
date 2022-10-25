#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezmaxinvoicing_paymenttype.h"


char* field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_ToString(ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype) {
    char *field_e_ezmaxinvoicing_paymenttypeArray[] =  { "NULL", "Cheque", "CreditCard", "DirectDebit" };
    return field_e_ezmaxinvoicing_paymenttypeArray[field_e_ezmaxinvoicing_paymenttype];
}

ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_FromString(char* field_e_ezmaxinvoicing_paymenttype) {
    int stringToReturn = 0;
    char *field_e_ezmaxinvoicing_paymenttypeArray[] =  { "NULL", "Cheque", "CreditCard", "DirectDebit" };
    size_t sizeofArray = sizeof(field_e_ezmaxinvoicing_paymenttypeArray) / sizeof(field_e_ezmaxinvoicing_paymenttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezmaxinvoicing_paymenttype, field_e_ezmaxinvoicing_paymenttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_convertToJSON(ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezmaxinvoicing_paymenttype", field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_ToString(field_e_ezmaxinvoicing_paymenttype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_parseFromJSON(cJSON *field_e_ezmaxinvoicing_paymenttypeJSON) {
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e *field_e_ezmaxinvoicing_paymenttype = NULL;
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttypeVariable;
    cJSON *field_e_ezmaxinvoicing_paymenttypeVar = cJSON_GetObjectItemCaseSensitive(field_e_ezmaxinvoicing_paymenttypeJSON, "field_e_ezmaxinvoicing_paymenttype");
    if(!cJSON_IsString(field_e_ezmaxinvoicing_paymenttypeVar) || (field_e_ezmaxinvoicing_paymenttypeVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezmaxinvoicing_paymenttypeVariable = field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_FromString(field_e_ezmaxinvoicing_paymenttypeVar->valuestring);
    return field_e_ezmaxinvoicing_paymenttypeVariable;
end:
    return 0;
}
