#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload.h"



static ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_create_internal(
    ezsignbulksendtransmission_response_t *obj_ezsignbulksendtransmission
    ) {
    ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t));
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var->obj_ezsignbulksendtransmission = obj_ezsignbulksendtransmission;

    ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_create(
    ezsignbulksendtransmission_response_t *obj_ezsignbulksendtransmission
    ) {
    return ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_create_internal (
        obj_ezsignbulksendtransmission
        );
}

void ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_free(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload) {
    if(NULL == ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload){
        return ;
    }
    if(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission) {
        ezsignbulksendtransmission_response_free(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission);
        ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission = NULL;
    }
    free(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload);
}

cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission
    if (!ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission) {
        goto fail;
    }
    cJSON *obj_ezsignbulksendtransmission_local_JSON = ezsignbulksendtransmission_response_convertToJSON(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission);
    if(obj_ezsignbulksendtransmission_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignbulksendtransmission", obj_ezsignbulksendtransmission_local_JSON);
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

ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payloadJSON){

    ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_t *ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission
    ezsignbulksendtransmission_response_t *obj_ezsignbulksendtransmission_local_nonprim = NULL;

    // ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload->obj_ezsignbulksendtransmission
    cJSON *obj_ezsignbulksendtransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payloadJSON, "objEzsignbulksendtransmission");
    if (cJSON_IsNull(obj_ezsignbulksendtransmission)) {
        obj_ezsignbulksendtransmission = NULL;
    }
    if (!obj_ezsignbulksendtransmission) {
        goto end;
    }

    
    obj_ezsignbulksendtransmission_local_nonprim = ezsignbulksendtransmission_response_parseFromJSON(obj_ezsignbulksendtransmission); //nonprimitive


    ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var = ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_create_internal (
        obj_ezsignbulksendtransmission_local_nonprim
        );

    return ezsignbulksend_create_ezsignbulksendtransmission_v2_response_m_payload_local_var;
end:
    if (obj_ezsignbulksendtransmission_local_nonprim) {
        ezsignbulksendtransmission_response_free(obj_ezsignbulksendtransmission_local_nonprim);
        obj_ezsignbulksendtransmission_local_nonprim = NULL;
    }
    return NULL;

}
