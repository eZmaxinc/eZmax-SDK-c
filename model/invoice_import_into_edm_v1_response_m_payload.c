#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_import_into_edm_v1_response_m_payload.h"



static invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_pki_attachment_id
    ) {
    invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(invoice_import_into_edm_v1_response_m_payload_t));
    if (!invoice_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(invoice_import_into_edm_v1_response_m_payload_local_var, 0, sizeof(invoice_import_into_edm_v1_response_m_payload_t));
    invoice_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    invoice_import_into_edm_v1_response_m_payload_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return invoice_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_create(
    list_t *a_pki_attachment_id
    ) {
    invoice_import_into_edm_v1_response_m_payload_t *result = invoice_import_into_edm_v1_response_m_payload_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void invoice_import_into_edm_v1_response_m_payload_free(invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload) {
    if(NULL == invoice_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(invoice_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id) {
        list_ForEach(listEntry, invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id);
        invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id = NULL;
    }
    free(invoice_import_into_edm_v1_response_m_payload);
}

cJSON *invoice_import_into_edm_v1_response_m_payload_convertToJSON(invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id
    if (!invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id) {
    if(cJSON_AddNumberToObject(a_pki_attachment_id, "", *(double *)a_pki_attachment_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *invoice_import_into_edm_v1_response_m_payloadJSON){

    invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // invoice_import_into_edm_v1_response_m_payload->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(invoice_import_into_edm_v1_response_m_payloadJSON, "a_pkiAttachmentID");
    if (cJSON_IsNull(a_pki_attachment_id)) {
        a_pki_attachment_id = NULL;
    }
    if (!a_pki_attachment_id) {
        goto end;
    }

    
    cJSON *a_pki_attachment_id_local = NULL;
    if(!cJSON_IsArray(a_pki_attachment_id)) {
        goto end;//primitive container
    }
    a_pki_attachment_idList = list_createList();

    cJSON_ArrayForEach(a_pki_attachment_id_local, a_pki_attachment_id)
    {
        if(!cJSON_IsNumber(a_pki_attachment_id_local))
        {
            goto end;
        }
        double *a_pki_attachment_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_attachment_id_local_value)
        {
            goto end;
        }
        *a_pki_attachment_id_local_value = a_pki_attachment_id_local->valuedouble;
        list_addElement(a_pki_attachment_idList , a_pki_attachment_id_local_value);
    }



    invoice_import_into_edm_v1_response_m_payload_local_var = invoice_import_into_edm_v1_response_m_payload_create_internal (
        a_pki_attachment_idList
        );

    if (!invoice_import_into_edm_v1_response_m_payload_local_var) {
        goto end;
    }

    return invoice_import_into_edm_v1_response_m_payload_local_var;
end:
    if (a_pki_attachment_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_attachment_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_attachment_idList);
        a_pki_attachment_idList = NULL;
    }
    return NULL;

}
