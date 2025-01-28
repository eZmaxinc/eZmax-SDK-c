#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateglobal_supplier.h"


char* field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_ToString(ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier) {
    char *field_e_ezsigntemplateglobal_supplierArray[] =  { "NULL", "Centris", "Webforms", "GHACQ" };
    return field_e_ezsigntemplateglobal_supplierArray[field_e_ezsigntemplateglobal_supplier];
}

ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_FromString(char* field_e_ezsigntemplateglobal_supplier) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateglobal_supplierArray[] =  { "NULL", "Centris", "Webforms", "GHACQ" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateglobal_supplierArray) / sizeof(field_e_ezsigntemplateglobal_supplierArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateglobal_supplier, field_e_ezsigntemplateglobal_supplierArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateglobal_supplier_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateglobal_supplier", field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_ToString(field_e_ezsigntemplateglobal_supplier)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateglobal_supplier__e field_e_ezsigntemplateglobal_supplier_parseFromJSON(cJSON *field_e_ezsigntemplateglobal_supplierJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplateglobal_supplierJSON) || (field_e_ezsigntemplateglobal_supplierJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplateglobal_supplier_field_e_ezsigntemplateglobal_supplier_FromString(field_e_ezsigntemplateglobal_supplierJSON->valuestring);
}
