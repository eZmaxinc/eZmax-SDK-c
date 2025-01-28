#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_get_object_v2_response_m_payload.h"



static ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_create_internal(
    ezsigntemplatepackagesigner_response_compound_t *obj_ezsigntemplatepackagesigner
    ) {
    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatepackagesigner = obj_ezsigntemplatepackagesigner;

    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_create(
    ezsigntemplatepackagesigner_response_compound_t *obj_ezsigntemplatepackagesigner
    ) {
    return ezsigntemplatepackagesigner_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepackagesigner
        );
}

void ezsigntemplatepackagesigner_get_object_v2_response_m_payload_free(ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatepackagesigner_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackagesigner_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner) {
        ezsigntemplatepackagesigner_response_compound_free(ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner = NULL;
    }
    free(ezsigntemplatepackagesigner_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackagesigner_local_JSON = ezsigntemplatepackagesigner_response_compound_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner);
    if(obj_ezsigntemplatepackagesigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackagesigner", obj_ezsigntemplatepackagesigner_local_JSON);
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

ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v2_response_m_payloadJSON){

    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner
    ezsigntemplatepackagesigner_response_compound_t *obj_ezsigntemplatepackagesigner_local_nonprim = NULL;

    // ezsigntemplatepackagesigner_get_object_v2_response_m_payload->obj_ezsigntemplatepackagesigner
    cJSON *obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_get_object_v2_response_m_payloadJSON, "objEzsigntemplatepackagesigner");
    if (cJSON_IsNull(obj_ezsigntemplatepackagesigner)) {
        obj_ezsigntemplatepackagesigner = NULL;
    }
    if (!obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    obj_ezsigntemplatepackagesigner_local_nonprim = ezsigntemplatepackagesigner_response_compound_parseFromJSON(obj_ezsigntemplatepackagesigner); //nonprimitive


    ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var = ezsigntemplatepackagesigner_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepackagesigner_local_nonprim
        );

    return ezsigntemplatepackagesigner_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatepackagesigner_local_nonprim) {
        ezsigntemplatepackagesigner_response_compound_free(obj_ezsigntemplatepackagesigner_local_nonprim);
        obj_ezsigntemplatepackagesigner_local_nonprim = NULL;
    }
    return NULL;

}
