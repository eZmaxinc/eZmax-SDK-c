#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_chat_v1_200_response.h"



static discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_create_internal(
    char *event,
    char *data
    ) {
    discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_local_var = malloc(sizeof(discussion_chat_v1_200_response_t));
    if (!discussion_chat_v1_200_response_local_var) {
        return NULL;
    }
    discussion_chat_v1_200_response_local_var->event = event;
    discussion_chat_v1_200_response_local_var->data = data;

    discussion_chat_v1_200_response_local_var->_library_owned = 1;
    return discussion_chat_v1_200_response_local_var;
}

__attribute__((deprecated)) discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_create(
    char *event,
    char *data
    ) {
    return discussion_chat_v1_200_response_create_internal (
        event,
        data
        );
}

void discussion_chat_v1_200_response_free(discussion_chat_v1_200_response_t *discussion_chat_v1_200_response) {
    if(NULL == discussion_chat_v1_200_response){
        return ;
    }
    if(discussion_chat_v1_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_chat_v1_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_chat_v1_200_response->event) {
        free(discussion_chat_v1_200_response->event);
        discussion_chat_v1_200_response->event = NULL;
    }
    if (discussion_chat_v1_200_response->data) {
        free(discussion_chat_v1_200_response->data);
        discussion_chat_v1_200_response->data = NULL;
    }
    free(discussion_chat_v1_200_response);
}

cJSON *discussion_chat_v1_200_response_convertToJSON(discussion_chat_v1_200_response_t *discussion_chat_v1_200_response) {
    cJSON *item = cJSON_CreateObject();

    // discussion_chat_v1_200_response->event
    if(discussion_chat_v1_200_response->event) {
    if(cJSON_AddStringToObject(item, "event", discussion_chat_v1_200_response->event) == NULL) {
    goto fail; //String
    }
    }


    // discussion_chat_v1_200_response->data
    if(discussion_chat_v1_200_response->data) {
    if(cJSON_AddStringToObject(item, "data", discussion_chat_v1_200_response->data) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_parseFromJSON(cJSON *discussion_chat_v1_200_responseJSON){

    discussion_chat_v1_200_response_t *discussion_chat_v1_200_response_local_var = NULL;

    // discussion_chat_v1_200_response->event
    cJSON *event = cJSON_GetObjectItemCaseSensitive(discussion_chat_v1_200_responseJSON, "event");
    if (cJSON_IsNull(event)) {
        event = NULL;
    }
    if (event) { 
    if(!cJSON_IsString(event) && !cJSON_IsNull(event))
    {
    goto end; //String
    }
    }

    // discussion_chat_v1_200_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(discussion_chat_v1_200_responseJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }


    discussion_chat_v1_200_response_local_var = discussion_chat_v1_200_response_create_internal (
        event && !cJSON_IsNull(event) ? strdup(event->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL
        );

    return discussion_chat_v1_200_response_local_var;
end:
    return NULL;

}
