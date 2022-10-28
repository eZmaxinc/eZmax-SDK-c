#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "versionhistory_get_object_v2_response_m_payload.h"



versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_create(
    versionhistory_response_compound_t *obj_versionhistory
    ) {
    versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_local_var = malloc(sizeof(versionhistory_get_object_v2_response_m_payload_t));
    if (!versionhistory_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    versionhistory_get_object_v2_response_m_payload_local_var->obj_versionhistory = obj_versionhistory;

    return versionhistory_get_object_v2_response_m_payload_local_var;
}


void versionhistory_get_object_v2_response_m_payload_free(versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload) {
    if(NULL == versionhistory_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (versionhistory_get_object_v2_response_m_payload->obj_versionhistory) {
        versionhistory_response_compound_free(versionhistory_get_object_v2_response_m_payload->obj_versionhistory);
        versionhistory_get_object_v2_response_m_payload->obj_versionhistory = NULL;
    }
    free(versionhistory_get_object_v2_response_m_payload);
}

cJSON *versionhistory_get_object_v2_response_m_payload_convertToJSON(versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // versionhistory_get_object_v2_response_m_payload->obj_versionhistory
    if (!versionhistory_get_object_v2_response_m_payload->obj_versionhistory) {
        goto fail;
    }
    cJSON *obj_versionhistory_local_JSON = versionhistory_response_compound_convertToJSON(versionhistory_get_object_v2_response_m_payload->obj_versionhistory);
    if(obj_versionhistory_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVersionhistory", obj_versionhistory_local_JSON);
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

versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_parseFromJSON(cJSON *versionhistory_get_object_v2_response_m_payloadJSON){

    versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for versionhistory_get_object_v2_response_m_payload->obj_versionhistory
    versionhistory_response_compound_t *obj_versionhistory_local_nonprim = NULL;

    // versionhistory_get_object_v2_response_m_payload->obj_versionhistory
    cJSON *obj_versionhistory = cJSON_GetObjectItemCaseSensitive(versionhistory_get_object_v2_response_m_payloadJSON, "objVersionhistory");
    if (!obj_versionhistory) {
        goto end;
    }

    
    obj_versionhistory_local_nonprim = versionhistory_response_compound_parseFromJSON(obj_versionhistory); //nonprimitive


    versionhistory_get_object_v2_response_m_payload_local_var = versionhistory_get_object_v2_response_m_payload_create (
        obj_versionhistory_local_nonprim
        );

    return versionhistory_get_object_v2_response_m_payload_local_var;
end:
    if (obj_versionhistory_local_nonprim) {
        versionhistory_response_compound_free(obj_versionhistory_local_nonprim);
        obj_versionhistory_local_nonprim = NULL;
    }
    return NULL;

}
