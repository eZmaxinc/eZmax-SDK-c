#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_module.h"


char* field_e_webhook_module_field_e_webhook_module_ToString(ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module) {
    char *field_e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    return field_e_webhook_moduleArray[field_e_webhook_module];
}

ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module_field_e_webhook_module_FromString(char* field_e_webhook_module) {
    int stringToReturn = 0;
    char *field_e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    size_t sizeofArray = sizeof(field_e_webhook_moduleArray) / sizeof(field_e_webhook_moduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_module, field_e_webhook_moduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_module_convertToJSON(ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_module", field_e_webhook_module_field_e_webhook_module_ToString(field_e_webhook_module)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module_parseFromJSON(cJSON *field_e_webhook_moduleJSON) {
    if(!cJSON_IsString(field_e_webhook_moduleJSON) || (field_e_webhook_moduleJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_webhook_module_field_e_webhook_module_FromString(field_e_webhook_moduleJSON->valuestring);
}
