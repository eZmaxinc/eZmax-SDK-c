#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateglobal_get_object_v2_response_m_payload.h"



ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_create(
    ezsigntemplateglobal_response_compound_t *obj_ezsigntemplateglobal
    ) {
    ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplateglobal_get_object_v2_response_m_payload_t));
    if (!ezsigntemplateglobal_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplateglobal_get_object_v2_response_m_payload_local_var->obj_ezsigntemplateglobal = obj_ezsigntemplateglobal;

    return ezsigntemplateglobal_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplateglobal_get_object_v2_response_m_payload_free(ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplateglobal_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal) {
        ezsigntemplateglobal_response_compound_free(ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal);
        ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal = NULL;
    }
    free(ezsigntemplateglobal_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplateglobal_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal
    if (!ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateglobal_local_JSON = ezsigntemplateglobal_response_compound_convertToJSON(ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal);
    if(obj_ezsigntemplateglobal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateglobal", obj_ezsigntemplateglobal_local_JSON);
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

ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateglobal_get_object_v2_response_m_payloadJSON){

    ezsigntemplateglobal_get_object_v2_response_m_payload_t *ezsigntemplateglobal_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal
    ezsigntemplateglobal_response_compound_t *obj_ezsigntemplateglobal_local_nonprim = NULL;

    // ezsigntemplateglobal_get_object_v2_response_m_payload->obj_ezsigntemplateglobal
    cJSON *obj_ezsigntemplateglobal = cJSON_GetObjectItemCaseSensitive(ezsigntemplateglobal_get_object_v2_response_m_payloadJSON, "objEzsigntemplateglobal");
    if (!obj_ezsigntemplateglobal) {
        goto end;
    }

    
    obj_ezsigntemplateglobal_local_nonprim = ezsigntemplateglobal_response_compound_parseFromJSON(obj_ezsigntemplateglobal); //nonprimitive


    ezsigntemplateglobal_get_object_v2_response_m_payload_local_var = ezsigntemplateglobal_get_object_v2_response_m_payload_create (
        obj_ezsigntemplateglobal_local_nonprim
        );

    return ezsigntemplateglobal_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplateglobal_local_nonprim) {
        ezsigntemplateglobal_response_compound_free(obj_ezsigntemplateglobal_local_nonprim);
        obj_ezsigntemplateglobal_local_nonprim = NULL;
    }
    return NULL;

}
