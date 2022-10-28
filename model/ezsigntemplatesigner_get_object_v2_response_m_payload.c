#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_get_object_v2_response_m_payload.h"



ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_create(
    ezsigntemplatesigner_response_compound_t *obj_ezsigntemplatesigner
    ) {
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesigner_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatesigner_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatesigner = obj_ezsigntemplatesigner;

    return ezsigntemplatesigner_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplatesigner_get_object_v2_response_m_payload_free(ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatesigner_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner) {
        ezsigntemplatesigner_response_compound_free(ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner);
        ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplatesigner_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner
    if (!ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatesigner_local_JSON = ezsigntemplatesigner_response_compound_convertToJSON(ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner);
    if(obj_ezsigntemplatesigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatesigner", obj_ezsigntemplatesigner_local_JSON);
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

ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_response_m_payloadJSON){

    ezsigntemplatesigner_get_object_v2_response_m_payload_t *ezsigntemplatesigner_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner
    ezsigntemplatesigner_response_compound_t *obj_ezsigntemplatesigner_local_nonprim = NULL;

    // ezsigntemplatesigner_get_object_v2_response_m_payload->obj_ezsigntemplatesigner
    cJSON *obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v2_response_m_payloadJSON, "objEzsigntemplatesigner");
    if (!obj_ezsigntemplatesigner) {
        goto end;
    }

    
    obj_ezsigntemplatesigner_local_nonprim = ezsigntemplatesigner_response_compound_parseFromJSON(obj_ezsigntemplatesigner); //nonprimitive


    ezsigntemplatesigner_get_object_v2_response_m_payload_local_var = ezsigntemplatesigner_get_object_v2_response_m_payload_create (
        obj_ezsigntemplatesigner_local_nonprim
        );

    return ezsigntemplatesigner_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatesigner_local_nonprim) {
        ezsigntemplatesigner_response_compound_free(obj_ezsigntemplatesigner_local_nonprim);
        obj_ezsigntemplatesigner_local_nonprim = NULL;
    }
    return NULL;

}
