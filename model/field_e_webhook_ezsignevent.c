#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_webhook_ezsignevent.h"


char* field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent) {
    char *field_e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent", "SignatureSigned" };
    return field_e_webhook_ezsigneventArray[field_e_webhook_ezsignevent];
}

ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_FromString(char* field_e_webhook_ezsignevent) {
    int stringToReturn = 0;
    char *field_e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent", "SignatureSigned" };
    size_t sizeofArray = sizeof(field_e_webhook_ezsigneventArray) / sizeof(field_e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_webhook_ezsignevent, field_e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_webhook_ezsignevent_convertToJSON(ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_webhook_ezsignevent", field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_ToString(field_e_webhook_ezsignevent)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_webhook_ezsignevent__e field_e_webhook_ezsignevent_parseFromJSON(cJSON *field_e_webhook_ezsigneventJSON) {
    if(!cJSON_IsString(field_e_webhook_ezsigneventJSON) || (field_e_webhook_ezsigneventJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_webhook_ezsignevent_field_e_webhook_ezsignevent_FromString(field_e_webhook_ezsigneventJSON->valuestring);
}
