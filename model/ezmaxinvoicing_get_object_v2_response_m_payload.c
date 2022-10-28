#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_get_object_v2_response_m_payload.h"



ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_create(
    ezmaxinvoicing_response_compound_t *obj_ezmaxinvoicing
    ) {
    ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezmaxinvoicing_get_object_v2_response_m_payload_t));
    if (!ezmaxinvoicing_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezmaxinvoicing_get_object_v2_response_m_payload_local_var->obj_ezmaxinvoicing = obj_ezmaxinvoicing;

    return ezmaxinvoicing_get_object_v2_response_m_payload_local_var;
}


void ezmaxinvoicing_get_object_v2_response_m_payload_free(ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload) {
    if(NULL == ezmaxinvoicing_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing) {
        ezmaxinvoicing_response_compound_free(ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing);
        ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing = NULL;
    }
    free(ezmaxinvoicing_get_object_v2_response_m_payload);
}

cJSON *ezmaxinvoicing_get_object_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing
    if (!ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing) {
        goto fail;
    }
    cJSON *obj_ezmaxinvoicing_local_JSON = ezmaxinvoicing_response_compound_convertToJSON(ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing);
    if(obj_ezmaxinvoicing_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxinvoicing", obj_ezmaxinvoicing_local_JSON);
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

ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezmaxinvoicing_get_object_v2_response_m_payloadJSON){

    ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing
    ezmaxinvoicing_response_compound_t *obj_ezmaxinvoicing_local_nonprim = NULL;

    // ezmaxinvoicing_get_object_v2_response_m_payload->obj_ezmaxinvoicing
    cJSON *obj_ezmaxinvoicing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_get_object_v2_response_m_payloadJSON, "objEzmaxinvoicing");
    if (!obj_ezmaxinvoicing) {
        goto end;
    }

    
    obj_ezmaxinvoicing_local_nonprim = ezmaxinvoicing_response_compound_parseFromJSON(obj_ezmaxinvoicing); //nonprimitive


    ezmaxinvoicing_get_object_v2_response_m_payload_local_var = ezmaxinvoicing_get_object_v2_response_m_payload_create (
        obj_ezmaxinvoicing_local_nonprim
        );

    return ezmaxinvoicing_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezmaxinvoicing_local_nonprim) {
        ezmaxinvoicing_response_compound_free(obj_ezmaxinvoicing_local_nonprim);
        obj_ezmaxinvoicing_local_nonprim = NULL;
    }
    return NULL;

}
