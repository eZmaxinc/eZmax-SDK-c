#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_rename_v1_response_m_payload.h"



static attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload_create_internal(
    int *pki_attachment_id
    ) {
    attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload_local_var = malloc(sizeof(attachment_rename_v1_response_m_payload_t));
    if (!attachment_rename_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(attachment_rename_v1_response_m_payload_local_var, 0, sizeof(attachment_rename_v1_response_m_payload_t));
    attachment_rename_v1_response_m_payload_local_var->_library_owned = 1;
    attachment_rename_v1_response_m_payload_local_var->pki_attachment_id = pki_attachment_id;
    return attachment_rename_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload_create(
    int *pki_attachment_id
    ) {
    int *pki_attachment_id_copy = NULL;
    if (pki_attachment_id) {
        pki_attachment_id_copy = malloc(sizeof(int));
        if (pki_attachment_id_copy) *pki_attachment_id_copy = *pki_attachment_id;
    }
    attachment_rename_v1_response_m_payload_t *result = attachment_rename_v1_response_m_payload_create_internal (
        pki_attachment_id_copy
        );
    if (!result) {
        free(pki_attachment_id_copy);
    }
    return result;
}

void attachment_rename_v1_response_m_payload_free(attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload) {
    if(NULL == attachment_rename_v1_response_m_payload){
        return ;
    }
    if(attachment_rename_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_rename_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_rename_v1_response_m_payload->pki_attachment_id) {
        free(attachment_rename_v1_response_m_payload->pki_attachment_id);
        attachment_rename_v1_response_m_payload->pki_attachment_id = NULL;
    }
    free(attachment_rename_v1_response_m_payload);
}

cJSON *attachment_rename_v1_response_m_payload_convertToJSON(attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // attachment_rename_v1_response_m_payload->pki_attachment_id
    if (!attachment_rename_v1_response_m_payload->pki_attachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAttachmentID", *attachment_rename_v1_response_m_payload->pki_attachment_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload_parseFromJSON(cJSON *attachment_rename_v1_response_m_payloadJSON){

    attachment_rename_v1_response_m_payload_t *attachment_rename_v1_response_m_payload_local_var = NULL;

    // define the local variable for attachment_rename_v1_response_m_payload->pki_attachment_id
    int *pki_attachment_id_local_var = NULL;

    // attachment_rename_v1_response_m_payload->pki_attachment_id
    cJSON *pki_attachment_id = cJSON_GetObjectItemCaseSensitive(attachment_rename_v1_response_m_payloadJSON, "pkiAttachmentID");
    if (cJSON_IsNull(pki_attachment_id)) {
        pki_attachment_id = NULL;
    }
    if (!pki_attachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_attachment_id))
    {
    goto end; //Numeric
    }
    pki_attachment_id_local_var = malloc(sizeof(int));
    if(!pki_attachment_id_local_var)
    {
        goto end;
    }
    *pki_attachment_id_local_var = pki_attachment_id->valuedouble;



    attachment_rename_v1_response_m_payload_local_var = attachment_rename_v1_response_m_payload_create_internal (
        pki_attachment_id_local_var
        );

    if (!attachment_rename_v1_response_m_payload_local_var) {
        goto end;
    }

    return attachment_rename_v1_response_m_payload_local_var;
end:
    if (pki_attachment_id_local_var) {
        free(pki_attachment_id_local_var);
        pki_attachment_id_local_var = NULL;
    }
    return NULL;

}
