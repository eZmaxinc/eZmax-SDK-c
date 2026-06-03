#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_get_object_v2_response_m_payload.h"



static ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_create_internal(
    ezsigntemplateannotation_response_compound_t *obj_ezsigntemplateannotation
    ) {
    ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplateannotation_get_object_v2_response_m_payload_t));
    if (!ezsigntemplateannotation_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplateannotation_get_object_v2_response_m_payload_local_var, 0, sizeof(ezsigntemplateannotation_get_object_v2_response_m_payload_t));
    ezsigntemplateannotation_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplateannotation_get_object_v2_response_m_payload_local_var->obj_ezsigntemplateannotation = obj_ezsigntemplateannotation;
    return ezsigntemplateannotation_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_create(
    ezsigntemplateannotation_response_compound_t *obj_ezsigntemplateannotation
    ) {
    ezsigntemplateannotation_get_object_v2_response_m_payload_t *result = ezsigntemplateannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplateannotation
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplateannotation_get_object_v2_response_m_payload_free(ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplateannotation_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplateannotation_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation) {
        ezsigntemplateannotation_response_compound_free(ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation);
        ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplateannotation_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplateannotation_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation
    if (!ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateannotation_local_JSON = ezsigntemplateannotation_response_compound_convertToJSON(ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation);
    if(obj_ezsigntemplateannotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateannotation", obj_ezsigntemplateannotation_local_JSON);
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

ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateannotation_get_object_v2_response_m_payloadJSON){

    ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation
    ezsigntemplateannotation_response_compound_t *obj_ezsigntemplateannotation_local_nonprim = NULL;

    // ezsigntemplateannotation_get_object_v2_response_m_payload->obj_ezsigntemplateannotation
    cJSON *obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_get_object_v2_response_m_payloadJSON, "objEzsigntemplateannotation");
    if (cJSON_IsNull(obj_ezsigntemplateannotation)) {
        obj_ezsigntemplateannotation = NULL;
    }
    if (!obj_ezsigntemplateannotation) {
        goto end;
    }

    
    obj_ezsigntemplateannotation_local_nonprim = ezsigntemplateannotation_response_compound_parseFromJSON(obj_ezsigntemplateannotation); //nonprimitive



    ezsigntemplateannotation_get_object_v2_response_m_payload_local_var = ezsigntemplateannotation_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplateannotation_local_nonprim
        );

    if (!ezsigntemplateannotation_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplateannotation_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplateannotation_local_nonprim) {
        ezsigntemplateannotation_response_compound_free(obj_ezsigntemplateannotation_local_nonprim);
        obj_ezsigntemplateannotation_local_nonprim = NULL;
    }
    return NULL;

}
