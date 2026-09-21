#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_invoice_type.h"


char* field_e_invoice_type_field_e_invoice_type_ToString(ezmax_api_definition__full_field_e_invoice_type__e field_e_invoice_type) {
    char *field_e_invoice_typeArray[] =  { "NULL", "Commission", "CommissionAdvance", "Financed", "Manual", "Monthly" };
    return field_e_invoice_typeArray[field_e_invoice_type];
}

ezmax_api_definition__full_field_e_invoice_type__e field_e_invoice_type_field_e_invoice_type_FromString(char* field_e_invoice_type) {
    int stringToReturn = 0;
    char *field_e_invoice_typeArray[] =  { "NULL", "Commission", "CommissionAdvance", "Financed", "Manual", "Monthly" };
    size_t sizeofArray = sizeof(field_e_invoice_typeArray) / sizeof(field_e_invoice_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_invoice_type, field_e_invoice_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_invoice_type_convertToJSON(ezmax_api_definition__full_field_e_invoice_type__e field_e_invoice_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_invoice_type", field_e_invoice_type_field_e_invoice_type_ToString(field_e_invoice_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_invoice_type__e field_e_invoice_type_parseFromJSON(cJSON *field_e_invoice_typeJSON) {
    if(!cJSON_IsString(field_e_invoice_typeJSON) || (field_e_invoice_typeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_invoice_type_field_e_invoice_type_FromString(field_e_invoice_typeJSON->valuestring);
}
