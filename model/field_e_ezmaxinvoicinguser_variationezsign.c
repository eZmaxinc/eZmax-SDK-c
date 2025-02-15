#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezmaxinvoicinguser_variationezsign.h"


char* field_e_ezmaxinvoicinguser_variationezsign_field_e_ezmaxinvoicinguser_variationezsign_ToString(ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e field_e_ezmaxinvoicinguser_variationezsign) {
    char *field_e_ezmaxinvoicinguser_variationezsignArray[] =  { "NULL", "Charge", "Refund", "Same" };
    return field_e_ezmaxinvoicinguser_variationezsignArray[field_e_ezmaxinvoicinguser_variationezsign];
}

ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e field_e_ezmaxinvoicinguser_variationezsign_field_e_ezmaxinvoicinguser_variationezsign_FromString(char* field_e_ezmaxinvoicinguser_variationezsign) {
    int stringToReturn = 0;
    char *field_e_ezmaxinvoicinguser_variationezsignArray[] =  { "NULL", "Charge", "Refund", "Same" };
    size_t sizeofArray = sizeof(field_e_ezmaxinvoicinguser_variationezsignArray) / sizeof(field_e_ezmaxinvoicinguser_variationezsignArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezmaxinvoicinguser_variationezsign, field_e_ezmaxinvoicinguser_variationezsignArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezmaxinvoicinguser_variationezsign_convertToJSON(ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e field_e_ezmaxinvoicinguser_variationezsign) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezmaxinvoicinguser_variationezsign", field_e_ezmaxinvoicinguser_variationezsign_field_e_ezmaxinvoicinguser_variationezsign_ToString(field_e_ezmaxinvoicinguser_variationezsign)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e field_e_ezmaxinvoicinguser_variationezsign_parseFromJSON(cJSON *field_e_ezmaxinvoicinguser_variationezsignJSON) {
    if(!cJSON_IsString(field_e_ezmaxinvoicinguser_variationezsignJSON) || (field_e_ezmaxinvoicinguser_variationezsignJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezmaxinvoicinguser_variationezsign_field_e_ezmaxinvoicinguser_variationezsign_FromString(field_e_ezmaxinvoicinguser_variationezsignJSON->valuestring);
}
