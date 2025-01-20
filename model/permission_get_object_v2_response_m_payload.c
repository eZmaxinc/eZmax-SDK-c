#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_get_object_v2_response_m_payload.h"



permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_create(
    permission_response_compound_t *obj_permission
    ) {
    permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload_local_var = malloc(sizeof(permission_get_object_v2_response_m_payload_t));
    if (!permission_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    permission_get_object_v2_response_m_payload_local_var->obj_permission = obj_permission;

    return permission_get_object_v2_response_m_payload_local_var;
}


void permission_get_object_v2_response_m_payload_free(permission_get_object_v2_response_m_payload_t *permission_get_object_v2_response_m_payload) {
    if(NULL == permission_get_object_v2_response_m_payload){
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
    if (!obj_permission) {
        goto end;
    }

    
    obj_permission_local_nonprim = permission_response_compound_parseFromJSON(obj_permission); //nonprimitive


    permission_get_object_v2_response_m_payload_local_var = permission_get_object_v2_response_m_payload_create (
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
