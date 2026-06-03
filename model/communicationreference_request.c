#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationreference_request.h"



static communicationreference_request_t *communicationreference_request_create_internal(
    int *pki_communicationreference_id,
    int *fki_buyercontract_id,
    int *fki_ezsignfolder_id,
    int *fki_inscription_id,
    int *fki_inscriptiontemp_id,
    int *fki_invoice_id,
    int *fki_otherincome_id,
    int *fki_electronicfundstransfer_id,
    int *fki_rejectedoffertopurchase_id
    ) {
    communicationreference_request_t *communicationreference_request_local_var = malloc(sizeof(communicationreference_request_t));
    if (!communicationreference_request_local_var) {
        return NULL;
    }
    memset(communicationreference_request_local_var, 0, sizeof(communicationreference_request_t));
    communicationreference_request_local_var->_library_owned = 1;
    communicationreference_request_local_var->pki_communicationreference_id = pki_communicationreference_id;
    communicationreference_request_local_var->fki_buyercontract_id = fki_buyercontract_id;
    communicationreference_request_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    communicationreference_request_local_var->fki_inscription_id = fki_inscription_id;
    communicationreference_request_local_var->fki_inscriptiontemp_id = fki_inscriptiontemp_id;
    communicationreference_request_local_var->fki_invoice_id = fki_invoice_id;
    communicationreference_request_local_var->fki_otherincome_id = fki_otherincome_id;
    communicationreference_request_local_var->fki_electronicfundstransfer_id = fki_electronicfundstransfer_id;
    communicationreference_request_local_var->fki_rejectedoffertopurchase_id = fki_rejectedoffertopurchase_id;
    return communicationreference_request_local_var;
}

