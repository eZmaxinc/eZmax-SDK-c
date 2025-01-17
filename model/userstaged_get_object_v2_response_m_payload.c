#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_object_v2_response_m_payload.h"



userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_create(
    userstaged_response_compound_t *obj_userstaged
    ) {
    userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_local_var = malloc(sizeof(userstaged_get_object_v2_response_m_payload_t));
    if (!userstaged_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    userstaged_get_object_v2_response_m_payload_local_var->obj_userstaged = obj_userstaged;

    return userstaged_get_object_v2_response_m_payload_local_var;
}


void userstaged_get_object_v2_response_m_payload_free(userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload) {
    if(NULL == userstaged_get_object_v2_response_m_payload){
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
    if (!obj_userstaged) {
        goto end;
    }

    
    obj_userstaged_local_nonprim = userstaged_response_compound_parseFromJSON(obj_userstaged); //nonprimitive


    userstaged_get_object_v2_response_m_payload_local_var = userstaged_get_object_v2_response_m_payload_create (
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
