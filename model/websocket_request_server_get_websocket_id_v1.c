#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websocket_request_server_get_websocket_id_v1.h"


char* e_websocket_messagetypewebsocket_request_server_get_websocket_id_v1_ToString(ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype) {
    char* e_websocket_messagetypeArray[] =  { "NULL", "RequestServer-GetWebsocketID-V1" };
    return e_websocket_messagetypeArray[e_websocket_messagetype];
}

ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetypewebsocket_request_server_get_websocket_id_v1_FromString(char* e_websocket_messagetype){
    int stringToReturn = 0;
    char *e_websocket_messagetypeArray[] =  { "NULL", "RequestServer-GetWebsocketID-V1" };
    size_t sizeofArray = sizeof(e_websocket_messagetypeArray) / sizeof(e_websocket_messagetypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_websocket_messagetype, e_websocket_messagetypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_create(
    ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype
    ) {
    websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_local_var = malloc(sizeof(websocket_request_server_get_websocket_id_v1_t));
    if (!websocket_request_server_get_websocket_id_v1_local_var) {
        return NULL;
    }
    websocket_request_server_get_websocket_id_v1_local_var->e_websocket_messagetype = e_websocket_messagetype;

    return websocket_request_server_get_websocket_id_v1_local_var;
}


void websocket_request_server_get_websocket_id_v1_free(websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1) {
    if(NULL == websocket_request_server_get_websocket_id_v1){
        return ;
    }
    listEntry_t *listEntry;
    free(websocket_request_server_get_websocket_id_v1);
}

cJSON *websocket_request_server_get_websocket_id_v1_convertToJSON(websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1) {
    cJSON *item = cJSON_CreateObject();

    // websocket_request_server_get_websocket_id_v1->e_websocket_messagetype
    if (ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_NULL == websocket_request_server_get_websocket_id_v1->e_websocket_messagetype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eWebsocketMessagetype", e_websocket_messagetypewebsocket_request_server_get_websocket_id_v1_ToString(websocket_request_server_get_websocket_id_v1->e_websocket_messagetype)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_parseFromJSON(cJSON *websocket_request_server_get_websocket_id_v1JSON){

    websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_local_var = NULL;

    // websocket_request_server_get_websocket_id_v1->e_websocket_messagetype
    cJSON *e_websocket_messagetype = cJSON_GetObjectItemCaseSensitive(websocket_request_server_get_websocket_id_v1JSON, "eWebsocketMessagetype");
    if (!e_websocket_messagetype) {
        goto end;
    }

    ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetypeVariable;
    
    if(!cJSON_IsString(e_websocket_messagetype))
    {
    goto end; //Enum
    }
    e_websocket_messagetypeVariable = e_websocket_messagetypewebsocket_request_server_get_websocket_id_v1_FromString(e_websocket_messagetype->valuestring);


    websocket_request_server_get_websocket_id_v1_local_var = websocket_request_server_get_websocket_id_v1_create (
        e_websocket_messagetypeVariable
        );

    return websocket_request_server_get_websocket_id_v1_local_var;
end:
    return NULL;

}
