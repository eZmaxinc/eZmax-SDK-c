#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emailtype_get_autocomplete_v2_response.h"



static emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_local_var = malloc(sizeof(emailtype_get_autocomplete_v2_response_t));
    if (!emailtype_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    emailtype_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    emailtype_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    emailtype_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    emailtype_get_autocomplete_v2_response_local_var->_library_owned = 1;
    return emailtype_get_autocomplete_v2_response_local_var;
}

__attribute__((deprecated)) emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    return emailtype_get_autocomplete_v2_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void emailtype_get_autocomplete_v2_response_free(emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response) {
    if(NULL == emailtype_get_autocomplete_v2_response){
        return ;
    }
    if(emailtype_get_autocomplete_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "emailtype_get_autocomplete_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (emailtype_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(emailtype_get_autocomplete_v2_response->obj_debug_payload);
        emailtype_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (emailtype_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(emailtype_get_autocomplete_v2_response->obj_debug);
        emailtype_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (emailtype_get_autocomplete_v2_response->m_payload) {
        emailtype_get_autocomplete_v2_response_m_payload_free(emailtype_get_autocomplete_v2_response->m_payload);
        emailtype_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(emailtype_get_autocomplete_v2_response);
}

cJSON *emailtype_get_autocomplete_v2_response_convertToJSON(emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // emailtype_get_autocomplete_v2_response->obj_debug_payload
    if (!emailtype_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(emailtype_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // emailtype_get_autocomplete_v2_response->obj_debug
    if(emailtype_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(emailtype_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // emailtype_get_autocomplete_v2_response->m_payload
    if (!emailtype_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response->m_payload);
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

emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_parseFromJSON(cJSON *emailtype_get_autocomplete_v2_responseJSON){

    emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for emailtype_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for emailtype_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for emailtype_get_autocomplete_v2_response->m_payload
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // emailtype_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(emailtype_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // emailtype_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(emailtype_get_autocomplete_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // emailtype_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(emailtype_get_autocomplete_v2_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = emailtype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    emailtype_get_autocomplete_v2_response_local_var = emailtype_get_autocomplete_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return emailtype_get_autocomplete_v2_response_local_var;
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
        emailtype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
