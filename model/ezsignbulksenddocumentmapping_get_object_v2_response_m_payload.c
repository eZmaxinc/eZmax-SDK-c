#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_get_object_v2_response_m_payload.h"



ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_create(
    ezsignbulksenddocumentmapping_response_compound_t *obj_ezsignbulksenddocumentmapping
    ) {
    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t));
    if (!ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var->obj_ezsignbulksenddocumentmapping = obj_ezsignbulksenddocumentmapping;

    return ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var;
}


void ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_free(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload) {
    if(NULL == ezsignbulksenddocumentmapping_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping) {
        ezsignbulksenddocumentmapping_response_compound_free(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping);
        ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping = NULL;
    }
    free(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload);
}

cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping
    if (!ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping) {
        goto fail;
    }
    cJSON *obj_ezsignbulksenddocumentmapping_local_JSON = ezsignbulksenddocumentmapping_response_compound_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping);
    if(obj_ezsignbulksenddocumentmapping_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignbulksenddocumentmapping", obj_ezsignbulksenddocumentmapping_local_JSON);
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

ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_m_payloadJSON){

    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping
    ezsignbulksenddocumentmapping_response_compound_t *obj_ezsignbulksenddocumentmapping_local_nonprim = NULL;

    // ezsignbulksenddocumentmapping_get_object_v2_response_m_payload->obj_ezsignbulksenddocumentmapping
    cJSON *obj_ezsignbulksenddocumentmapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v2_response_m_payloadJSON, "objEzsignbulksenddocumentmapping");
    if (!obj_ezsignbulksenddocumentmapping) {
        goto end;
    }

    
    obj_ezsignbulksenddocumentmapping_local_nonprim = ezsignbulksenddocumentmapping_response_compound_parseFromJSON(obj_ezsignbulksenddocumentmapping); //nonprimitive


    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var = ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_create (
        obj_ezsignbulksenddocumentmapping_local_nonprim
        );

    return ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsignbulksenddocumentmapping_local_nonprim) {
        ezsignbulksenddocumentmapping_response_compound_free(obj_ezsignbulksenddocumentmapping_local_nonprim);
        obj_ezsignbulksenddocumentmapping_local_nonprim = NULL;
    }
    return NULL;

}
