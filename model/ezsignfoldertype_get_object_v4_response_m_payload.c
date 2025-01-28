#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_object_v4_response_m_payload.h"



static ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_create_internal(
    ezsignfoldertype_response_compound_v4_t *obj_ezsignfoldertype
    ) {
    ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_local_var = malloc(sizeof(ezsignfoldertype_get_object_v4_response_m_payload_t));
    if (!ezsignfoldertype_get_object_v4_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_object_v4_response_m_payload_local_var->obj_ezsignfoldertype = obj_ezsignfoldertype;

    ezsignfoldertype_get_object_v4_response_m_payload_local_var->_library_owned = 1;
    return ezsignfoldertype_get_object_v4_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_create(
    ezsignfoldertype_response_compound_v4_t *obj_ezsignfoldertype
    ) {
    return ezsignfoldertype_get_object_v4_response_m_payload_create_internal (
        obj_ezsignfoldertype
        );
}

void ezsignfoldertype_get_object_v4_response_m_payload_free(ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload) {
    if(NULL == ezsignfoldertype_get_object_v4_response_m_payload){
        return ;
    }
    if(ezsignfoldertype_get_object_v4_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_get_object_v4_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype) {
        ezsignfoldertype_response_compound_v4_free(ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype);
        ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_get_object_v4_response_m_payload);
}

cJSON *ezsignfoldertype_get_object_v4_response_m_payload_convertToJSON(ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype
    if (!ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_local_JSON = ezsignfoldertype_response_compound_v4_convertToJSON(ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype);
    if(obj_ezsignfoldertype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertype", obj_ezsignfoldertype_local_JSON);
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

ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_object_v4_response_m_payloadJSON){

    ezsignfoldertype_get_object_v4_response_m_payload_t *ezsignfoldertype_get_object_v4_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype
    ezsignfoldertype_response_compound_v4_t *obj_ezsignfoldertype_local_nonprim = NULL;

    // ezsignfoldertype_get_object_v4_response_m_payload->obj_ezsignfoldertype
    cJSON *obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_object_v4_response_m_payloadJSON, "objEzsignfoldertype");
    if (cJSON_IsNull(obj_ezsignfoldertype)) {
        obj_ezsignfoldertype = NULL;
    }
    if (!obj_ezsignfoldertype) {
        goto end;
    }

    
    obj_ezsignfoldertype_local_nonprim = ezsignfoldertype_response_compound_v4_parseFromJSON(obj_ezsignfoldertype); //nonprimitive


    ezsignfoldertype_get_object_v4_response_m_payload_local_var = ezsignfoldertype_get_object_v4_response_m_payload_create_internal (
        obj_ezsignfoldertype_local_nonprim
        );

    return ezsignfoldertype_get_object_v4_response_m_payload_local_var;
end:
    if (obj_ezsignfoldertype_local_nonprim) {
        ezsignfoldertype_response_compound_v4_free(obj_ezsignfoldertype_local_nonprim);
        obj_ezsignfoldertype_local_nonprim = NULL;
    }
    return NULL;

}
