#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_get_object_v3_response_m_payload.h"



static ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_create_internal(
    ezsignsignature_response_compound_v3_t *obj_ezsignsignature
    ) {
    ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_local_var = malloc(sizeof(ezsignsignature_get_object_v3_response_m_payload_t));
    if (!ezsignsignature_get_object_v3_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_get_object_v3_response_m_payload_local_var->obj_ezsignsignature = obj_ezsignsignature;

    ezsignsignature_get_object_v3_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignature_get_object_v3_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_create(
    ezsignsignature_response_compound_v3_t *obj_ezsignsignature
    ) {
    return ezsignsignature_get_object_v3_response_m_payload_create_internal (
        obj_ezsignsignature
        );
}

void ezsignsignature_get_object_v3_response_m_payload_free(ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload) {
    if(NULL == ezsignsignature_get_object_v3_response_m_payload){
        return ;
    }
    if(ezsignsignature_get_object_v3_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_get_object_v3_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature) {
        ezsignsignature_response_compound_v3_free(ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature);
        ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature = NULL;
    }
    free(ezsignsignature_get_object_v3_response_m_payload);
}

cJSON *ezsignsignature_get_object_v3_response_m_payload_convertToJSON(ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature
    if (!ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature) {
        goto fail;
    }
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_response_compound_v3_convertToJSON(ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature);
    if(obj_ezsignsignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignature", obj_ezsignsignature_local_JSON);
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

ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_object_v3_response_m_payloadJSON){

    ezsignsignature_get_object_v3_response_m_payload_t *ezsignsignature_get_object_v3_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature
    ezsignsignature_response_compound_v3_t *obj_ezsignsignature_local_nonprim = NULL;

    // ezsignsignature_get_object_v3_response_m_payload->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v3_response_m_payloadJSON, "objEzsignsignature");
    if (cJSON_IsNull(obj_ezsignsignature)) {
        obj_ezsignsignature = NULL;
    }
    if (!obj_ezsignsignature) {
        goto end;
    }

    
    obj_ezsignsignature_local_nonprim = ezsignsignature_response_compound_v3_parseFromJSON(obj_ezsignsignature); //nonprimitive


    ezsignsignature_get_object_v3_response_m_payload_local_var = ezsignsignature_get_object_v3_response_m_payload_create_internal (
        obj_ezsignsignature_local_nonprim
        );

    return ezsignsignature_get_object_v3_response_m_payload_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_response_compound_v3_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
