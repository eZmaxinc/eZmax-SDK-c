#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_object_v2_response_m_payload.h"



ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload_create(
    ezsigntemplate_response_compound_t *obj_ezsigntemplate
    ) {
    ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplate_get_object_v2_response_m_payload_t));
    if (!ezsigntemplate_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplate_get_object_v2_response_m_payload_local_var->obj_ezsigntemplate = obj_ezsigntemplate;

    return ezsigntemplate_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplate_get_object_v2_response_m_payload_free(ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplate_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate) {
        ezsigntemplate_response_compound_free(ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate);
        ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplate_get_object_v2_response_m_payload_convertToJSON(ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate
    if (!ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_response_compound_convertToJSON(ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
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

ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_object_v2_response_m_payloadJSON){

    ezsigntemplate_get_object_v2_response_m_payload_t *ezsigntemplate_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate
    ezsigntemplate_response_compound_t *obj_ezsigntemplate_local_nonprim = NULL;

    // ezsigntemplate_get_object_v2_response_m_payload->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_object_v2_response_m_payloadJSON, "objEzsigntemplate");
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_response_compound_parseFromJSON(obj_ezsigntemplate); //nonprimitive


    ezsigntemplate_get_object_v2_response_m_payload_local_var = ezsigntemplate_get_object_v2_response_m_payload_create (
        obj_ezsigntemplate_local_nonprim
        );

    return ezsigntemplate_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_response_compound_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    return NULL;

}
