#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_object_v2_response_m_payload.h"



static ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_create_internal(
    ezsignbulksend_response_compound_t *obj_ezsignbulksend
    ) {
    ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_object_v2_response_m_payload_t));
    if (!ezsignbulksend_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_object_v2_response_m_payload_local_var->obj_ezsignbulksend = obj_ezsignbulksend;

    ezsignbulksend_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignbulksend_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_create(
    ezsignbulksend_response_compound_t *obj_ezsignbulksend
    ) {
    return ezsignbulksend_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksend
        );
}

void ezsignbulksend_get_object_v2_response_m_payload_free(ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload) {
    if(NULL == ezsignbulksend_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignbulksend_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend) {
        ezsignbulksend_response_compound_free(ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend);
        ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend = NULL;
    }
    free(ezsignbulksend_get_object_v2_response_m_payload);
}

cJSON *ezsignbulksend_get_object_v2_response_m_payload_convertToJSON(ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend
    if (!ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend) {
        goto fail;
    }
    cJSON *obj_ezsignbulksend_local_JSON = ezsignbulksend_response_compound_convertToJSON(ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend);
    if(obj_ezsignbulksend_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignbulksend", obj_ezsignbulksend_local_JSON);
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

ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_object_v2_response_m_payloadJSON){

    ezsignbulksend_get_object_v2_response_m_payload_t *ezsignbulksend_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend
    ezsignbulksend_response_compound_t *obj_ezsignbulksend_local_nonprim = NULL;

    // ezsignbulksend_get_object_v2_response_m_payload->obj_ezsignbulksend
    cJSON *obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v2_response_m_payloadJSON, "objEzsignbulksend");
    if (cJSON_IsNull(obj_ezsignbulksend)) {
        obj_ezsignbulksend = NULL;
    }
    if (!obj_ezsignbulksend) {
        goto end;
    }

    
    obj_ezsignbulksend_local_nonprim = ezsignbulksend_response_compound_parseFromJSON(obj_ezsignbulksend); //nonprimitive


    ezsignbulksend_get_object_v2_response_m_payload_local_var = ezsignbulksend_get_object_v2_response_m_payload_create_internal (
        obj_ezsignbulksend_local_nonprim
        );

    return ezsignbulksend_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignbulksend_local_nonprim) {
        ezsignbulksend_response_compound_free(obj_ezsignbulksend_local_nonprim);
        obj_ezsignbulksend_local_nonprim = NULL;
    }
    return NULL;

}
