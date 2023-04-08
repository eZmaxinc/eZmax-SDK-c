#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_object_v2_response.h"



usergroup_get_object_v2_response_t *usergroup_get_object_v2_response_create(
    usergroup_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    usergroup_get_object_v2_response_t *usergroup_get_object_v2_response_local_var = malloc(sizeof(usergroup_get_object_v2_response_t));
    if (!usergroup_get_object_v2_response_local_var) {
        return NULL;
    }
    usergroup_get_object_v2_response_local_var->m_payload = m_payload;
    usergroup_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    usergroup_get_object_v2_response_local_var->obj_debug = obj_debug;

    return usergroup_get_object_v2_response_local_var;
}


void usergroup_get_object_v2_response_free(usergroup_get_object_v2_response_t *usergroup_get_object_v2_response) {
    if(NULL == usergroup_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_object_v2_response->m_payload) {
        usergroup_get_object_v2_response_m_payload_free(usergroup_get_object_v2_response->m_payload);
        usergroup_get_object_v2_response->m_payload = NULL;
    }
    if (usergroup_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(usergroup_get_object_v2_response->obj_debug_payload);
        usergroup_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (usergroup_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(usergroup_get_object_v2_response->obj_debug);
        usergroup_get_object_v2_response->obj_debug = NULL;
    }
    free(usergroup_get_object_v2_response);
}

cJSON *usergroup_get_object_v2_response_convertToJSON(usergroup_get_object_v2_response_t *usergroup_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_object_v2_response->m_payload
    if (!usergroup_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = usergroup_get_object_v2_response_m_payload_convertToJSON(usergroup_get_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroup_get_object_v2_response->obj_debug_payload
    if(usergroup_get_object_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(usergroup_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // usergroup_get_object_v2_response->obj_debug
    if(usergroup_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(usergroup_get_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_get_object_v2_response_t *usergroup_get_object_v2_response_parseFromJSON(cJSON *usergroup_get_object_v2_responseJSON){

    usergroup_get_object_v2_response_t *usergroup_get_object_v2_response_local_var = NULL;

    // define the local variable for usergroup_get_object_v2_response->m_payload
    usergroup_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for usergroup_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for usergroup_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // usergroup_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(usergroup_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = usergroup_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // usergroup_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(usergroup_get_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // usergroup_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(usergroup_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    usergroup_get_object_v2_response_local_var = usergroup_get_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return usergroup_get_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        usergroup_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    return NULL;

}
