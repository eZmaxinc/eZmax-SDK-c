#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_get_object_v3_response_m_payload.h"



ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_create(
    ezsigntemplatesignature_response_compound_v3_t *obj_ezsigntemplatesignature
    ) {
    ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_local_var = malloc(sizeof(ezsigntemplatesignature_get_object_v3_response_m_payload_t));
    if (!ezsigntemplatesignature_get_object_v3_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_get_object_v3_response_m_payload_local_var->obj_ezsigntemplatesignature = obj_ezsigntemplatesignature;

    return ezsigntemplatesignature_get_object_v3_response_m_payload_local_var;
}


void ezsigntemplatesignature_get_object_v3_response_m_payload_free(ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload) {
    if(NULL == ezsigntemplatesignature_get_object_v3_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature) {
        ezsigntemplatesignature_response_compound_v3_free(ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature);
        ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature = NULL;
    }
    free(ezsigntemplatesignature_get_object_v3_response_m_payload);
}

cJSON *ezsigntemplatesignature_get_object_v3_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature
    if (!ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatesignature_local_JSON = ezsigntemplatesignature_response_compound_v3_convertToJSON(ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature);
    if(obj_ezsigntemplatesignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatesignature", obj_ezsigntemplatesignature_local_JSON);
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

ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v3_response_m_payloadJSON){

    ezsigntemplatesignature_get_object_v3_response_m_payload_t *ezsigntemplatesignature_get_object_v3_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature
    ezsigntemplatesignature_response_compound_v3_t *obj_ezsigntemplatesignature_local_nonprim = NULL;

    // ezsigntemplatesignature_get_object_v3_response_m_payload->obj_ezsigntemplatesignature
    cJSON *obj_ezsigntemplatesignature = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v3_response_m_payloadJSON, "objEzsigntemplatesignature");
    if (!obj_ezsigntemplatesignature) {
        goto end;
    }

    
    obj_ezsigntemplatesignature_local_nonprim = ezsigntemplatesignature_response_compound_v3_parseFromJSON(obj_ezsigntemplatesignature); //nonprimitive


    ezsigntemplatesignature_get_object_v3_response_m_payload_local_var = ezsigntemplatesignature_get_object_v3_response_m_payload_create (
        obj_ezsigntemplatesignature_local_nonprim
        );

    return ezsigntemplatesignature_get_object_v3_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatesignature_local_nonprim) {
        ezsigntemplatesignature_response_compound_v3_free(obj_ezsigntemplatesignature_local_nonprim);
        obj_ezsigntemplatesignature_local_nonprim = NULL;
    }
    return NULL;

}
