#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobalannotation_get_object_v2_response_m_payload.h"



static ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_create_internal(
    ezsigntemplateglobalannotation_response_compound_t *obj_ezsigntemplateglobalannotation
    ) {
    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t));
    if (!ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var->obj_ezsigntemplateglobalannotation = obj_ezsigntemplateglobalannotation;

    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_create(
    ezsigntemplateglobalannotation_response_compound_t *obj_ezsigntemplateglobalannotation
    ) {
    return ezsigntemplateglobalannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplateglobalannotation
        );
}

void ezsigntemplateglobalannotation_get_object_v2_response_m_payload_free(ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplateglobalannotation_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplateglobalannotation_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateglobalannotation_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation) {
        ezsigntemplateglobalannotation_response_compound_free(ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation);
        ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation = NULL;
    }
    free(ezsigntemplateglobalannotation_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation
    if (!ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateglobalannotation_local_JSON = ezsigntemplateglobalannotation_response_compound_convertToJSON(ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation);
    if(obj_ezsigntemplateglobalannotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateglobalannotation", obj_ezsigntemplateglobalannotation_local_JSON);
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

ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateglobalannotation_get_object_v2_response_m_payloadJSON){

    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_t *ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation
    ezsigntemplateglobalannotation_response_compound_t *obj_ezsigntemplateglobalannotation_local_nonprim = NULL;

    // ezsigntemplateglobalannotation_get_object_v2_response_m_payload->obj_ezsigntemplateglobalannotation
    cJSON *obj_ezsigntemplateglobalannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobalannotation_get_object_v2_response_m_payloadJSON, "objEzsigntemplateglobalannotation");
    if (cJSON_IsNull(obj_ezsigntemplateglobalannotation)) {
        obj_ezsigntemplateglobalannotation = NULL;
    }
    if (!obj_ezsigntemplateglobalannotation) {
        goto end;
    }

    
    obj_ezsigntemplateglobalannotation_local_nonprim = ezsigntemplateglobalannotation_response_compound_parseFromJSON(obj_ezsigntemplateglobalannotation); //nonprimitive


    ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var = ezsigntemplateglobalannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplateglobalannotation_local_nonprim
        );

    return ezsigntemplateglobalannotation_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplateglobalannotation_local_nonprim) {
        ezsigntemplateglobalannotation_response_compound_free(obj_ezsigntemplateglobalannotation_local_nonprim);
        obj_ezsigntemplateglobalannotation_local_nonprim = NULL;
    }
    return NULL;

}
