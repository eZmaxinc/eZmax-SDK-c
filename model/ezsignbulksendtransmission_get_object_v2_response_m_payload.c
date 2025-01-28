#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendtransmission_get_object_v2_response_m_payload.h"



static ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_create_internal(
    ezsignbulksendtransmission_response_compound_t *obj_ezsignbulksendtransmission
    ) {
    ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignbulksendtransmission_get_object_v2_response_m_payload_t));
    if (!ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var->obj_ezsignbulksendtransmission = obj_ezsignbulksendtransmission;

    ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_create(
    ezsignbulksendtransmission_response_compound_t *obj_ezsignbulksendtransmission
    ) {
    return ezsignbulksendtransmission_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksendtransmission
        );
}

void ezsignbulksendtransmission_get_object_v2_response_m_payload_free(ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload) {
    if(NULL == ezsignbulksendtransmission_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignbulksendtransmission_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksendtransmission_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission) {
        ezsignbulksendtransmission_response_compound_free(ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission);
        ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission = NULL;
    }
    free(ezsignbulksendtransmission_get_object_v2_response_m_payload);
}

cJSON *ezsignbulksendtransmission_get_object_v2_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission
    if (!ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission) {
        goto fail;
    }
    cJSON *obj_ezsignbulksendtransmission_local_JSON = ezsignbulksendtransmission_response_compound_convertToJSON(ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission);
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

ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksendtransmission_get_object_v2_response_m_payloadJSON){

    ezsignbulksendtransmission_get_object_v2_response_m_payload_t *ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission
    ezsignbulksendtransmission_response_compound_t *obj_ezsignbulksendtransmission_local_nonprim = NULL;

    // ezsignbulksendtransmission_get_object_v2_response_m_payload->obj_ezsignbulksendtransmission
    cJSON *obj_ezsignbulksendtransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_object_v2_response_m_payloadJSON, "objEzsignbulksendtransmission");
    if (cJSON_IsNull(obj_ezsignbulksendtransmission)) {
        obj_ezsignbulksendtransmission = NULL;
    }
    if (!obj_ezsignbulksendtransmission) {
        goto end;
    }

    
    obj_ezsignbulksendtransmission_local_nonprim = ezsignbulksendtransmission_response_compound_parseFromJSON(obj_ezsignbulksendtransmission); //nonprimitive


    ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var = ezsignbulksendtransmission_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksendtransmission_local_nonprim
        );

    return ezsignbulksendtransmission_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignbulksendtransmission_local_nonprim) {
        ezsignbulksendtransmission_response_compound_free(obj_ezsignbulksendtransmission_local_nonprim);
        obj_ezsignbulksendtransmission_local_nonprim = NULL;
    }
    return NULL;

}
