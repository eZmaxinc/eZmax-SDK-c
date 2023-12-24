#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachment_response.h"


char* e_attachment_documenttypecustom_attachment_response_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_documenttype) {
    char* e_attachment_documenttypeArray[] =  { "NULL", "Adjustment", "Agent", "Bankaccount", "Broker", "Buyercontract", "Commissionadvance", "Communication", "Customer", "Customertemplate", "Deposit", "Deposittransitcheque", "Disclosure", "Electronicfundstransfer", "Employee", "Externalbroker", "Ezcomadvanceserver", "Ezcomcompany", "Ezsigndocument", "EzsigndocumentProof", "EzsigndocumentProofdocument", "Ezsigndocumentgroup", "EzsigndocumentgroupProof", "EzsigndocumentgroupProofdocument", "EzsigndocumentAttachment", "Folder", "Franchiseagence", "Franchisebroker", "Franchisecomplaint", "Franchisefranchise", "Franchiseoffice", "Ghacqcontract", "Inscription", "Inscriptionnotauthenticated", "Inscriptiontemp", "Invoice", "Lead", "Marketingfollow", "Marketingprogram", "Notary", "Officetaxreport", "Otherincome", "Paymentpreparation", "Purchase", "Reconciliation", "Rejectedoffertopurchase", "Salary", "Supplier", "Template", "Tranqcontract" };
    return e_attachment_documenttypeArray[e_attachment_documenttype];
}

ezmax_api_definition__full_custom_attachment_response__e e_attachment_documenttypecustom_attachment_response_FromString(char* e_attachment_documenttype){
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
char* e_attachment_privacycustom_attachment_response_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_privacy) {
    char* e_attachment_privacyArray[] =  { "NULL", "All", "Inscriptor", "Seller", "Administration", "Creator", "Specificuser" };
    return e_attachment_privacyArray[e_attachment_privacy];
}

