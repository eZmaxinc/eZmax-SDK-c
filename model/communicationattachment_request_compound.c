#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationattachment_request_compound.h"



static communicationattachment_request_compound_t *communicationattachment_request_compound_create_internal(
    int *pki_communicationattachment_id,
    int *fki_attachment_id,
    int *fki_invoice_id,
    int *fki_salarypreparation_id
    ) {
    communicationattachment_request_compound_t *communicationattachment_request_compound_local_var = malloc(sizeof(communicationattachment_request_compound_t));
    if (!communicationattachment_request_compound_local_var) {
        return NULL;
    }
    memset(communicationattachment_request_compound_local_var, 0, sizeof(communicationattachment_request_compound_t));
    communicationattachment_request_compound_local_var->_library_owned = 1;
    communicationattachment_request_compound_local_var->pki_communicationattachment_id = pki_communicationattachment_id;
    communicationattachment_request_compound_local_var->fki_attachment_id = fki_attachment_id;
    communicationattachment_request_compound_local_var->fki_invoice_id = fki_invoice_id;
    communicationattachment_request_compound_local_var->fki_salarypreparation_id = fki_salarypreparation_id;
    return communicationattachment_request_compound_local_var;
}

__attribute__((deprecated)) communicationattachment_request_compound_t *communicationattachment_request_compound_create(
    int *pki_communicationattachment_id,
    int *fki_attachment_id,
    int *fki_invoice_id,
    int *fki_salarypreparation_id
    ) {
    int *pki_communicationattachment_id_copy = NULL;
    if (pki_communicationattachment_id) {
        pki_communicationattachment_id_copy = malloc(sizeof(int));
        if (pki_communicationattachment_id_copy) *pki_communicationattachment_id_copy = *pki_communicationattachment_id;
    }
    int *fki_attachment_id_copy = NULL;
    if (fki_attachment_id) {
        fki_attachment_id_copy = malloc(sizeof(int));
        if (fki_attachment_id_copy) *fki_attachment_id_copy = *fki_attachment_id;
    }
    int *fki_invoice_id_copy = NULL;
    if (fki_invoice_id) {
        fki_invoice_id_copy = malloc(sizeof(int));
        if (fki_invoice_id_copy) *fki_invoice_id_copy = *fki_invoice_id;
    }
    int *fki_salarypreparation_id_copy = NULL;
    if (fki_salarypreparation_id) {
        fki_salarypreparation_id_copy = malloc(sizeof(int));
        if (fki_salarypreparation_id_copy) *fki_salarypreparation_id_copy = *fki_salarypreparation_id;
    }
    communicationattachment_request_compound_t *result = communicationattachment_request_compound_create_internal (
        pki_communicationattachment_id_copy,
        fki_attachment_id_copy,
        fki_invoice_id_copy,
        fki_salarypreparation_id_copy
        );
    if (!result) {
        free(pki_communicationattachment_id_copy);
        free(fki_attachment_id_copy);
        free(fki_invoice_id_copy);
        free(fki_salarypreparation_id_copy);
    }
    return result;
}

void communicationattachment_request_compound_free(communicationattachment_request_compound_t *communicationattachment_request_compound) {
    if(NULL == communicationattachment_request_compound){
        return ;
    }
    if(communicationattachment_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communicationattachment_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communicationattachment_request_compound->pki_communicationattachment_id) {
        free(communicationattachment_request_compound->pki_communicationattachment_id);
        communicationattachment_request_compound->pki_communicationattachment_id = NULL;
    }
    if (communicationattachment_request_compound->fki_attachment_id) {
        free(communicationattachment_request_compound->fki_attachment_id);
        communicationattachment_request_compound->fki_attachment_id = NULL;
    }
    if (communicationattachment_request_compound->fki_invoice_id) {
        free(communicationattachment_request_compound->fki_invoice_id);
        communicationattachment_request_compound->fki_invoice_id = NULL;
    }
    if (communicationattachment_request_compound->fki_salarypreparation_id) {
        free(communicationattachment_request_compound->fki_salarypreparation_id);
        communicationattachment_request_compound->fki_salarypreparation_id = NULL;
    }
    free(communicationattachment_request_compound);
}

