#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_send_v1_request.h"



ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_create(
    char *t_extra_message
    ) {
    ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_local_var = malloc(sizeof(ezsignfolder_send_v1_request_t));
    if (!ezsignfolder_send_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_send_v1_request_local_var->t_extra_message = t_extra_message;

    return ezsignfolder_send_v1_request_local_var;
}


void ezsignfolder_send_v1_request_free(ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request) {
    if(NULL == ezsignfolder_send_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_send_v1_request->t_extra_message) {
        free(ezsignfolder_send_v1_request->t_extra_message);
        ezsignfolder_send_v1_request->t_extra_message = NULL;
    }
    free(ezsignfolder_send_v1_request);
}

cJSON *ezsignfolder_send_v1_request_convertToJSON(ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_send_v1_request->t_extra_message
    if (!ezsignfolder_send_v1_request->t_extra_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tExtraMessage", ezsignfolder_send_v1_request->t_extra_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_parseFromJSON(cJSON *ezsignfolder_send_v1_requestJSON){

    ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_local_var = NULL;

    // ezsignfolder_send_v1_request->t_extra_message
    cJSON *t_extra_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v1_requestJSON, "tExtraMessage");
    if (!t_extra_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_extra_message))
    {
    goto end; //String
    }


    ezsignfolder_send_v1_request_local_var = ezsignfolder_send_v1_request_create (
        strdup(t_extra_message->valuestring)
        );

    return ezsignfolder_send_v1_request_local_var;
end:
    return NULL;

}
