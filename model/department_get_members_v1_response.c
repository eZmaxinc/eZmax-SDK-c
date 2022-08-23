#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_get_members_v1_response.h"



department_get_members_v1_response_t *department_get_members_v1_response_create(
    department_get_members_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    department_get_members_v1_response_t *department_get_members_v1_response_local_var = malloc(sizeof(department_get_members_v1_response_t));
    if (!department_get_members_v1_response_local_var) {
        return NULL;
    }
    department_get_members_v1_response_local_var->m_payload = m_payload;
    department_get_members_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    department_get_members_v1_response_local_var->obj_debug = obj_debug;

    return department_get_members_v1_response_local_var;
}


void department_get_members_v1_response_free(department_get_members_v1_response_t *department_get_members_v1_response) {
    if(NULL == department_get_members_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (department_get_members_v1_response->m_payload) {
        department_get_members_v1_response_m_payload_free(department_get_members_v1_response->m_payload);
        department_get_members_v1_response->m_payload = NULL;
    }
    if (department_get_members_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(department_get_members_v1_response->obj_debug_payload);
        department_get_members_v1_response->obj_debug_payload = NULL;
    }
    if (department_get_members_v1_response->obj_debug) {
        common_response_obj_debug_free(department_get_members_v1_response->obj_debug);
        department_get_members_v1_response->obj_debug = NULL;
    }
    free(department_get_members_v1_response);
}

cJSON *department_get_members_v1_response_convertToJSON(department_get_members_v1_response_t *department_get_members_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // department_get_members_v1_response->m_payload
    if (!department_get_members_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // department_get_members_v1_response->obj_debug_payload
    if(department_get_members_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(department_get_members_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // department_get_members_v1_response->obj_debug
    if(department_get_members_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(department_get_members_v1_response->obj_debug);
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

department_get_members_v1_response_t *department_get_members_v1_response_parseFromJSON(cJSON *department_get_members_v1_responseJSON){

    department_get_members_v1_response_t *department_get_members_v1_response_local_var = NULL;

    // define the local variable for department_get_members_v1_response->m_payload
    department_get_members_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for department_get_members_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for department_get_members_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // department_get_members_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = department_get_members_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // department_get_members_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // department_get_members_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    department_get_members_v1_response_local_var = department_get_members_v1_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return department_get_members_v1_response_local_var;
end:
    if (m_payload_local_nonprim) {
        department_get_members_v1_response_m_payload_free(m_payload_local_nonprim);
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
