#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_customer_marketingcorrespondence.h"


char* field_e_customer_marketingcorrespondence_field_e_customer_marketingcorrespondence_ToString(ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e field_e_customer_marketingcorrespondence) {
    char *field_e_customer_marketingcorrespondenceArray[] =  { "NULL", "No", "Email", "Mail", "Any" };
    return field_e_customer_marketingcorrespondenceArray[field_e_customer_marketingcorrespondence];
}

ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e field_e_customer_marketingcorrespondence_field_e_customer_marketingcorrespondence_FromString(char* field_e_customer_marketingcorrespondence) {
    int stringToReturn = 0;
    char *field_e_customer_marketingcorrespondenceArray[] =  { "NULL", "No", "Email", "Mail", "Any" };
    size_t sizeofArray = sizeof(field_e_customer_marketingcorrespondenceArray) / sizeof(field_e_customer_marketingcorrespondenceArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_customer_marketingcorrespondence, field_e_customer_marketingcorrespondenceArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_customer_marketingcorrespondence_convertToJSON(ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e field_e_customer_marketingcorrespondence) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_customer_marketingcorrespondence", field_e_customer_marketingcorrespondence_field_e_customer_marketingcorrespondence_ToString(field_e_customer_marketingcorrespondence)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_customer_marketingcorrespondence__e field_e_customer_marketingcorrespondence_parseFromJSON(cJSON *field_e_customer_marketingcorrespondenceJSON) {
    if(!cJSON_IsString(field_e_customer_marketingcorrespondenceJSON) || (field_e_customer_marketingcorrespondenceJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_customer_marketingcorrespondence_field_e_customer_marketingcorrespondence_FromString(field_e_customer_marketingcorrespondenceJSON->valuestring);
}