cJSON *communicationattachment_request_compound_convertToJSON(communicationattachment_request_compound_t *communicationattachment_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationattachment_request_compound->pki_communicationattachment_id
    if(communicationattachment_request_compound->pki_communicationattachment_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationattachmentID", *communicationattachment_request_compound->pki_communicationattachment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_request_compound->fki_attachment_id
    if(communicationattachment_request_compound->fki_attachment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAttachmentID", *communicationattachment_request_compound->fki_attachment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_request_compound->fki_invoice_id
    if(communicationattachment_request_compound->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", *communicationattachment_request_compound->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationattachment_request_compound->fki_salarypreparation_id
    if(communicationattachment_request_compound->fki_salarypreparation_id) {
    if(cJSON_AddNumberToObject(item, "fkiSalarypreparationID", *communicationattachment_request_compound->fki_salarypreparation_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communicationattachment_request_compound_t *communicationattachment_request_compound_parseFromJSON(cJSON *communicationattachment_request_compoundJSON){

    communicationattachment_request_compound_t *communicationattachment_request_compound_local_var = NULL;

    // define the local variable for communicationattachment_request_compound->pki_communicationattachment_id
    int *pki_communicationattachment_id_local_var = NULL;

    // define the local variable for communicationattachment_request_compound->fki_attachment_id
    int *fki_attachment_id_local_var = NULL;

    // define the local variable for communicationattachment_request_compound->fki_invoice_id
    int *fki_invoice_id_local_var = NULL;

    // define the local variable for communicationattachment_request_compound->fki_salarypreparation_id
    int *fki_salarypreparation_id_local_var = NULL;

    // communicationattachment_request_compound->pki_communicationattachment_id
    cJSON *pki_communicationattachment_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_request_compoundJSON, "pkiCommunicationattachmentID");
    if (cJSON_IsNull(pki_communicationattachment_id)) {
        pki_communicationattachment_id = NULL;
    }
    if (pki_communicationattachment_id) { 
    if(!cJSON_IsNumber(pki_communicationattachment_id))
    {
    goto end; //Numeric
    }
    pki_communicationattachment_id_local_var = malloc(sizeof(int));
    if(!pki_communicationattachment_id_local_var)
    {
        goto end;
    }
    *pki_communicationattachment_id_local_var = pki_communicationattachment_id->valuedouble;
    }

    // communicationattachment_request_compound->fki_attachment_id
    cJSON *fki_attachment_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_request_compoundJSON, "fkiAttachmentID");
    if (cJSON_IsNull(fki_attachment_id)) {
        fki_attachment_id = NULL;
    }
    if (fki_attachment_id) { 
    if(!cJSON_IsNumber(fki_attachment_id))
    {
    goto end; //Numeric
    }
    fki_attachment_id_local_var = malloc(sizeof(int));
    if(!fki_attachment_id_local_var)
    {
        goto end;
    }
    *fki_attachment_id_local_var = fki_attachment_id->valuedouble;
    }

    // communicationattachment_request_compound->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_request_compoundJSON, "fkiInvoiceID");
    if (cJSON_IsNull(fki_invoice_id)) {
        fki_invoice_id = NULL;
    }
    if (fki_invoice_id) { 
    if(!cJSON_IsNumber(fki_invoice_id))
    {
    goto end; //Numeric
    }
    fki_invoice_id_local_var = malloc(sizeof(int));
    if(!fki_invoice_id_local_var)
    {
        goto end;
    }
    *fki_invoice_id_local_var = fki_invoice_id->valuedouble;
    }

    // communicationattachment_request_compound->fki_salarypreparation_id
    cJSON *fki_salarypreparation_id = cJSON_GetObjectItemCaseSensitive(communicationattachment_request_compoundJSON, "fkiSalarypreparationID");
    if (cJSON_IsNull(fki_salarypreparation_id)) {
        fki_salarypreparation_id = NULL;
    }
    if (fki_salarypreparation_id) { 
    if(!cJSON_IsNumber(fki_salarypreparation_id))
    {
    goto end; //Numeric
    }
    fki_salarypreparation_id_local_var = malloc(sizeof(int));
    if(!fki_salarypreparation_id_local_var)
    {
        goto end;
    }
    *fki_salarypreparation_id_local_var = fki_salarypreparation_id->valuedouble;
    }



    communicationattachment_request_compound_local_var = communicationattachment_request_compound_create_internal (
        pki_communicationattachment_id_local_var,
        fki_attachment_id_local_var,
        fki_invoice_id_local_var,
        fki_salarypreparation_id_local_var
        );

    if (!communicationattachment_request_compound_local_var) {
        goto end;
    }

    return communicationattachment_request_compound_local_var;
end:
    if (pki_communicationattachment_id_local_var) {
        free(pki_communicationattachment_id_local_var);
        pki_communicationattachment_id_local_var = NULL;
    }
    if (fki_attachment_id_local_var) {
        free(fki_attachment_id_local_var);
        fki_attachment_id_local_var = NULL;
    }
    if (fki_invoice_id_local_var) {
        free(fki_invoice_id_local_var);
        fki_invoice_id_local_var = NULL;
    }
    if (fki_salarypreparation_id_local_var) {
        free(fki_salarypreparation_id_local_var);
        fki_salarypreparation_id_local_var = NULL;
    }
    return NULL;

}
