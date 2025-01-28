#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_get_object_v2_response_m_payload.h"



static ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_create_internal(
    ezsigntemplatepublic_response_compound_t *obj_ezsigntemplatepublic
    ) {
    ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatepublic_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatepublic = obj_ezsigntemplatepublic;

    ezsigntemplatepublic_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepublic_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_create(
    ezsigntemplatepublic_response_compound_t *obj_ezsigntemplatepublic
    ) {
    return ezsigntemplatepublic_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepublic
        );
}

void ezsigntemplatepublic_get_object_v2_response_m_payload_free(ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatepublic_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplatepublic_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic) {
        ezsigntemplatepublic_response_compound_free(ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic);
        ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic = NULL;
    }
    free(ezsigntemplatepublic_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatepublic_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic
    if (!ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepublic_local_JSON = ezsigntemplatepublic_response_compound_convertToJSON(ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic);
    if(obj_ezsigntemplatepublic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepublic", obj_ezsigntemplatepublic_local_JSON);
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

ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_object_v2_response_m_payloadJSON){

    ezsigntemplatepublic_get_object_v2_response_m_payload_t *ezsigntemplatepublic_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic
    ezsigntemplatepublic_response_compound_t *obj_ezsigntemplatepublic_local_nonprim = NULL;

    // ezsigntemplatepublic_get_object_v2_response_m_payload->obj_ezsigntemplatepublic
    cJSON *obj_ezsigntemplatepublic = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_get_object_v2_response_m_payloadJSON, "objEzsigntemplatepublic");
    if (cJSON_IsNull(obj_ezsigntemplatepublic)) {
        obj_ezsigntemplatepublic = NULL;
    }
    if (!obj_ezsigntemplatepublic) {
        goto end;
    }

    
    obj_ezsigntemplatepublic_local_nonprim = ezsigntemplatepublic_response_compound_parseFromJSON(obj_ezsigntemplatepublic); //nonprimitive


    ezsigntemplatepublic_get_object_v2_response_m_payload_local_var = ezsigntemplatepublic_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepublic_local_nonprim
        );

    return ezsigntemplatepublic_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatepublic_local_nonprim) {
        ezsigntemplatepublic_response_compound_free(obj_ezsigntemplatepublic_local_nonprim);
        obj_ezsigntemplatepublic_local_nonprim = NULL;
    }
    return NULL;

}
