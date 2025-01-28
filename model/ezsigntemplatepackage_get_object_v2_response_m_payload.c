#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_object_v2_response_m_payload.h"



static ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_create_internal(
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackage_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatepackage_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;

    ezsigntemplatepackage_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigntemplatepackage_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_create(
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
    ) {
    return ezsigntemplatepackage_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepackage
        );
}

void ezsigntemplatepackage_get_object_v2_response_m_payload_free(ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatepackage_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigntemplatepackage_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage) {
        ezsigntemplatepackage_response_compound_free(ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage);
        ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatepackage_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackage_local_JSON = ezsigntemplatepackage_response_compound_convertToJSON(ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage);
    if(obj_ezsigntemplatepackage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackage", obj_ezsigntemplatepackage_local_JSON);
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

ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v2_response_m_payloadJSON){

    ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage_local_nonprim = NULL;

    // ezsigntemplatepackage_get_object_v2_response_m_payload->obj_ezsigntemplatepackage
    cJSON *obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v2_response_m_payloadJSON, "objEzsigntemplatepackage");
    if (cJSON_IsNull(obj_ezsigntemplatepackage)) {
        obj_ezsigntemplatepackage = NULL;
    }
    if (!obj_ezsigntemplatepackage) {
        goto end;
    }

    
    obj_ezsigntemplatepackage_local_nonprim = ezsigntemplatepackage_response_compound_parseFromJSON(obj_ezsigntemplatepackage); //nonprimitive


    ezsigntemplatepackage_get_object_v2_response_m_payload_local_var = ezsigntemplatepackage_get_object_v2_response_m_payload_create_internal (
        obj_ezsigntemplatepackage_local_nonprim
        );

    return ezsigntemplatepackage_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatepackage_local_nonprim) {
        ezsigntemplatepackage_response_compound_free(obj_ezsigntemplatepackage_local_nonprim);
        obj_ezsigntemplatepackage_local_nonprim = NULL;
    }
    return NULL;

}