ezmax_api_definition__full_custom_attachment_response__e e_attachment_privacycustom_attachment_response_FromString(char* e_attachment_privacy){
    int stringToReturn = 0;
    char *e_attachment_privacyArray[] =  { "NULL", "All", "Inscriptor", "Seller", "Administration", "Creator", "Specificuser" };
    size_t sizeofArray = sizeof(e_attachment_privacyArray) / sizeof(e_attachment_privacyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_privacy, e_attachment_privacyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_attachment_typecustom_attachment_response_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_type) {
    char* e_attachment_typeArray[] =  { "NULL", "Other", "Pdf", "PdfGenerated", "PdfScanned", "Ezsign" };
    return e_attachment_typeArray[e_attachment_type];
}

ezmax_api_definition__full_custom_attachment_response__e e_attachment_typecustom_attachment_response_FromString(char* e_attachment_type){
    int stringToReturn = 0;
    char *e_attachment_typeArray[] =  { "NULL", "Other", "Pdf", "PdfGenerated", "PdfScanned", "Ezsign" };
    size_t sizeofArray = sizeof(e_attachment_typeArray) / sizeof(e_attachment_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_type, e_attachment_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_attachment_verifiedcustom_attachment_response_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_verified) {
    char* e_attachment_verifiedArray[] =  { "NULL", "No", "Yes", "Rejected" };
    return e_attachment_verifiedArray[e_attachment_verified];
}

ezmax_api_definition__full_custom_attachment_response__e e_attachment_verifiedcustom_attachment_response_FromString(char* e_attachment_verified){
    int stringToReturn = 0;
    char *e_attachment_verifiedArray[] =  { "NULL", "No", "Yes", "Rejected" };
    size_t sizeofArray = sizeof(e_attachment_verifiedArray) / sizeof(e_attachment_verifiedArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_verified, e_attachment_verifiedArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

custom_attachment_response_t *custom_attachment_response_create(
    int pki_attachment_id,
    int fki_computer_id,
    int fki_adjustment_id,
    int fki_agent_id,
    int fki_bankaccount_id,
    int fki_broker_id,
    int fki_commissionadvance_id,
    int fki_communication_id,
    int fki_customer_id,
    int fki_customertemplate_id,
    int fki_deposit_id,
    int fki_deposittransitcheque_id,
    int fki_electronicfundstransfer_id,
    int fki_employee_id,
    int fki_externalbroker_id,
    int fki_ezcomadvanceserver_id,
    int fki_ezcomcompany_id,
    int fki_ezsigndocument_id,
    int fki_ghacqcontract_id,
    int fki_inscription_id,
    int fki_inscriptiontemp_id,
    int fki_inscriptionnotauthenticated_id,
    int fki_invoice_id,
    int fki_buyercontract_id,
    int fki_franchisebroker_id,
    int fki_franchiseagence_id,
    int fki_franchiseoffice_id,
    int fki_franchisefranchise_id,
    int fki_franchisecomplaint_id,
    int fki_lead_id,
    int fki_marketingprogram_id,
    int fki_marketingfollow_id,
    int fki_notary_id,
    int fki_officetaxreport_id,
    int fki_otherincome_id,
    int fki_paymentpreparation_id,
    int fki_purchase_id,
    int fki_salary_id,
    int fki_supplier_id,
    int fki_tranqcontract_id,
    int fki_template_id,
    int fki_inscriptionchecklist_id,
    int fki_folder_id,
    int fki_rejectedoffertopurchase_id,
    int fki_disclosure_id,
    int fki_reconciliation_id,
    int fki_ezsigndocument_id_reference,
    field_e_attachment_documenttype_t *e_attachment_documenttype,
    char *s_attachment_name,
    field_e_attachment_privacy_t *e_attachment_privacy,
    int fki_user_id_specific,
    field_e_attachment_type_t *e_attachment_type,
    int i_attachment_size,
    int i_attachment_ed_mmoduleflag,
    char *s_attachment_md5,
    int b_attachment_deleted,
    int b_attachment_valid,
    field_e_attachment_verified_t *e_attachment_verified,
    char *t_attachment_rejectioncomment,
    int fki_user_id_owner,
    common_audit_t *obj_audit,
    attachment_response_compound_t *obj_attachment_proof,
    attachment_response_compound_t *obj_attachment_proofdocument,
    list_t *a_obj_attachment_attachment,
    list_t *a_obj_attachment_version
    ) {
    custom_attachment_response_t *custom_attachment_response_local_var = malloc(sizeof(custom_attachment_response_t));
    if (!custom_attachment_response_local_var) {
        return NULL;
    }
    custom_attachment_response_local_var->pki_attachment_id = pki_attachment_id;
    custom_attachment_response_local_var->fki_computer_id = fki_computer_id;
    custom_attachment_response_local_var->fki_adjustment_id = fki_adjustment_id;
    custom_attachment_response_local_var->fki_agent_id = fki_agent_id;
    custom_attachment_response_local_var->fki_bankaccount_id = fki_bankaccount_id;
    custom_attachment_response_local_var->fki_broker_id = fki_broker_id;
    custom_attachment_response_local_var->fki_commissionadvance_id = fki_commissionadvance_id;
    custom_attachment_response_local_var->fki_communication_id = fki_communication_id;
    custom_attachment_response_local_var->fki_customer_id = fki_customer_id;
    custom_attachment_response_local_var->fki_customertemplate_id = fki_customertemplate_id;
    custom_attachment_response_local_var->fki_deposit_id = fki_deposit_id;
    custom_attachment_response_local_var->fki_deposittransitcheque_id = fki_deposittransitcheque_id;
    custom_attachment_response_local_var->fki_electronicfundstransfer_id = fki_electronicfundstransfer_id;
    custom_attachment_response_local_var->fki_employee_id = fki_employee_id;
    custom_attachment_response_local_var->fki_externalbroker_id = fki_externalbroker_id;
    custom_attachment_response_local_var->fki_ezcomadvanceserver_id = fki_ezcomadvanceserver_id;
    custom_attachment_response_local_var->fki_ezcomcompany_id = fki_ezcomcompany_id;
    custom_attachment_response_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    custom_attachment_response_local_var->fki_ghacqcontract_id = fki_ghacqcontract_id;
    custom_attachment_response_local_var->fki_inscription_id = fki_inscription_id;
    custom_attachment_response_local_var->fki_inscriptiontemp_id = fki_inscriptiontemp_id;
    custom_attachment_response_local_var->fki_inscriptionnotauthenticated_id = fki_inscriptionnotauthenticated_id;
    custom_attachment_response_local_var->fki_invoice_id = fki_invoice_id;
    custom_attachment_response_local_var->fki_buyercontract_id = fki_buyercontract_id;
    custom_attachment_response_local_var->fki_franchisebroker_id = fki_franchisebroker_id;
    custom_attachment_response_local_var->fki_franchiseagence_id = fki_franchiseagence_id;
    custom_attachment_response_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    custom_attachment_response_local_var->fki_franchisefranchise_id = fki_franchisefranchise_id;
    custom_attachment_response_local_var->fki_franchisecomplaint_id = fki_franchisecomplaint_id;
    custom_attachment_response_local_var->fki_lead_id = fki_lead_id;
    custom_attachment_response_local_var->fki_marketingprogram_id = fki_marketingprogram_id;
    custom_attachment_response_local_var->fki_marketingfollow_id = fki_marketingfollow_id;
    custom_attachment_response_local_var->fki_notary_id = fki_notary_id;
    custom_attachment_response_local_var->fki_officetaxreport_id = fki_officetaxreport_id;
    custom_attachment_response_local_var->fki_otherincome_id = fki_otherincome_id;
    custom_attachment_response_local_var->fki_paymentpreparation_id = fki_paymentpreparation_id;
    custom_attachment_response_local_var->fki_purchase_id = fki_purchase_id;
    custom_attachment_response_local_var->fki_salary_id = fki_salary_id;
    custom_attachment_response_local_var->fki_supplier_id = fki_supplier_id;
    custom_attachment_response_local_var->fki_tranqcontract_id = fki_tranqcontract_id;
    custom_attachment_response_local_var->fki_template_id = fki_template_id;
    custom_attachment_response_local_var->fki_inscriptionchecklist_id = fki_inscriptionchecklist_id;
    custom_attachment_response_local_var->fki_folder_id = fki_folder_id;
    custom_attachment_response_local_var->fki_rejectedoffertopurchase_id = fki_rejectedoffertopurchase_id;
    custom_attachment_response_local_var->fki_disclosure_id = fki_disclosure_id;
    custom_attachment_response_local_var->fki_reconciliation_id = fki_reconciliation_id;
    custom_attachment_response_local_var->fki_ezsigndocument_id_reference = fki_ezsigndocument_id_reference;
    custom_attachment_response_local_var->e_attachment_documenttype = e_attachment_documenttype;
    custom_attachment_response_local_var->s_attachment_name = s_attachment_name;
    custom_attachment_response_local_var->e_attachment_privacy = e_attachment_privacy;
    custom_attachment_response_local_var->fki_user_id_specific = fki_user_id_specific;
    custom_attachment_response_local_var->e_attachment_type = e_attachment_type;
    custom_attachment_response_local_var->i_attachment_size = i_attachment_size;
    custom_attachment_response_local_var->i_attachment_ed_mmoduleflag = i_attachment_ed_mmoduleflag;
    custom_attachment_response_local_var->s_attachment_md5 = s_attachment_md5;
    custom_attachment_response_local_var->b_attachment_deleted = b_attachment_deleted;
    custom_attachment_response_local_var->b_attachment_valid = b_attachment_valid;
    custom_attachment_response_local_var->e_attachment_verified = e_attachment_verified;
    custom_attachment_response_local_var->t_attachment_rejectioncomment = t_attachment_rejectioncomment;
    custom_attachment_response_local_var->fki_user_id_owner = fki_user_id_owner;
    custom_attachment_response_local_var->obj_audit = obj_audit;
    custom_attachment_response_local_var->obj_attachment_proof = obj_attachment_proof;
    custom_attachment_response_local_var->obj_attachment_proofdocument = obj_attachment_proofdocument;
    custom_attachment_response_local_var->a_obj_attachment_attachment = a_obj_attachment_attachment;
    custom_attachment_response_local_var->a_obj_attachment_version = a_obj_attachment_version;

    return custom_attachment_response_local_var;
}


void custom_attachment_response_free(custom_attachment_response_t *custom_attachment_response) {
    if(NULL == custom_attachment_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attachment_response->e_attachment_documenttype) {
        field_e_attachment_documenttype_free(custom_attachment_response->e_attachment_documenttype);
        custom_attachment_response->e_attachment_documenttype = NULL;
    }
    if (custom_attachment_response->s_attachment_name) {
        free(custom_attachment_response->s_attachment_name);
        custom_attachment_response->s_attachment_name = NULL;
    }
    if (custom_attachment_response->e_attachment_privacy) {
        field_e_attachment_privacy_free(custom_attachment_response->e_attachment_privacy);
        custom_attachment_response->e_attachment_privacy = NULL;
    }
    if (custom_attachment_response->e_attachment_type) {
        field_e_attachment_type_free(custom_attachment_response->e_attachment_type);
        custom_attachment_response->e_attachment_type = NULL;
    }
    if (custom_attachment_response->s_attachment_md5) {
        free(custom_attachment_response->s_attachment_md5);
        custom_attachment_response->s_attachment_md5 = NULL;
    }
    if (custom_attachment_response->e_attachment_verified) {
        field_e_attachment_verified_free(custom_attachment_response->e_attachment_verified);
        custom_attachment_response->e_attachment_verified = NULL;
    }
    if (custom_attachment_response->t_attachment_rejectioncomment) {
        free(custom_attachment_response->t_attachment_rejectioncomment);
        custom_attachment_response->t_attachment_rejectioncomment = NULL;
    }
    if (custom_attachment_response->obj_audit) {
        common_audit_free(custom_attachment_response->obj_audit);
        custom_attachment_response->obj_audit = NULL;
    }
    if (custom_attachment_response->obj_attachment_proof) {
        attachment_response_compound_free(custom_attachment_response->obj_attachment_proof);
        custom_attachment_response->obj_attachment_proof = NULL;
    }
    if (custom_attachment_response->obj_attachment_proofdocument) {
        attachment_response_compound_free(custom_attachment_response->obj_attachment_proofdocument);
        custom_attachment_response->obj_attachment_proofdocument = NULL;
    }
    if (custom_attachment_response->a_obj_attachment_attachment) {
        list_ForEach(listEntry, custom_attachment_response->a_obj_attachment_attachment) {
            attachment_response_compound_free(listEntry->data);
        }
        list_freeList(custom_attachment_response->a_obj_attachment_attachment);
        custom_attachment_response->a_obj_attachment_attachment = NULL;
    }
    if (custom_attachment_response->a_obj_attachment_version) {
        list_ForEach(listEntry, custom_attachment_response->a_obj_attachment_version) {
            attachment_response_compound_free(listEntry->data);
        }
        list_freeList(custom_attachment_response->a_obj_attachment_version);
        custom_attachment_response->a_obj_attachment_version = NULL;
    }
    free(custom_attachment_response);
}

cJSON *custom_attachment_response_convertToJSON(custom_attachment_response_t *custom_attachment_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachment_response->pki_attachment_id
    if (!custom_attachment_response->pki_attachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAttachmentID", custom_attachment_response->pki_attachment_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_attachment_response->fki_computer_id
    if(custom_attachment_response->fki_computer_id) {
    if(cJSON_AddNumberToObject(item, "fkiComputerID", custom_attachment_response->fki_computer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_adjustment_id
    if(custom_attachment_response->fki_adjustment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAdjustmentID", custom_attachment_response->fki_adjustment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_agent_id
    if(custom_attachment_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", custom_attachment_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_bankaccount_id
    if(custom_attachment_response->fki_bankaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", custom_attachment_response->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_broker_id
    if(custom_attachment_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", custom_attachment_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_commissionadvance_id
    if(custom_attachment_response->fki_commissionadvance_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommissionadvanceID", custom_attachment_response->fki_commissionadvance_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_communication_id
    if(custom_attachment_response->fki_communication_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommunicationID", custom_attachment_response->fki_communication_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_customer_id
    if(custom_attachment_response->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", custom_attachment_response->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_customertemplate_id
    if(custom_attachment_response->fki_customertemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomertemplateID", custom_attachment_response->fki_customertemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_deposit_id
    if(custom_attachment_response->fki_deposit_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepositID", custom_attachment_response->fki_deposit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_deposittransitcheque_id
    if(custom_attachment_response->fki_deposittransitcheque_id) {
    if(cJSON_AddNumberToObject(item, "fkiDeposittransitchequeID", custom_attachment_response->fki_deposittransitcheque_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_electronicfundstransfer_id
    if(custom_attachment_response->fki_electronicfundstransfer_id) {
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferID", custom_attachment_response->fki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_employee_id
    if(custom_attachment_response->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", custom_attachment_response->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_externalbroker_id
    if(custom_attachment_response->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", custom_attachment_response->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_ezcomadvanceserver_id
    if(custom_attachment_response->fki_ezcomadvanceserver_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomadvanceserverID", custom_attachment_response->fki_ezcomadvanceserver_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_ezcomcompany_id
    if(custom_attachment_response->fki_ezcomcompany_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomcompanyID", custom_attachment_response->fki_ezcomcompany_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_ezsigndocument_id
    if(custom_attachment_response->fki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", custom_attachment_response->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_ghacqcontract_id
    if(custom_attachment_response->fki_ghacqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiGhacqcontractID", custom_attachment_response->fki_ghacqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_inscription_id
    if(custom_attachment_response->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", custom_attachment_response->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_inscriptiontemp_id
    if(custom_attachment_response->fki_inscriptiontemp_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontempID", custom_attachment_response->fki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_inscriptionnotauthenticated_id
    if(custom_attachment_response->fki_inscriptionnotauthenticated_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedID", custom_attachment_response->fki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_invoice_id
    if(custom_attachment_response->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", custom_attachment_response->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_buyercontract_id
    if(custom_attachment_response->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", custom_attachment_response->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_franchisebroker_id
    if(custom_attachment_response->fki_franchisebroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisebrokerID", custom_attachment_response->fki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_franchiseagence_id
    if(custom_attachment_response->fki_franchiseagence_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseagenceID", custom_attachment_response->fki_franchiseagence_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_franchiseoffice_id
    if(custom_attachment_response->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", custom_attachment_response->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_franchisefranchise_id
    if(custom_attachment_response->fki_franchisefranchise_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisefranchiseID", custom_attachment_response->fki_franchisefranchise_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_franchisecomplaint_id
    if(custom_attachment_response->fki_franchisecomplaint_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisecomplaintID", custom_attachment_response->fki_franchisecomplaint_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_lead_id
    if(custom_attachment_response->fki_lead_id) {
    if(cJSON_AddNumberToObject(item, "fkiLeadID", custom_attachment_response->fki_lead_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_marketingprogram_id
    if(custom_attachment_response->fki_marketingprogram_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingprogramID", custom_attachment_response->fki_marketingprogram_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_marketingfollow_id
    if(custom_attachment_response->fki_marketingfollow_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingfollowID", custom_attachment_response->fki_marketingfollow_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_notary_id
    if(custom_attachment_response->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", custom_attachment_response->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_officetaxreport_id
    if(custom_attachment_response->fki_officetaxreport_id) {
    if(cJSON_AddNumberToObject(item, "fkiOfficetaxreportID", custom_attachment_response->fki_officetaxreport_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_otherincome_id
    if(custom_attachment_response->fki_otherincome_id) {
    if(cJSON_AddNumberToObject(item, "fkiOtherincomeID", custom_attachment_response->fki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_paymentpreparation_id
    if(custom_attachment_response->fki_paymentpreparation_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentpreparationID", custom_attachment_response->fki_paymentpreparation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_purchase_id
    if(custom_attachment_response->fki_purchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiPurchaseID", custom_attachment_response->fki_purchase_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_salary_id
    if(custom_attachment_response->fki_salary_id) {
    if(cJSON_AddNumberToObject(item, "fkiSalaryID", custom_attachment_response->fki_salary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_supplier_id
    if(custom_attachment_response->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", custom_attachment_response->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_tranqcontract_id
    if(custom_attachment_response->fki_tranqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiTranqcontractID", custom_attachment_response->fki_tranqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_template_id
    if(custom_attachment_response->fki_template_id) {
    if(cJSON_AddNumberToObject(item, "fkiTemplateID", custom_attachment_response->fki_template_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_inscriptionchecklist_id
    if(custom_attachment_response->fki_inscriptionchecklist_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionchecklistID", custom_attachment_response->fki_inscriptionchecklist_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_folder_id
    if(custom_attachment_response->fki_folder_id) {
    if(cJSON_AddNumberToObject(item, "fkiFolderID", custom_attachment_response->fki_folder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_rejectedoffertopurchase_id
    if(custom_attachment_response->fki_rejectedoffertopurchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiRejectedoffertopurchaseID", custom_attachment_response->fki_rejectedoffertopurchase_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_disclosure_id
    if(custom_attachment_response->fki_disclosure_id) {
    if(cJSON_AddNumberToObject(item, "fkiDisclosureID", custom_attachment_response->fki_disclosure_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_reconciliation_id
    if(custom_attachment_response->fki_reconciliation_id) {
    if(cJSON_AddNumberToObject(item, "fkiReconciliationID", custom_attachment_response->fki_reconciliation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->fki_ezsigndocument_id_reference
    if(custom_attachment_response->fki_ezsigndocument_id_reference) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentIDReference", custom_attachment_response->fki_ezsigndocument_id_reference) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->e_attachment_documenttype
    if (ezmax_api_definition__full_custom_attachment_response__NULL == custom_attachment_response->e_attachment_documenttype) {
        goto fail;
    }
    cJSON *e_attachment_documenttype_local_JSON = field_e_attachment_documenttype_convertToJSON(custom_attachment_response->e_attachment_documenttype);
    if(e_attachment_documenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentDocumenttype", e_attachment_documenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachment_response->s_attachment_name
    if (!custom_attachment_response->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", custom_attachment_response->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // custom_attachment_response->e_attachment_privacy
    if (ezmax_api_definition__full_custom_attachment_response__NULL == custom_attachment_response->e_attachment_privacy) {
        goto fail;
    }
    cJSON *e_attachment_privacy_local_JSON = field_e_attachment_privacy_convertToJSON(custom_attachment_response->e_attachment_privacy);
    if(e_attachment_privacy_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentPrivacy", e_attachment_privacy_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachment_response->fki_user_id_specific
    if(custom_attachment_response->fki_user_id_specific) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDSpecific", custom_attachment_response->fki_user_id_specific) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->e_attachment_type
    if (ezmax_api_definition__full_custom_attachment_response__NULL == custom_attachment_response->e_attachment_type) {
        goto fail;
    }
    cJSON *e_attachment_type_local_JSON = field_e_attachment_type_convertToJSON(custom_attachment_response->e_attachment_type);
    if(e_attachment_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentType", e_attachment_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachment_response->i_attachment_size
    if (!custom_attachment_response->i_attachment_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAttachmentSize", custom_attachment_response->i_attachment_size) == NULL) {
    goto fail; //Numeric
    }


    // custom_attachment_response->i_attachment_ed_mmoduleflag
    if(custom_attachment_response->i_attachment_ed_mmoduleflag) {
    if(cJSON_AddNumberToObject(item, "iAttachmentEDMmoduleflag", custom_attachment_response->i_attachment_ed_mmoduleflag) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->s_attachment_md5
    if (!custom_attachment_response->s_attachment_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentMD5", custom_attachment_response->s_attachment_md5) == NULL) {
    goto fail; //String
    }


    // custom_attachment_response->b_attachment_deleted
    if (!custom_attachment_response->b_attachment_deleted) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAttachmentDeleted", custom_attachment_response->b_attachment_deleted) == NULL) {
    goto fail; //Bool
    }


    // custom_attachment_response->b_attachment_valid
    if (!custom_attachment_response->b_attachment_valid) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAttachmentValid", custom_attachment_response->b_attachment_valid) == NULL) {
    goto fail; //Bool
    }


    // custom_attachment_response->e_attachment_verified
    if (ezmax_api_definition__full_custom_attachment_response__NULL == custom_attachment_response->e_attachment_verified) {
        goto fail;
    }
    cJSON *e_attachment_verified_local_JSON = field_e_attachment_verified_convertToJSON(custom_attachment_response->e_attachment_verified);
    if(e_attachment_verified_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentVerified", e_attachment_verified_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_attachment_response->t_attachment_rejectioncomment
    if(custom_attachment_response->t_attachment_rejectioncomment) {
    if(cJSON_AddStringToObject(item, "tAttachmentRejectioncomment", custom_attachment_response->t_attachment_rejectioncomment) == NULL) {
    goto fail; //String
    }
    }


    // custom_attachment_response->fki_user_id_owner
    if(custom_attachment_response->fki_user_id_owner) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDOwner", custom_attachment_response->fki_user_id_owner) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_attachment_response->obj_audit
    if(custom_attachment_response->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(custom_attachment_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attachment_response->obj_attachment_proof
    if(custom_attachment_response->obj_attachment_proof) {
    cJSON *obj_attachment_proof_local_JSON = attachment_response_compound_convertToJSON(custom_attachment_response->obj_attachment_proof);
    if(obj_attachment_proof_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAttachmentProof", obj_attachment_proof_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attachment_response->obj_attachment_proofdocument
    if(custom_attachment_response->obj_attachment_proofdocument) {
    cJSON *obj_attachment_proofdocument_local_JSON = attachment_response_compound_convertToJSON(custom_attachment_response->obj_attachment_proofdocument);
    if(obj_attachment_proofdocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAttachmentProofdocument", obj_attachment_proofdocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attachment_response->a_obj_attachment_attachment
    if(custom_attachment_response->a_obj_attachment_attachment) {
    cJSON *a_obj_attachment_attachment = cJSON_AddArrayToObject(item, "a_objAttachmentAttachment");
    if(a_obj_attachment_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachment_attachmentListEntry;
    if (custom_attachment_response->a_obj_attachment_attachment) {
    list_ForEach(a_obj_attachment_attachmentListEntry, custom_attachment_response->a_obj_attachment_attachment) {
    cJSON *itemLocal = attachment_response_compound_convertToJSON(a_obj_attachment_attachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment_attachment, itemLocal);
    }
    }
    }


    // custom_attachment_response->a_obj_attachment_version
    if(custom_attachment_response->a_obj_attachment_version) {
    cJSON *a_obj_attachment_version = cJSON_AddArrayToObject(item, "a_objAttachmentVersion");
    if(a_obj_attachment_version == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachment_versionListEntry;
    if (custom_attachment_response->a_obj_attachment_version) {
    list_ForEach(a_obj_attachment_versionListEntry, custom_attachment_response->a_obj_attachment_version) {
    cJSON *itemLocal = attachment_response_compound_convertToJSON(a_obj_attachment_versionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment_version, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_attachment_response_t *custom_attachment_response_parseFromJSON(cJSON *custom_attachment_responseJSON){

    custom_attachment_response_t *custom_attachment_response_local_var = NULL;

    // define the local variable for custom_attachment_response->e_attachment_documenttype
    field_e_attachment_documenttype_t *e_attachment_documenttype_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->e_attachment_privacy
    field_e_attachment_privacy_t *e_attachment_privacy_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->e_attachment_type
    field_e_attachment_type_t *e_attachment_type_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->e_attachment_verified
    field_e_attachment_verified_t *e_attachment_verified_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->obj_attachment_proof
    attachment_response_compound_t *obj_attachment_proof_local_nonprim = NULL;

    // define the local variable for custom_attachment_response->obj_attachment_proofdocument
    attachment_response_compound_t *obj_attachment_proofdocument_local_nonprim = NULL;

    // define the local list for custom_attachment_response->a_obj_attachment_attachment
    list_t *a_obj_attachment_attachmentList = NULL;

    // define the local list for custom_attachment_response->a_obj_attachment_version
    list_t *a_obj_attachment_versionList = NULL;

    // custom_attachment_response->pki_attachment_id
    cJSON *pki_attachment_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "pkiAttachmentID");
    if (!pki_attachment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_attachment_id))
    {
    goto end; //Numeric
    }

    // custom_attachment_response->fki_computer_id
    cJSON *fki_computer_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiComputerID");
    if (fki_computer_id) { 
    if(!cJSON_IsNumber(fki_computer_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_adjustment_id
    cJSON *fki_adjustment_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiAdjustmentID");
    if (fki_adjustment_id) { 
    if(!cJSON_IsNumber(fki_adjustment_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiAgentID");
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiBankaccountID");
    if (fki_bankaccount_id) { 
    if(!cJSON_IsNumber(fki_bankaccount_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiBrokerID");
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_commissionadvance_id
    cJSON *fki_commissionadvance_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiCommissionadvanceID");
    if (fki_commissionadvance_id) { 
    if(!cJSON_IsNumber(fki_commissionadvance_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_communication_id
    cJSON *fki_communication_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiCommunicationID");
    if (fki_communication_id) { 
    if(!cJSON_IsNumber(fki_communication_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiCustomerID");
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_customertemplate_id
    cJSON *fki_customertemplate_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiCustomertemplateID");
    if (fki_customertemplate_id) { 
    if(!cJSON_IsNumber(fki_customertemplate_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_deposit_id
    cJSON *fki_deposit_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiDepositID");
    if (fki_deposit_id) { 
    if(!cJSON_IsNumber(fki_deposit_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_deposittransitcheque_id
    cJSON *fki_deposittransitcheque_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiDeposittransitchequeID");
    if (fki_deposittransitcheque_id) { 
    if(!cJSON_IsNumber(fki_deposittransitcheque_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_electronicfundstransfer_id
    cJSON *fki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiElectronicfundstransferID");
    if (fki_electronicfundstransfer_id) { 
    if(!cJSON_IsNumber(fki_electronicfundstransfer_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiEmployeeID");
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiExternalbrokerID");
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_ezcomadvanceserver_id
    cJSON *fki_ezcomadvanceserver_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiEzcomadvanceserverID");
    if (fki_ezcomadvanceserver_id) { 
    if(!cJSON_IsNumber(fki_ezcomadvanceserver_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_ezcomcompany_id
    cJSON *fki_ezcomcompany_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiEzcomcompanyID");
    if (fki_ezcomcompany_id) { 
    if(!cJSON_IsNumber(fki_ezcomcompany_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiEzsigndocumentID");
    if (fki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_ghacqcontract_id
    cJSON *fki_ghacqcontract_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiGhacqcontractID");
    if (fki_ghacqcontract_id) { 
    if(!cJSON_IsNumber(fki_ghacqcontract_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiInscriptionID");
    if (fki_inscription_id) { 
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_inscriptiontemp_id
    cJSON *fki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiInscriptiontempID");
    if (fki_inscriptiontemp_id) { 
    if(!cJSON_IsNumber(fki_inscriptiontemp_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_inscriptionnotauthenticated_id
    cJSON *fki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiInscriptionnotauthenticatedID");
    if (fki_inscriptionnotauthenticated_id) { 
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiInvoiceID");
    if (fki_invoice_id) { 
    if(!cJSON_IsNumber(fki_invoice_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiBuyercontractID");
    if (fki_buyercontract_id) { 
    if(!cJSON_IsNumber(fki_buyercontract_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFranchisebrokerID");
    if (fki_franchisebroker_id) { 
    if(!cJSON_IsNumber(fki_franchisebroker_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_franchiseagence_id
    cJSON *fki_franchiseagence_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFranchiseagenceID");
    if (fki_franchiseagence_id) { 
    if(!cJSON_IsNumber(fki_franchiseagence_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFranchiseofficeID");
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_franchisefranchise_id
    cJSON *fki_franchisefranchise_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFranchisefranchiseID");
    if (fki_franchisefranchise_id) { 
    if(!cJSON_IsNumber(fki_franchisefranchise_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_franchisecomplaint_id
    cJSON *fki_franchisecomplaint_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFranchisecomplaintID");
    if (fki_franchisecomplaint_id) { 
    if(!cJSON_IsNumber(fki_franchisecomplaint_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_lead_id
    cJSON *fki_lead_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiLeadID");
    if (fki_lead_id) { 
    if(!cJSON_IsNumber(fki_lead_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_marketingprogram_id
    cJSON *fki_marketingprogram_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiMarketingprogramID");
    if (fki_marketingprogram_id) { 
    if(!cJSON_IsNumber(fki_marketingprogram_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_marketingfollow_id
    cJSON *fki_marketingfollow_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiMarketingfollowID");
    if (fki_marketingfollow_id) { 
    if(!cJSON_IsNumber(fki_marketingfollow_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiNotaryID");
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_officetaxreport_id
    cJSON *fki_officetaxreport_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiOfficetaxreportID");
    if (fki_officetaxreport_id) { 
    if(!cJSON_IsNumber(fki_officetaxreport_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_otherincome_id
    cJSON *fki_otherincome_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiOtherincomeID");
    if (fki_otherincome_id) { 
    if(!cJSON_IsNumber(fki_otherincome_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_paymentpreparation_id
    cJSON *fki_paymentpreparation_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiPaymentpreparationID");
    if (fki_paymentpreparation_id) { 
    if(!cJSON_IsNumber(fki_paymentpreparation_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_purchase_id
    cJSON *fki_purchase_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiPurchaseID");
    if (fki_purchase_id) { 
    if(!cJSON_IsNumber(fki_purchase_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_salary_id
    cJSON *fki_salary_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiSalaryID");
    if (fki_salary_id) { 
    if(!cJSON_IsNumber(fki_salary_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiSupplierID");
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_tranqcontract_id
    cJSON *fki_tranqcontract_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiTranqcontractID");
    if (fki_tranqcontract_id) { 
    if(!cJSON_IsNumber(fki_tranqcontract_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_template_id
    cJSON *fki_template_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiTemplateID");
    if (fki_template_id) { 
    if(!cJSON_IsNumber(fki_template_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_inscriptionchecklist_id
    cJSON *fki_inscriptionchecklist_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiInscriptionchecklistID");
    if (fki_inscriptionchecklist_id) { 
    if(!cJSON_IsNumber(fki_inscriptionchecklist_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_folder_id
    cJSON *fki_folder_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiFolderID");
    if (fki_folder_id) { 
    if(!cJSON_IsNumber(fki_folder_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_rejectedoffertopurchase_id
    cJSON *fki_rejectedoffertopurchase_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiRejectedoffertopurchaseID");
    if (fki_rejectedoffertopurchase_id) { 
    if(!cJSON_IsNumber(fki_rejectedoffertopurchase_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_disclosure_id
    cJSON *fki_disclosure_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiDisclosureID");
    if (fki_disclosure_id) { 
    if(!cJSON_IsNumber(fki_disclosure_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_reconciliation_id
    cJSON *fki_reconciliation_id = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiReconciliationID");
    if (fki_reconciliation_id) { 
    if(!cJSON_IsNumber(fki_reconciliation_id))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->fki_ezsigndocument_id_reference
    cJSON *fki_ezsigndocument_id_reference = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiEzsigndocumentIDReference");
    if (fki_ezsigndocument_id_reference) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id_reference))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->e_attachment_documenttype
    cJSON *e_attachment_documenttype = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "eAttachmentDocumenttype");
    if (!e_attachment_documenttype) {
        goto end;
    }

    
    e_attachment_documenttype_local_nonprim = field_e_attachment_documenttype_parseFromJSON(e_attachment_documenttype); //custom

    // custom_attachment_response->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "sAttachmentName");
    if (!s_attachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_name))
    {
    goto end; //String
    }

    // custom_attachment_response->e_attachment_privacy
    cJSON *e_attachment_privacy = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "eAttachmentPrivacy");
    if (!e_attachment_privacy) {
        goto end;
    }

    
    e_attachment_privacy_local_nonprim = field_e_attachment_privacy_parseFromJSON(e_attachment_privacy); //custom

    // custom_attachment_response->fki_user_id_specific
    cJSON *fki_user_id_specific = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiUserIDSpecific");
    if (fki_user_id_specific) { 
    if(!cJSON_IsNumber(fki_user_id_specific))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->e_attachment_type
    cJSON *e_attachment_type = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "eAttachmentType");
    if (!e_attachment_type) {
        goto end;
    }

    
    e_attachment_type_local_nonprim = field_e_attachment_type_parseFromJSON(e_attachment_type); //custom

    // custom_attachment_response->i_attachment_size
    cJSON *i_attachment_size = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "iAttachmentSize");
    if (!i_attachment_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_attachment_size))
    {
    goto end; //Numeric
    }

    // custom_attachment_response->i_attachment_ed_mmoduleflag
    cJSON *i_attachment_ed_mmoduleflag = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "iAttachmentEDMmoduleflag");
    if (i_attachment_ed_mmoduleflag) { 
    if(!cJSON_IsNumber(i_attachment_ed_mmoduleflag))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->s_attachment_md5
    cJSON *s_attachment_md5 = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "sAttachmentMD5");
    if (!s_attachment_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_md5))
    {
    goto end; //String
    }

    // custom_attachment_response->b_attachment_deleted
    cJSON *b_attachment_deleted = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "bAttachmentDeleted");
    if (!b_attachment_deleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_attachment_deleted))
    {
    goto end; //Bool
    }

    // custom_attachment_response->b_attachment_valid
    cJSON *b_attachment_valid = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "bAttachmentValid");
    if (!b_attachment_valid) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_attachment_valid))
    {
    goto end; //Bool
    }

    // custom_attachment_response->e_attachment_verified
    cJSON *e_attachment_verified = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "eAttachmentVerified");
    if (!e_attachment_verified) {
        goto end;
    }

    
    e_attachment_verified_local_nonprim = field_e_attachment_verified_parseFromJSON(e_attachment_verified); //custom

    // custom_attachment_response->t_attachment_rejectioncomment
    cJSON *t_attachment_rejectioncomment = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "tAttachmentRejectioncomment");
    if (t_attachment_rejectioncomment) { 
    if(!cJSON_IsString(t_attachment_rejectioncomment) && !cJSON_IsNull(t_attachment_rejectioncomment))
    {
    goto end; //String
    }
    }

    // custom_attachment_response->fki_user_id_owner
    cJSON *fki_user_id_owner = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "fkiUserIDOwner");
    if (fki_user_id_owner) { 
    if(!cJSON_IsNumber(fki_user_id_owner))
    {
    goto end; //Numeric
    }
    }

    // custom_attachment_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "objAudit");
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // custom_attachment_response->obj_attachment_proof
    cJSON *obj_attachment_proof = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "objAttachmentProof");
    if (obj_attachment_proof) { 
    obj_attachment_proof_local_nonprim = attachment_response_compound_parseFromJSON(obj_attachment_proof); //nonprimitive
    }

    // custom_attachment_response->obj_attachment_proofdocument
    cJSON *obj_attachment_proofdocument = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "objAttachmentProofdocument");
    if (obj_attachment_proofdocument) { 
    obj_attachment_proofdocument_local_nonprim = attachment_response_compound_parseFromJSON(obj_attachment_proofdocument); //nonprimitive
    }

    // custom_attachment_response->a_obj_attachment_attachment
    cJSON *a_obj_attachment_attachment = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "a_objAttachmentAttachment");
    if (a_obj_attachment_attachment) { 
    cJSON *a_obj_attachment_attachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment_attachment)){
        goto end; //nonprimitive container
    }

    a_obj_attachment_attachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_attachment_local_nonprimitive,a_obj_attachment_attachment )
    {
        if(!cJSON_IsObject(a_obj_attachment_attachment_local_nonprimitive)){
            goto end;
        }
        attachment_response_compound_t *a_obj_attachment_attachmentItem = attachment_response_compound_parseFromJSON(a_obj_attachment_attachment_local_nonprimitive);

        list_addElement(a_obj_attachment_attachmentList, a_obj_attachment_attachmentItem);
    }
    }

    // custom_attachment_response->a_obj_attachment_version
    cJSON *a_obj_attachment_version = cJSON_GetObjectItemCaseSensitive(custom_attachment_responseJSON, "a_objAttachmentVersion");
    if (a_obj_attachment_version) { 
    cJSON *a_obj_attachment_version_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment_version)){
        goto end; //nonprimitive container
    }

    a_obj_attachment_versionList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_version_local_nonprimitive,a_obj_attachment_version )
    {
        if(!cJSON_IsObject(a_obj_attachment_version_local_nonprimitive)){
            goto end;
        }
        attachment_response_compound_t *a_obj_attachment_versionItem = attachment_response_compound_parseFromJSON(a_obj_attachment_version_local_nonprimitive);

        list_addElement(a_obj_attachment_versionList, a_obj_attachment_versionItem);
    }
    }


    custom_attachment_response_local_var = custom_attachment_response_create (
        pki_attachment_id->valuedouble,
        fki_computer_id ? fki_computer_id->valuedouble : 0,
        fki_adjustment_id ? fki_adjustment_id->valuedouble : 0,
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_bankaccount_id ? fki_bankaccount_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        fki_commissionadvance_id ? fki_commissionadvance_id->valuedouble : 0,
        fki_communication_id ? fki_communication_id->valuedouble : 0,
        fki_customer_id ? fki_customer_id->valuedouble : 0,
        fki_customertemplate_id ? fki_customertemplate_id->valuedouble : 0,
        fki_deposit_id ? fki_deposit_id->valuedouble : 0,
        fki_deposittransitcheque_id ? fki_deposittransitcheque_id->valuedouble : 0,
        fki_electronicfundstransfer_id ? fki_electronicfundstransfer_id->valuedouble : 0,
        fki_employee_id ? fki_employee_id->valuedouble : 0,
        fki_externalbroker_id ? fki_externalbroker_id->valuedouble : 0,
        fki_ezcomadvanceserver_id ? fki_ezcomadvanceserver_id->valuedouble : 0,
        fki_ezcomcompany_id ? fki_ezcomcompany_id->valuedouble : 0,
        fki_ezsigndocument_id ? fki_ezsigndocument_id->valuedouble : 0,
        fki_ghacqcontract_id ? fki_ghacqcontract_id->valuedouble : 0,
        fki_inscription_id ? fki_inscription_id->valuedouble : 0,
        fki_inscriptiontemp_id ? fki_inscriptiontemp_id->valuedouble : 0,
        fki_inscriptionnotauthenticated_id ? fki_inscriptionnotauthenticated_id->valuedouble : 0,
        fki_invoice_id ? fki_invoice_id->valuedouble : 0,
        fki_buyercontract_id ? fki_buyercontract_id->valuedouble : 0,
        fki_franchisebroker_id ? fki_franchisebroker_id->valuedouble : 0,
        fki_franchiseagence_id ? fki_franchiseagence_id->valuedouble : 0,
        fki_franchiseoffice_id ? fki_franchiseoffice_id->valuedouble : 0,
        fki_franchisefranchise_id ? fki_franchisefranchise_id->valuedouble : 0,
        fki_franchisecomplaint_id ? fki_franchisecomplaint_id->valuedouble : 0,
        fki_lead_id ? fki_lead_id->valuedouble : 0,
        fki_marketingprogram_id ? fki_marketingprogram_id->valuedouble : 0,
        fki_marketingfollow_id ? fki_marketingfollow_id->valuedouble : 0,
        fki_notary_id ? fki_notary_id->valuedouble : 0,
        fki_officetaxreport_id ? fki_officetaxreport_id->valuedouble : 0,
        fki_otherincome_id ? fki_otherincome_id->valuedouble : 0,
        fki_paymentpreparation_id ? fki_paymentpreparation_id->valuedouble : 0,
        fki_purchase_id ? fki_purchase_id->valuedouble : 0,
        fki_salary_id ? fki_salary_id->valuedouble : 0,
        fki_supplier_id ? fki_supplier_id->valuedouble : 0,
        fki_tranqcontract_id ? fki_tranqcontract_id->valuedouble : 0,
        fki_template_id ? fki_template_id->valuedouble : 0,
        fki_inscriptionchecklist_id ? fki_inscriptionchecklist_id->valuedouble : 0,
        fki_folder_id ? fki_folder_id->valuedouble : 0,
        fki_rejectedoffertopurchase_id ? fki_rejectedoffertopurchase_id->valuedouble : 0,
        fki_disclosure_id ? fki_disclosure_id->valuedouble : 0,
        fki_reconciliation_id ? fki_reconciliation_id->valuedouble : 0,
        fki_ezsigndocument_id_reference ? fki_ezsigndocument_id_reference->valuedouble : 0,
        e_attachment_documenttype_local_nonprim,
        strdup(s_attachment_name->valuestring),
        e_attachment_privacy_local_nonprim,
        fki_user_id_specific ? fki_user_id_specific->valuedouble : 0,
        e_attachment_type_local_nonprim,
        i_attachment_size->valuedouble,
        i_attachment_ed_mmoduleflag ? i_attachment_ed_mmoduleflag->valuedouble : 0,
        strdup(s_attachment_md5->valuestring),
        b_attachment_deleted->valueint,
        b_attachment_valid->valueint,
        e_attachment_verified_local_nonprim,
        t_attachment_rejectioncomment && !cJSON_IsNull(t_attachment_rejectioncomment) ? strdup(t_attachment_rejectioncomment->valuestring) : NULL,
        fki_user_id_owner ? fki_user_id_owner->valuedouble : 0,
        obj_audit ? obj_audit_local_nonprim : NULL,
        obj_attachment_proof ? obj_attachment_proof_local_nonprim : NULL,
        obj_attachment_proofdocument ? obj_attachment_proofdocument_local_nonprim : NULL,
        a_obj_attachment_attachment ? a_obj_attachment_attachmentList : NULL,
        a_obj_attachment_version ? a_obj_attachment_versionList : NULL
        );

    return custom_attachment_response_local_var;
end:
    if (e_attachment_documenttype_local_nonprim) {
        field_e_attachment_documenttype_free(e_attachment_documenttype_local_nonprim);
        e_attachment_documenttype_local_nonprim = NULL;
    }
    if (e_attachment_privacy_local_nonprim) {
        field_e_attachment_privacy_free(e_attachment_privacy_local_nonprim);
        e_attachment_privacy_local_nonprim = NULL;
    }
    if (e_attachment_type_local_nonprim) {
        field_e_attachment_type_free(e_attachment_type_local_nonprim);
        e_attachment_type_local_nonprim = NULL;
    }
    if (e_attachment_verified_local_nonprim) {
        field_e_attachment_verified_free(e_attachment_verified_local_nonprim);
        e_attachment_verified_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (obj_attachment_proof_local_nonprim) {
        attachment_response_compound_free(obj_attachment_proof_local_nonprim);
        obj_attachment_proof_local_nonprim = NULL;
    }
    if (obj_attachment_proofdocument_local_nonprim) {
        attachment_response_compound_free(obj_attachment_proofdocument_local_nonprim);
        obj_attachment_proofdocument_local_nonprim = NULL;
    }
    if (a_obj_attachment_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachment_attachmentList) {
            attachment_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachment_attachmentList);
        a_obj_attachment_attachmentList = NULL;
    }
    if (a_obj_attachment_versionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachment_versionList) {
            attachment_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachment_versionList);
        a_obj_attachment_versionList = NULL;
    }
    return NULL;

}
