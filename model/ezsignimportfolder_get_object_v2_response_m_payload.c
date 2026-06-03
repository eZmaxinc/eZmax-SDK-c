#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignimportfolder_get_object_v2_response_m_payload.h"



static ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_create_internal(
    ezsignimportfolder_response_compound_t *obj_ezsignimportfolder
    ) {
    ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignimportfolder_get_object_v2_response_m_payload_t));
    if (!ezsignimportfolder_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsignimportfolder_get_object_v2_response_m_payload_local_var, 0, sizeof(ezsignimportfolder_get_object_v2_response_m_payload_t));
    ezsignimportfolder_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    ezsignimportfolder_get_object_v2_response_m_payload_local_var->obj_ezsignimportfolder = obj_ezsignimportfolder;
    return ezsignimportfolder_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_create(
    ezsignimportfolder_response_compound_t *obj_ezsignimportfolder
    ) {
    ezsignimportfolder_get_object_v2_response_m_payload_t *result = ezsignimportfolder_get_object_v2_response_m_payload_create_internal (
        obj_ezsignimportfolder
        );
    if (!result) {
    }
    return result;
}

void ezsignimportfolder_get_object_v2_response_m_payload_free(ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload) {
    if(NULL == ezsignimportfolder_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignimportfolder_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignimportfolder_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder) {
        ezsignimportfolder_response_compound_free(ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder);
        ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder = NULL;
    }
    free(ezsignimportfolder_get_object_v2_response_m_payload);
}

cJSON *ezsignimportfolder_get_object_v2_response_m_payload_convertToJSON(ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder
    if (!ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder) {
        goto fail;
    }
    cJSON *obj_ezsignimportfolder_local_JSON = ezsignimportfolder_response_compound_convertToJSON(ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder);
    if(obj_ezsignimportfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignimportfolder", obj_ezsignimportfolder_local_JSON);
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

ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignimportfolder_get_object_v2_response_m_payloadJSON){

    ezsignimportfolder_get_object_v2_response_m_payload_t *ezsignimportfolder_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder
    ezsignimportfolder_response_compound_t *obj_ezsignimportfolder_local_nonprim = NULL;

    // ezsignimportfolder_get_object_v2_response_m_payload->obj_ezsignimportfolder
    cJSON *obj_ezsignimportfolder = cJSON_GetObjectItemCaseSensitive(ezsignimportfolder_get_object_v2_response_m_payloadJSON, "objEzsignimportfolder");
    if (cJSON_IsNull(obj_ezsignimportfolder)) {
        obj_ezsignimportfolder = NULL;
    }
    if (!obj_ezsignimportfolder) {
        goto end;
    }

    
    obj_ezsignimportfolder_local_nonprim = ezsignimportfolder_response_compound_parseFromJSON(obj_ezsignimportfolder); //nonprimitive



    ezsignimportfolder_get_object_v2_response_m_payload_local_var = ezsignimportfolder_get_object_v2_response_m_payload_create_internal (
        obj_ezsignimportfolder_local_nonprim
        );

    if (!ezsignimportfolder_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return ezsignimportfolder_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignimportfolder_local_nonprim) {
        ezsignimportfolder_response_compound_free(obj_ezsignimportfolder_local_nonprim);
        obj_ezsignimportfolder_local_nonprim = NULL;
    }
    return NULL;

}