__attribute__((deprecated)) communicationreference_request_t *communicationreference_request_create(
    int *pki_communicationreference_id,
    int *fki_buyercontract_id,
    int *fki_ezsignfolder_id,
    int *fki_inscription_id,
    int *fki_inscriptiontemp_id,
    int *fki_invoice_id,
    int *fki_otherincome_id,
    int *fki_electronicfundstransfer_id,
    int *fki_rejectedoffertopurchase_id
    ) {
    int *pki_communicationreference_id_copy = NULL;
    if (pki_communicationreference_id) {
        pki_communicationreference_id_copy = malloc(sizeof(int));
        if (pki_communicationreference_id_copy) *pki_communicationreference_id_copy = *pki_communicationreference_id;
    }
    int *fki_buyercontract_id_copy = NULL;
    if (fki_buyercontract_id) {
        fki_buyercontract_id_copy = malloc(sizeof(int));
        if (fki_buyercontract_id_copy) *fki_buyercontract_id_copy = *fki_buyercontract_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    int *fki_inscription_id_copy = NULL;
    if (fki_inscription_id) {
        fki_inscription_id_copy = malloc(sizeof(int));
        if (fki_inscription_id_copy) *fki_inscription_id_copy = *fki_inscription_id;
    }
    int *fki_inscriptiontemp_id_copy = NULL;
    if (fki_inscriptiontemp_id) {
        fki_inscriptiontemp_id_copy = malloc(sizeof(int));
        if (fki_inscriptiontemp_id_copy) *fki_inscriptiontemp_id_copy = *fki_inscriptiontemp_id;
    }
    int *fki_invoice_id_copy = NULL;
    if (fki_invoice_id) {
        fki_invoice_id_copy = malloc(sizeof(int));
        if (fki_invoice_id_copy) *fki_invoice_id_copy = *fki_invoice_id;
    }
    int *fki_otherincome_id_copy = NULL;
    if (fki_otherincome_id) {
        fki_otherincome_id_copy = malloc(sizeof(int));
        if (fki_otherincome_id_copy) *fki_otherincome_id_copy = *fki_otherincome_id;
    }
    int *fki_electronicfundstransfer_id_copy = NULL;
    if (fki_electronicfundstransfer_id) {
        fki_electronicfundstransfer_id_copy = malloc(sizeof(int));
        if (fki_electronicfundstransfer_id_copy) *fki_electronicfundstransfer_id_copy = *fki_electronicfundstransfer_id;
    }
    int *fki_rejectedoffertopurchase_id_copy = NULL;
    if (fki_rejectedoffertopurchase_id) {
        fki_rejectedoffertopurchase_id_copy = malloc(sizeof(int));
        if (fki_rejectedoffertopurchase_id_copy) *fki_rejectedoffertopurchase_id_copy = *fki_rejectedoffertopurchase_id;
    }
    communicationreference_request_t *result = communicationreference_request_create_internal (
        pki_communicationreference_id_copy,
        fki_buyercontract_id_copy,
        fki_ezsignfolder_id_copy,
        fki_inscription_id_copy,
        fki_inscriptiontemp_id_copy,
        fki_invoice_id_copy,
        fki_otherincome_id_copy,
        fki_electronicfundstransfer_id_copy,
        fki_rejectedoffertopurchase_id_copy
        );
    if (!result) {
        free(pki_communicationreference_id_copy);
        free(fki_buyercontract_id_copy);
        free(fki_ezsignfolder_id_copy);
        free(fki_inscription_id_copy);
        free(fki_inscriptiontemp_id_copy);
        free(fki_invoice_id_copy);
        free(fki_otherincome_id_copy);
        free(fki_electronicfundstransfer_id_copy);
        free(fki_rejectedoffertopurchase_id_copy);
    }
    return result;
}

void communicationreference_request_free(communicationreference_request_t *communicationreference_request) {
    if(NULL == communicationreference_request){
        return ;
    }
    if(communicationreference_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "communicationreference_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (communicationreference_request->pki_communicationreference_id) {
        free(communicationreference_request->pki_communicationreference_id);
        communicationreference_request->pki_communicationreference_id = NULL;
    }
    if (communicationreference_request->fki_buyercontract_id) {
        free(communicationreference_request->fki_buyercontract_id);
        communicationreference_request->fki_buyercontract_id = NULL;
    }
    if (communicationreference_request->fki_ezsignfolder_id) {
        free(communicationreference_request->fki_ezsignfolder_id);
        communicationreference_request->fki_ezsignfolder_id = NULL;
    }
    if (communicationreference_request->fki_inscription_id) {
        free(communicationreference_request->fki_inscription_id);
        communicationreference_request->fki_inscription_id = NULL;
    }
    if (communicationreference_request->fki_inscriptiontemp_id) {
        free(communicationreference_request->fki_inscriptiontemp_id);
        communicationreference_request->fki_inscriptiontemp_id = NULL;
    }
    if (communicationreference_request->fki_invoice_id) {
        free(communicationreference_request->fki_invoice_id);
        communicationreference_request->fki_invoice_id = NULL;
    }
    if (communicationreference_request->fki_otherincome_id) {
        free(communicationreference_request->fki_otherincome_id);
        communicationreference_request->fki_otherincome_id = NULL;
    }
    if (communicationreference_request->fki_electronicfundstransfer_id) {
        free(communicationreference_request->fki_electronicfundstransfer_id);
        communicationreference_request->fki_electronicfundstransfer_id = NULL;
    }
    if (communicationreference_request->fki_rejectedoffertopurchase_id) {
        free(communicationreference_request->fki_rejectedoffertopurchase_id);
        communicationreference_request->fki_rejectedoffertopurchase_id = NULL;
    }
    free(communicationreference_request);
}

cJSON *communicationreference_request_convertToJSON(communicationreference_request_t *communicationreference_request) {
    cJSON *item = cJSON_CreateObject();

    // communicationreference_request->pki_communicationreference_id
    if(communicationreference_request->pki_communicationreference_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationreferenceID", *communicationreference_request->pki_communicationreference_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_buyercontract_id
    if(communicationreference_request->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", *communicationreference_request->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_ezsignfolder_id
    if(communicationreference_request->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *communicationreference_request->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_inscription_id
    if(communicationreference_request->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", *communicationreference_request->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_inscriptiontemp_id
    if(communicationreference_request->fki_inscriptiontemp_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontempID", *communicationreference_request->fki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_invoice_id
    if(communicationreference_request->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", *communicationreference_request->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_otherincome_id
    if(communicationreference_request->fki_otherincome_id) {
    if(cJSON_AddNumberToObject(item, "fkiOtherincomeID", *communicationreference_request->fki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_electronicfundstransfer_id
    if(communicationreference_request->fki_electronicfundstransfer_id) {
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferID", *communicationreference_request->fki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request->fki_rejectedoffertopurchase_id
    if(communicationreference_request->fki_rejectedoffertopurchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiRejectedoffertopurchaseID", *communicationreference_request->fki_rejectedoffertopurchase_id) == NULL) {
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

communicationreference_request_t *communicationreference_request_parseFromJSON(cJSON *communicationreference_requestJSON){

    communicationreference_request_t *communicationreference_request_local_var = NULL;

    // define the local variable for communicationreference_request->pki_communicationreference_id
    int *pki_communicationreference_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_buyercontract_id
    int *fki_buyercontract_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_inscription_id
    int *fki_inscription_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_inscriptiontemp_id
    int *fki_inscriptiontemp_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_invoice_id
    int *fki_invoice_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_otherincome_id
    int *fki_otherincome_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_electronicfundstransfer_id
    int *fki_electronicfundstransfer_id_local_var = NULL;

    // define the local variable for communicationreference_request->fki_rejectedoffertopurchase_id
    int *fki_rejectedoffertopurchase_id_local_var = NULL;

    // communicationreference_request->pki_communicationreference_id
    cJSON *pki_communicationreference_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "pkiCommunicationreferenceID");
    if (cJSON_IsNull(pki_communicationreference_id)) {
        pki_communicationreference_id = NULL;
    }
    if (pki_communicationreference_id) { 
    if(!cJSON_IsNumber(pki_communicationreference_id))
    {
    goto end; //Numeric
    }
    pki_communicationreference_id_local_var = malloc(sizeof(int));
    if(!pki_communicationreference_id_local_var)
    {
        goto end;
    }
    *pki_communicationreference_id_local_var = pki_communicationreference_id->valuedouble;
    }

    // communicationreference_request->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiBuyercontractID");
    if (cJSON_IsNull(fki_buyercontract_id)) {
        fki_buyercontract_id = NULL;
    }
    if (fki_buyercontract_id) { 
    if(!cJSON_IsNumber(fki_buyercontract_id))
    {
    goto end; //Numeric
    }
    fki_buyercontract_id_local_var = malloc(sizeof(int));
    if(!fki_buyercontract_id_local_var)
    {
        goto end;
    }
    *fki_buyercontract_id_local_var = fki_buyercontract_id->valuedouble;
    }

    // communicationreference_request->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (fki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;
    }

    // communicationreference_request->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiInscriptionID");
    if (cJSON_IsNull(fki_inscription_id)) {
        fki_inscription_id = NULL;
    }
    if (fki_inscription_id) { 
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    fki_inscription_id_local_var = malloc(sizeof(int));
    if(!fki_inscription_id_local_var)
    {
        goto end;
    }
    *fki_inscription_id_local_var = fki_inscription_id->valuedouble;
    }

    // communicationreference_request->fki_inscriptiontemp_id
    cJSON *fki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiInscriptiontempID");
    if (cJSON_IsNull(fki_inscriptiontemp_id)) {
        fki_inscriptiontemp_id = NULL;
    }
    if (fki_inscriptiontemp_id) { 
    if(!cJSON_IsNumber(fki_inscriptiontemp_id))
    {
    goto end; //Numeric
    }
    fki_inscriptiontemp_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptiontemp_id_local_var)
    {
        goto end;
    }
    *fki_inscriptiontemp_id_local_var = fki_inscriptiontemp_id->valuedouble;
    }

    // communicationreference_request->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiInvoiceID");
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

    // communicationreference_request->fki_otherincome_id
    cJSON *fki_otherincome_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiOtherincomeID");
    if (cJSON_IsNull(fki_otherincome_id)) {
        fki_otherincome_id = NULL;
    }
    if (fki_otherincome_id) { 
    if(!cJSON_IsNumber(fki_otherincome_id))
    {
    goto end; //Numeric
    }
    fki_otherincome_id_local_var = malloc(sizeof(int));
    if(!fki_otherincome_id_local_var)
    {
        goto end;
    }
    *fki_otherincome_id_local_var = fki_otherincome_id->valuedouble;
    }

    // communicationreference_request->fki_electronicfundstransfer_id
    cJSON *fki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiElectronicfundstransferID");
    if (cJSON_IsNull(fki_electronicfundstransfer_id)) {
        fki_electronicfundstransfer_id = NULL;
    }
    if (fki_electronicfundstransfer_id) { 
    if(!cJSON_IsNumber(fki_electronicfundstransfer_id))
    {
    goto end; //Numeric
    }
    fki_electronicfundstransfer_id_local_var = malloc(sizeof(int));
    if(!fki_electronicfundstransfer_id_local_var)
    {
        goto end;
    }
    *fki_electronicfundstransfer_id_local_var = fki_electronicfundstransfer_id->valuedouble;
    }

    // communicationreference_request->fki_rejectedoffertopurchase_id
    cJSON *fki_rejectedoffertopurchase_id = cJSON_GetObjectItemCaseSensitive(communicationreference_requestJSON, "fkiRejectedoffertopurchaseID");
    if (cJSON_IsNull(fki_rejectedoffertopurchase_id)) {
        fki_rejectedoffertopurchase_id = NULL;
    }
    if (fki_rejectedoffertopurchase_id) { 
    if(!cJSON_IsNumber(fki_rejectedoffertopurchase_id))
    {
    goto end; //Numeric
    }
    fki_rejectedoffertopurchase_id_local_var = malloc(sizeof(int));
    if(!fki_rejectedoffertopurchase_id_local_var)
    {
        goto end;
    }
    *fki_rejectedoffertopurchase_id_local_var = fki_rejectedoffertopurchase_id->valuedouble;
    }



    communicationreference_request_local_var = communicationreference_request_create_internal (
        pki_communicationreference_id_local_var,
        fki_buyercontract_id_local_var,
        fki_ezsignfolder_id_local_var,
        fki_inscription_id_local_var,
        fki_inscriptiontemp_id_local_var,
        fki_invoice_id_local_var,
        fki_otherincome_id_local_var,
        fki_electronicfundstransfer_id_local_var,
        fki_rejectedoffertopurchase_id_local_var
        );

    if (!communicationreference_request_local_var) {
        goto end;
    }

    return communicationreference_request_local_var;
end:
    if (pki_communicationreference_id_local_var) {
        free(pki_communicationreference_id_local_var);
        pki_communicationreference_id_local_var = NULL;
    }
    if (fki_buyercontract_id_local_var) {
        free(fki_buyercontract_id_local_var);
        fki_buyercontract_id_local_var = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (fki_inscription_id_local_var) {
        free(fki_inscription_id_local_var);
        fki_inscription_id_local_var = NULL;
    }
    if (fki_inscriptiontemp_id_local_var) {
        free(fki_inscriptiontemp_id_local_var);
        fki_inscriptiontemp_id_local_var = NULL;
    }
    if (fki_invoice_id_local_var) {
        free(fki_invoice_id_local_var);
        fki_invoice_id_local_var = NULL;
    }
    if (fki_otherincome_id_local_var) {
        free(fki_otherincome_id_local_var);
        fki_otherincome_id_local_var = NULL;
    }
    if (fki_electronicfundstransfer_id_local_var) {
        free(fki_electronicfundstransfer_id_local_var);
        fki_electronicfundstransfer_id_local_var = NULL;
    }
    if (fki_rejectedoffertopurchase_id_local_var) {
        free(fki_rejectedoffertopurchase_id_local_var);
        fki_rejectedoffertopurchase_id_local_var = NULL;
    }
    return NULL;

}
