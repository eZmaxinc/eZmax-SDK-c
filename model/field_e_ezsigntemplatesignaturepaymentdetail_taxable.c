#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplatesignaturepaymentdetail_taxable.h"


char* field_e_ezsigntemplatesignaturepaymentdetail_taxable_field_e_ezsigntemplatesignaturepaymentdetail_taxable_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e field_e_ezsigntemplatesignaturepaymentdetail_taxable) {
    char *field_e_ezsigntemplatesignaturepaymentdetail_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    return field_e_ezsigntemplatesignaturepaymentdetail_taxableArray[field_e_ezsigntemplatesignaturepaymentdetail_taxable];
}

ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e field_e_ezsigntemplatesignaturepaymentdetail_taxable_field_e_ezsigntemplatesignaturepaymentdetail_taxable_FromString(char* field_e_ezsigntemplatesignaturepaymentdetail_taxable) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplatesignaturepaymentdetail_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplatesignaturepaymentdetail_taxableArray) / sizeof(field_e_ezsigntemplatesignaturepaymentdetail_taxableArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplatesignaturepaymentdetail_taxable, field_e_ezsigntemplatesignaturepaymentdetail_taxableArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplatesignaturepaymentdetail_taxable_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e field_e_ezsigntemplatesignaturepaymentdetail_taxable) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplatesignaturepaymentdetail_taxable", field_e_ezsigntemplatesignaturepaymentdetail_taxable_field_e_ezsigntemplatesignaturepaymentdetail_taxable_ToString(field_e_ezsigntemplatesignaturepaymentdetail_taxable)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e field_e_ezsigntemplatesignaturepaymentdetail_taxable_parseFromJSON(cJSON *field_e_ezsigntemplatesignaturepaymentdetail_taxableJSON) {
    if(!cJSON_IsString(field_e_ezsigntemplatesignaturepaymentdetail_taxableJSON) || (field_e_ezsigntemplatesignaturepaymentdetail_taxableJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_ezsigntemplatesignaturepaymentdetail_taxable_field_e_ezsigntemplatesignaturepaymentdetail_taxable_FromString(field_e_ezsigntemplatesignaturepaymentdetail_taxableJSON->valuestring);
}
