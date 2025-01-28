#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websocket_response_information_v1_m_payload.h"



static websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_create_internal(
    char *s_information_message
    ) {
    websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_local_var = malloc(sizeof(websocket_response_information_v1_m_payload_t));
    if (!websocket_response_information_v1_m_payload_local_var) {
        return NULL;
    }
    websocket_response_information_v1_m_payload_local_var->s_information_message = s_information_message;

    websocket_response_information_v1_m_payload_local_var->_library_owned = 1;
    return websocket_response_information_v1_m_payload_local_var;
}

__attribute__((deprecated)) websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_create(
    char *s_information_message
    ) {
    return websocket_response_information_v1_m_payload_create_internal (
        s_information_message
        );
}

void websocket_response_information_v1_m_payload_free(websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload) {
    if(NULL == websocket_response_information_v1_m_payload){
        return ;
    }
    if(websocket_response_information_v1_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websocket_response_information_v1_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websocket_response_information_v1_m_payload->s_information_message) {
        free(websocket_response_information_v1_m_payload->s_information_message);
        websocket_response_information_v1_m_payload->s_information_message = NULL;
    }
    free(websocket_response_information_v1_m_payload);
}

cJSON *websocket_response_information_v1_m_payload_convertToJSON(websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // websocket_response_information_v1_m_payload->s_information_message
    if (!websocket_response_information_v1_m_payload->s_information_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInformationMessage", websocket_response_information_v1_m_payload->s_information_message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_parseFromJSON(cJSON *websocket_response_information_v1_m_payloadJSON){

    websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_local_var = NULL;

    // websocket_response_information_v1_m_payload->s_information_message
    cJSON *s_information_message = cJSON_GetObjectItemCaseSensitive(websocket_response_information_v1_m_payloadJSON, "sInformationMessage");
    if (cJSON_IsNull(s_information_message)) {
        s_information_message = NULL;
    }
    if (!s_information_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_information_message))
    {
    goto end; //String
    }


    websocket_response_information_v1_m_payload_local_var = websocket_response_information_v1_m_payload_create_internal (
        strdup(s_information_message->valuestring)
        );

    return websocket_response_information_v1_m_payload_local_var;
end:
    return NULL;

}
