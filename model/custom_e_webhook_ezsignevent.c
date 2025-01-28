#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_e_webhook_ezsignevent.h"


char* custom_e_webhook_ezsignevent_custom_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_custom_e_webhook_ezsignevent__e custom_e_webhook_ezsignevent) {
    char *custom_e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent" };
    return custom_e_webhook_ezsigneventArray[custom_e_webhook_ezsignevent];
}

ezmax_api_definition__full_custom_e_webhook_ezsignevent__e custom_e_webhook_ezsignevent_custom_e_webhook_ezsignevent_FromString(char* custom_e_webhook_ezsignevent) {
    int stringToReturn = 0;
    char *custom_e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent" };
    size_t sizeofArray = sizeof(custom_e_webhook_ezsigneventArray) / sizeof(custom_e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(custom_e_webhook_ezsignevent, custom_e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *custom_e_webhook_ezsignevent_convertToJSON(ezmax_api_definition__full_custom_e_webhook_ezsignevent__e custom_e_webhook_ezsignevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "custom_e_webhook_ezsignevent", custom_e_webhook_ezsignevent_custom_e_webhook_ezsignevent_ToString(custom_e_webhook_ezsignevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_custom_e_webhook_ezsignevent__e custom_e_webhook_ezsignevent_parseFromJSON(cJSON *custom_e_webhook_ezsigneventJSON) {
    if(!cJSON_IsString(custom_e_webhook_ezsigneventJSON) || (custom_e_webhook_ezsigneventJSON->valuestring == NULL)) {
        return 0;
    }
    return custom_e_webhook_ezsignevent_custom_e_webhook_ezsignevent_FromString(custom_e_webhook_ezsigneventJSON->valuestring);
}
