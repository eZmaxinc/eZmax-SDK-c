#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_get_object_v2_response_m_payload.h"



static subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_create_internal(
    subnet_response_compound_t *obj_subnet
    ) {
    subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_local_var = malloc(sizeof(subnet_get_object_v2_response_m_payload_t));
    if (!subnet_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    subnet_get_object_v2_response_m_payload_local_var->obj_subnet = obj_subnet;

    subnet_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return subnet_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_create(
    subnet_response_compound_t *obj_subnet
    ) {
    return subnet_get_object_v2_response_m_payload_create_internal (
        obj_subnet
        );
}

void subnet_get_object_v2_response_m_payload_free(subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload) {
    if(NULL == subnet_get_object_v2_response_m_payload){
        return ;
    }
    if(subnet_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_get_object_v2_response_m_payload->obj_subnet) {
        subnet_response_compound_free(subnet_get_object_v2_response_m_payload->obj_subnet);
        subnet_get_object_v2_response_m_payload->obj_subnet = NULL;
    }
    free(subnet_get_object_v2_response_m_payload);
}

cJSON *subnet_get_object_v2_response_m_payload_convertToJSON(subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // subnet_get_object_v2_response_m_payload->obj_subnet
    if (!subnet_get_object_v2_response_m_payload->obj_subnet) {
        goto fail;
    }
    cJSON *obj_subnet_local_JSON = subnet_response_compound_convertToJSON(subnet_get_object_v2_response_m_payload->obj_subnet);
    if(obj_subnet_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnet", obj_subnet_local_JSON);
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

subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_parseFromJSON(cJSON *subnet_get_object_v2_response_m_payloadJSON){

    subnet_get_object_v2_response_m_payload_t *subnet_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for subnet_get_object_v2_response_m_payload->obj_subnet
    subnet_response_compound_t *obj_subnet_local_nonprim = NULL;

    // subnet_get_object_v2_response_m_payload->obj_subnet
    cJSON *obj_subnet = cJSON_GetObjectItemCaseSensitive(subnet_get_object_v2_response_m_payloadJSON, "objSubnet");
    if (cJSON_IsNull(obj_subnet)) {
        obj_subnet = NULL;
    }
    if (!obj_subnet) {
        goto end;
    }

    
    obj_subnet_local_nonprim = subnet_response_compound_parseFromJSON(obj_subnet); //nonprimitive


    subnet_get_object_v2_response_m_payload_local_var = subnet_get_object_v2_response_m_payload_create_internal (
        obj_subnet_local_nonprim
        );

    return subnet_get_object_v2_response_m_payload_local_var;
end:
    if (obj_subnet_local_nonprim) {
        subnet_response_compound_free(obj_subnet_local_nonprim);
        obj_subnet_local_nonprim = NULL;
    }
    return NULL;

}
