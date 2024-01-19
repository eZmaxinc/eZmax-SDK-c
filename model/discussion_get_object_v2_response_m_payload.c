#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_get_object_v2_response_m_payload.h"



discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_create(
    discussion_response_compound_t *obj_discussion
    ) {
    discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_local_var = malloc(sizeof(discussion_get_object_v2_response_m_payload_t));
    if (!discussion_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    discussion_get_object_v2_response_m_payload_local_var->obj_discussion = obj_discussion;

    return discussion_get_object_v2_response_m_payload_local_var;
}


void discussion_get_object_v2_response_m_payload_free(discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload) {
    if(NULL == discussion_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_get_object_v2_response_m_payload->obj_discussion) {
        discussion_response_compound_free(discussion_get_object_v2_response_m_payload->obj_discussion);
        discussion_get_object_v2_response_m_payload->obj_discussion = NULL;
    }
    free(discussion_get_object_v2_response_m_payload);
}

cJSON *discussion_get_object_v2_response_m_payload_convertToJSON(discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // discussion_get_object_v2_response_m_payload->obj_discussion
    if (!discussion_get_object_v2_response_m_payload->obj_discussion) {
        goto fail;
    }
    cJSON *obj_discussion_local_JSON = discussion_response_compound_convertToJSON(discussion_get_object_v2_response_m_payload->obj_discussion);
    if(obj_discussion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDiscussion", obj_discussion_local_JSON);
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

discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_parseFromJSON(cJSON *discussion_get_object_v2_response_m_payloadJSON){

    discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for discussion_get_object_v2_response_m_payload->obj_discussion
    discussion_response_compound_t *obj_discussion_local_nonprim = NULL;

    // discussion_get_object_v2_response_m_payload->obj_discussion
    cJSON *obj_discussion = cJSON_GetObjectItemCaseSensitive(discussion_get_object_v2_response_m_payloadJSON, "objDiscussion");
    if (!obj_discussion) {
        goto end;
    }

    
    obj_discussion_local_nonprim = discussion_response_compound_parseFromJSON(obj_discussion); //nonprimitive


    discussion_get_object_v2_response_m_payload_local_var = discussion_get_object_v2_response_m_payload_create (
        obj_discussion_local_nonprim
        );

    return discussion_get_object_v2_response_m_payload_local_var;
end:
    if (obj_discussion_local_nonprim) {
        discussion_response_compound_free(obj_discussion_local_nonprim);
        obj_discussion_local_nonprim = NULL;
    }
    return NULL;

}
