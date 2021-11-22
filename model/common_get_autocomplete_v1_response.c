#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_autocomplete_v1_response.h"



common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_create(
    list_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_local_var = malloc(sizeof(common_get_autocomplete_v1_response_t));
    if (!common_get_autocomplete_v1_response_local_var) {
        return NULL;
    }
    common_get_autocomplete_v1_response_local_var->m_payload = m_payload;
    common_get_autocomplete_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    common_get_autocomplete_v1_response_local_var->obj_debug = obj_debug;

    return common_get_autocomplete_v1_response_local_var;
}


void common_get_autocomplete_v1_response_free(common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response) {
    if(NULL == common_get_autocomplete_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_autocomplete_v1_response->m_payload) {
        list_ForEach(listEntry, common_get_autocomplete_v1_response->m_payload) {
            custom_autocomplete_element_response_free(listEntry->data);
        }
        list_free(common_get_autocomplete_v1_response->m_payload);
        common_get_autocomplete_v1_response->m_payload = NULL;
    }
    if (common_get_autocomplete_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(common_get_autocomplete_v1_response->obj_debug_payload);
        common_get_autocomplete_v1_response->obj_debug_payload = NULL;
    }
    if (common_get_autocomplete_v1_response->obj_debug) {
        common_response_obj_debug_free(common_get_autocomplete_v1_response->obj_debug);
        common_get_autocomplete_v1_response->obj_debug = NULL;
    }
    free(common_get_autocomplete_v1_response);
}

cJSON *common_get_autocomplete_v1_response_convertToJSON(common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // common_get_autocomplete_v1_response->m_payload
    if (!common_get_autocomplete_v1_response->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload = cJSON_AddArrayToObject(item, "mPayload");
    if(m_payload == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *m_payloadListEntry;
    if (common_get_autocomplete_v1_response->m_payload) {
    list_ForEach(m_payloadListEntry, common_get_autocomplete_v1_response->m_payload) {
    cJSON *itemLocal = custom_autocomplete_element_response_convertToJSON(m_payloadListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(m_payload, itemLocal);
    }
    }


    // common_get_autocomplete_v1_response->obj_debug_payload
    if(common_get_autocomplete_v1_response->obj_debug_payload) { 
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(common_get_autocomplete_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // common_get_autocomplete_v1_response->obj_debug
    if(common_get_autocomplete_v1_response->obj_debug) { 
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(common_get_autocomplete_v1_response->obj_debug);
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

common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_parseFromJSON(cJSON *common_get_autocomplete_v1_responseJSON){

    common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_local_var = NULL;

    // define the local variable for common_get_autocomplete_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for common_get_autocomplete_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // common_get_autocomplete_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    list_t *m_payloadList;
    
    cJSON *m_payload_local_nonprimitive;
    if(!cJSON_IsArray(m_payload)){
        goto end; //nonprimitive container
    }

    m_payloadList = list_create();

    cJSON_ArrayForEach(m_payload_local_nonprimitive,m_payload )
    {
        if(!cJSON_IsObject(m_payload_local_nonprimitive)){
            goto end;
        }
        custom_autocomplete_element_response_t *m_payloadItem = custom_autocomplete_element_response_parseFromJSON(m_payload_local_nonprimitive);

        list_addElement(m_payloadList, m_payloadItem);
    }

    // common_get_autocomplete_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // common_get_autocomplete_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(common_get_autocomplete_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    common_get_autocomplete_v1_response_local_var = common_get_autocomplete_v1_response_create (
        m_payloadList,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return common_get_autocomplete_v1_response_local_var;
end:
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
