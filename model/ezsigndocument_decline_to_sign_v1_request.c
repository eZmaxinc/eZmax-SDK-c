#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_decline_to_sign_v1_request.h"



static ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_create_internal(
    char *s_reason
    ) {
    ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_local_var = malloc(sizeof(ezsigndocument_decline_to_sign_v1_request_t));
    if (!ezsigndocument_decline_to_sign_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigndocument_decline_to_sign_v1_request_local_var, 0, sizeof(ezsigndocument_decline_to_sign_v1_request_t));
    ezsigndocument_decline_to_sign_v1_request_local_var->_library_owned = 1;
    ezsigndocument_decline_to_sign_v1_request_local_var->s_reason = s_reason;
    return ezsigndocument_decline_to_sign_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request_create(
    char *s_reason
    ) {
    ezsigndocument_decline_to_sign_v1_request_t *result = ezsigndocument_decline_to_sign_v1_request_create_internal (
        s_reason
        );
    if (!result) {
    }
    return result;
}

void ezsigndocument_decline_to_sign_v1_request_free(ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request) {
    if(NULL == ezsigndocument_decline_to_sign_v1_request){
        return ;
    }
    if(ezsigndocument_decline_to_sign_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_decline_to_sign_v1_request_free");
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

    char *s_reason_local_str = NULL;

    // ezsigndocument_decline_to_sign_v1_request->s_reason
    cJSON *s_reason = cJSON_GetObjectItemCaseSensitive(ezsigndocument_decline_to_sign_v1_requestJSON, "sReason");
    if (cJSON_IsNull(s_reason)) {
        s_reason = NULL;
    }
    if (!s_reason) {
        goto end;
    }

    
    if(!cJSON_IsString(s_reason))
    {
    goto end; //String
    }


    if (s_reason && !cJSON_IsNull(s_reason)) s_reason_local_str = strdup(s_reason->valuestring);

    ezsigndocument_decline_to_sign_v1_request_local_var = ezsigndocument_decline_to_sign_v1_request_create_internal (
        s_reason_local_str
        );

    if (!ezsigndocument_decline_to_sign_v1_request_local_var) {
        goto end;
    }

    return ezsigndocument_decline_to_sign_v1_request_local_var;
end:
    if (s_reason_local_str) {
        free(s_reason_local_str);
        s_reason_local_str = NULL;
    }
    return NULL;

}
