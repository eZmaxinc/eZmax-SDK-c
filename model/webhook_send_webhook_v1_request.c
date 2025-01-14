#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_send_webhook_v1_request.h"


char* webhook_send_webhook_v1_request_e_webhook_module_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_module) {
    char* e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    return e_webhook_moduleArray[e_webhook_module];
}

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_module_FromString(char* e_webhook_module){
    int stringToReturn = 0;
    char *e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    size_t sizeofArray = sizeof(e_webhook_moduleArray) / sizeof(e_webhook_moduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_module, e_webhook_moduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* webhook_send_webhook_v1_request_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_ezsignevent) {
    char* e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent" };
    return e_webhook_ezsigneventArray[e_webhook_ezsignevent];
}

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent){
    int stringToReturn = 0;
    char *e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent" };
    size_t sizeofArray = sizeof(e_webhook_ezsigneventArray) / sizeof(e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_ezsignevent, e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* webhook_send_webhook_v1_request_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_managementevent) {
    char* e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    return e_webhook_managementeventArray[e_webhook_managementevent];
}

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_managementevent_FromString(char* e_webhook_managementevent){
    int stringToReturn = 0;
    char *e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    size_t sizeofArray = sizeof(e_webhook_managementeventArray) / sizeof(e_webhook_managementeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_managementevent, e_webhook_managementeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_create(
    field_e_webhook_module_t *e_webhook_module,
    custom_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    int fki_ezsignfolder_id,
    int fki_ezsigndocument_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_userstaged_id
    ) {
    webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_local_var = malloc(sizeof(webhook_send_webhook_v1_request_t));
    if (!webhook_send_webhook_v1_request_local_var) {
        return NULL;
    }
    webhook_send_webhook_v1_request_local_var->e_webhook_module = e_webhook_module;
    webhook_send_webhook_v1_request_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    webhook_send_webhook_v1_request_local_var->e_webhook_managementevent = e_webhook_managementevent;
    webhook_send_webhook_v1_request_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    webhook_send_webhook_v1_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    webhook_send_webhook_v1_request_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    webhook_send_webhook_v1_request_local_var->fki_user_id = fki_user_id;
    webhook_send_webhook_v1_request_local_var->fki_userstaged_id = fki_userstaged_id;

    return webhook_send_webhook_v1_request_local_var;
}


void webhook_send_webhook_v1_request_free(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request) {
    if(NULL == webhook_send_webhook_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_send_webhook_v1_request->e_webhook_module) {
        field_e_webhook_module_free(webhook_send_webhook_v1_request->e_webhook_module);
        webhook_send_webhook_v1_request->e_webhook_module = NULL;
    }
    if (webhook_send_webhook_v1_request->e_webhook_ezsignevent) {
        custom_e_webhook_ezsignevent_free(webhook_send_webhook_v1_request->e_webhook_ezsignevent);
        webhook_send_webhook_v1_request->e_webhook_ezsignevent = NULL;
    }
    if (webhook_send_webhook_v1_request->e_webhook_managementevent) {
        field_e_webhook_managementevent_free(webhook_send_webhook_v1_request->e_webhook_managementevent);
        webhook_send_webhook_v1_request->e_webhook_managementevent = NULL;
    }
    free(webhook_send_webhook_v1_request);
}

cJSON *webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // webhook_send_webhook_v1_request->e_webhook_module
    if (ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL == webhook_send_webhook_v1_request->e_webhook_module) {
        goto fail;
    }
    cJSON *e_webhook_module_local_JSON = field_e_webhook_module_convertToJSON(webhook_send_webhook_v1_request->e_webhook_module);
    if(e_webhook_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookModule", e_webhook_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // webhook_send_webhook_v1_request->e_webhook_ezsignevent
    if(webhook_send_webhook_v1_request->e_webhook_ezsignevent != ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL) {
    cJSON *e_webhook_ezsignevent_local_JSON = custom_e_webhook_ezsignevent_convertToJSON(webhook_send_webhook_v1_request->e_webhook_ezsignevent);
    if(e_webhook_ezsignevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookEzsignevent", e_webhook_ezsignevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_send_webhook_v1_request->e_webhook_managementevent
    if(webhook_send_webhook_v1_request->e_webhook_managementevent != ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL) {
    cJSON *e_webhook_managementevent_local_JSON = field_e_webhook_managementevent_convertToJSON(webhook_send_webhook_v1_request->e_webhook_managementevent);
    if(e_webhook_managementevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookManagementevent", e_webhook_managementevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_send_webhook_v1_request->fki_ezsignfolder_id
    if(webhook_send_webhook_v1_request->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", webhook_send_webhook_v1_request->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_send_webhook_v1_request->fki_ezsigndocument_id
    if(webhook_send_webhook_v1_request->fki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", webhook_send_webhook_v1_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_send_webhook_v1_request->fki_ezsignsigner_id
    if(webhook_send_webhook_v1_request->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", webhook_send_webhook_v1_request->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_send_webhook_v1_request->fki_user_id
    if(webhook_send_webhook_v1_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", webhook_send_webhook_v1_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_send_webhook_v1_request->fki_userstaged_id
    if(webhook_send_webhook_v1_request->fki_userstaged_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserstagedID", webhook_send_webhook_v1_request->fki_userstaged_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_parseFromJSON(cJSON *webhook_send_webhook_v1_requestJSON){

    webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_local_var = NULL;

    // define the local variable for webhook_send_webhook_v1_request->e_webhook_module
    field_e_webhook_module_t *e_webhook_module_local_nonprim = NULL;

    // define the local variable for webhook_send_webhook_v1_request->e_webhook_ezsignevent
    custom_e_webhook_ezsignevent_t *e_webhook_ezsignevent_local_nonprim = NULL;

    // define the local variable for webhook_send_webhook_v1_request->e_webhook_managementevent
    field_e_webhook_managementevent_t *e_webhook_managementevent_local_nonprim = NULL;

    // webhook_send_webhook_v1_request->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "eWebhookModule");
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // webhook_send_webhook_v1_request->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "eWebhookEzsignevent");
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = custom_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // webhook_send_webhook_v1_request->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "eWebhookManagementevent");
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // webhook_send_webhook_v1_request->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "fkiEzsignfolderID");
    if (fki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_send_webhook_v1_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "fkiEzsigndocumentID");
    if (fki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_send_webhook_v1_request->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "fkiEzsignsignerID");
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_send_webhook_v1_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_send_webhook_v1_request->fki_userstaged_id
    cJSON *fki_userstaged_id = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_requestJSON, "fkiUserstagedID");
    if (fki_userstaged_id) { 
    if(!cJSON_IsNumber(fki_userstaged_id))
    {
    goto end; //Numeric
    }
    }


    webhook_send_webhook_v1_request_local_var = webhook_send_webhook_v1_request_create (
        e_webhook_module_local_nonprim,
        e_webhook_ezsignevent ? e_webhook_ezsignevent_local_nonprim : NULL,
        e_webhook_managementevent ? e_webhook_managementevent_local_nonprim : NULL,
        fki_ezsignfolder_id ? fki_ezsignfolder_id->valuedouble : 0,
        fki_ezsigndocument_id ? fki_ezsigndocument_id->valuedouble : 0,
        fki_ezsignsigner_id ? fki_ezsignsigner_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_userstaged_id ? fki_userstaged_id->valuedouble : 0
        );

    return webhook_send_webhook_v1_request_local_var;
end:
    if (e_webhook_module_local_nonprim) {
        field_e_webhook_module_free(e_webhook_module_local_nonprim);
        e_webhook_module_local_nonprim = NULL;
    }
    if (e_webhook_ezsignevent_local_nonprim) {
        custom_e_webhook_ezsignevent_free(e_webhook_ezsignevent_local_nonprim);
        e_webhook_ezsignevent_local_nonprim = NULL;
    }
    if (e_webhook_managementevent_local_nonprim) {
        field_e_webhook_managementevent_free(e_webhook_managementevent_local_nonprim);
        e_webhook_managementevent_local_nonprim = NULL;
    }
    return NULL;

}
