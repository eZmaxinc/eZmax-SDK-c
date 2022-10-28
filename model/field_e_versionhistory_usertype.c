#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_versionhistory_usertype.h"


char* field_e_versionhistory_usertype_field_e_versionhistory_usertype_ToString(ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype) {
    char *field_e_versionhistory_usertypeArray[] =  { "NULL", "", "AgentBroker", "EzsignUser", "Normal" };
    return field_e_versionhistory_usertypeArray[field_e_versionhistory_usertype];
}

ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype_field_e_versionhistory_usertype_FromString(char* field_e_versionhistory_usertype) {
    int stringToReturn = 0;
    char *field_e_versionhistory_usertypeArray[] =  { "NULL", "", "AgentBroker", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(field_e_versionhistory_usertypeArray) / sizeof(field_e_versionhistory_usertypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_versionhistory_usertype, field_e_versionhistory_usertypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_versionhistory_usertype_field_e_versionhistory_usertype_convertToJSON(ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_versionhistory_usertype", field_e_versionhistory_usertype_field_e_versionhistory_usertype_ToString(field_e_versionhistory_usertype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertype_field_e_versionhistory_usertype_parseFromJSON(cJSON *field_e_versionhistory_usertypeJSON) {
    ezmax_api_definition__full_field_e_versionhistory_usertype__e *field_e_versionhistory_usertype = NULL;
    ezmax_api_definition__full_field_e_versionhistory_usertype__e field_e_versionhistory_usertypeVariable;
    cJSON *field_e_versionhistory_usertypeVar = cJSON_GetObjectItemCaseSensitive(field_e_versionhistory_usertypeJSON, "field_e_versionhistory_usertype");
    if(!cJSON_IsString(field_e_versionhistory_usertypeVar) || (field_e_versionhistory_usertypeVar->valuestring == NULL)){
        goto end;
    }
    field_e_versionhistory_usertypeVariable = field_e_versionhistory_usertype_field_e_versionhistory_usertype_FromString(field_e_versionhistory_usertypeVar->valuestring);
    return field_e_versionhistory_usertypeVariable;
end:
    return 0;
}
