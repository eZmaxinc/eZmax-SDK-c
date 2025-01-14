#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_pks_ezmaxclient_os.h"


char* field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_ToString(ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os) {
    char *field_pks_ezmaxclient_osArray[] =  { "NULL", "Android", "iOS", "iPadOS", "macOS", "Windows" };
    return field_pks_ezmaxclient_osArray[field_pks_ezmaxclient_os];
}

ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_FromString(char* field_pks_ezmaxclient_os) {
    int stringToReturn = 0;
    char *field_pks_ezmaxclient_osArray[] =  { "NULL", "Android", "iOS", "iPadOS", "macOS", "Windows" };
    size_t sizeofArray = sizeof(field_pks_ezmaxclient_osArray) / sizeof(field_pks_ezmaxclient_osArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_pks_ezmaxclient_os, field_pks_ezmaxclient_osArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_convertToJSON(ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_pks_ezmaxclient_os", field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_ToString(field_pks_ezmaxclient_os)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_parseFromJSON(cJSON *field_pks_ezmaxclient_osJSON) {
    ezmax_api_definition__full_field_pks_ezmaxclient_os__e *field_pks_ezmaxclient_os = NULL;
    ezmax_api_definition__full_field_pks_ezmaxclient_os__e field_pks_ezmaxclient_osVariable;
    cJSON *field_pks_ezmaxclient_osVar = cJSON_GetObjectItemCaseSensitive(field_pks_ezmaxclient_osJSON, "field_pks_ezmaxclient_os");
    if(!cJSON_IsString(field_pks_ezmaxclient_osVar) || (field_pks_ezmaxclient_osVar->valuestring == NULL)){
        goto end;
    }
    field_pks_ezmaxclient_osVariable = field_pks_ezmaxclient_os_field_pks_ezmaxclient_os_FromString(field_pks_ezmaxclient_osVar->valuestring);
    return field_pks_ezmaxclient_osVariable;
end:
    return 0;
}
