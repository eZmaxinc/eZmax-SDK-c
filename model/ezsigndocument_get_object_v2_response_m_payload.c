#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_object_v2_response_m_payload.h"



ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_create(
    ezsigndocument_response_compound_t *obj_ezsigndocument
    ) {
    ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_object_v2_response_m_payload_t));
    if (!ezsigndocument_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_object_v2_response_m_payload_local_var->obj_ezsigndocument = obj_ezsigndocument;

    return ezsigndocument_get_object_v2_response_m_payload_local_var;
}


void ezsigndocument_get_object_v2_response_m_payload_free(ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload) {
    if(NULL == ezsigndocument_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument) {
        ezsigndocument_response_compound_free(ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument);
        ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument = NULL;
    }
    free(ezsigndocument_get_object_v2_response_m_payload);
}

cJSON *ezsigndocument_get_object_v2_response_m_payload_convertToJSON(ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument
    if (!ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument) {
        goto fail;
    }
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_response_compound_convertToJSON(ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument);
    if(obj_ezsigndocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocument", obj_ezsigndocument_local_JSON);
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

ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_object_v2_response_m_payloadJSON){

    ezsigndocument_get_object_v2_response_m_payload_t *ezsigndocument_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument
    ezsigndocument_response_compound_t *obj_ezsigndocument_local_nonprim = NULL;

    // ezsigndocument_get_object_v2_response_m_payload->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v2_response_m_payloadJSON, "objEzsigndocument");
    if (!obj_ezsigndocument) {
        goto end;
    }

    
    obj_ezsigndocument_local_nonprim = ezsigndocument_response_compound_parseFromJSON(obj_ezsigndocument); //nonprimitive


    ezsigndocument_get_object_v2_response_m_payload_local_var = ezsigndocument_get_object_v2_response_m_payload_create (
        obj_ezsigndocument_local_nonprim
        );

    return ezsigndocument_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_response_compound_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
