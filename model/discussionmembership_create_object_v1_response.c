#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_create_object_v1_response.h"



discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    discussionmembership_create_object_v1_response_m_payload_t *m_payload
    ) {
    discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_local_var = malloc(sizeof(discussionmembership_create_object_v1_response_t));
    if (!discussionmembership_create_object_v1_response_local_var) {
        return NULL;
    }
    discussionmembership_create_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    discussionmembership_create_object_v1_response_local_var->obj_debug = obj_debug;
    discussionmembership_create_object_v1_response_local_var->m_payload = m_payload;

    return discussionmembership_create_object_v1_response_local_var;
}


void discussionmembership_create_object_v1_response_free(discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response) {
    if(NULL == discussionmembership_create_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_create_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(discussionmembership_create_object_v1_response->obj_debug_payload);
        discussionmembership_create_object_v1_response->obj_debug_payload = NULL;
    }
    if (discussionmembership_create_object_v1_response->obj_debug) {
        common_response_obj_debug_free(discussionmembership_create_object_v1_response->obj_debug);
        discussionmembership_create_object_v1_response->obj_debug = NULL;
    }
    if (discussionmembership_create_object_v1_response->m_payload) {
        discussionmembership_create_object_v1_response_m_payload_free(discussionmembership_create_object_v1_response->m_payload);
        discussionmembership_create_object_v1_response->m_payload = NULL;
    }
    free(discussionmembership_create_object_v1_response);
}

cJSON *discussionmembership_create_object_v1_response_convertToJSON(discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_create_object_v1_response->obj_debug_payload
    if (!discussionmembership_create_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(discussionmembership_create_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // discussionmembership_create_object_v1_response->obj_debug
    if(discussionmembership_create_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(discussionmembership_create_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // discussionmembership_create_object_v1_response->m_payload
    if (!discussionmembership_create_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = discussionmembership_create_object_v1_response_m_payload_convertToJSON(discussionmembership_create_object_v1_response->m_payload);
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

discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_parseFromJSON(cJSON *discussionmembership_create_object_v1_responseJSON){

    discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_local_var = NULL;

    // define the local variable for discussionmembership_create_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for discussionmembership_create_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for discussionmembership_create_object_v1_response->m_payload
    discussionmembership_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // discussionmembership_create_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(discussionmembership_create_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // discussionmembership_create_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(discussionmembership_create_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // discussionmembership_create_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(discussionmembership_create_object_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = discussionmembership_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    discussionmembership_create_object_v1_response_local_var = discussionmembership_create_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return discussionmembership_create_object_v1_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    if (m_payload_local_nonprim) {
        discussionmembership_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
