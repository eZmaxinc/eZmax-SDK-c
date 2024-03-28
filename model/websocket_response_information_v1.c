#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websocket_response_information_v1.h"


char* websocket_response_information_v1_e_websocket_messagetype_ToString(ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype) {
    char* e_websocket_messagetypeArray[] =  { "NULL", "Response-Information-V1" };
    return e_websocket_messagetypeArray[e_websocket_messagetype];
}

ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e websocket_response_information_v1_e_websocket_messagetype_FromString(char* e_websocket_messagetype){
    int stringToReturn = 0;
    char *e_websocket_messagetypeArray[] =  { "NULL", "Response-Information-V1" };
    size_t sizeofArray = sizeof(e_websocket_messagetypeArray) / sizeof(e_websocket_messagetypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_websocket_messagetype, e_websocket_messagetypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

websocket_response_information_v1_t *websocket_response_information_v1_create(
    ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype,
    char *s_websocket_channel,
    websocket_response_information_v1_m_payload_t *m_payload
    ) {
    websocket_response_information_v1_t *websocket_response_information_v1_local_var = malloc(sizeof(websocket_response_information_v1_t));
    if (!websocket_response_information_v1_local_var) {
        return NULL;
    }
    websocket_response_information_v1_local_var->e_websocket_messagetype = e_websocket_messagetype;
    websocket_response_information_v1_local_var->s_websocket_channel = s_websocket_channel;
    websocket_response_information_v1_local_var->m_payload = m_payload;

    return websocket_response_information_v1_local_var;
}


void websocket_response_information_v1_free(websocket_response_information_v1_t *websocket_response_information_v1) {
    if(NULL == websocket_response_information_v1){
        return ;
    }
    listEntry_t *listEntry;
    if (websocket_response_information_v1->s_websocket_channel) {
        free(websocket_response_information_v1->s_websocket_channel);
        websocket_response_information_v1->s_websocket_channel = NULL;
    }
    if (websocket_response_information_v1->m_payload) {
        websocket_response_information_v1_m_payload_free(websocket_response_information_v1->m_payload);
        websocket_response_information_v1->m_payload = NULL;
    }
    free(websocket_response_information_v1);
}

cJSON *websocket_response_information_v1_convertToJSON(websocket_response_information_v1_t *websocket_response_information_v1) {
    cJSON *item = cJSON_CreateObject();

    // websocket_response_information_v1->e_websocket_messagetype
    if (ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_NULL == websocket_response_information_v1->e_websocket_messagetype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eWebsocketMessagetype", e_websocket_messagetypewebsocket_response_information_v1_ToString(websocket_response_information_v1->e_websocket_messagetype)) == NULL)
    {
    goto fail; //Enum
    }


    // websocket_response_information_v1->s_websocket_channel
    if (!websocket_response_information_v1->s_websocket_channel) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebsocketChannel", websocket_response_information_v1->s_websocket_channel) == NULL) {
    goto fail; //String
    }


    // websocket_response_information_v1->m_payload
    if (!websocket_response_information_v1->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = websocket_response_information_v1_m_payload_convertToJSON(websocket_response_information_v1->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
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

websocket_response_information_v1_t *websocket_response_information_v1_parseFromJSON(cJSON *websocket_response_information_v1JSON){

    websocket_response_information_v1_t *websocket_response_information_v1_local_var = NULL;

    // define the local variable for websocket_response_information_v1->m_payload
    websocket_response_information_v1_m_payload_t *m_payload_local_nonprim = NULL;

    // websocket_response_information_v1->e_websocket_messagetype
    cJSON *e_websocket_messagetype = cJSON_GetObjectItemCaseSensitive(websocket_response_information_v1JSON, "eWebsocketMessagetype");
    if (!e_websocket_messagetype) {
        goto end;
    }

    ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetypeVariable;
    
    if(!cJSON_IsString(e_websocket_messagetype))
    {
    goto end; //Enum
    }
    e_websocket_messagetypeVariable = websocket_response_information_v1_e_websocket_messagetype_FromString(e_websocket_messagetype->valuestring);

    // websocket_response_information_v1->s_websocket_channel
    cJSON *s_websocket_channel = cJSON_GetObjectItemCaseSensitive(websocket_response_information_v1JSON, "sWebsocketChannel");
    if (!s_websocket_channel) {
        goto end;
    }

    
    if(!cJSON_IsString(s_websocket_channel))
    {
    goto end; //String
    }

    // websocket_response_information_v1->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(websocket_response_information_v1JSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = websocket_response_information_v1_m_payload_parseFromJSON(m_payload); //nonprimitive


    websocket_response_information_v1_local_var = websocket_response_information_v1_create (
        e_websocket_messagetypeVariable,
        strdup(s_websocket_channel->valuestring),
        m_payload_local_nonprim
        );

    return websocket_response_information_v1_local_var;
end:
    if (m_payload_local_nonprim) {
        websocket_response_information_v1_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
