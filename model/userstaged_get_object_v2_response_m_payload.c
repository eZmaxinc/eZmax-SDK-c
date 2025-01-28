#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_object_v2_response_m_payload.h"



static userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_create_internal(
    userstaged_response_compound_t *obj_userstaged
    ) {
    userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_local_var = malloc(sizeof(userstaged_get_object_v2_response_m_payload_t));
    if (!userstaged_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    userstaged_get_object_v2_response_m_payload_local_var->obj_userstaged = obj_userstaged;

    userstaged_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return userstaged_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_create(
    userstaged_response_compound_t *obj_userstaged
    ) {
    return userstaged_get_object_v2_response_m_payload_create_internal (
        obj_userstaged
        );
}

void userstaged_get_object_v2_response_m_payload_free(userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload) {
    if(NULL == userstaged_get_object_v2_response_m_payload){
        return ;
    }
    if(userstaged_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_get_object_v2_response_m_payload->obj_userstaged) {
        userstaged_response_compound_free(userstaged_get_object_v2_response_m_payload->obj_userstaged);
        userstaged_get_object_v2_response_m_payload->obj_userstaged = NULL;
    }
    free(userstaged_get_object_v2_response_m_payload);
}

cJSON *userstaged_get_object_v2_response_m_payload_convertToJSON(userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_get_object_v2_response_m_payload->obj_userstaged
    if (!userstaged_get_object_v2_response_m_payload->obj_userstaged) {
        goto fail;
    }
    cJSON *obj_userstaged_local_JSON = userstaged_response_compound_convertToJSON(userstaged_get_object_v2_response_m_payload->obj_userstaged);
    if(obj_userstaged_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserstaged", obj_userstaged_local_JSON);
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

userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_parseFromJSON(cJSON *userstaged_get_object_v2_response_m_payloadJSON){

    userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for userstaged_get_object_v2_response_m_payload->obj_userstaged
    userstaged_response_compound_t *obj_userstaged_local_nonprim = NULL;

    // userstaged_get_object_v2_response_m_payload->obj_userstaged
    cJSON *obj_userstaged = cJSON_GetObjectItemCaseSensitive(userstaged_get_object_v2_response_m_payloadJSON, "objUserstaged");
    if (cJSON_IsNull(obj_userstaged)) {
        obj_userstaged = NULL;
    }
    if (!obj_userstaged) {
        goto end;
    }

    
    obj_userstaged_local_nonprim = userstaged_response_compound_parseFromJSON(obj_userstaged); //nonprimitive


    userstaged_get_object_v2_response_m_payload_local_var = userstaged_get_object_v2_response_m_payload_create_internal (
        obj_userstaged_local_nonprim
        );

    return userstaged_get_object_v2_response_m_payload_local_var;
end:
    if (obj_userstaged_local_nonprim) {
        userstaged_response_compound_free(obj_userstaged_local_nonprim);
        obj_userstaged_local_nonprim = NULL;
    }
    return NULL;

}
