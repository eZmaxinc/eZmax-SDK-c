#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_get_object_v2_response_m_payload.h"



static ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_create_internal(
    ezsignbulksendsignermapping_response_compound_t *obj_ezsignbulksendsignermapping
    ) {
    ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignbulksendsignermapping_get_object_v2_response_m_payload_t));
    if (!ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var->obj_ezsignbulksendsignermapping = obj_ezsignbulksendsignermapping;

    ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_create(
    ezsignbulksendsignermapping_response_compound_t *obj_ezsignbulksendsignermapping
    ) {
    return ezsignbulksendsignermapping_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksendsignermapping
        );
}

void ezsignbulksendsignermapping_get_object_v2_response_m_payload_free(ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload) {
    if(NULL == ezsignbulksendsignermapping_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignbulksendsignermapping_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendsignermapping_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping) {
        ezsignbulksendsignermapping_response_compound_free(ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping);
        ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping = NULL;
    }
    free(ezsignbulksendsignermapping_get_object_v2_response_m_payload);
}

cJSON *ezsignbulksendsignermapping_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping
    if (!ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping) {
        goto fail;
    }
    cJSON *obj_ezsignbulksendsignermapping_local_JSON = ezsignbulksendsignermapping_response_compound_convertToJSON(ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping);
    if(obj_ezsignbulksendsignermapping_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignbulksendsignermapping", obj_ezsignbulksendsignermapping_local_JSON);
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

ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v2_response_m_payloadJSON){

    ezsignbulksendsignermapping_get_object_v2_response_m_payload_t *ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping
    ezsignbulksendsignermapping_response_compound_t *obj_ezsignbulksendsignermapping_local_nonprim = NULL;

    // ezsignbulksendsignermapping_get_object_v2_response_m_payload->obj_ezsignbulksendsignermapping
    cJSON *obj_ezsignbulksendsignermapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v2_response_m_payloadJSON, "objEzsignbulksendsignermapping");
    if (cJSON_IsNull(obj_ezsignbulksendsignermapping)) {
        obj_ezsignbulksendsignermapping = NULL;
    }
    if (!obj_ezsignbulksendsignermapping) {
        goto end;
    }

    
    obj_ezsignbulksendsignermapping_local_nonprim = ezsignbulksendsignermapping_response_compound_parseFromJSON(obj_ezsignbulksendsignermapping); //nonprimitive


    ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var = ezsignbulksendsignermapping_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksendsignermapping_local_nonprim
        );

    return ezsignbulksendsignermapping_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignbulksendsignermapping_local_nonprim) {
        ezsignbulksendsignermapping_response_compound_free(obj_ezsignbulksendsignermapping_local_nonprim);
        obj_ezsignbulksendsignermapping_local_nonprim = NULL;
    }
    return NULL;

}
