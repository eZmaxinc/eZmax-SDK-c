#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_get_object_v2_response_m_payload.h"



static usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_create_internal(
    usergroupdelegation_response_compound_t *obj_usergroupdelegation
    ) {
    usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_local_var = malloc(sizeof(usergroupdelegation_get_object_v2_response_m_payload_t));
    if (!usergroupdelegation_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    usergroupdelegation_get_object_v2_response_m_payload_local_var->obj_usergroupdelegation = obj_usergroupdelegation;

    usergroupdelegation_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return usergroupdelegation_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_create(
    usergroupdelegation_response_compound_t *obj_usergroupdelegation
    ) {
    return usergroupdelegation_get_object_v2_response_m_payload_create_internal (
        obj_usergroupdelegation
        );
}

void usergroupdelegation_get_object_v2_response_m_payload_free(usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload) {
    if(NULL == usergroupdelegation_get_object_v2_response_m_payload){
        return ;
    }
    if(usergroupdelegation_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupdelegation_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation) {
        usergroupdelegation_response_compound_free(usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation);
        usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation = NULL;
    }
    free(usergroupdelegation_get_object_v2_response_m_payload);
}

cJSON *usergroupdelegation_get_object_v2_response_m_payload_convertToJSON(usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation
    if (!usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation) {
        goto fail;
    }
    cJSON *obj_usergroupdelegation_local_JSON = usergroupdelegation_response_compound_convertToJSON(usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation);
    if(obj_usergroupdelegation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupdelegation", obj_usergroupdelegation_local_JSON);
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

usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupdelegation_get_object_v2_response_m_payloadJSON){

    usergroupdelegation_get_object_v2_response_m_payload_t *usergroupdelegation_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation
    usergroupdelegation_response_compound_t *obj_usergroupdelegation_local_nonprim = NULL;

    // usergroupdelegation_get_object_v2_response_m_payload->obj_usergroupdelegation
    cJSON *obj_usergroupdelegation = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_get_object_v2_response_m_payloadJSON, "objUsergroupdelegation");
    if (cJSON_IsNull(obj_usergroupdelegation)) {
        obj_usergroupdelegation = NULL;
    }
    if (!obj_usergroupdelegation) {
        goto end;
    }

    
    obj_usergroupdelegation_local_nonprim = usergroupdelegation_response_compound_parseFromJSON(obj_usergroupdelegation); //nonprimitive


    usergroupdelegation_get_object_v2_response_m_payload_local_var = usergroupdelegation_get_object_v2_response_m_payload_create_internal (
        obj_usergroupdelegation_local_nonprim
        );

    return usergroupdelegation_get_object_v2_response_m_payload_local_var;
end:
    if (obj_usergroupdelegation_local_nonprim) {
        usergroupdelegation_response_compound_free(obj_usergroupdelegation_local_nonprim);
        obj_usergroupdelegation_local_nonprim = NULL;
    }
    return NULL;

}
