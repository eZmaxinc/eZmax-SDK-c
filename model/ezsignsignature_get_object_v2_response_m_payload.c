#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_get_object_v2_response_m_payload.h"



ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload_create(
    ezsignsignature_response_compound_t *obj_ezsignsignature
    ) {
    ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignsignature_get_object_v2_response_m_payload_t));
    if (!ezsignsignature_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_get_object_v2_response_m_payload_local_var->obj_ezsignsignature = obj_ezsignsignature;

    return ezsignsignature_get_object_v2_response_m_payload_local_var;
}


void ezsignsignature_get_object_v2_response_m_payload_free(ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload) {
    if(NULL == ezsignsignature_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature) {
        ezsignsignature_response_compound_free(ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature);
        ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature = NULL;
    }
    free(ezsignsignature_get_object_v2_response_m_payload);
}

cJSON *ezsignsignature_get_object_v2_response_m_payload_convertToJSON(ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature
    if (!ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature) {
        goto fail;
    }
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_response_compound_convertToJSON(ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature);
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

ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_object_v2_response_m_payloadJSON){

    ezsignsignature_get_object_v2_response_m_payload_t *ezsignsignature_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature
    ezsignsignature_response_compound_t *obj_ezsignsignature_local_nonprim = NULL;

    // ezsignsignature_get_object_v2_response_m_payload->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_object_v2_response_m_payloadJSON, "objEzsignsignature");
    if (!obj_ezsignsignature) {
        goto end;
    }

    
    obj_ezsignsignature_local_nonprim = ezsignsignature_response_compound_parseFromJSON(obj_ezsignsignature); //nonprimitive


    ezsignsignature_get_object_v2_response_m_payload_local_var = ezsignsignature_get_object_v2_response_m_payload_create (
        obj_ezsignsignature_local_nonprim
        );

    return ezsignsignature_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_response_compound_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
