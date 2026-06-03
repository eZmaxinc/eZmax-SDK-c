#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_send_v1_request.h"



static ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_create_internal(
    char *t_extra_message
    ) {
    ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_local_var = malloc(sizeof(ezsignfolder_send_v1_request_t));
    if (!ezsignfolder_send_v1_request_local_var) {
        return NULL;
    }
    memset(ezsignfolder_send_v1_request_local_var, 0, sizeof(ezsignfolder_send_v1_request_t));
    ezsignfolder_send_v1_request_local_var->_library_owned = 1;
    ezsignfolder_send_v1_request_local_var->t_extra_message = t_extra_message;
    return ezsignfolder_send_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request_create(
    char *t_extra_message
    ) {
    ezsignfolder_send_v1_request_t *result = ezsignfolder_send_v1_request_create_internal (
        t_extra_message
        );
    if (!result) {
    }
    return result;
}

void ezsignfolder_send_v1_request_free(ezsignfolder_send_v1_request_t *ezsignfolder_send_v1_request) {
    if(NULL == ezsignfolder_send_v1_request){
        return ;
    }
    if(ezsignfolder_send_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_send_v1_request_free");
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

    char *t_extra_message_local_str = NULL;

    // ezsignfolder_send_v1_request->t_extra_message
    cJSON *t_extra_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v1_requestJSON, "tExtraMessage");
    if (cJSON_IsNull(t_extra_message)) {
        t_extra_message = NULL;
    }
    if (!t_extra_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_extra_message))
    {
    goto end; //String
    }


    if (t_extra_message && !cJSON_IsNull(t_extra_message)) t_extra_message_local_str = strdup(t_extra_message->valuestring);

    ezsignfolder_send_v1_request_local_var = ezsignfolder_send_v1_request_create_internal (
        t_extra_message_local_str
        );

    if (!ezsignfolder_send_v1_request_local_var) {
        goto end;
    }

    return ezsignfolder_send_v1_request_local_var;
end:
    if (t_extra_message_local_str) {
        free(t_extra_message_local_str);
        t_extra_message_local_str = NULL;
    }
    return NULL;

}
