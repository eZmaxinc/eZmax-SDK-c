#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_get_object_v2_response_m_payload.h"



static usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_create_internal(
    usergroupexternal_response_compound_t *obj_usergroupexternal
    ) {
    usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_local_var = malloc(sizeof(usergroupexternal_get_object_v2_response_m_payload_t));
    if (!usergroupexternal_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    usergroupexternal_get_object_v2_response_m_payload_local_var->obj_usergroupexternal = obj_usergroupexternal;

    usergroupexternal_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return usergroupexternal_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_create(
    usergroupexternal_response_compound_t *obj_usergroupexternal
    ) {
    return usergroupexternal_get_object_v2_response_m_payload_create_internal (
        obj_usergroupexternal
        );
}

void usergroupexternal_get_object_v2_response_m_payload_free(usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload) {
    if(NULL == usergroupexternal_get_object_v2_response_m_payload){
        return ;
    }
    if(usergroupexternal_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal) {
        usergroupexternal_response_compound_free(usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal);
        usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal = NULL;
    }
    free(usergroupexternal_get_object_v2_response_m_payload);
}

cJSON *usergroupexternal_get_object_v2_response_m_payload_convertToJSON(usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal
    if (!usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal) {
        goto fail;
    }
    cJSON *obj_usergroupexternal_local_JSON = usergroupexternal_response_compound_convertToJSON(usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal);
    if(obj_usergroupexternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupexternal", obj_usergroupexternal_local_JSON);
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

usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_object_v2_response_m_payloadJSON){

    usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal
    usergroupexternal_response_compound_t *obj_usergroupexternal_local_nonprim = NULL;

    // usergroupexternal_get_object_v2_response_m_payload->obj_usergroupexternal
    cJSON *obj_usergroupexternal = cJSON_GetObjectItemCaseSensitive(usergroupexternal_get_object_v2_response_m_payloadJSON, "objUsergroupexternal");
    if (cJSON_IsNull(obj_usergroupexternal)) {
        obj_usergroupexternal = NULL;
    }
    if (!obj_usergroupexternal) {
        goto end;
    }

    
    obj_usergroupexternal_local_nonprim = usergroupexternal_response_compound_parseFromJSON(obj_usergroupexternal); //nonprimitive


    usergroupexternal_get_object_v2_response_m_payload_local_var = usergroupexternal_get_object_v2_response_m_payload_create_internal (
        obj_usergroupexternal_local_nonprim
        );

    return usergroupexternal_get_object_v2_response_m_payload_local_var;
end:
    if (obj_usergroupexternal_local_nonprim) {
        usergroupexternal_response_compound_free(obj_usergroupexternal_local_nonprim);
        obj_usergroupexternal_local_nonprim = NULL;
    }
    return NULL;

}
