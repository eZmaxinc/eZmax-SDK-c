#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_get_object_v2_response_m_payload.h"



static ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_create_internal(
    ezsignsignergroupmembership_response_compound_t *obj_ezsignsignergroupmembership
    ) {
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignsignergroupmembership_get_object_v2_response_m_payload_t));
    if (!ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var->obj_ezsignsignergroupmembership = obj_ezsignsignergroupmembership;

    ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_create(
    ezsignsignergroupmembership_response_compound_t *obj_ezsignsignergroupmembership
    ) {
    return ezsignsignergroupmembership_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsignergroupmembership
        );
}

void ezsignsignergroupmembership_get_object_v2_response_m_payload_free(ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload) {
    if(NULL == ezsignsignergroupmembership_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignsignergroupmembership_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroupmembership_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership) {
        ezsignsignergroupmembership_response_compound_free(ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership);
        ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership = NULL;
    }
    free(ezsignsignergroupmembership_get_object_v2_response_m_payload);
}

cJSON *ezsignsignergroupmembership_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership
    if (!ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroupmembership_local_JSON = ezsignsignergroupmembership_response_compound_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership);
    if(obj_ezsignsignergroupmembership_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroupmembership", obj_ezsignsignergroupmembership_local_JSON);
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

ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignergroupmembership_get_object_v2_response_m_payloadJSON){

    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership
    ezsignsignergroupmembership_response_compound_t *obj_ezsignsignergroupmembership_local_nonprim = NULL;

    // ezsignsignergroupmembership_get_object_v2_response_m_payload->obj_ezsignsignergroupmembership
    cJSON *obj_ezsignsignergroupmembership = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_get_object_v2_response_m_payloadJSON, "objEzsignsignergroupmembership");
    if (cJSON_IsNull(obj_ezsignsignergroupmembership)) {
        obj_ezsignsignergroupmembership = NULL;
    }
    if (!obj_ezsignsignergroupmembership) {
        goto end;
    }

    
    obj_ezsignsignergroupmembership_local_nonprim = ezsignsignergroupmembership_response_compound_parseFromJSON(obj_ezsignsignergroupmembership); //nonprimitive


    ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var = ezsignsignergroupmembership_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsignergroupmembership_local_nonprim
        );

    return ezsignsignergroupmembership_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignsignergroupmembership_local_nonprim) {
        ezsignsignergroupmembership_response_compound_free(obj_ezsignsignergroupmembership_local_nonprim);
        obj_ezsignsignergroupmembership_local_nonprim = NULL;
    }
    return NULL;

}
