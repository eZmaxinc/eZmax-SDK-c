#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_response.h"



static attachment_response_t *attachment_response_create_internal(
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
    ezmax_api_definition__full_field_e_attachment_documenttype__e e_attachment_documenttype,
    char *s_attachment_name,
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int fki_user_id_specific,
    ezmax_api_definition__full_field_e_attachment_type__e e_attachment_type,
    int i_attachment_size,
    int i_attachment_ed_mmoduleflag,
    char *s_attachment_md5,
    int b_attachment_deleted,
    int b_attachment_valid,
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified,
    char *t_attachment_rejectioncomment,
    int fki_user_id_owner,
    common_audit_t *obj_audit
    ) {
    attachment_response_t *attachment_response_local_var = malloc(sizeof(attachment_response_t));
    if (!attachment_response_local_var) {
        return NULL;
    }
    attachment_response_local_var->pki_attachment_id = pki_attachment_id;
    attachment_response_local_var->fki_computer_id = fki_computer_id;
    attachment_response_local_var->fki_adjustment_id = fki_adjustment_id;
    attachment_response_local_var->fki_agent_id = fki_agent_id;
    attachment_response_local_var->fki_bankaccount_id = fki_bankaccount_id;
    attachment_response_local_var->fki_broker_id = fki_broker_id;
    attachment_response_local_var->fki_commissionadvance_id = fki_commissionadvance_id;
    attachment_response_local_var->fki_communication_id = fki_communication_id;
    attachment_response_local_var->fki_customer_id = fki_customer_id;
    attachment_response_local_var->fki_customertemplate_id = fki_customertemplate_id;
    attachment_response_local_var->fki_deposit_id = fki_deposit_id;
    attachment_response_local_var->fki_deposittransitcheque_id = fki_deposittransitcheque_id;
    attachment_response_local_var->fki_electronicfundstransfer_id = fki_electronicfundstransfer_id;
    attachment_response_local_var->fki_employee_id = fki_employee_id;
    attachment_response_local_var->fki_externalbroker_id = fki_externalbroker_id;
    attachment_response_local_var->fki_ezcomadvanceserver_id = fki_ezcomadvanceserver_id;
    attachment_response_local_var->fki_ezcomcompany_id = fki_ezcomcompany_id;
    attachment_response_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    attachment_response_local_var->fki_ghacqcontract_id = fki_ghacqcontract_id;
    attachment_response_local_var->fki_inscription_id = fki_inscription_id;
    attachment_response_local_var->fki_inscriptiontemp_id = fki_inscriptiontemp_id;
    attachment_response_local_var->fki_inscriptionnotauthenticated_id = fki_inscriptionnotauthenticated_id;
    attachment_response_local_var->fki_invoice_id = fki_invoice_id;
    attachment_response_local_var->fki_buyercontract_id = fki_buyercontract_id;
    attachment_response_local_var->fki_franchisebroker_id = fki_franchisebroker_id;
    attachment_response_local_var->fki_franchiseagence_id = fki_franchiseagence_id;
    attachment_response_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    attachment_response_local_var->fki_franchisefranchise_id = fki_franchisefranchise_id;
    attachment_response_local_var->fki_franchisecomplaint_id = fki_franchisecomplaint_id;
    attachment_response_local_var->fki_lead_id = fki_lead_id;
    attachment_response_local_var->fki_marketingprogram_id = fki_marketingprogram_id;
    attachment_response_local_var->fki_marketingfollow_id = fki_marketingfollow_id;
    attachment_response_local_var->fki_notary_id = fki_notary_id;
    attachment_response_local_var->fki_officetaxreport_id = fki_officetaxreport_id;
    attachment_response_local_var->fki_otherincome_id = fki_otherincome_id;
    attachment_response_local_var->fki_paymentpreparation_id = fki_paymentpreparation_id;
    attachment_response_local_var->fki_purchase_id = fki_purchase_id;
    attachment_response_local_var->fki_salary_id = fki_salary_id;
    attachment_response_local_var->fki_supplier_id = fki_supplier_id;
    attachment_response_local_var->fki_tranqcontract_id = fki_tranqcontract_id;
    attachment_response_local_var->fki_template_id = fki_template_id;
    attachment_response_local_var->fki_inscriptionchecklist_id = fki_inscriptionchecklist_id;
    attachment_response_local_var->fki_folder_id = fki_folder_id;
    attachment_response_local_var->fki_rejectedoffertopurchase_id = fki_rejectedoffertopurchase_id;
    attachment_response_local_var->fki_disclosure_id = fki_disclosure_id;
    attachment_response_local_var->fki_reconciliation_id = fki_reconciliation_id;
    attachment_response_local_var->fki_ezsigndocument_id_reference = fki_ezsigndocument_id_reference;
    attachment_response_local_var->e_attachment_documenttype = e_attachment_documenttype;
    attachment_response_local_var->s_attachment_name = s_attachment_name;
    attachment_response_local_var->e_attachment_privacy = e_attachment_privacy;
    attachment_response_local_var->fki_user_id_specific = fki_user_id_specific;
    attachment_response_local_var->e_attachment_type = e_attachment_type;
    attachment_response_local_var->i_attachment_size = i_attachment_size;
    attachment_response_local_var->i_attachment_ed_mmoduleflag = i_attachment_ed_mmoduleflag;
    attachment_response_local_var->s_attachment_md5 = s_attachment_md5;
    attachment_response_local_var->b_attachment_deleted = b_attachment_deleted;
    attachment_response_local_var->b_attachment_valid = b_attachment_valid;
    attachment_response_local_var->e_attachment_verified = e_attachment_verified;
    attachment_response_local_var->t_attachment_rejectioncomment = t_attachment_rejectioncomment;
    attachment_response_local_var->fki_user_id_owner = fki_user_id_owner;
    attachment_response_local_var->obj_audit = obj_audit;

    attachment_response_local_var->_library_owned = 1;
    return attachment_response_local_var;
}

