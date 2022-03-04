#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_temporary_proof_v1_response_m_payload.h"



ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_create(
    ezsigndocumentlog_response_compound_t *a_obj_ezsigndocumentlog
    ) {
    ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_temporary_proof_v1_response_m_payload_t));
    if (!ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var->a_obj_ezsigndocumentlog = a_obj_ezsigndocumentlog;

    return ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var;
}


void ezsigndocument_get_temporary_proof_v1_response_m_payload_free(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_temporary_proof_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
        ezsigndocumentlog_response_compound_free(ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog);
        ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog = NULL;
    }
    free(ezsigndocument_get_temporary_proof_v1_response_m_payload);
}

cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payload_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    if (!ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog) {
        goto fail;
    }
    
    cJSON *a_obj_ezsigndocumentlog_local_JSON = ezsigndocumentlog_response_compound_convertToJSON(ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog);
    if(a_obj_ezsigndocumentlog_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "a_objEzsigndocumentlog", a_obj_ezsigndocumentlog_local_JSON);
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

ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_temporary_proof_v1_response_m_payloadJSON){

    ezsigndocument_get_temporary_proof_v1_response_m_payload_t *ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    ezsigndocumentlog_response_compound_t *a_obj_ezsigndocumentlog_local_nonprim = NULL;

    // ezsigndocument_get_temporary_proof_v1_response_m_payload->a_obj_ezsigndocumentlog
    cJSON *a_obj_ezsigndocumentlog = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_temporary_proof_v1_response_m_payloadJSON, "a_objEzsigndocumentlog");
    if (!a_obj_ezsigndocumentlog) {
        goto end;
    }

    
    a_obj_ezsigndocumentlog_local_nonprim = ezsigndocumentlog_response_compound_parseFromJSON(a_obj_ezsigndocumentlog); //nonprimitive


    ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var = ezsigndocument_get_temporary_proof_v1_response_m_payload_create (
        a_obj_ezsigndocumentlog_local_nonprim
        );

    return ezsigndocument_get_temporary_proof_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsigndocumentlog_local_nonprim) {
        ezsigndocumentlog_response_compound_free(a_obj_ezsigndocumentlog_local_nonprim);
        a_obj_ezsigndocumentlog_local_nonprim = NULL;
    }
    return NULL;

}
