#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_get_object_v2_response_m_payload.h"



ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_create(
    ezsigntemplatedocument_response_compound_t *obj_ezsigntemplatedocument
    ) {
    ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocument_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatedocument_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;

    return ezsigntemplatedocument_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplatedocument_get_object_v2_response_m_payload_free(ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatedocument_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_response_compound_free(ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument);
        ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument = NULL;
    }
    free(ezsigntemplatedocument_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatedocument_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument
    if (!ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_response_compound_convertToJSON(ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
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

ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v2_response_m_payloadJSON){

    ezsigntemplatedocument_get_object_v2_response_m_payload_t *ezsigntemplatedocument_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument
    ezsigntemplatedocument_response_compound_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // ezsigntemplatedocument_get_object_v2_response_m_payload->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_get_object_v2_response_m_payloadJSON, "objEzsigntemplatedocument");
    if (!obj_ezsigntemplatedocument) {
        goto end;
    }

    
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_response_compound_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive


    ezsigntemplatedocument_get_object_v2_response_m_payload_local_var = ezsigntemplatedocument_get_object_v2_response_m_payload_create (
        obj_ezsigntemplatedocument_local_nonprim
        );

    return ezsigntemplatedocument_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_response_compound_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    return NULL;

}
