#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_get_object_v2_response_m_payload.h"



static ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_create_internal(
    ezsignannotation_response_compound_t *obj_ezsignannotation
    ) {
    ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignannotation_get_object_v2_response_m_payload_t));
    if (!ezsignannotation_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignannotation_get_object_v2_response_m_payload_local_var->obj_ezsignannotation = obj_ezsignannotation;

    ezsignannotation_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignannotation_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_create(
    ezsignannotation_response_compound_t *obj_ezsignannotation
    ) {
    return ezsignannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsignannotation
        );
}

void ezsignannotation_get_object_v2_response_m_payload_free(ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload) {
    if(NULL == ezsignannotation_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignannotation_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignannotation_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation) {
        ezsignannotation_response_compound_free(ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation);
        ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation = NULL;
    }
    free(ezsignannotation_get_object_v2_response_m_payload);
}

cJSON *ezsignannotation_get_object_v2_response_m_payload_convertToJSON(ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation
    if (!ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation) {
        goto fail;
    }
    cJSON *obj_ezsignannotation_local_JSON = ezsignannotation_response_compound_convertToJSON(ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation);
    if(obj_ezsignannotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignannotation", obj_ezsignannotation_local_JSON);
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

ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignannotation_get_object_v2_response_m_payloadJSON){

    ezsignannotation_get_object_v2_response_m_payload_t *ezsignannotation_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation
    ezsignannotation_response_compound_t *obj_ezsignannotation_local_nonprim = NULL;

    // ezsignannotation_get_object_v2_response_m_payload->obj_ezsignannotation
    cJSON *obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(ezsignannotation_get_object_v2_response_m_payloadJSON, "objEzsignannotation");
    if (cJSON_IsNull(obj_ezsignannotation)) {
        obj_ezsignannotation = NULL;
    }
    if (!obj_ezsignannotation) {
        goto end;
    }

    
    obj_ezsignannotation_local_nonprim = ezsignannotation_response_compound_parseFromJSON(obj_ezsignannotation); //nonprimitive


    ezsignannotation_get_object_v2_response_m_payload_local_var = ezsignannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsignannotation_local_nonprim
        );

    return ezsignannotation_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignannotation_local_nonprim) {
        ezsignannotation_response_compound_free(obj_ezsignannotation_local_nonprim);
        obj_ezsignannotation_local_nonprim = NULL;
    }
    return NULL;

}
