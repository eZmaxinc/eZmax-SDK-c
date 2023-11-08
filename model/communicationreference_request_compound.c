#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communicationreference_request_compound.h"



communicationreference_request_compound_t *communicationreference_request_compound_create(
    int pki_communicationreference_id,
    int fki_buyercontract_id,
    int fki_ezsignfolder_id,
    int fki_inscription_id,
    int fki_inscriptiontemp_id,
    int fki_invoice_id,
    int fki_otherincome_id,
    int fki_electronicfundstransfer_id,
    int fki_rejectedoffertopurchase_id
    ) {
    communicationreference_request_compound_t *communicationreference_request_compound_local_var = malloc(sizeof(communicationreference_request_compound_t));
    if (!communicationreference_request_compound_local_var) {
        return NULL;
    }
    communicationreference_request_compound_local_var->pki_communicationreference_id = pki_communicationreference_id;
    communicationreference_request_compound_local_var->fki_buyercontract_id = fki_buyercontract_id;
    communicationreference_request_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    communicationreference_request_compound_local_var->fki_inscription_id = fki_inscription_id;
    communicationreference_request_compound_local_var->fki_inscriptiontemp_id = fki_inscriptiontemp_id;
    communicationreference_request_compound_local_var->fki_invoice_id = fki_invoice_id;
    communicationreference_request_compound_local_var->fki_otherincome_id = fki_otherincome_id;
    communicationreference_request_compound_local_var->fki_electronicfundstransfer_id = fki_electronicfundstransfer_id;
    communicationreference_request_compound_local_var->fki_rejectedoffertopurchase_id = fki_rejectedoffertopurchase_id;

    return communicationreference_request_compound_local_var;
}


void communicationreference_request_compound_free(communicationreference_request_compound_t *communicationreference_request_compound) {
    if(NULL == communicationreference_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(communicationreference_request_compound);
}

cJSON *communicationreference_request_compound_convertToJSON(communicationreference_request_compound_t *communicationreference_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // communicationreference_request_compound->pki_communicationreference_id
    if(communicationreference_request_compound->pki_communicationreference_id) {
    if(cJSON_AddNumberToObject(item, "pkiCommunicationreferenceID", communicationreference_request_compound->pki_communicationreference_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_buyercontract_id
    if(communicationreference_request_compound->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", communicationreference_request_compound->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_ezsignfolder_id
    if(communicationreference_request_compound->fki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", communicationreference_request_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_inscription_id
    if(communicationreference_request_compound->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", communicationreference_request_compound->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_inscriptiontemp_id
    if(communicationreference_request_compound->fki_inscriptiontemp_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontempID", communicationreference_request_compound->fki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_invoice_id
    if(communicationreference_request_compound->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", communicationreference_request_compound->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_otherincome_id
    if(communicationreference_request_compound->fki_otherincome_id) {
    if(cJSON_AddNumberToObject(item, "fkiOtherincomeID", communicationreference_request_compound->fki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_electronicfundstransfer_id
    if(communicationreference_request_compound->fki_electronicfundstransfer_id) {
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferID", communicationreference_request_compound->fki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // communicationreference_request_compound->fki_rejectedoffertopurchase_id
    if(communicationreference_request_compound->fki_rejectedoffertopurchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiRejectedoffertopurchaseID", communicationreference_request_compound->fki_rejectedoffertopurchase_id) == NULL) {
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

communicationreference_request_compound_t *communicationreference_request_compound_parseFromJSON(cJSON *communicationreference_request_compoundJSON){

    communicationreference_request_compound_t *communicationreference_request_compound_local_var = NULL;

    // communicationreference_request_compound->pki_communicationreference_id
    cJSON *pki_communicationreference_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "pkiCommunicationreferenceID");
    if (pki_communicationreference_id) { 
    if(!cJSON_IsNumber(pki_communicationreference_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiBuyercontractID");
    if (fki_buyercontract_id) { 
    if(!cJSON_IsNumber(fki_buyercontract_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiEzsignfolderID");
    if (fki_ezsignfolder_id) { 
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiInscriptionID");
    if (fki_inscription_id) { 
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_inscriptiontemp_id
    cJSON *fki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiInscriptiontempID");
    if (fki_inscriptiontemp_id) { 
    if(!cJSON_IsNumber(fki_inscriptiontemp_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiInvoiceID");
    if (fki_invoice_id) { 
    if(!cJSON_IsNumber(fki_invoice_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_otherincome_id
    cJSON *fki_otherincome_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiOtherincomeID");
    if (fki_otherincome_id) { 
    if(!cJSON_IsNumber(fki_otherincome_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_electronicfundstransfer_id
    cJSON *fki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiElectronicfundstransferID");
    if (fki_electronicfundstransfer_id) { 
    if(!cJSON_IsNumber(fki_electronicfundstransfer_id))
    {
    goto end; //Numeric
    }
    }

    // communicationreference_request_compound->fki_rejectedoffertopurchase_id
    cJSON *fki_rejectedoffertopurchase_id = cJSON_GetObjectItemCaseSensitive(communicationreference_request_compoundJSON, "fkiRejectedoffertopurchaseID");
    if (fki_rejectedoffertopurchase_id) { 
    if(!cJSON_IsNumber(fki_rejectedoffertopurchase_id))
    {
    goto end; //Numeric
    }
    }


    communicationreference_request_compound_local_var = communicationreference_request_compound_create (
        pki_communicationreference_id ? pki_communicationreference_id->valuedouble : 0,
        fki_buyercontract_id ? fki_buyercontract_id->valuedouble : 0,
        fki_ezsignfolder_id ? fki_ezsignfolder_id->valuedouble : 0,
        fki_inscription_id ? fki_inscription_id->valuedouble : 0,
        fki_inscriptiontemp_id ? fki_inscriptiontemp_id->valuedouble : 0,
        fki_invoice_id ? fki_invoice_id->valuedouble : 0,
        fki_otherincome_id ? fki_otherincome_id->valuedouble : 0,
        fki_electronicfundstransfer_id ? fki_electronicfundstransfer_id->valuedouble : 0,
        fki_rejectedoffertopurchase_id ? fki_rejectedoffertopurchase_id->valuedouble : 0
        );

    return communicationreference_request_compound_local_var;
end:
    return NULL;

}
