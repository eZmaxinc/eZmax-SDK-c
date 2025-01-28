#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_get_object_v2_response_m_payload.h"



static ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_create_internal(
    ezsigndiscussion_response_compound_t *obj_ezsigndiscussion
    ) {
    ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigndiscussion_get_object_v2_response_m_payload_t));
    if (!ezsigndiscussion_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndiscussion_get_object_v2_response_m_payload_local_var->obj_ezsigndiscussion = obj_ezsigndiscussion;

    ezsigndiscussion_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return ezsigndiscussion_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_create(
    ezsigndiscussion_response_compound_t *obj_ezsigndiscussion
    ) {
    return ezsigndiscussion_get_object_v2_response_m_payload_create_internal (
        obj_ezsigndiscussion
        );
}

void ezsigndiscussion_get_object_v2_response_m_payload_free(ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload) {
    if(NULL == ezsigndiscussion_get_object_v2_response_m_payload){
        return ;
    }
    if(ezsigndiscussion_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndiscussion_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion) {
        ezsigndiscussion_response_compound_free(ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion);
        ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion = NULL;
    }
    free(ezsigndiscussion_get_object_v2_response_m_payload);
}

cJSON *ezsigndiscussion_get_object_v2_response_m_payload_convertToJSON(ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion
    if (!ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion) {
        goto fail;
    }
    cJSON *obj_ezsigndiscussion_local_JSON = ezsigndiscussion_response_compound_convertToJSON(ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion);
    if(obj_ezsigndiscussion_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndiscussion", obj_ezsigndiscussion_local_JSON);
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

ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigndiscussion_get_object_v2_response_m_payloadJSON){

    ezsigndiscussion_get_object_v2_response_m_payload_t *ezsigndiscussion_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion
    ezsigndiscussion_response_compound_t *obj_ezsigndiscussion_local_nonprim = NULL;

    // ezsigndiscussion_get_object_v2_response_m_payload->obj_ezsigndiscussion
    cJSON *obj_ezsigndiscussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_get_object_v2_response_m_payloadJSON, "objEzsigndiscussion");
    if (cJSON_IsNull(obj_ezsigndiscussion)) {
        obj_ezsigndiscussion = NULL;
    }
    if (!obj_ezsigndiscussion) {
        goto end;
    }

    
    obj_ezsigndiscussion_local_nonprim = ezsigndiscussion_response_compound_parseFromJSON(obj_ezsigndiscussion); //nonprimitive


    ezsigndiscussion_get_object_v2_response_m_payload_local_var = ezsigndiscussion_get_object_v2_response_m_payload_create_internal (
        obj_ezsigndiscussion_local_nonprim
        );

    return ezsigndiscussion_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigndiscussion_local_nonprim) {
        ezsigndiscussion_response_compound_free(obj_ezsigndiscussion_local_nonprim);
        obj_ezsigndiscussion_local_nonprim = NULL;
    }
    return NULL;

}
