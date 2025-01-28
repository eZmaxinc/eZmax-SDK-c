#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_e_attachment_documenttype.h"


char* field_e_attachment_documenttype_field_e_attachment_documenttype_ToString(ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype) {
    char *field_e_attachment_documenttypeArray[] =  { "NULL", "Adjustment", "Agent", "Bankaccount", "Broker", "Buyercontract", "Commissionadvance", "Communication", "Customer", "Customertemplate", "Deposit", "Deposittransitcheque", "Disclosure", "Electronicfundstransfer", "Employee", "Externalbroker", "Ezcomadvanceserver", "Ezcomcompany", "Ezsigndocument", "EzsigndocumentProof", "EzsigndocumentProofdocument", "Ezsigndocumentgroup", "EzsigndocumentgroupProof", "EzsigndocumentgroupProofdocument", "EzsigndocumentAttachment", "Folder", "Franchiseagence", "Franchisebroker", "Franchisecomplaint", "Franchisefranchise", "Franchiseoffice", "Ghacqcontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Invoice", "Lead", "Marketingfollow", "Marketingprogram", "Notary", "Officetaxreport", "Otherincome", "Paymentpreparation", "Purchase", "Reconciliation", "Rejectedoffertopurchase", "Salary", "Supplier", "Template", "Tranqcontract" };
    return field_e_attachment_documenttypeArray[field_e_attachment_documenttype];
}

ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype_field_e_attachment_documenttype_FromString(char* field_e_attachment_documenttype) {
    int stringToReturn = 0;
    char *field_e_attachment_documenttypeArray[] =  { "NULL", "Adjustment", "Agent", "Bankaccount", "Broker", "Buyercontract", "Commissionadvance", "Communication", "Customer", "Customertemplate", "Deposit", "Deposittransitcheque", "Disclosure", "Electronicfundstransfer", "Employee", "Externalbroker", "Ezcomadvanceserver", "Ezcomcompany", "Ezsigndocument", "EzsigndocumentProof", "EzsigndocumentProofdocument", "Ezsigndocumentgroup", "EzsigndocumentgroupProof", "EzsigndocumentgroupProofdocument", "EzsigndocumentAttachment", "Folder", "Franchiseagence", "Franchisebroker", "Franchisecomplaint", "Franchisefranchise", "Franchiseoffice", "Ghacqcontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Invoice", "Lead", "Marketingfollow", "Marketingprogram", "Notary", "Officetaxreport", "Otherincome", "Paymentpreparation", "Purchase", "Reconciliation", "Rejectedoffertopurchase", "Salary", "Supplier", "Template", "Tranqcontract" };
    size_t sizeofArray = sizeof(field_e_attachment_documenttypeArray) / sizeof(field_e_attachment_documenttypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(field_e_attachment_documenttype, field_e_attachment_documenttypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *field_e_attachment_documenttype_convertToJSON(ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "field_e_attachment_documenttype", field_e_attachment_documenttype_field_e_attachment_documenttype_ToString(field_e_attachment_documenttype)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype_parseFromJSON(cJSON *field_e_attachment_documenttypeJSON) {
    if(!cJSON_IsString(field_e_attachment_documenttypeJSON) || (field_e_attachment_documenttypeJSON->valuestring == NULL)) {
        return 0;
    }
    return field_e_attachment_documenttype_field_e_attachment_documenttype_FromString(field_e_attachment_documenttypeJSON->valuestring);
}
