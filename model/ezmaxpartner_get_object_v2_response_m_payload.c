#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxpartner_get_object_v2_response_m_payload.h"



static ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload_create_internal(
    ezmaxpartner_response_compound_t *obj_ezmaxpartner
    ) {
    ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezmaxpartner_get_object_v2_response_m_payload_t));
    if (!ezmaxpartner_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezmaxpartner_get_object_v2_response_m_payload_local_var, 0, sizeof(ezmaxpartner_get_object_v2_response_m_payload_t));
    ezmaxpartner_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    ezmaxpartner_get_object_v2_response_m_payload_local_var->obj_ezmaxpartner = obj_ezmaxpartner;
    return ezmaxpartner_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload_create(
    ezmaxpartner_response_compound_t *obj_ezmaxpartner
    ) {
    ezmaxpartner_get_object_v2_response_m_payload_t *result = ezmaxpartner_get_object_v2_response_m_payload_create_internal (
        obj_ezmaxpartner
        );
    if (!result) {
    }
    return result;
}

void ezmaxpartner_get_object_v2_response_m_payload_free(ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload) {
    if(NULL == ezmaxpartner_get_object_v2_response_m_payload){
        return ;
    }
    if(ezmaxpartner_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxpartner_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner) {
        ezmaxpartner_response_compound_free(ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner);
        ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner = NULL;
    }
    free(ezmaxpartner_get_object_v2_response_m_payload);
}

cJSON *ezmaxpartner_get_object_v2_response_m_payload_convertToJSON(ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner
    if(ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner) {
    cJSON *obj_ezmaxpartner_local_JSON = ezmaxpartner_response_compound_convertToJSON(ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner);
    if(obj_ezmaxpartner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartner", obj_ezmaxpartner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezmaxpartner_get_object_v2_response_m_payloadJSON){

    ezmaxpartner_get_object_v2_response_m_payload_t *ezmaxpartner_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner
    ezmaxpartner_response_compound_t *obj_ezmaxpartner_local_nonprim = NULL;

    // ezmaxpartner_get_object_v2_response_m_payload->obj_ezmaxpartner
    cJSON *obj_ezmaxpartner = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_get_object_v2_response_m_payloadJSON, "objEzmaxpartner");
    if (cJSON_IsNull(obj_ezmaxpartner)) {
        obj_ezmaxpartner = NULL;
    }
    if (obj_ezmaxpartner) { 
    obj_ezmaxpartner_local_nonprim = ezmaxpartner_response_compound_parseFromJSON(obj_ezmaxpartner); //nonprimitive
    }



    ezmaxpartner_get_object_v2_response_m_payload_local_var = ezmaxpartner_get_object_v2_response_m_payload_create_internal (
        obj_ezmaxpartner ? obj_ezmaxpartner_local_nonprim : NULL
        );

    if (!ezmaxpartner_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return ezmaxpartner_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezmaxpartner_local_nonprim) {
        ezmaxpartner_response_compound_free(obj_ezmaxpartner_local_nonprim);
        obj_ezmaxpartner_local_nonprim = NULL;
    }
    return NULL;

}
