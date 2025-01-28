#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_get_object_v2_response_m_payload.h"



static ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_create_internal(
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup
    ) {
    ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignsignergroup_get_object_v2_response_m_payload_t));
    if (!ezsignsignergroup_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignergroup_get_object_v2_response_m_payload_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;

    ezsignsignergroup_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignergroup_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_create(
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup
    ) {
    return ezsignsignergroup_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsignergroup
        );
}

void ezsignsignergroup_get_object_v2_response_m_payload_free(ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload) {
    if(NULL == ezsignsignergroup_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignsignergroup_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroup_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup) {
        ezsignsignergroup_response_compound_free(ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup);
        ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup = NULL;
    }
    free(ezsignsignergroup_get_object_v2_response_m_payload);
}

cJSON *ezsignsignergroup_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup
    if (!ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
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

ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_get_object_v2_response_m_payloadJSON){

    ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // ezsignsignergroup_get_object_v2_response_m_payload->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_get_object_v2_response_m_payloadJSON, "objEzsignsignergroup");
    if (cJSON_IsNull(obj_ezsignsignergroup)) {
        obj_ezsignsignergroup = NULL;
    }
    if (!obj_ezsignsignergroup) {
        goto end;
    }

    
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_response_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive


    ezsignsignergroup_get_object_v2_response_m_payload_local_var = ezsignsignergroup_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsignergroup_local_nonprim
        );

    return ezsignsignergroup_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignsignergroup_local_nonprim) {
        ezsignsignergroup_response_compound_free(obj_ezsignsignergroup_local_nonprim);
        obj_ezsignsignergroup_local_nonprim = NULL;
    }
    return NULL;

}
