#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachmentdocumenttype_response.h"


char* e_attachment_documenttypecustom_attachmentdocumenttype_response_ToString(ezmax_api_definition__full_custom_attachmentdocumenttype_response__e e_attachment_documenttype) {
    char* e_attachment_documenttypeArray[] =  { "NULL", "Adjustment", "Agent", "Bankaccount", "Broker", "Buyercontract", "Commissionadvance", "Communication", "Customer", "Customertemplate", "Deposit", "Deposittransitcheque", "Disclosure", "Electronicfundstransfer", "Employee", "Externalbroker", "Ezcomadvanceserver", "Ezcomcompany", "Ezsigndocument", "EzsigndocumentProof", "EzsigndocumentProofdocument", "Ezsigndocumentgroup", "EzsigndocumentgroupProof", "EzsigndocumentgroupProofdocument", "EzsigndocumentAttachment", "Folder", "Franchiseagence", "Franchisebroker", "Franchisecomplaint", "Franchisefranchise", "Franchiseoffice", "Ghacqcontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Invoice", "Lead", "Marketingfollow", "Marketingprogram", "Notary", "Officetaxreport", "Otherincome", "Paymentpreparation", "Purchase", "Reconciliation", "Rejectedoffertopurchase", "Salary", "Supplier", "Template", "Tranqcontract" };
    return e_attachment_documenttypeArray[e_attachment_documenttype];
}

ezmax_api_definition__full_custom_attachmentdocumenttype_response__e e_attachment_documenttypecustom_attachmentdocumenttype_response_FromString(char* e_attachment_documenttype){
    int stringToReturn = 0;
    char *e_attachment_documenttypeArray[] =  { "NULL", "Adjustment", "Agent", "Bankaccount", "Broker", "Buyercontract", "Commissionadvance", "Communication", "Customer", "Customertemplate", "Deposit", "Deposittransitcheque", "Disclosure", "Electronicfundstransfer", "Employee", "Externalbroker", "Ezcomadvanceserver", "Ezcomcompany", "Ezsigndocument", "EzsigndocumentProof", "EzsigndocumentProofdocument", "Ezsigndocumentgroup", "EzsigndocumentgroupProof", "EzsigndocumentgroupProofdocument", "EzsigndocumentAttachment", "Folder", "Franchiseagence", "Franchisebroker", "Franchisecomplaint", "Franchisefranchise", "Franchiseoffice", "Ghacqcontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Invoice", "Lead", "Marketingfollow", "Marketingprogram", "Notary", "Officetaxreport", "Otherincome", "Paymentpreparation", "Purchase", "Reconciliation", "Rejectedoffertopurchase", "Salary", "Supplier", "Template", "Tranqcontract" };
    size_t sizeofArray = sizeof(e_attachment_documenttypeArray) / sizeof(e_attachment_documenttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_documenttype, e_attachment_documenttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_create(
    field_e_attachment_documenttype_t *e_attachment_documenttype,
    list_t *a_obj_attachment
    ) {
    custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_local_var = malloc(sizeof(custom_attachmentdocumenttype_response_t));
    if (!custom_attachmentdocumenttype_response_local_var) {
        return NULL;
    }
    custom_attachmentdocumenttype_response_local_var->e_attachment_documenttype = e_attachment_documenttype;
    custom_attachmentdocumenttype_response_local_var->a_obj_attachment = a_obj_attachment;

    return custom_attachmentdocumenttype_response_local_var;
}


void custom_attachmentdocumenttype_response_free(custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response) {
    if(NULL == custom_attachmentdocumenttype_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attachmentdocumenttype_response->e_attachment_documenttype) {
        field_e_attachment_documenttype_free(custom_attachmentdocumenttype_response->e_attachment_documenttype);
        custom_attachmentdocumenttype_response->e_attachment_documenttype = NULL;
    }
    if (custom_attachmentdocumenttype_response->a_obj_attachment) {
        list_ForEach(listEntry, custom_attachmentdocumenttype_response->a_obj_attachment) {
            custom_attachment_response_free(listEntry->data);
        }
        list_freeList(custom_attachmentdocumenttype_response->a_obj_attachment);
        custom_attachmentdocumenttype_response->a_obj_attachment = NULL;
    }
    free(custom_attachmentdocumenttype_response);
}

cJSON *custom_attachmentdocumenttype_response_convertToJSON(custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachmentdocumenttype_response->e_attachment_documenttype
    if (ezmax_api_definition__full_custom_attachmentdocumenttype_response__NULL == custom_attachmentdocumenttype_response->e_attachment_documenttype) {
        goto fail;
    }
    cJSON *e_attachment_documenttype_local_JSON = field_e_attachment_documenttype_convertToJSON(custom_attachmentdocumenttype_response->e_attachment_documenttype);
    if(e_attachment_documenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentDocumenttype", e_attachment_documenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachmentdocumenttype_response->a_obj_attachment
    if (!custom_attachmentdocumenttype_response->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (custom_attachmentdocumenttype_response->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, custom_attachmentdocumenttype_response->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_response_convertToJSON(a_obj_attachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_parseFromJSON(cJSON *custom_attachmentdocumenttype_responseJSON){

    custom_attachmentdocumenttype_response_t *custom_attachmentdocumenttype_response_local_var = NULL;

    // define the local variable for custom_attachmentdocumenttype_response->e_attachment_documenttype
    field_e_attachment_documenttype_t *e_attachment_documenttype_local_nonprim = NULL;

    // define the local list for custom_attachmentdocumenttype_response->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // custom_attachmentdocumenttype_response->e_attachment_documenttype
    cJSON *e_attachment_documenttype = cJSON_GetObjectItemCaseSensitive(custom_attachmentdocumenttype_responseJSON, "eAttachmentDocumenttype");
    if (!e_attachment_documenttype) {
        goto end;
    }

    
    e_attachment_documenttype_local_nonprim = field_e_attachment_documenttype_parseFromJSON(e_attachment_documenttype); //custom

    // custom_attachmentdocumenttype_response->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(custom_attachmentdocumenttype_responseJSON, "a_objAttachment");
    if (!a_obj_attachment) {
        goto end;
    }

    
    cJSON *a_obj_attachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_local_nonprimitive,a_obj_attachment )
    {
        if(!cJSON_IsObject(a_obj_attachment_local_nonprimitive)){
            goto end;
        }
        custom_attachment_response_t *a_obj_attachmentItem = custom_attachment_response_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }


    custom_attachmentdocumenttype_response_local_var = custom_attachmentdocumenttype_response_create (
        e_attachment_documenttype_local_nonprim,
        a_obj_attachmentList
        );

    return custom_attachmentdocumenttype_response_local_var;
end:
    if (e_attachment_documenttype_local_nonprim) {
        field_e_attachment_documenttype_free(e_attachment_documenttype_local_nonprim);
        e_attachment_documenttype_local_nonprim = NULL;
    }
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
