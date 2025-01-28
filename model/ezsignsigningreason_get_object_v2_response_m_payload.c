#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_get_object_v2_response_m_payload.h"



static ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_create_internal(
    ezsignsigningreason_response_compound_t *obj_ezsignsigningreason
    ) {
    ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignsigningreason_get_object_v2_response_m_payload_t));
    if (!ezsignsigningreason_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsigningreason_get_object_v2_response_m_payload_local_var->obj_ezsignsigningreason = obj_ezsignsigningreason;

    ezsignsigningreason_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignsigningreason_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_create(
    ezsignsigningreason_response_compound_t *obj_ezsignsigningreason
    ) {
    return ezsignsigningreason_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsigningreason
        );
}

void ezsignsigningreason_get_object_v2_response_m_payload_free(ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload) {
    if(NULL == ezsignsigningreason_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignsigningreason_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsigningreason_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason) {
        ezsignsigningreason_response_compound_free(ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason);
        ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason = NULL;
    }
    free(ezsignsigningreason_get_object_v2_response_m_payload);
}

cJSON *ezsignsigningreason_get_object_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason
    if (!ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason) {
        goto fail;
    }
    cJSON *obj_ezsignsigningreason_local_JSON = ezsignsigningreason_response_compound_convertToJSON(ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason);
    if(obj_ezsignsigningreason_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigningreason", obj_ezsignsigningreason_local_JSON);
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

ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_object_v2_response_m_payloadJSON){

    ezsignsigningreason_get_object_v2_response_m_payload_t *ezsignsigningreason_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason
    ezsignsigningreason_response_compound_t *obj_ezsignsigningreason_local_nonprim = NULL;

    // ezsignsigningreason_get_object_v2_response_m_payload->obj_ezsignsigningreason
    cJSON *obj_ezsignsigningreason = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_get_object_v2_response_m_payloadJSON, "objEzsignsigningreason");
    if (cJSON_IsNull(obj_ezsignsigningreason)) {
        obj_ezsignsigningreason = NULL;
    }
    if (!obj_ezsignsigningreason) {
        goto end;
    }

    
    obj_ezsignsigningreason_local_nonprim = ezsignsigningreason_response_compound_parseFromJSON(obj_ezsignsigningreason); //nonprimitive


    ezsignsigningreason_get_object_v2_response_m_payload_local_var = ezsignsigningreason_get_object_v2_response_m_payload_create_internal (
        obj_ezsignsigningreason_local_nonprim
        );

    return ezsignsigningreason_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignsigningreason_local_nonprim) {
        ezsignsigningreason_response_compound_free(obj_ezsignsigningreason_local_nonprim);
        obj_ezsignsigningreason_local_nonprim = NULL;
    }
    return NULL;

}
