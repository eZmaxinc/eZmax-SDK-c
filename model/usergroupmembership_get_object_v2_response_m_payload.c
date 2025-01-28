#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_get_object_v2_response_m_payload.h"



static usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_create_internal(
    usergroupmembership_response_compound_t *obj_usergroupmembership
    ) {
    usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_local_var = malloc(sizeof(usergroupmembership_get_object_v2_response_m_payload_t));
    if (!usergroupmembership_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    usergroupmembership_get_object_v2_response_m_payload_local_var->obj_usergroupmembership = obj_usergroupmembership;

    usergroupmembership_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return usergroupmembership_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_create(
    usergroupmembership_response_compound_t *obj_usergroupmembership
    ) {
    return usergroupmembership_get_object_v2_response_m_payload_create_internal (
        obj_usergroupmembership
        );
}

void usergroupmembership_get_object_v2_response_m_payload_free(usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload) {
    if(NULL == usergroupmembership_get_object_v2_response_m_payload){
        return ;
    }
    if(usergroupmembership_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupmembership_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership) {
        usergroupmembership_response_compound_free(usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership);
        usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership = NULL;
    }
    free(usergroupmembership_get_object_v2_response_m_payload);
}

cJSON *usergroupmembership_get_object_v2_response_m_payload_convertToJSON(usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership
    if (!usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership) {
        goto fail;
    }
    cJSON *obj_usergroupmembership_local_JSON = usergroupmembership_response_compound_convertToJSON(usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership);
    if(obj_usergroupmembership_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupmembership", obj_usergroupmembership_local_JSON);
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

usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupmembership_get_object_v2_response_m_payloadJSON){

    usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership
    usergroupmembership_response_compound_t *obj_usergroupmembership_local_nonprim = NULL;

    // usergroupmembership_get_object_v2_response_m_payload->obj_usergroupmembership
    cJSON *obj_usergroupmembership = cJSON_GetObjectItemCaseSensitive(usergroupmembership_get_object_v2_response_m_payloadJSON, "objUsergroupmembership");
    if (cJSON_IsNull(obj_usergroupmembership)) {
        obj_usergroupmembership = NULL;
    }
    if (!obj_usergroupmembership) {
        goto end;
    }

    
    obj_usergroupmembership_local_nonprim = usergroupmembership_response_compound_parseFromJSON(obj_usergroupmembership); //nonprimitive


    usergroupmembership_get_object_v2_response_m_payload_local_var = usergroupmembership_get_object_v2_response_m_payload_create_internal (
        obj_usergroupmembership_local_nonprim
        );

    return usergroupmembership_get_object_v2_response_m_payload_local_var;
end:
    if (obj_usergroupmembership_local_nonprim) {
        usergroupmembership_response_compound_free(obj_usergroupmembership_local_nonprim);
        obj_usergroupmembership_local_nonprim = NULL;
    }
    return NULL;

}
