#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignuser_get_object_v2_response_m_payload.h"



static ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_create_internal(
    ezsignuser_response_compound_t *obj_ezsignuser
    ) {
    ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignuser_get_object_v2_response_m_payload_t));
    if (!ezsignuser_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignuser_get_object_v2_response_m_payload_local_var->obj_ezsignuser = obj_ezsignuser;

    ezsignuser_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignuser_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_create(
    ezsignuser_response_compound_t *obj_ezsignuser
    ) {
    return ezsignuser_get_object_v2_response_m_payload_create_internal (
        obj_ezsignuser
        );
}

void ezsignuser_get_object_v2_response_m_payload_free(ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload) {
    if(NULL == ezsignuser_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignuser_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignuser_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser) {
        ezsignuser_response_compound_free(ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser);
        ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser = NULL;
    }
    free(ezsignuser_get_object_v2_response_m_payload);
}

cJSON *ezsignuser_get_object_v2_response_m_payload_convertToJSON(ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser
    if (!ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser) {
        goto fail;
    }
    cJSON *obj_ezsignuser_local_JSON = ezsignuser_response_compound_convertToJSON(ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser);
    if(obj_ezsignuser_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignuser", obj_ezsignuser_local_JSON);
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

ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignuser_get_object_v2_response_m_payloadJSON){

    ezsignuser_get_object_v2_response_m_payload_t *ezsignuser_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser
    ezsignuser_response_compound_t *obj_ezsignuser_local_nonprim = NULL;

    // ezsignuser_get_object_v2_response_m_payload->obj_ezsignuser
    cJSON *obj_ezsignuser = cJSON_GetObjectItemCaseSensitive(ezsignuser_get_object_v2_response_m_payloadJSON, "objEzsignuser");
    if (cJSON_IsNull(obj_ezsignuser)) {
        obj_ezsignuser = NULL;
    }
    if (!obj_ezsignuser) {
        goto end;
    }

    
    obj_ezsignuser_local_nonprim = ezsignuser_response_compound_parseFromJSON(obj_ezsignuser); //nonprimitive


    ezsignuser_get_object_v2_response_m_payload_local_var = ezsignuser_get_object_v2_response_m_payload_create_internal (
        obj_ezsignuser_local_nonprim
        );

    return ezsignuser_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignuser_local_nonprim) {
        ezsignuser_response_compound_free(obj_ezsignuser_local_nonprim);
        obj_ezsignuser_local_nonprim = NULL;
    }
    return NULL;

}
