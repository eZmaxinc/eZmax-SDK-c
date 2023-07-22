#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationattachment_response_compound.h"



communicationattachment_response_compound_t *communicationattachment_response_compound_create(
    int pki_communicationattachment_id,
    int fki_attachment_id,
    int fki_invoice_id,
    int fki_salarypreparation_id,
    char *s_communicationattachment_name,
    char *s_download_url
    ) {
    communicationattachment_response_compound_t *communicationattachment_response_compound_local_var = malloc(sizeof(communicationattachment_response_compound_t));
    if (!communicationattachment_response_compound_local_var) {
        return NULL;
    }
    communicationattachment_response_compound_local_var->pki_communicationattachment_id = pki_communicationattachment_id;
    communicationattachment_response_compound_local_var->fki_attachment_id = fki_attachment_id;
    communicationattachment_response_compound_local_var->fki_invoice_id = fki_invoice_id;
    communicationattachment_response_compound_local_var->fki_salarypreparation_id = fki_salarypreparation_id;
    communicationattachment_response_compound_local_var->s_communicationattachment_name = s_communicationattachment_name;
    communicationattachment_response_compound_local_var->s_download_url = s_download_url;

    return communicationattachment_response_compound_local_var;
}


void communicationattachment_response_compound_free(communicationattachment_response_compound_t *communicationattachment_response_compound) {
    if(NULL == communicationattachment_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (communicationattachment_response_compound->s_communicationattachment_name) {
        free(communicationattachment_response_compound->s_communicationattachment_name);
        communicationattachment_response_compound->s_communicationattachment_name = NULL;
    }
    if (communicationattachment_response_compound->s_download_url) {
        free(communicationattachment_response_compound->s_download_url);
        communicationattachment_response_compound->s_download_url = NULL;
    }
    free(communicationattachment_response_compound);
}

cJSON *communicationattachment_response_compound_convertToJSON(communicationattachment_response_compound_t *communicationattachment_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationattachment_response_compound->pki_communicationattachment_id
    if (!communicationattachment_response_compound->pki_communicationattachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCommunicationattachmentID", communicationattachment_response_compound->pki_communicationattachment_id) == NULL) {
    goto fail; //Numeric
    }


    // communicationattachment_response_compound->fki_attachment_id
    if(communicationattachment_response_compound->fki_attachment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAttachmentID", communicationattachment_response_compound->fki_attachment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_response_compound->fki_invoice_id
    if(communicationattachment_response_compound->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", communicationattachment_response_compound->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_response_compound->fki_salarypreparation_id
    if(communicationattachment_response_compound->fki_salarypreparation_id) {
    if(cJSON_AddNumberToObject(item, "fkiSalarypreparationID", communicationattachment_response_compound->fki_salarypreparation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_response_compound->s_communicationattachment_name
    if (!communicationattachment_response_compound->s_communicationattachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCommunicationattachmentName", communicationattachment_response_compound->s_communicationattachment_name) == NULL) {
    goto fail; //String
    }


    // communicationattachment_response_compound->s_download_url
    if(communicationattachment_response_compound->s_download_url) {
    if(cJSON_AddStringToObject(item, "sDownloadUrl", communicationattachment_response_compound->s_download_url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communicationattachment_response_compound_t *communicationattachment_response_compound_parseFromJSON(cJSON *communicationattachment_response_compoundJSON){

    communicationattachment_response_compound_t *communicationattachment_response_compound_local_var = NULL;

    // communicationattachment_response_compound->pki_communicationattachment_id
    cJSON *pki_communicationattachment_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "pkiCommunicationattachmentID");
    if (!pki_communicationattachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_communicationattachment_id))
    {
    goto end; //Numeric
    }

    // communicationattachment_response_compound->fki_attachment_id
    cJSON *fki_attachment_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "fkiAttachmentID");
    if (fki_attachment_id) { 
    if(!cJSON_IsNumber(fki_attachment_id))
    {
    goto end; //Numeric
    }
    }

    // communicationattachment_response_compound->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "fkiInvoiceID");
    if (fki_invoice_id) { 
    if(!cJSON_IsNumber(fki_invoice_id))
    {
    goto end; //Numeric
    }
    }

    // communicationattachment_response_compound->fki_salarypreparation_id
    cJSON *fki_salarypreparation_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "fkiSalarypreparationID");
    if (fki_salarypreparation_id) { 
    if(!cJSON_IsNumber(fki_salarypreparation_id))
    {
    goto end; //Numeric
    }
    }

    // communicationattachment_response_compound->s_communicationattachment_name
    cJSON *s_communicationattachment_name = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "sCommunicationattachmentName");
    if (!s_communicationattachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_communicationattachment_name))
    {
    goto end; //String
    }

    // communicationattachment_response_compound->s_download_url
    cJSON *s_download_url = cJSON_GetObjectItemCaseSensitive(communicationattachment_response_compoundJSON, "sDownloadUrl");
    if (s_download_url) { 
    if(!cJSON_IsString(s_download_url) && !cJSON_IsNull(s_download_url))
    {
    goto end; //String
    }
    }


    communicationattachment_response_compound_local_var = communicationattachment_response_compound_create (
        pki_communicationattachment_id->valuedouble,
        fki_attachment_id ? fki_attachment_id->valuedouble : 0,
        fki_invoice_id ? fki_invoice_id->valuedouble : 0,
        fki_salarypreparation_id ? fki_salarypreparation_id->valuedouble : 0,
        strdup(s_communicationattachment_name->valuestring),
        s_download_url && !cJSON_IsNull(s_download_url) ? strdup(s_download_url->valuestring) : NULL
        );

    return communicationattachment_response_compound_local_var;
end:
    return NULL;

}