__attribute__((deprecated)) attachment_response_t *attachment_response_create(
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
    ezmax_api_definition__full_field_e_attachment_documenttype__e e_attachment_documenttype,
    char *s_attachment_name,
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int fki_user_id_specific,
    ezmax_api_definition__full_field_e_attachment_type__e e_attachment_type,
    int i_attachment_size,
    int i_attachment_ed_mmoduleflag,
    char *s_attachment_md5,
    int b_attachment_deleted,
    int b_attachment_valid,
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified,
    char *t_attachment_rejectioncomment,
    int fki_user_id_owner,
    common_audit_t *obj_audit
    ) {
    return attachment_response_create_internal (
        pki_attachment_id,
        fki_computer_id,
        fki_adjustment_id,
        fki_agent_id,
        fki_bankaccount_id,
        fki_broker_id,
        fki_commissionadvance_id,
        fki_communication_id,
        fki_customer_id,
        fki_customertemplate_id,
        fki_deposit_id,
        fki_deposittransitcheque_id,
        fki_electronicfundstransfer_id,
        fki_employee_id,
        fki_externalbroker_id,
        fki_ezcomadvanceserver_id,
        fki_ezcomcompany_id,
        fki_ezsigndocument_id,
        fki_ghacqcontract_id,
        fki_inscription_id,
        fki_inscriptiontemp_id,
        fki_inscriptionnotauthenticated_id,
        fki_invoice_id,
        fki_buyercontract_id,
        fki_franchisebroker_id,
        fki_franchiseagence_id,
        fki_franchiseoffice_id,
        fki_franchisefranchise_id,
        fki_franchisecomplaint_id,
        fki_lead_id,
        fki_marketingprogram_id,
        fki_marketingfollow_id,
        fki_notary_id,
        fki_officetaxreport_id,
        fki_otherincome_id,
        fki_paymentpreparation_id,
        fki_purchase_id,
        fki_salary_id,
        fki_supplier_id,
        fki_tranqcontract_id,
        fki_template_id,
        fki_inscriptionchecklist_id,
        fki_folder_id,
        fki_rejectedoffertopurchase_id,
        fki_disclosure_id,
        fki_reconciliation_id,
        fki_ezsigndocument_id_reference,
        e_attachment_documenttype,
        s_attachment_name,
        e_attachment_privacy,
        fki_user_id_specific,
        e_attachment_type,
        i_attachment_size,
        i_attachment_ed_mmoduleflag,
        s_attachment_md5,
        b_attachment_deleted,
        b_attachment_valid,
        e_attachment_verified,
        t_attachment_rejectioncomment,
        fki_user_id_owner,
        obj_audit
        );
}

void attachment_response_free(attachment_response_t *attachment_response) {
    if(NULL == attachment_response){
        return ;
    }
    if(attachment_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_response->s_attachment_name) {
        free(attachment_response->s_attachment_name);
        attachment_response->s_attachment_name = NULL;
    }
    if (attachment_response->s_attachment_md5) {
        free(attachment_response->s_attachment_md5);
        attachment_response->s_attachment_md5 = NULL;
    }
    if (attachment_response->t_attachment_rejectioncomment) {
        free(attachment_response->t_attachment_rejectioncomment);
        attachment_response->t_attachment_rejectioncomment = NULL;
    }
    if (attachment_response->obj_audit) {
        common_audit_free(attachment_response->obj_audit);
        attachment_response->obj_audit = NULL;
    }
    free(attachment_response);
}

