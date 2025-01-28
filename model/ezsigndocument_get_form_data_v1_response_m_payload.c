#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_form_data_v1_response_m_payload.h"



static ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_create_internal(
    custom_form_data_document_response_t *obj_form_data_document
    ) {
    ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_form_data_v1_response_m_payload_t));
    if (!ezsigndocument_get_form_data_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_form_data_v1_response_m_payload_local_var->obj_form_data_document = obj_form_data_document;

    ezsigndocument_get_form_data_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigndocument_get_form_data_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_create(
    custom_form_data_document_response_t *obj_form_data_document
    ) {
    return ezsigndocument_get_form_data_v1_response_m_payload_create_internal (
        obj_form_data_document
        );
}

void ezsigndocument_get_form_data_v1_response_m_payload_free(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_form_data_v1_response_m_payload){
        return ;
    }
    if(ezsigndocument_get_form_data_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_get_form_data_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document) {
        custom_form_data_document_response_free(ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document);
        ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document = NULL;
    }
    free(ezsigndocument_get_form_data_v1_response_m_payload);
}

cJSON *ezsigndocument_get_form_data_v1_response_m_payload_convertToJSON(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document
    if (!ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document) {
        goto fail;
    }
    cJSON *obj_form_data_document_local_JSON = custom_form_data_document_response_convertToJSON(ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document);
    if(obj_form_data_document_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objFormDataDocument", obj_form_data_document_local_JSON);
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

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_form_data_v1_response_m_payloadJSON){

    ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document
    custom_form_data_document_response_t *obj_form_data_document_local_nonprim = NULL;

    // ezsigndocument_get_form_data_v1_response_m_payload->obj_form_data_document
    cJSON *obj_form_data_document = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_form_data_v1_response_m_payloadJSON, "objFormDataDocument");
    if (cJSON_IsNull(obj_form_data_document)) {
        obj_form_data_document = NULL;
    }
    if (!obj_form_data_document) {
        goto end;
    }

    
    obj_form_data_document_local_nonprim = custom_form_data_document_response_parseFromJSON(obj_form_data_document); //nonprimitive


    ezsigndocument_get_form_data_v1_response_m_payload_local_var = ezsigndocument_get_form_data_v1_response_m_payload_create_internal (
        obj_form_data_document_local_nonprim
        );

    return ezsigndocument_get_form_data_v1_response_m_payload_local_var;
end:
    if (obj_form_data_document_local_nonprim) {
        custom_form_data_document_response_free(obj_form_data_document_local_nonprim);
        obj_form_data_document_local_nonprim = NULL;
    }
    return NULL;

}
