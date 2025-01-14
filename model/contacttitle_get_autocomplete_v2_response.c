#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "contacttitle_get_autocomplete_v2_response.h"



contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    contacttitle_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_local_var = malloc(sizeof(contacttitle_get_autocomplete_v2_response_t));
    if (!contacttitle_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    contacttitle_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    contacttitle_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    contacttitle_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    return contacttitle_get_autocomplete_v2_response_local_var;
}


void contacttitle_get_autocomplete_v2_response_free(contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response) {
    if(NULL == contacttitle_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (contacttitle_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(contacttitle_get_autocomplete_v2_response->obj_debug_payload);
        contacttitle_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (contacttitle_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(contacttitle_get_autocomplete_v2_response->obj_debug);
        contacttitle_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (contacttitle_get_autocomplete_v2_response->m_payload) {
        contacttitle_get_autocomplete_v2_response_m_payload_free(contacttitle_get_autocomplete_v2_response->m_payload);
        contacttitle_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(contacttitle_get_autocomplete_v2_response);
}

cJSON *contacttitle_get_autocomplete_v2_response_convertToJSON(contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // contacttitle_get_autocomplete_v2_response->obj_debug_payload
    if (!contacttitle_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(contacttitle_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // contacttitle_get_autocomplete_v2_response->obj_debug
    if(contacttitle_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(contacttitle_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // contacttitle_get_autocomplete_v2_response->m_payload
    if (!contacttitle_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = contacttitle_get_autocomplete_v2_response_m_payload_convertToJSON(contacttitle_get_autocomplete_v2_response->m_payload);
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

contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_parseFromJSON(cJSON *contacttitle_get_autocomplete_v2_responseJSON){

    contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for contacttitle_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for contacttitle_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for contacttitle_get_autocomplete_v2_response->m_payload
    contacttitle_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // contacttitle_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(contacttitle_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // contacttitle_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(contacttitle_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // contacttitle_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(contacttitle_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = contacttitle_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    contacttitle_get_autocomplete_v2_response_local_var = contacttitle_get_autocomplete_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return contacttitle_get_autocomplete_v2_response_local_var;
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
        contacttitle_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
