#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload.h"



ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_create(
    ezsigntemplatedocumentpagerecognition_response_compound_t *obj_ezsigntemplatedocumentpagerecognition
    ) {
    ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t));
    if (!ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var->obj_ezsigntemplatedocumentpagerecognition = obj_ezsigntemplatedocumentpagerecognition;

    return ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var;
}


void ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_free(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload) {
    if(NULL == ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition) {
        ezsigntemplatedocumentpagerecognition_response_compound_free(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition);
        ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload);
}

cJSON *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition
    if (!ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatedocumentpagerecognition_local_JSON = ezsigntemplatedocumentpagerecognition_response_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition);
    if(obj_ezsigntemplatedocumentpagerecognition_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocumentpagerecognition", obj_ezsigntemplatedocumentpagerecognition_local_JSON);
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

ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payloadJSON){

    ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_t *ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition
    ezsigntemplatedocumentpagerecognition_response_compound_t *obj_ezsigntemplatedocumentpagerecognition_local_nonprim = NULL;

    // ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload->obj_ezsigntemplatedocumentpagerecognition
    cJSON *obj_ezsigntemplatedocumentpagerecognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payloadJSON, "objEzsigntemplatedocumentpagerecognition");
    if (!obj_ezsigntemplatedocumentpagerecognition) {
        goto end;
    }

    
    obj_ezsigntemplatedocumentpagerecognition_local_nonprim = ezsigntemplatedocumentpagerecognition_response_compound_parseFromJSON(obj_ezsigntemplatedocumentpagerecognition); //nonprimitive


    ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var = ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_create (
        obj_ezsigntemplatedocumentpagerecognition_local_nonprim
        );

    return ezsigntemplatedocumentpagerecognition_get_object_v2_response_m_payload_local_var;
end:
    if (obj_ezsigntemplatedocumentpagerecognition_local_nonprim) {
        ezsigntemplatedocumentpagerecognition_response_compound_free(obj_ezsigntemplatedocumentpagerecognition_local_nonprim);
        obj_ezsigntemplatedocumentpagerecognition_local_nonprim = NULL;
    }
    return NULL;

}
