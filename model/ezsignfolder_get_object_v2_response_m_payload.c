#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_object_v2_response_m_payload.h"



static ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_create_internal(
    ezsignfolder_response_compound_t *obj_ezsignfolder
    ) {
    ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_object_v2_response_m_payload_t));
    if (!ezsignfolder_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_object_v2_response_m_payload_local_var->obj_ezsignfolder = obj_ezsignfolder;

    ezsignfolder_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignfolder_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_create(
    ezsignfolder_response_compound_t *obj_ezsignfolder
    ) {
    return ezsignfolder_get_object_v2_response_m_payload_create_internal (
        obj_ezsignfolder
        );
}

void ezsignfolder_get_object_v2_response_m_payload_free(ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload) {
    if(NULL == ezsignfolder_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder) {
        ezsignfolder_response_compound_free(ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder);
        ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_get_object_v2_response_m_payload);
}

cJSON *ezsignfolder_get_object_v2_response_m_payload_convertToJSON(ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder
    if (!ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder) {
        goto fail;
    }
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_response_compound_convertToJSON(ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
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

ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v2_response_m_payloadJSON){

    ezsignfolder_get_object_v2_response_m_payload_t *ezsignfolder_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder
    ezsignfolder_response_compound_t *obj_ezsignfolder_local_nonprim = NULL;

    // ezsignfolder_get_object_v2_response_m_payload->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v2_response_m_payloadJSON, "objEzsignfolder");
    if (cJSON_IsNull(obj_ezsignfolder)) {
        obj_ezsignfolder = NULL;
    }
    if (!obj_ezsignfolder) {
        goto end;
    }

    
    obj_ezsignfolder_local_nonprim = ezsignfolder_response_compound_parseFromJSON(obj_ezsignfolder); //nonprimitive


    ezsignfolder_get_object_v2_response_m_payload_local_var = ezsignfolder_get_object_v2_response_m_payload_create_internal (
        obj_ezsignfolder_local_nonprim
        );

    return ezsignfolder_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_response_compound_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    return NULL;

}
