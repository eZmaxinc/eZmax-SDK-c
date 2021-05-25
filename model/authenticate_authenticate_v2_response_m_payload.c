#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticate_authenticate_v2_response_m_payload.h"



authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_create(
    char *s_authorization,
    char *s_secret
    ) {
    authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_local_var = malloc(sizeof(authenticate_authenticate_v2_response_m_payload_t));
    if (!authenticate_authenticate_v2_response_m_payload_local_var) {
        return NULL;
    }
    authenticate_authenticate_v2_response_m_payload_local_var->s_authorization = s_authorization;
    authenticate_authenticate_v2_response_m_payload_local_var->s_secret = s_secret;

    return authenticate_authenticate_v2_response_m_payload_local_var;
}


void authenticate_authenticate_v2_response_m_payload_free(authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload) {
    if(NULL == authenticate_authenticate_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticate_authenticate_v2_response_m_payload->s_authorization) {
        free(authenticate_authenticate_v2_response_m_payload->s_authorization);
        authenticate_authenticate_v2_response_m_payload->s_authorization = NULL;
    }
    if (authenticate_authenticate_v2_response_m_payload->s_secret) {
        free(authenticate_authenticate_v2_response_m_payload->s_secret);
        authenticate_authenticate_v2_response_m_payload->s_secret = NULL;
    }
    free(authenticate_authenticate_v2_response_m_payload);
}

cJSON *authenticate_authenticate_v2_response_m_payload_convertToJSON(authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // authenticate_authenticate_v2_response_m_payload->s_authorization
    if (!authenticate_authenticate_v2_response_m_payload->s_authorization) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sAuthorization", authenticate_authenticate_v2_response_m_payload->s_authorization) == NULL) {
    goto fail; //String
    }


    // authenticate_authenticate_v2_response_m_payload->s_secret
    if (!authenticate_authenticate_v2_response_m_payload->s_secret) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sSecret", authenticate_authenticate_v2_response_m_payload->s_secret) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_parseFromJSON(cJSON *authenticate_authenticate_v2_response_m_payloadJSON){

    authenticate_authenticate_v2_response_m_payload_t *authenticate_authenticate_v2_response_m_payload_local_var = NULL;

    // authenticate_authenticate_v2_response_m_payload->s_authorization
    cJSON *s_authorization = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_response_m_payloadJSON, "sAuthorization");
    if (!s_authorization) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authorization))
    {
    goto end; //String
    }

    // authenticate_authenticate_v2_response_m_payload->s_secret
    cJSON *s_secret = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_response_m_payloadJSON, "sSecret");
    if (!s_secret) {
        goto end;
    }

    
    if(!cJSON_IsString(s_secret))
    {
    goto end; //String
    }


    authenticate_authenticate_v2_response_m_payload_local_var = authenticate_authenticate_v2_response_m_payload_create (
        strdup(s_authorization->valuestring),
        strdup(s_secret->valuestring)
        );

    return authenticate_authenticate_v2_response_m_payload_local_var;
end:
    return NULL;

}
