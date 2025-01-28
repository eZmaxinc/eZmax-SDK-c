#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_get_object_v2_response_m_payload.h"



static ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_create_internal(
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignfoldersignerassociation_get_object_v2_response_m_payload_t));
    if (!ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;

    ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_create(
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
    ) {
    return ezsignfoldersignerassociation_get_object_v2_response_m_payload_create_internal (
        obj_ezsignfoldersignerassociation
        );
}

void ezsignfoldersignerassociation_get_object_v2_response_m_payload_free(ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload) {
    if(NULL == ezsignfoldersignerassociation_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsignfoldersignerassociation_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_response_compound_free(ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfoldersignerassociation_get_object_v2_response_m_payload);
}

cJSON *ezsignfoldersignerassociation_get_object_v2_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation
    if (!ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation);
    if(obj_ezsignfoldersignerassociation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociation", obj_ezsignfoldersignerassociation_local_JSON);
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

ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v2_response_m_payloadJSON){

    ezsignfoldersignerassociation_get_object_v2_response_m_payload_t *ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;

    // ezsignfoldersignerassociation_get_object_v2_response_m_payload->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v2_response_m_payloadJSON, "objEzsignfoldersignerassociation");
    if (cJSON_IsNull(obj_ezsignfoldersignerassociation)) {
        obj_ezsignfoldersignerassociation = NULL;
    }
    if (!obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_response_compound_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive


    ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var = ezsignfoldersignerassociation_get_object_v2_response_m_payload_create_internal (
        obj_ezsignfoldersignerassociation_local_nonprim
        );

    return ezsignfoldersignerassociation_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_response_compound_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    return NULL;

}
