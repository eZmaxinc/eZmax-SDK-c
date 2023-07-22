#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websocket_response_get_websocket_id_v1_m_payload.h"



websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload_create(
    char *s_websocket_id
    ) {
    websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload_local_var = malloc(sizeof(websocket_response_get_websocket_id_v1_m_payload_t));
    if (!websocket_response_get_websocket_id_v1_m_payload_local_var) {
        return NULL;
    }
    websocket_response_get_websocket_id_v1_m_payload_local_var->s_websocket_id = s_websocket_id;

    return websocket_response_get_websocket_id_v1_m_payload_local_var;
}


void websocket_response_get_websocket_id_v1_m_payload_free(websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload) {
    if(NULL == websocket_response_get_websocket_id_v1_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (websocket_response_get_websocket_id_v1_m_payload->s_websocket_id) {
        free(websocket_response_get_websocket_id_v1_m_payload->s_websocket_id);
        websocket_response_get_websocket_id_v1_m_payload->s_websocket_id = NULL;
    }
    free(websocket_response_get_websocket_id_v1_m_payload);
}

cJSON *websocket_response_get_websocket_id_v1_m_payload_convertToJSON(websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // websocket_response_get_websocket_id_v1_m_payload->s_websocket_id
    if (!websocket_response_get_websocket_id_v1_m_payload->s_websocket_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebsocketID", websocket_response_get_websocket_id_v1_m_payload->s_websocket_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload_parseFromJSON(cJSON *websocket_response_get_websocket_id_v1_m_payloadJSON){

    websocket_response_get_websocket_id_v1_m_payload_t *websocket_response_get_websocket_id_v1_m_payload_local_var = NULL;

    // websocket_response_get_websocket_id_v1_m_payload->s_websocket_id
    cJSON *s_websocket_id = cJSON_GetObjectItemCaseSensitive(websocket_response_get_websocket_id_v1_m_payloadJSON, "sWebsocketID");
    if (!s_websocket_id) {
        goto end;
    }

    
    if(!cJSON_IsString(s_websocket_id))
    {
    goto end; //String
    }


    websocket_response_get_websocket_id_v1_m_payload_local_var = websocket_response_get_websocket_id_v1_m_payload_create (
        strdup(s_websocket_id->valuestring)
        );

    return websocket_response_get_websocket_id_v1_m_payload_local_var;
end:
    return NULL;

}
