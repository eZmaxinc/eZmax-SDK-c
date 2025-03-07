#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_paymentgateway_processor.h"


char* field_e_paymentgateway_processor_field_e_paymentgateway_processor_ToString(ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor) {
    char *field_e_paymentgateway_processorArray[] =  { "NULL", "Moneris" };
    return field_e_paymentgateway_processorArray[field_e_paymentgateway_processor];
}

ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor_field_e_paymentgateway_processor_FromString(char* field_e_paymentgateway_processor) {
    int stringToReturn = 0;
    char *field_e_paymentgateway_processorArray[] =  { "NULL", "Moneris" };
    size_t sizeofArray = sizeof(field_e_paymentgateway_processorArray) / sizeof(field_e_paymentgateway_processorArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_paymentgateway_processor, field_e_paymentgateway_processorArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_paymentgateway_processor_convertToJSON(ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_paymentgateway_processor", field_e_paymentgateway_processor_field_e_paymentgateway_processor_ToString(field_e_paymentgateway_processor)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor_parseFromJSON(cJSON *field_e_paymentgateway_processorJSON) {
    if(!cJSON_IsString(field_e_paymentgateway_processorJSON) || (field_e_paymentgateway_processorJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_paymentgateway_processor_field_e_paymentgateway_processor_FromString(field_e_paymentgateway_processorJSON->valuestring);
}
