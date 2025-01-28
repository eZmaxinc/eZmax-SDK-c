#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_get_object_v2_response_m_payload.h"



static permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_create_internal(
    permission_response_compound_t *obj_permission
    ) {
    permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_local_var = malloc(sizeof(permission_get_object_v2_response_m_payload_t));
    if (!permission_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    permission_get_object_v2_response_m_payload_local_var->obj_permission = obj_permission;

    permission_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return permission_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_create(
    permission_response_compound_t *obj_permission
    ) {
    return permission_get_object_v2_response_m_payload_create_internal (
        obj_permission
        );
}

void permission_get_object_v2_response_m_payload_free(permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload) {
    if(NULL == permission_get_object_v2_response_m_payload){
        return ;
    }
    if(permission_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "permission_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (permission_get_object_v2_response_m_payload->obj_permission) {
        permission_response_compound_free(permission_get_object_v2_response_m_payload->obj_permission);
        permission_get_object_v2_response_m_payload->obj_permission = NULL;
    }
    free(permission_get_object_v2_response_m_payload);
}

cJSON *permission_get_object_v2_response_m_payload_convertToJSON(permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // permission_get_object_v2_response_m_payload->obj_permission
    if (!permission_get_object_v2_response_m_payload->obj_permission) {
        goto fail;
    }
    cJSON *obj_permission_local_JSON = permission_response_compound_convertToJSON(permission_get_object_v2_response_m_payload->obj_permission);
    if(obj_permission_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPermission", obj_permission_local_JSON);
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

permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_parseFromJSON(cJSON *permission_get_object_v2_response_m_payloadJSON){

    permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for permission_get_object_v2_response_m_payload->obj_permission
    permission_response_compound_t *obj_permission_local_nonprim = NULL;

    // permission_get_object_v2_response_m_payload->obj_permission
    cJSON *obj_permission = cJSON_GetObjectItemCaseSensitive(permission_get_object_v2_response_m_payloadJSON, "objPermission");
    if (cJSON_IsNull(obj_permission)) {
        obj_permission = NULL;
    }
    if (!obj_permission) {
        goto end;
    }

    
    obj_permission_local_nonprim = permission_response_compound_parseFromJSON(obj_permission); //nonprimitive


    permission_get_object_v2_response_m_payload_local_var = permission_get_object_v2_response_m_payload_create_internal (
        obj_permission_local_nonprim
        );

    return permission_get_object_v2_response_m_payload_local_var;
end:
    if (obj_permission_local_nonprim) {
        permission_response_compound_free(obj_permission_local_nonprim);
        obj_permission_local_nonprim = NULL;
    }
    return NULL;

}
