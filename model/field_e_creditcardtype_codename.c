#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_creditcardtype_codename.h"


char* field_e_creditcardtype_codename_field_e_creditcardtype_codename_ToString(ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename) {
    char *field_e_creditcardtype_codenameArray[] =  { "NULL", "Amex", "Mastercard", "Visa" };
    return field_e_creditcardtype_codenameArray[field_e_creditcardtype_codename];
}

ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename_field_e_creditcardtype_codename_FromString(char* field_e_creditcardtype_codename) {
    int stringToReturn = 0;
    char *field_e_creditcardtype_codenameArray[] =  { "NULL", "Amex", "Mastercard", "Visa" };
    size_t sizeofArray = sizeof(field_e_creditcardtype_codenameArray) / sizeof(field_e_creditcardtype_codenameArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_creditcardtype_codename, field_e_creditcardtype_codenameArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_creditcardtype_codename_convertToJSON(ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_creditcardtype_codename", field_e_creditcardtype_codename_field_e_creditcardtype_codename_ToString(field_e_creditcardtype_codename)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename_parseFromJSON(cJSON *field_e_creditcardtype_codenameJSON) {
    if(!cJSON_IsString(field_e_creditcardtype_codenameJSON) || (field_e_creditcardtype_codenameJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_creditcardtype_codename_field_e_creditcardtype_codename_FromString(field_e_creditcardtype_codenameJSON->valuestring);
}
