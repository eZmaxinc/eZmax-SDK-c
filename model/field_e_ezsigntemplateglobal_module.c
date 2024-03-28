#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_ezsigntemplateglobal_module.h"


char* field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_ToString(ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module) {
    char *field_e_ezsigntemplateglobal_moduleArray[] =  { "NULL", "All", "Inscription" };
    return field_e_ezsigntemplateglobal_moduleArray[field_e_ezsigntemplateglobal_module];
}

ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_FromString(char* field_e_ezsigntemplateglobal_module) {
    int stringToReturn = 0;
    char *field_e_ezsigntemplateglobal_moduleArray[] =  { "NULL", "All", "Inscription" };
    size_t sizeofArray = sizeof(field_e_ezsigntemplateglobal_moduleArray) / sizeof(field_e_ezsigntemplateglobal_moduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_ezsigntemplateglobal_module, field_e_ezsigntemplateglobal_moduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_ezsigntemplateglobal_module", field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_ToString(field_e_ezsigntemplateglobal_module)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_parseFromJSON(cJSON *field_e_ezsigntemplateglobal_moduleJSON) {
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e *field_e_ezsigntemplateglobal_module = NULL;
    ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_moduleVariable;
    cJSON *field_e_ezsigntemplateglobal_moduleVar = cJSON_GetObjectItemCaseSensitive(field_e_ezsigntemplateglobal_moduleJSON, "field_e_ezsigntemplateglobal_module");
    if(!cJSON_IsString(field_e_ezsigntemplateglobal_moduleVar) || (field_e_ezsigntemplateglobal_moduleVar->valuestring == NULL)){
        goto end;
    }
    field_e_ezsigntemplateglobal_moduleVariable = field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_FromString(field_e_ezsigntemplateglobal_moduleVar->valuestring);
    return field_e_ezsigntemplateglobal_moduleVariable;
end:
    return 0;
}
