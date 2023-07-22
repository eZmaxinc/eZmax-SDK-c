#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_decline_to_sign_v1_request.h"



ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_create(
    char *s_reason
    ) {
    ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_local_var = malloc(sizeof(ezsigndocument_decline_to_sign_v1_request_t));
    if (!ezsigndocument_decline_to_sign_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_decline_to_sign_v1_request_local_var->s_reason = s_reason;

    return ezsigndocument_decline_to_sign_v1_request_local_var;
}


void ezsigndocument_decline_to_sign_v1_request_free(ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request) {
    if(NULL == ezsigndocument_decline_to_sign_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_decline_to_sign_v1_request->s_reason) {
        free(ezsigndocument_decline_to_sign_v1_request->s_reason);
        ezsigndocument_decline_to_sign_v1_request->s_reason = NULL;
    }
    free(ezsigndocument_decline_to_sign_v1_request);
}

cJSON *ezsigndocument_decline_to_sign_v1_request_convertToJSON(ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_decline_to_sign_v1_request->s_reason
    if (!ezsigndocument_decline_to_sign_v1_request->s_reason) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sReason", ezsigndocument_decline_to_sign_v1_request->s_reason) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_parseFromJSON(cJSON *ezsigndocument_decline_to_sign_v1_requestJSON){

    ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_local_var = NULL;

    // ezsigndocument_decline_to_sign_v1_request->s_reason
    cJSON *s_reason = cJSON_GetObjectItemCaseSensitive(ezsigndocument_decline_to_sign_v1_requestJSON, "sReason");
    if (!s_reason) {
        goto end;
    }

    
    if(!cJSON_IsString(s_reason))
    {
    goto end; //String
    }


    ezsigndocument_decline_to_sign_v1_request_local_var = ezsigndocument_decline_to_sign_v1_request_create (
        strdup(s_reason->valuestring)
        );

    return ezsigndocument_decline_to_sign_v1_request_local_var;
end:
    return NULL;

}
