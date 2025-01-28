#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_get_object_v2_response_m_payload.h"



static ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_create_internal(
    ezsignformfieldgroup_response_compound_t *obj_ezsignformfieldgroup
    ) {
    ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignformfieldgroup_get_object_v2_response_m_payload_t));
    if (!ezsignformfieldgroup_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_get_object_v2_response_m_payload_local_var->obj_ezsignformfieldgroup = obj_ezsignformfieldgroup;

    ezsignformfieldgroup_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignformfieldgroup_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_create(
    ezsignformfieldgroup_response_compound_t *obj_ezsignformfieldgroup
    ) {
    return ezsignformfieldgroup_get_object_v2_response_m_payload_create_internal (
        obj_ezsignformfieldgroup
        );
}

void ezsignformfieldgroup_get_object_v2_response_m_payload_free(ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload) {
    if(NULL == ezsignformfieldgroup_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignformfieldgroup_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroup_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup) {
        ezsignformfieldgroup_response_compound_free(ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup);
        ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup = NULL;
    }
    free(ezsignformfieldgroup_get_object_v2_response_m_payload);
}

cJSON *ezsignformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup
    if (!ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *obj_ezsignformfieldgroup_local_JSON = ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup);
    if(obj_ezsignformfieldgroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignformfieldgroup", obj_ezsignformfieldgroup_local_JSON);
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

ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v2_response_m_payloadJSON){

    ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup
    ezsignformfieldgroup_response_compound_t *obj_ezsignformfieldgroup_local_nonprim = NULL;

    // ezsignformfieldgroup_get_object_v2_response_m_payload->obj_ezsignformfieldgroup
    cJSON *obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v2_response_m_payloadJSON, "objEzsignformfieldgroup");
    if (cJSON_IsNull(obj_ezsignformfieldgroup)) {
        obj_ezsignformfieldgroup = NULL;
    }
    if (!obj_ezsignformfieldgroup) {
        goto end;
    }

    
    obj_ezsignformfieldgroup_local_nonprim = ezsignformfieldgroup_response_compound_parseFromJSON(obj_ezsignformfieldgroup); //nonprimitive


    ezsignformfieldgroup_get_object_v2_response_m_payload_local_var = ezsignformfieldgroup_get_object_v2_response_m_payload_create_internal (
        obj_ezsignformfieldgroup_local_nonprim
        );

    return ezsignformfieldgroup_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignformfieldgroup_local_nonprim) {
        ezsignformfieldgroup_response_compound_free(obj_ezsignformfieldgroup_local_nonprim);
        obj_ezsignformfieldgroup_local_nonprim = NULL;
    }
    return NULL;

}
