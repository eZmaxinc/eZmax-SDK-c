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

cJSON *field_e_webhook_module_field_e_webhook_module_convertToJSON(ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_module", field_e_webhook_module_field_e_webhook_module_ToString(field_e_webhook_module)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module_field_e_webhook_module_parseFromJSON(cJSON *field_e_webhook_moduleJSON) {
    ezmax_api_definition__full_field_e_webhook_module__e *field_e_webhook_module = NULL;
    ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_moduleVariable;
    cJSON *field_e_webhook_moduleVar = cJSON_GetObjectItemCaseSensitive(field_e_webhook_moduleJSON, "field_e_webhook_module");
    if(!cJSON_IsString(field_e_webhook_moduleVar) || (field_e_webhook_moduleVar->valuestring == NULL)){
        goto end;
    }
    field_e_webhook_moduleVariable = field_e_webhook_module_field_e_webhook_module_FromString(field_e_webhook_moduleVar->valuestring);
    return field_e_webhook_moduleVariable;
end:
    return 0;
}
