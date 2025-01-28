#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websocket_response_error_v1_m_payload.h"



static websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_create_internal(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code
    ) {
    websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_local_var = malloc(sizeof(websocket_response_error_v1_m_payload_t));
    if (!websocket_response_error_v1_m_payload_local_var) {
        return NULL;
    }
    websocket_response_error_v1_m_payload_local_var->s_error_message = s_error_message;
    websocket_response_error_v1_m_payload_local_var->e_error_code = e_error_code;

    websocket_response_error_v1_m_payload_local_var->_library_owned = 1;
    return websocket_response_error_v1_m_payload_local_var;
}

__attribute__((deprecated)) websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code
    ) {
    return websocket_response_error_v1_m_payload_create_internal (
        s_error_message,
        e_error_code
        );
}

void websocket_response_error_v1_m_payload_free(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload) {
    if(NULL == websocket_response_error_v1_m_payload){
        return ;
    }
    if(websocket_response_error_v1_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websocket_response_error_v1_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websocket_response_error_v1_m_payload->s_error_message) {
        free(websocket_response_error_v1_m_payload->s_error_message);
        websocket_response_error_v1_m_payload->s_error_message = NULL;
    }
    free(websocket_response_error_v1_m_payload);
}

cJSON *websocket_response_error_v1_m_payload_convertToJSON(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // websocket_response_error_v1_m_payload->s_error_message
    if (!websocket_response_error_v1_m_payload->s_error_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sErrorMessage", websocket_response_error_v1_m_payload->s_error_message) == NULL) {
    goto fail; //String
    }


    // websocket_response_error_v1_m_payload->e_error_code
    if (ezmax_api_definition__full_field_e_error_code__NULL == websocket_response_error_v1_m_payload->e_error_code) {
        goto fail;
    }
    cJSON *e_error_code_local_JSON = field_e_error_code_convertToJSON(websocket_response_error_v1_m_payload->e_error_code);
    if(e_error_code_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eErrorCode", e_error_code_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_parseFromJSON(cJSON *websocket_response_error_v1_m_payloadJSON){

    websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_local_var = NULL;

    // define the local variable for websocket_response_error_v1_m_payload->e_error_code
    ezmax_api_definition__full_field_e_error_code__e e_error_code_local_nonprim = 0;

    // websocket_response_error_v1_m_payload->s_error_message
    cJSON *s_error_message = cJSON_GetObjectItemCaseSensitive(websocket_response_error_v1_m_payloadJSON, "sErrorMessage");
    if (cJSON_IsNull(s_error_message)) {
        s_error_message = NULL;
    }
    if (!s_error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_error_message))
    {
    goto end; //String
    }

    // websocket_response_error_v1_m_payload->e_error_code
    cJSON *e_error_code = cJSON_GetObjectItemCaseSensitive(websocket_response_error_v1_m_payloadJSON, "eErrorCode");
    if (cJSON_IsNull(e_error_code)) {
        e_error_code = NULL;
    }
    if (!e_error_code) {
        goto end;
    }

    
    e_error_code_local_nonprim = field_e_error_code_parseFromJSON(e_error_code); //custom


    websocket_response_error_v1_m_payload_local_var = websocket_response_error_v1_m_payload_create_internal (
        strdup(s_error_message->valuestring),
        e_error_code_local_nonprim
        );

    return websocket_response_error_v1_m_payload_local_var;
end:
    if (e_error_code_local_nonprim) {
        e_error_code_local_nonprim = 0;
    }
    return NULL;

}