cJSON *attachment_response_convertToJSON(attachment_response_t *attachment_response) {
    cJSON *item = cJSON_CreateObject();

    // attachment_response->pki_attachment_id
    if (!attachment_response->pki_attachment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAttachmentID", attachment_response->pki_attachment_id) == NULL) {
    goto fail; //Numeric
    }


    // attachment_response->fki_computer_id
    if(attachment_response->fki_computer_id) {
    if(cJSON_AddNumberToObject(item, "fkiComputerID", attachment_response->fki_computer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_adjustment_id
    if(attachment_response->fki_adjustment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAdjustmentID", attachment_response->fki_adjustment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_agent_id
    if(attachment_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", attachment_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_bankaccount_id
    if(attachment_response->fki_bankaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", attachment_response->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_broker_id
    if(attachment_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", attachment_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_commissionadvance_id
    if(attachment_response->fki_commissionadvance_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommissionadvanceID", attachment_response->fki_commissionadvance_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_communication_id
    if(attachment_response->fki_communication_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommunicationID", attachment_response->fki_communication_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_customer_id
    if(attachment_response->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", attachment_response->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_customertemplate_id
    if(attachment_response->fki_customertemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomertemplateID", attachment_response->fki_customertemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_deposit_id
    if(attachment_response->fki_deposit_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepositID", attachment_response->fki_deposit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_deposittransitcheque_id
    if(attachment_response->fki_deposittransitcheque_id) {
    if(cJSON_AddNumberToObject(item, "fkiDeposittransitchequeID", attachment_response->fki_deposittransitcheque_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_electronicfundstransfer_id
    if(attachment_response->fki_electronicfundstransfer_id) {
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferID", attachment_response->fki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_employee_id
    if(attachment_response->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", attachment_response->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_externalbroker_id
    if(attachment_response->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", attachment_response->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_ezcomadvanceserver_id
    if(attachment_response->fki_ezcomadvanceserver_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomadvanceserverID", attachment_response->fki_ezcomadvanceserver_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_ezcomcompany_id
    if(attachment_response->fki_ezcomcompany_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomcompanyID", attachment_response->fki_ezcomcompany_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_ezsigndocument_id
    if(attachment_response->fki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", attachment_response->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_ghacqcontract_id
    if(attachment_response->fki_ghacqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiGhacqcontractID", attachment_response->fki_ghacqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_inscription_id
    if(attachment_response->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", attachment_response->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_inscriptiontemp_id
    if(attachment_response->fki_inscriptiontemp_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontempID", attachment_response->fki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_inscriptionnotauthenticated_id
    if(attachment_response->fki_inscriptionnotauthenticated_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedID", attachment_response->fki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_invoice_id
    if(attachment_response->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", attachment_response->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_buyercontract_id
    if(attachment_response->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", attachment_response->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_franchisebroker_id
    if(attachment_response->fki_franchisebroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisebrokerID", attachment_response->fki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_franchiseagence_id
    if(attachment_response->fki_franchiseagence_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseagenceID", attachment_response->fki_franchiseagence_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_franchiseoffice_id
    if(attachment_response->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", attachment_response->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_franchisefranchise_id
    if(attachment_response->fki_franchisefranchise_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisefranchiseID", attachment_response->fki_franchisefranchise_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_franchisecomplaint_id
    if(attachment_response->fki_franchisecomplaint_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisecomplaintID", attachment_response->fki_franchisecomplaint_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_lead_id
    if(attachment_response->fki_lead_id) {
    if(cJSON_AddNumberToObject(item, "fkiLeadID", attachment_response->fki_lead_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_marketingprogram_id
    if(attachment_response->fki_marketingprogram_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingprogramID", attachment_response->fki_marketingprogram_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_marketingfollow_id
    if(attachment_response->fki_marketingfollow_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingfollowID", attachment_response->fki_marketingfollow_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_notary_id
    if(attachment_response->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", attachment_response->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_officetaxreport_id
    if(attachment_response->fki_officetaxreport_id) {
    if(cJSON_AddNumberToObject(item, "fkiOfficetaxreportID", attachment_response->fki_officetaxreport_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_otherincome_id
    if(attachment_response->fki_otherincome_id) {
    if(cJSON_AddNumberToObject(item, "fkiOtherincomeID", attachment_response->fki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_paymentpreparation_id
    if(attachment_response->fki_paymentpreparation_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentpreparationID", attachment_response->fki_paymentpreparation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_purchase_id
    if(attachment_response->fki_purchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiPurchaseID", attachment_response->fki_purchase_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_salary_id
    if(attachment_response->fki_salary_id) {
    if(cJSON_AddNumberToObject(item, "fkiSalaryID", attachment_response->fki_salary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_supplier_id
    if(attachment_response->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", attachment_response->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_tranqcontract_id
    if(attachment_response->fki_tranqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiTranqcontractID", attachment_response->fki_tranqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_template_id
    if(attachment_response->fki_template_id) {
    if(cJSON_AddNumberToObject(item, "fkiTemplateID", attachment_response->fki_template_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_inscriptionchecklist_id
    if(attachment_response->fki_inscriptionchecklist_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionchecklistID", attachment_response->fki_inscriptionchecklist_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_folder_id
    if(attachment_response->fki_folder_id) {
    if(cJSON_AddNumberToObject(item, "fkiFolderID", attachment_response->fki_folder_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_rejectedoffertopurchase_id
    if(attachment_response->fki_rejectedoffertopurchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiRejectedoffertopurchaseID", attachment_response->fki_rejectedoffertopurchase_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_disclosure_id
    if(attachment_response->fki_disclosure_id) {
    if(cJSON_AddNumberToObject(item, "fkiDisclosureID", attachment_response->fki_disclosure_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_reconciliation_id
    if(attachment_response->fki_reconciliation_id) {
    if(cJSON_AddNumberToObject(item, "fkiReconciliationID", attachment_response->fki_reconciliation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->fki_ezsigndocument_id_reference
    if(attachment_response->fki_ezsigndocument_id_reference) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentIDReference", attachment_response->fki_ezsigndocument_id_reference) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->e_attachment_documenttype
    if (ezmax_api_definition__full_field_e_attachment_documenttype__NULL == attachment_response->e_attachment_documenttype) {
        goto fail;
    }
    cJSON *e_attachment_documenttype_local_JSON = field_e_attachment_documenttype_convertToJSON(attachment_response->e_attachment_documenttype);
    if(e_attachment_documenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentDocumenttype", e_attachment_documenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_response->s_attachment_name
    if (!attachment_response->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", attachment_response->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // attachment_response->e_attachment_privacy
    if (ezmax_api_definition__full_field_e_attachment_privacy__NULL == attachment_response->e_attachment_privacy) {
        goto fail;
    }
    cJSON *e_attachment_privacy_local_JSON = field_e_attachment_privacy_convertToJSON(attachment_response->e_attachment_privacy);
    if(e_attachment_privacy_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentPrivacy", e_attachment_privacy_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_response->fki_user_id_specific
    if(attachment_response->fki_user_id_specific) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDSpecific", attachment_response->fki_user_id_specific) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->e_attachment_type
    if (ezmax_api_definition__full_field_e_attachment_type__NULL == attachment_response->e_attachment_type) {
        goto fail;
    }
    cJSON *e_attachment_type_local_JSON = field_e_attachment_type_convertToJSON(attachment_response->e_attachment_type);
    if(e_attachment_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentType", e_attachment_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_response->i_attachment_size
    if (!attachment_response->i_attachment_size) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iAttachmentSize", attachment_response->i_attachment_size) == NULL) {
    goto fail; //Numeric
    }


    // attachment_response->i_attachment_ed_mmoduleflag
    if(attachment_response->i_attachment_ed_mmoduleflag) {
    if(cJSON_AddNumberToObject(item, "iAttachmentEDMmoduleflag", attachment_response->i_attachment_ed_mmoduleflag) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->s_attachment_md5
    if (!attachment_response->s_attachment_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentMD5", attachment_response->s_attachment_md5) == NULL) {
    goto fail; //String
    }


    // attachment_response->b_attachment_deleted
    if (!attachment_response->b_attachment_deleted) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAttachmentDeleted", attachment_response->b_attachment_deleted) == NULL) {
    goto fail; //Bool
    }


    // attachment_response->b_attachment_valid
    if (!attachment_response->b_attachment_valid) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAttachmentValid", attachment_response->b_attachment_valid) == NULL) {
    goto fail; //Bool
    }


    // attachment_response->e_attachment_verified
    if (ezmax_api_definition__full_field_e_attachment_verified__NULL == attachment_response->e_attachment_verified) {
        goto fail;
    }
    cJSON *e_attachment_verified_local_JSON = field_e_attachment_verified_convertToJSON(attachment_response->e_attachment_verified);
    if(e_attachment_verified_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentVerified", e_attachment_verified_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_response->t_attachment_rejectioncomment
    if(attachment_response->t_attachment_rejectioncomment) {
    if(cJSON_AddStringToObject(item, "tAttachmentRejectioncomment", attachment_response->t_attachment_rejectioncomment) == NULL) {
    goto fail; //String
    }
    }


    // attachment_response->fki_user_id_owner
    if(attachment_response->fki_user_id_owner) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDOwner", attachment_response->fki_user_id_owner) == NULL) {
    goto fail; //Numeric
    }
    }


    // attachment_response->obj_audit
    if(attachment_response->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(attachment_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
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

attachment_response_t *attachment_response_parseFromJSON(cJSON *attachment_responseJSON){

    attachment_response_t *attachment_response_local_var = NULL;

    // define the local variable for attachment_response->e_attachment_documenttype
    ezmax_api_definition__full_field_e_attachment_documenttype__e e_attachment_documenttype_local_nonprim = 0;

    // define the local variable for attachment_response->e_attachment_privacy
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy_local_nonprim = 0;

    // define the local variable for attachment_response->e_attachment_type
    ezmax_api_definition__full_field_e_attachment_type__e e_attachment_type_local_nonprim = 0;

    // define the local variable for attachment_response->e_attachment_verified
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified_local_nonprim = 0;

    // define the local variable for attachment_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // attachment_response->pki_attachment_id
    cJSON *pki_attachment_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "pkiAttachmentID");
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

    // attachment_response->fki_computer_id
    cJSON *fki_computer_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiComputerID");
    if (cJSON_IsNull(fki_computer_id)) {
        fki_computer_id = NULL;
    }
    if (fki_computer_id) { 
    if(!cJSON_IsNumber(fki_computer_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_adjustment_id
    cJSON *fki_adjustment_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiAdjustmentID");
    if (cJSON_IsNull(fki_adjustment_id)) {
        fki_adjustment_id = NULL;
    }
    if (fki_adjustment_id) { 
    if(!cJSON_IsNumber(fki_adjustment_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiBankaccountID");
    if (cJSON_IsNull(fki_bankaccount_id)) {
        fki_bankaccount_id = NULL;
    }
    if (fki_bankaccount_id) { 
    if(!cJSON_IsNumber(fki_bankaccount_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_commissionadvance_id
    cJSON *fki_commissionadvance_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiCommissionadvanceID");
    if (cJSON_IsNull(fki_commissionadvance_id)) {
        fki_commissionadvance_id = NULL;
    }
    if (fki_commissionadvance_id) { 
    if(!cJSON_IsNumber(fki_commissionadvance_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_communication_id
    cJSON *fki_communication_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiCommunicationID");
    if (cJSON_IsNull(fki_communication_id)) {
        fki_communication_id = NULL;
    }
    if (fki_communication_id) { 
    if(!cJSON_IsNumber(fki_communication_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiCustomerID");
    if (cJSON_IsNull(fki_customer_id)) {
        fki_customer_id = NULL;
    }
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_customertemplate_id
    cJSON *fki_customertemplate_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiCustomertemplateID");
    if (cJSON_IsNull(fki_customertemplate_id)) {
        fki_customertemplate_id = NULL;
    }
    if (fki_customertemplate_id) { 
    if(!cJSON_IsNumber(fki_customertemplate_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_deposit_id
    cJSON *fki_deposit_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiDepositID");
    if (cJSON_IsNull(fki_deposit_id)) {
        fki_deposit_id = NULL;
    }
    if (fki_deposit_id) { 
    if(!cJSON_IsNumber(fki_deposit_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_deposittransitcheque_id
    cJSON *fki_deposittransitcheque_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiDeposittransitchequeID");
    if (cJSON_IsNull(fki_deposittransitcheque_id)) {
        fki_deposittransitcheque_id = NULL;
    }
    if (fki_deposittransitcheque_id) { 
    if(!cJSON_IsNumber(fki_deposittransitcheque_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_electronicfundstransfer_id
    cJSON *fki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiElectronicfundstransferID");
    if (cJSON_IsNull(fki_electronicfundstransfer_id)) {
        fki_electronicfundstransfer_id = NULL;
    }
    if (fki_electronicfundstransfer_id) { 
    if(!cJSON_IsNumber(fki_electronicfundstransfer_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiEmployeeID");
    if (cJSON_IsNull(fki_employee_id)) {
        fki_employee_id = NULL;
    }
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiExternalbrokerID");
    if (cJSON_IsNull(fki_externalbroker_id)) {
        fki_externalbroker_id = NULL;
    }
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_ezcomadvanceserver_id
    cJSON *fki_ezcomadvanceserver_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiEzcomadvanceserverID");
    if (cJSON_IsNull(fki_ezcomadvanceserver_id)) {
        fki_ezcomadvanceserver_id = NULL;
    }
    if (fki_ezcomadvanceserver_id) { 
    if(!cJSON_IsNumber(fki_ezcomadvanceserver_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_ezcomcompany_id
    cJSON *fki_ezcomcompany_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiEzcomcompanyID");
    if (cJSON_IsNull(fki_ezcomcompany_id)) {
        fki_ezcomcompany_id = NULL;
    }
    if (fki_ezcomcompany_id) { 
    if(!cJSON_IsNumber(fki_ezcomcompany_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (fki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_ghacqcontract_id
    cJSON *fki_ghacqcontract_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiGhacqcontractID");
    if (cJSON_IsNull(fki_ghacqcontract_id)) {
        fki_ghacqcontract_id = NULL;
    }
    if (fki_ghacqcontract_id) { 
    if(!cJSON_IsNumber(fki_ghacqcontract_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiInscriptionID");
    if (cJSON_IsNull(fki_inscription_id)) {
        fki_inscription_id = NULL;
    }
    if (fki_inscription_id) { 
    if(!cJSON_IsNumber(fki_inscription_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_inscriptiontemp_id
    cJSON *fki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiInscriptiontempID");
    if (cJSON_IsNull(fki_inscriptiontemp_id)) {
        fki_inscriptiontemp_id = NULL;
    }
    if (fki_inscriptiontemp_id) { 
    if(!cJSON_IsNumber(fki_inscriptiontemp_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_inscriptionnotauthenticated_id
    cJSON *fki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiInscriptionnotauthenticatedID");
    if (cJSON_IsNull(fki_inscriptionnotauthenticated_id)) {
        fki_inscriptionnotauthenticated_id = NULL;
    }
    if (fki_inscriptionnotauthenticated_id) { 
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiInvoiceID");
    if (cJSON_IsNull(fki_invoice_id)) {
        fki_invoice_id = NULL;
    }
    if (fki_invoice_id) { 
    if(!cJSON_IsNumber(fki_invoice_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiBuyercontractID");
    if (cJSON_IsNull(fki_buyercontract_id)) {
        fki_buyercontract_id = NULL;
    }
    if (fki_buyercontract_id) { 
    if(!cJSON_IsNumber(fki_buyercontract_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFranchisebrokerID");
    if (cJSON_IsNull(fki_franchisebroker_id)) {
        fki_franchisebroker_id = NULL;
    }
    if (fki_franchisebroker_id) { 
    if(!cJSON_IsNumber(fki_franchisebroker_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_franchiseagence_id
    cJSON *fki_franchiseagence_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFranchiseagenceID");
    if (cJSON_IsNull(fki_franchiseagence_id)) {
        fki_franchiseagence_id = NULL;
    }
    if (fki_franchiseagence_id) { 
    if(!cJSON_IsNumber(fki_franchiseagence_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_franchisefranchise_id
    cJSON *fki_franchisefranchise_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFranchisefranchiseID");
    if (cJSON_IsNull(fki_franchisefranchise_id)) {
        fki_franchisefranchise_id = NULL;
    }
    if (fki_franchisefranchise_id) { 
    if(!cJSON_IsNumber(fki_franchisefranchise_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_franchisecomplaint_id
    cJSON *fki_franchisecomplaint_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFranchisecomplaintID");
    if (cJSON_IsNull(fki_franchisecomplaint_id)) {
        fki_franchisecomplaint_id = NULL;
    }
    if (fki_franchisecomplaint_id) { 
    if(!cJSON_IsNumber(fki_franchisecomplaint_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_lead_id
    cJSON *fki_lead_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiLeadID");
    if (cJSON_IsNull(fki_lead_id)) {
        fki_lead_id = NULL;
    }
    if (fki_lead_id) { 
    if(!cJSON_IsNumber(fki_lead_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_marketingprogram_id
    cJSON *fki_marketingprogram_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiMarketingprogramID");
    if (cJSON_IsNull(fki_marketingprogram_id)) {
        fki_marketingprogram_id = NULL;
    }
    if (fki_marketingprogram_id) { 
    if(!cJSON_IsNumber(fki_marketingprogram_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_marketingfollow_id
    cJSON *fki_marketingfollow_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiMarketingfollowID");
    if (cJSON_IsNull(fki_marketingfollow_id)) {
        fki_marketingfollow_id = NULL;
    }
    if (fki_marketingfollow_id) { 
    if(!cJSON_IsNumber(fki_marketingfollow_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiNotaryID");
    if (cJSON_IsNull(fki_notary_id)) {
        fki_notary_id = NULL;
    }
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_officetaxreport_id
    cJSON *fki_officetaxreport_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiOfficetaxreportID");
    if (cJSON_IsNull(fki_officetaxreport_id)) {
        fki_officetaxreport_id = NULL;
    }
    if (fki_officetaxreport_id) { 
    if(!cJSON_IsNumber(fki_officetaxreport_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_otherincome_id
    cJSON *fki_otherincome_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiOtherincomeID");
    if (cJSON_IsNull(fki_otherincome_id)) {
        fki_otherincome_id = NULL;
    }
    if (fki_otherincome_id) { 
    if(!cJSON_IsNumber(fki_otherincome_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_paymentpreparation_id
    cJSON *fki_paymentpreparation_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiPaymentpreparationID");
    if (cJSON_IsNull(fki_paymentpreparation_id)) {
        fki_paymentpreparation_id = NULL;
    }
    if (fki_paymentpreparation_id) { 
    if(!cJSON_IsNumber(fki_paymentpreparation_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_purchase_id
    cJSON *fki_purchase_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiPurchaseID");
    if (cJSON_IsNull(fki_purchase_id)) {
        fki_purchase_id = NULL;
    }
    if (fki_purchase_id) { 
    if(!cJSON_IsNumber(fki_purchase_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_salary_id
    cJSON *fki_salary_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiSalaryID");
    if (cJSON_IsNull(fki_salary_id)) {
        fki_salary_id = NULL;
    }
    if (fki_salary_id) { 
    if(!cJSON_IsNumber(fki_salary_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiSupplierID");
    if (cJSON_IsNull(fki_supplier_id)) {
        fki_supplier_id = NULL;
    }
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_tranqcontract_id
    cJSON *fki_tranqcontract_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiTranqcontractID");
    if (cJSON_IsNull(fki_tranqcontract_id)) {
        fki_tranqcontract_id = NULL;
    }
    if (fki_tranqcontract_id) { 
    if(!cJSON_IsNumber(fki_tranqcontract_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_template_id
    cJSON *fki_template_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiTemplateID");
    if (cJSON_IsNull(fki_template_id)) {
        fki_template_id = NULL;
    }
    if (fki_template_id) { 
    if(!cJSON_IsNumber(fki_template_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_inscriptionchecklist_id
    cJSON *fki_inscriptionchecklist_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiInscriptionchecklistID");
    if (cJSON_IsNull(fki_inscriptionchecklist_id)) {
        fki_inscriptionchecklist_id = NULL;
    }
    if (fki_inscriptionchecklist_id) { 
    if(!cJSON_IsNumber(fki_inscriptionchecklist_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_folder_id
    cJSON *fki_folder_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiFolderID");
    if (cJSON_IsNull(fki_folder_id)) {
        fki_folder_id = NULL;
    }
    if (fki_folder_id) { 
    if(!cJSON_IsNumber(fki_folder_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_rejectedoffertopurchase_id
    cJSON *fki_rejectedoffertopurchase_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiRejectedoffertopurchaseID");
    if (cJSON_IsNull(fki_rejectedoffertopurchase_id)) {
        fki_rejectedoffertopurchase_id = NULL;
    }
    if (fki_rejectedoffertopurchase_id) { 
    if(!cJSON_IsNumber(fki_rejectedoffertopurchase_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_disclosure_id
    cJSON *fki_disclosure_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiDisclosureID");
    if (cJSON_IsNull(fki_disclosure_id)) {
        fki_disclosure_id = NULL;
    }
    if (fki_disclosure_id) { 
    if(!cJSON_IsNumber(fki_disclosure_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_reconciliation_id
    cJSON *fki_reconciliation_id = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiReconciliationID");
    if (cJSON_IsNull(fki_reconciliation_id)) {
        fki_reconciliation_id = NULL;
    }
    if (fki_reconciliation_id) { 
    if(!cJSON_IsNumber(fki_reconciliation_id))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->fki_ezsigndocument_id_reference
    cJSON *fki_ezsigndocument_id_reference = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiEzsigndocumentIDReference");
    if (cJSON_IsNull(fki_ezsigndocument_id_reference)) {
        fki_ezsigndocument_id_reference = NULL;
    }
    if (fki_ezsigndocument_id_reference) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id_reference))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->e_attachment_documenttype
    cJSON *e_attachment_documenttype = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "eAttachmentDocumenttype");
    if (cJSON_IsNull(e_attachment_documenttype)) {
        e_attachment_documenttype = NULL;
    }
    if (!e_attachment_documenttype) {
        goto end;
    }

    
    e_attachment_documenttype_local_nonprim = field_e_attachment_documenttype_parseFromJSON(e_attachment_documenttype); //custom

    // attachment_response->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "sAttachmentName");
    if (cJSON_IsNull(s_attachment_name)) {
        s_attachment_name = NULL;
    }
    if (!s_attachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_name))
    {
    goto end; //String
    }

    // attachment_response->e_attachment_privacy
    cJSON *e_attachment_privacy = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "eAttachmentPrivacy");
    if (cJSON_IsNull(e_attachment_privacy)) {
        e_attachment_privacy = NULL;
    }
    if (!e_attachment_privacy) {
        goto end;
    }

    
    e_attachment_privacy_local_nonprim = field_e_attachment_privacy_parseFromJSON(e_attachment_privacy); //custom

    // attachment_response->fki_user_id_specific
    cJSON *fki_user_id_specific = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiUserIDSpecific");
    if (cJSON_IsNull(fki_user_id_specific)) {
        fki_user_id_specific = NULL;
    }
    if (fki_user_id_specific) { 
    if(!cJSON_IsNumber(fki_user_id_specific))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->e_attachment_type
    cJSON *e_attachment_type = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "eAttachmentType");
    if (cJSON_IsNull(e_attachment_type)) {
        e_attachment_type = NULL;
    }
    if (!e_attachment_type) {
        goto end;
    }

    
    e_attachment_type_local_nonprim = field_e_attachment_type_parseFromJSON(e_attachment_type); //custom

    // attachment_response->i_attachment_size
    cJSON *i_attachment_size = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "iAttachmentSize");
    if (cJSON_IsNull(i_attachment_size)) {
        i_attachment_size = NULL;
    }
    if (!i_attachment_size) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_attachment_size))
    {
    goto end; //Numeric
    }

    // attachment_response->i_attachment_ed_mmoduleflag
    cJSON *i_attachment_ed_mmoduleflag = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "iAttachmentEDMmoduleflag");
    if (cJSON_IsNull(i_attachment_ed_mmoduleflag)) {
        i_attachment_ed_mmoduleflag = NULL;
    }
    if (i_attachment_ed_mmoduleflag) { 
    if(!cJSON_IsNumber(i_attachment_ed_mmoduleflag))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->s_attachment_md5
    cJSON *s_attachment_md5 = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "sAttachmentMD5");
    if (cJSON_IsNull(s_attachment_md5)) {
        s_attachment_md5 = NULL;
    }
    if (!s_attachment_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_md5))
    {
    goto end; //String
    }

    // attachment_response->b_attachment_deleted
    cJSON *b_attachment_deleted = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "bAttachmentDeleted");
    if (cJSON_IsNull(b_attachment_deleted)) {
        b_attachment_deleted = NULL;
    }
    if (!b_attachment_deleted) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_attachment_deleted))
    {
    goto end; //Bool
    }

    // attachment_response->b_attachment_valid
    cJSON *b_attachment_valid = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "bAttachmentValid");
    if (cJSON_IsNull(b_attachment_valid)) {
        b_attachment_valid = NULL;
    }
    if (!b_attachment_valid) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_attachment_valid))
    {
    goto end; //Bool
    }

    // attachment_response->e_attachment_verified
    cJSON *e_attachment_verified = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "eAttachmentVerified");
    if (cJSON_IsNull(e_attachment_verified)) {
        e_attachment_verified = NULL;
    }
    if (!e_attachment_verified) {
        goto end;
    }

    
    e_attachment_verified_local_nonprim = field_e_attachment_verified_parseFromJSON(e_attachment_verified); //custom

    // attachment_response->t_attachment_rejectioncomment
    cJSON *t_attachment_rejectioncomment = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "tAttachmentRejectioncomment");
    if (cJSON_IsNull(t_attachment_rejectioncomment)) {
        t_attachment_rejectioncomment = NULL;
    }
    if (t_attachment_rejectioncomment) { 
    if(!cJSON_IsString(t_attachment_rejectioncomment) && !cJSON_IsNull(t_attachment_rejectioncomment))
    {
    goto end; //String
    }
    }

    // attachment_response->fki_user_id_owner
    cJSON *fki_user_id_owner = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "fkiUserIDOwner");
    if (cJSON_IsNull(fki_user_id_owner)) {
        fki_user_id_owner = NULL;
    }
    if (fki_user_id_owner) { 
    if(!cJSON_IsNumber(fki_user_id_owner))
    {
    goto end; //Numeric
    }
    }

    // attachment_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(attachment_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }


    attachment_response_local_var = attachment_response_create_internal (
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
        obj_audit ? obj_audit_local_nonprim : NULL
        );

    return attachment_response_local_var;
end:
    if (e_attachment_documenttype_local_nonprim) {
        e_attachment_documenttype_local_nonprim = 0;
    }
    if (e_attachment_privacy_local_nonprim) {
        e_attachment_privacy_local_nonprim = 0;
    }
    if (e_attachment_type_local_nonprim) {
        e_attachment_type_local_nonprim = 0;
    }
    if (e_attachment_verified_local_nonprim) {
        e_attachment_verified_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
