#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_request.h"



static documenttypechecklist_request_t *documenttypechecklist_request_create_internal(
    int *pki_documenttypechecklist_id,
    int *fki_documenttype_id,
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment,
    int *fki_adjustment_id,
    int *fki_agent_id,
    int *fki_bankaccount_id,
    int *fki_broker_id,
    int *fki_commissionadvance_id,
    int *fki_communication_id,
    int *fki_customer_id,
    int *fki_customertemplate_id,
    int *fki_deposit_id,
    int *fki_deposittransitcheque_id,
    int *fki_electronicfundstransfer_id,
    int *fki_employee_id,
    int *fki_externalbroker_id,
    int *fki_ezcomadvanceserver_id,
    int *fki_ezcomcompany_id,
    int *fki_ezsigndocument_id,
    int *fki_ghacqcontract_id,
    int *fki_inscription_id,
    int *fki_inscriptiontemp_id,
    int *fki_inscriptionnotauthenticated_id,
    int *fki_invoice_id,
    int *fki_buyercontract_id,
    int *fki_franchisebroker_id,
    int *fki_franchiseagence_id,
    int *fki_franchiseoffice_id,
    int *fki_franchisefranchise_id,
    int *fki_franchisecomplaint_id,
    int *fki_lead_id,
    int *fki_marketingprogram_id,
    int *fki_marketingfollow_id,
    int *fki_notary_id,
    int *fki_officetaxreport_id,
    int *fki_otherincome_id,
    int *fki_paymentpreparation_id,
    int *fki_purchase_id,
    int *fki_salary_id,
    int *fki_supplier_id,
    int *fki_tranqcontract_id,
    int *fki_template_id
    ) {
    documenttypechecklist_request_t *documenttypechecklist_request_local_var = malloc(sizeof(documenttypechecklist_request_t));
    if (!documenttypechecklist_request_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_request_local_var, 0, sizeof(documenttypechecklist_request_t));
    documenttypechecklist_request_local_var->_library_owned = 1;
    documenttypechecklist_request_local_var->pki_documenttypechecklist_id = pki_documenttypechecklist_id;
    documenttypechecklist_request_local_var->fki_documenttype_id = fki_documenttype_id;
    documenttypechecklist_request_local_var->e_documenttypechecklist_status = e_documenttypechecklist_status;
    documenttypechecklist_request_local_var->t_documenttypechecklist_comment = t_documenttypechecklist_comment;
    documenttypechecklist_request_local_var->fki_adjustment_id = fki_adjustment_id;
    documenttypechecklist_request_local_var->fki_agent_id = fki_agent_id;
    documenttypechecklist_request_local_var->fki_bankaccount_id = fki_bankaccount_id;
    documenttypechecklist_request_local_var->fki_broker_id = fki_broker_id;
    documenttypechecklist_request_local_var->fki_commissionadvance_id = fki_commissionadvance_id;
    documenttypechecklist_request_local_var->fki_communication_id = fki_communication_id;
    documenttypechecklist_request_local_var->fki_customer_id = fki_customer_id;
    documenttypechecklist_request_local_var->fki_customertemplate_id = fki_customertemplate_id;
    documenttypechecklist_request_local_var->fki_deposit_id = fki_deposit_id;
    documenttypechecklist_request_local_var->fki_deposittransitcheque_id = fki_deposittransitcheque_id;
    documenttypechecklist_request_local_var->fki_electronicfundstransfer_id = fki_electronicfundstransfer_id;
    documenttypechecklist_request_local_var->fki_employee_id = fki_employee_id;
    documenttypechecklist_request_local_var->fki_externalbroker_id = fki_externalbroker_id;
    documenttypechecklist_request_local_var->fki_ezcomadvanceserver_id = fki_ezcomadvanceserver_id;
    documenttypechecklist_request_local_var->fki_ezcomcompany_id = fki_ezcomcompany_id;
    documenttypechecklist_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    documenttypechecklist_request_local_var->fki_ghacqcontract_id = fki_ghacqcontract_id;
    documenttypechecklist_request_local_var->fki_inscription_id = fki_inscription_id;
    documenttypechecklist_request_local_var->fki_inscriptiontemp_id = fki_inscriptiontemp_id;
    documenttypechecklist_request_local_var->fki_inscriptionnotauthenticated_id = fki_inscriptionnotauthenticated_id;
    documenttypechecklist_request_local_var->fki_invoice_id = fki_invoice_id;
    documenttypechecklist_request_local_var->fki_buyercontract_id = fki_buyercontract_id;
    documenttypechecklist_request_local_var->fki_franchisebroker_id = fki_franchisebroker_id;
    documenttypechecklist_request_local_var->fki_franchiseagence_id = fki_franchiseagence_id;
    documenttypechecklist_request_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    documenttypechecklist_request_local_var->fki_franchisefranchise_id = fki_franchisefranchise_id;
    documenttypechecklist_request_local_var->fki_franchisecomplaint_id = fki_franchisecomplaint_id;
    documenttypechecklist_request_local_var->fki_lead_id = fki_lead_id;
    documenttypechecklist_request_local_var->fki_marketingprogram_id = fki_marketingprogram_id;
    documenttypechecklist_request_local_var->fki_marketingfollow_id = fki_marketingfollow_id;
    documenttypechecklist_request_local_var->fki_notary_id = fki_notary_id;
    documenttypechecklist_request_local_var->fki_officetaxreport_id = fki_officetaxreport_id;
    documenttypechecklist_request_local_var->fki_otherincome_id = fki_otherincome_id;
    documenttypechecklist_request_local_var->fki_paymentpreparation_id = fki_paymentpreparation_id;
    documenttypechecklist_request_local_var->fki_purchase_id = fki_purchase_id;
    documenttypechecklist_request_local_var->fki_salary_id = fki_salary_id;
    documenttypechecklist_request_local_var->fki_supplier_id = fki_supplier_id;
    documenttypechecklist_request_local_var->fki_tranqcontract_id = fki_tranqcontract_id;
    documenttypechecklist_request_local_var->fki_template_id = fki_template_id;
    return documenttypechecklist_request_local_var;
}

__attribute__((deprecated)) documenttypechecklist_request_t *documenttypechecklist_request_create(
    int *pki_documenttypechecklist_id,
    int *fki_documenttype_id,
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status,
    char *t_documenttypechecklist_comment,
    int *fki_adjustment_id,
    int *fki_agent_id,
    int *fki_bankaccount_id,
    int *fki_broker_id,
    int *fki_commissionadvance_id,
    int *fki_communication_id,
    int *fki_customer_id,
    int *fki_customertemplate_id,
    int *fki_deposit_id,
    int *fki_deposittransitcheque_id,
    int *fki_electronicfundstransfer_id,
    int *fki_employee_id,
    int *fki_externalbroker_id,
    int *fki_ezcomadvanceserver_id,
    int *fki_ezcomcompany_id,
    int *fki_ezsigndocument_id,
    int *fki_ghacqcontract_id,
    int *fki_inscription_id,
    int *fki_inscriptiontemp_id,
    int *fki_inscriptionnotauthenticated_id,
    int *fki_invoice_id,
    int *fki_buyercontract_id,
    int *fki_franchisebroker_id,
    int *fki_franchiseagence_id,
    int *fki_franchiseoffice_id,
    int *fki_franchisefranchise_id,
    int *fki_franchisecomplaint_id,
    int *fki_lead_id,
    int *fki_marketingprogram_id,
    int *fki_marketingfollow_id,
    int *fki_notary_id,
    int *fki_officetaxreport_id,
    int *fki_otherincome_id,
    int *fki_paymentpreparation_id,
    int *fki_purchase_id,
    int *fki_salary_id,
    int *fki_supplier_id,
    int *fki_tranqcontract_id,
    int *fki_template_id
    ) {
    int *pki_documenttypechecklist_id_copy = NULL;
    if (pki_documenttypechecklist_id) {
        pki_documenttypechecklist_id_copy = malloc(sizeof(int));
        if (pki_documenttypechecklist_id_copy) *pki_documenttypechecklist_id_copy = *pki_documenttypechecklist_id;
    }
    int *fki_documenttype_id_copy = NULL;
    if (fki_documenttype_id) {
        fki_documenttype_id_copy = malloc(sizeof(int));
        if (fki_documenttype_id_copy) *fki_documenttype_id_copy = *fki_documenttype_id;
    }
    int *fki_adjustment_id_copy = NULL;
    if (fki_adjustment_id) {
        fki_adjustment_id_copy = malloc(sizeof(int));
        if (fki_adjustment_id_copy) *fki_adjustment_id_copy = *fki_adjustment_id;
    }
    int *fki_agent_id_copy = NULL;
    if (fki_agent_id) {
        fki_agent_id_copy = malloc(sizeof(int));
        if (fki_agent_id_copy) *fki_agent_id_copy = *fki_agent_id;
    }
    int *fki_bankaccount_id_copy = NULL;
    if (fki_bankaccount_id) {
        fki_bankaccount_id_copy = malloc(sizeof(int));
        if (fki_bankaccount_id_copy) *fki_bankaccount_id_copy = *fki_bankaccount_id;
    }
    int *fki_broker_id_copy = NULL;
    if (fki_broker_id) {
        fki_broker_id_copy = malloc(sizeof(int));
        if (fki_broker_id_copy) *fki_broker_id_copy = *fki_broker_id;
    }
    int *fki_commissionadvance_id_copy = NULL;
    if (fki_commissionadvance_id) {
        fki_commissionadvance_id_copy = malloc(sizeof(int));
        if (fki_commissionadvance_id_copy) *fki_commissionadvance_id_copy = *fki_commissionadvance_id;
    }
    int *fki_communication_id_copy = NULL;
    if (fki_communication_id) {
        fki_communication_id_copy = malloc(sizeof(int));
        if (fki_communication_id_copy) *fki_communication_id_copy = *fki_communication_id;
    }
    int *fki_customer_id_copy = NULL;
    if (fki_customer_id) {
        fki_customer_id_copy = malloc(sizeof(int));
        if (fki_customer_id_copy) *fki_customer_id_copy = *fki_customer_id;
    }
    int *fki_customertemplate_id_copy = NULL;
    if (fki_customertemplate_id) {
        fki_customertemplate_id_copy = malloc(sizeof(int));
        if (fki_customertemplate_id_copy) *fki_customertemplate_id_copy = *fki_customertemplate_id;
    }
    int *fki_deposit_id_copy = NULL;
    if (fki_deposit_id) {
        fki_deposit_id_copy = malloc(sizeof(int));
        if (fki_deposit_id_copy) *fki_deposit_id_copy = *fki_deposit_id;
    }
    int *fki_deposittransitcheque_id_copy = NULL;
    if (fki_deposittransitcheque_id) {
        fki_deposittransitcheque_id_copy = malloc(sizeof(int));
        if (fki_deposittransitcheque_id_copy) *fki_deposittransitcheque_id_copy = *fki_deposittransitcheque_id;
    }
    int *fki_electronicfundstransfer_id_copy = NULL;
    if (fki_electronicfundstransfer_id) {
        fki_electronicfundstransfer_id_copy = malloc(sizeof(int));
        if (fki_electronicfundstransfer_id_copy) *fki_electronicfundstransfer_id_copy = *fki_electronicfundstransfer_id;
    }
    int *fki_employee_id_copy = NULL;
    if (fki_employee_id) {
        fki_employee_id_copy = malloc(sizeof(int));
        if (fki_employee_id_copy) *fki_employee_id_copy = *fki_employee_id;
    }
    int *fki_externalbroker_id_copy = NULL;
    if (fki_externalbroker_id) {
        fki_externalbroker_id_copy = malloc(sizeof(int));
        if (fki_externalbroker_id_copy) *fki_externalbroker_id_copy = *fki_externalbroker_id;
    }
    int *fki_ezcomadvanceserver_id_copy = NULL;
    if (fki_ezcomadvanceserver_id) {
        fki_ezcomadvanceserver_id_copy = malloc(sizeof(int));
        if (fki_ezcomadvanceserver_id_copy) *fki_ezcomadvanceserver_id_copy = *fki_ezcomadvanceserver_id;
    }
    int *fki_ezcomcompany_id_copy = NULL;
    if (fki_ezcomcompany_id) {
        fki_ezcomcompany_id_copy = malloc(sizeof(int));
        if (fki_ezcomcompany_id_copy) *fki_ezcomcompany_id_copy = *fki_ezcomcompany_id;
    }
    int *fki_ezsigndocument_id_copy = NULL;
    if (fki_ezsigndocument_id) {
        fki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigndocument_id_copy) *fki_ezsigndocument_id_copy = *fki_ezsigndocument_id;
    }
    int *fki_ghacqcontract_id_copy = NULL;
    if (fki_ghacqcontract_id) {
        fki_ghacqcontract_id_copy = malloc(sizeof(int));
        if (fki_ghacqcontract_id_copy) *fki_ghacqcontract_id_copy = *fki_ghacqcontract_id;
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
    int *fki_inscriptionnotauthenticated_id_copy = NULL;
    if (fki_inscriptionnotauthenticated_id) {
        fki_inscriptionnotauthenticated_id_copy = malloc(sizeof(int));
        if (fki_inscriptionnotauthenticated_id_copy) *fki_inscriptionnotauthenticated_id_copy = *fki_inscriptionnotauthenticated_id;
    }
    int *fki_invoice_id_copy = NULL;
    if (fki_invoice_id) {
        fki_invoice_id_copy = malloc(sizeof(int));
        if (fki_invoice_id_copy) *fki_invoice_id_copy = *fki_invoice_id;
    }
    int *fki_buyercontract_id_copy = NULL;
    if (fki_buyercontract_id) {
        fki_buyercontract_id_copy = malloc(sizeof(int));
        if (fki_buyercontract_id_copy) *fki_buyercontract_id_copy = *fki_buyercontract_id;
    }
    int *fki_franchisebroker_id_copy = NULL;
    if (fki_franchisebroker_id) {
        fki_franchisebroker_id_copy = malloc(sizeof(int));
        if (fki_franchisebroker_id_copy) *fki_franchisebroker_id_copy = *fki_franchisebroker_id;
    }
    int *fki_franchiseagence_id_copy = NULL;
    if (fki_franchiseagence_id) {
        fki_franchiseagence_id_copy = malloc(sizeof(int));
        if (fki_franchiseagence_id_copy) *fki_franchiseagence_id_copy = *fki_franchiseagence_id;
    }
    int *fki_franchiseoffice_id_copy = NULL;
    if (fki_franchiseoffice_id) {
        fki_franchiseoffice_id_copy = malloc(sizeof(int));
        if (fki_franchiseoffice_id_copy) *fki_franchiseoffice_id_copy = *fki_franchiseoffice_id;
    }
    int *fki_franchisefranchise_id_copy = NULL;
    if (fki_franchisefranchise_id) {
        fki_franchisefranchise_id_copy = malloc(sizeof(int));
        if (fki_franchisefranchise_id_copy) *fki_franchisefranchise_id_copy = *fki_franchisefranchise_id;
    }
    int *fki_franchisecomplaint_id_copy = NULL;
    if (fki_franchisecomplaint_id) {
        fki_franchisecomplaint_id_copy = malloc(sizeof(int));
        if (fki_franchisecomplaint_id_copy) *fki_franchisecomplaint_id_copy = *fki_franchisecomplaint_id;
    }
    int *fki_lead_id_copy = NULL;
    if (fki_lead_id) {
        fki_lead_id_copy = malloc(sizeof(int));
        if (fki_lead_id_copy) *fki_lead_id_copy = *fki_lead_id;
    }
    int *fki_marketingprogram_id_copy = NULL;
    if (fki_marketingprogram_id) {
        fki_marketingprogram_id_copy = malloc(sizeof(int));
        if (fki_marketingprogram_id_copy) *fki_marketingprogram_id_copy = *fki_marketingprogram_id;
    }
    int *fki_marketingfollow_id_copy = NULL;
    if (fki_marketingfollow_id) {
        fki_marketingfollow_id_copy = malloc(sizeof(int));
        if (fki_marketingfollow_id_copy) *fki_marketingfollow_id_copy = *fki_marketingfollow_id;
    }
    int *fki_notary_id_copy = NULL;
    if (fki_notary_id) {
        fki_notary_id_copy = malloc(sizeof(int));
        if (fki_notary_id_copy) *fki_notary_id_copy = *fki_notary_id;
    }
    int *fki_officetaxreport_id_copy = NULL;
    if (fki_officetaxreport_id) {
        fki_officetaxreport_id_copy = malloc(sizeof(int));
        if (fki_officetaxreport_id_copy) *fki_officetaxreport_id_copy = *fki_officetaxreport_id;
    }
    int *fki_otherincome_id_copy = NULL;
    if (fki_otherincome_id) {
        fki_otherincome_id_copy = malloc(sizeof(int));
        if (fki_otherincome_id_copy) *fki_otherincome_id_copy = *fki_otherincome_id;
    }
    int *fki_paymentpreparation_id_copy = NULL;
    if (fki_paymentpreparation_id) {
        fki_paymentpreparation_id_copy = malloc(sizeof(int));
        if (fki_paymentpreparation_id_copy) *fki_paymentpreparation_id_copy = *fki_paymentpreparation_id;
    }
    int *fki_purchase_id_copy = NULL;
    if (fki_purchase_id) {
        fki_purchase_id_copy = malloc(sizeof(int));
        if (fki_purchase_id_copy) *fki_purchase_id_copy = *fki_purchase_id;
    }
    int *fki_salary_id_copy = NULL;
    if (fki_salary_id) {
        fki_salary_id_copy = malloc(sizeof(int));
        if (fki_salary_id_copy) *fki_salary_id_copy = *fki_salary_id;
    }
    int *fki_supplier_id_copy = NULL;
    if (fki_supplier_id) {
        fki_supplier_id_copy = malloc(sizeof(int));
        if (fki_supplier_id_copy) *fki_supplier_id_copy = *fki_supplier_id;
    }
    int *fki_tranqcontract_id_copy = NULL;
    if (fki_tranqcontract_id) {
        fki_tranqcontract_id_copy = malloc(sizeof(int));
        if (fki_tranqcontract_id_copy) *fki_tranqcontract_id_copy = *fki_tranqcontract_id;
    }
    int *fki_template_id_copy = NULL;
    if (fki_template_id) {
        fki_template_id_copy = malloc(sizeof(int));
        if (fki_template_id_copy) *fki_template_id_copy = *fki_template_id;
    }
    documenttypechecklist_request_t *result = documenttypechecklist_request_create_internal (
        pki_documenttypechecklist_id_copy,
        fki_documenttype_id_copy,
        e_documenttypechecklist_status,
        t_documenttypechecklist_comment,
        fki_adjustment_id_copy,
        fki_agent_id_copy,
        fki_bankaccount_id_copy,
        fki_broker_id_copy,
        fki_commissionadvance_id_copy,
        fki_communication_id_copy,
        fki_customer_id_copy,
        fki_customertemplate_id_copy,
        fki_deposit_id_copy,
        fki_deposittransitcheque_id_copy,
        fki_electronicfundstransfer_id_copy,
        fki_employee_id_copy,
        fki_externalbroker_id_copy,
        fki_ezcomadvanceserver_id_copy,
        fki_ezcomcompany_id_copy,
        fki_ezsigndocument_id_copy,
        fki_ghacqcontract_id_copy,
        fki_inscription_id_copy,
        fki_inscriptiontemp_id_copy,
        fki_inscriptionnotauthenticated_id_copy,
        fki_invoice_id_copy,
        fki_buyercontract_id_copy,
        fki_franchisebroker_id_copy,
        fki_franchiseagence_id_copy,
        fki_franchiseoffice_id_copy,
        fki_franchisefranchise_id_copy,
        fki_franchisecomplaint_id_copy,
        fki_lead_id_copy,
        fki_marketingprogram_id_copy,
        fki_marketingfollow_id_copy,
        fki_notary_id_copy,
        fki_officetaxreport_id_copy,
        fki_otherincome_id_copy,
        fki_paymentpreparation_id_copy,
        fki_purchase_id_copy,
        fki_salary_id_copy,
        fki_supplier_id_copy,
        fki_tranqcontract_id_copy,
        fki_template_id_copy
        );
    if (!result) {
        free(pki_documenttypechecklist_id_copy);
        free(fki_documenttype_id_copy);
        free(fki_adjustment_id_copy);
        free(fki_agent_id_copy);
        free(fki_bankaccount_id_copy);
        free(fki_broker_id_copy);
        free(fki_commissionadvance_id_copy);
        free(fki_communication_id_copy);
        free(fki_customer_id_copy);
        free(fki_customertemplate_id_copy);
        free(fki_deposit_id_copy);
        free(fki_deposittransitcheque_id_copy);
        free(fki_electronicfundstransfer_id_copy);
        free(fki_employee_id_copy);
        free(fki_externalbroker_id_copy);
        free(fki_ezcomadvanceserver_id_copy);
        free(fki_ezcomcompany_id_copy);
        free(fki_ezsigndocument_id_copy);
        free(fki_ghacqcontract_id_copy);
        free(fki_inscription_id_copy);
        free(fki_inscriptiontemp_id_copy);
        free(fki_inscriptionnotauthenticated_id_copy);
        free(fki_invoice_id_copy);
        free(fki_buyercontract_id_copy);
        free(fki_franchisebroker_id_copy);
        free(fki_franchiseagence_id_copy);
        free(fki_franchiseoffice_id_copy);
        free(fki_franchisefranchise_id_copy);
        free(fki_franchisecomplaint_id_copy);
        free(fki_lead_id_copy);
        free(fki_marketingprogram_id_copy);
        free(fki_marketingfollow_id_copy);
        free(fki_notary_id_copy);
        free(fki_officetaxreport_id_copy);
        free(fki_otherincome_id_copy);
        free(fki_paymentpreparation_id_copy);
        free(fki_purchase_id_copy);
        free(fki_salary_id_copy);
        free(fki_supplier_id_copy);
        free(fki_tranqcontract_id_copy);
        free(fki_template_id_copy);
    }
    return result;
}

void documenttypechecklist_request_free(documenttypechecklist_request_t *documenttypechecklist_request) {
    if(NULL == documenttypechecklist_request){
        return ;
    }
    if(documenttypechecklist_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_request->pki_documenttypechecklist_id) {
        free(documenttypechecklist_request->pki_documenttypechecklist_id);
        documenttypechecklist_request->pki_documenttypechecklist_id = NULL;
    }
    if (documenttypechecklist_request->fki_documenttype_id) {
        free(documenttypechecklist_request->fki_documenttype_id);
        documenttypechecklist_request->fki_documenttype_id = NULL;
    }
    if (documenttypechecklist_request->t_documenttypechecklist_comment) {
        free(documenttypechecklist_request->t_documenttypechecklist_comment);
        documenttypechecklist_request->t_documenttypechecklist_comment = NULL;
    }
    if (documenttypechecklist_request->fki_adjustment_id) {
        free(documenttypechecklist_request->fki_adjustment_id);
        documenttypechecklist_request->fki_adjustment_id = NULL;
    }
    if (documenttypechecklist_request->fki_agent_id) {
        free(documenttypechecklist_request->fki_agent_id);
        documenttypechecklist_request->fki_agent_id = NULL;
    }
    if (documenttypechecklist_request->fki_bankaccount_id) {
        free(documenttypechecklist_request->fki_bankaccount_id);
        documenttypechecklist_request->fki_bankaccount_id = NULL;
    }
    if (documenttypechecklist_request->fki_broker_id) {
        free(documenttypechecklist_request->fki_broker_id);
        documenttypechecklist_request->fki_broker_id = NULL;
    }
    if (documenttypechecklist_request->fki_commissionadvance_id) {
        free(documenttypechecklist_request->fki_commissionadvance_id);
        documenttypechecklist_request->fki_commissionadvance_id = NULL;
    }
    if (documenttypechecklist_request->fki_communication_id) {
        free(documenttypechecklist_request->fki_communication_id);
        documenttypechecklist_request->fki_communication_id = NULL;
    }
    if (documenttypechecklist_request->fki_customer_id) {
        free(documenttypechecklist_request->fki_customer_id);
        documenttypechecklist_request->fki_customer_id = NULL;
    }
    if (documenttypechecklist_request->fki_customertemplate_id) {
        free(documenttypechecklist_request->fki_customertemplate_id);
        documenttypechecklist_request->fki_customertemplate_id = NULL;
    }
    if (documenttypechecklist_request->fki_deposit_id) {
        free(documenttypechecklist_request->fki_deposit_id);
        documenttypechecklist_request->fki_deposit_id = NULL;
    }
    if (documenttypechecklist_request->fki_deposittransitcheque_id) {
        free(documenttypechecklist_request->fki_deposittransitcheque_id);
        documenttypechecklist_request->fki_deposittransitcheque_id = NULL;
    }
    if (documenttypechecklist_request->fki_electronicfundstransfer_id) {
        free(documenttypechecklist_request->fki_electronicfundstransfer_id);
        documenttypechecklist_request->fki_electronicfundstransfer_id = NULL;
    }
    if (documenttypechecklist_request->fki_employee_id) {
        free(documenttypechecklist_request->fki_employee_id);
        documenttypechecklist_request->fki_employee_id = NULL;
    }
    if (documenttypechecklist_request->fki_externalbroker_id) {
        free(documenttypechecklist_request->fki_externalbroker_id);
        documenttypechecklist_request->fki_externalbroker_id = NULL;
    }
    if (documenttypechecklist_request->fki_ezcomadvanceserver_id) {
        free(documenttypechecklist_request->fki_ezcomadvanceserver_id);
        documenttypechecklist_request->fki_ezcomadvanceserver_id = NULL;
    }
    if (documenttypechecklist_request->fki_ezcomcompany_id) {
        free(documenttypechecklist_request->fki_ezcomcompany_id);
        documenttypechecklist_request->fki_ezcomcompany_id = NULL;
    }
    if (documenttypechecklist_request->fki_ezsigndocument_id) {
        free(documenttypechecklist_request->fki_ezsigndocument_id);
        documenttypechecklist_request->fki_ezsigndocument_id = NULL;
    }
    if (documenttypechecklist_request->fki_ghacqcontract_id) {
        free(documenttypechecklist_request->fki_ghacqcontract_id);
        documenttypechecklist_request->fki_ghacqcontract_id = NULL;
    }
    if (documenttypechecklist_request->fki_inscription_id) {
        free(documenttypechecklist_request->fki_inscription_id);
        documenttypechecklist_request->fki_inscription_id = NULL;
    }
    if (documenttypechecklist_request->fki_inscriptiontemp_id) {
        free(documenttypechecklist_request->fki_inscriptiontemp_id);
        documenttypechecklist_request->fki_inscriptiontemp_id = NULL;
    }
    if (documenttypechecklist_request->fki_inscriptionnotauthenticated_id) {
        free(documenttypechecklist_request->fki_inscriptionnotauthenticated_id);
        documenttypechecklist_request->fki_inscriptionnotauthenticated_id = NULL;
    }
    if (documenttypechecklist_request->fki_invoice_id) {
        free(documenttypechecklist_request->fki_invoice_id);
        documenttypechecklist_request->fki_invoice_id = NULL;
    }
    if (documenttypechecklist_request->fki_buyercontract_id) {
        free(documenttypechecklist_request->fki_buyercontract_id);
        documenttypechecklist_request->fki_buyercontract_id = NULL;
    }
    if (documenttypechecklist_request->fki_franchisebroker_id) {
        free(documenttypechecklist_request->fki_franchisebroker_id);
        documenttypechecklist_request->fki_franchisebroker_id = NULL;
    }
    if (documenttypechecklist_request->fki_franchiseagence_id) {
        free(documenttypechecklist_request->fki_franchiseagence_id);
        documenttypechecklist_request->fki_franchiseagence_id = NULL;
    }
    if (documenttypechecklist_request->fki_franchiseoffice_id) {
        free(documenttypechecklist_request->fki_franchiseoffice_id);
        documenttypechecklist_request->fki_franchiseoffice_id = NULL;
    }
    if (documenttypechecklist_request->fki_franchisefranchise_id) {
        free(documenttypechecklist_request->fki_franchisefranchise_id);
        documenttypechecklist_request->fki_franchisefranchise_id = NULL;
    }
    if (documenttypechecklist_request->fki_franchisecomplaint_id) {
        free(documenttypechecklist_request->fki_franchisecomplaint_id);
        documenttypechecklist_request->fki_franchisecomplaint_id = NULL;
    }
    if (documenttypechecklist_request->fki_lead_id) {
        free(documenttypechecklist_request->fki_lead_id);
        documenttypechecklist_request->fki_lead_id = NULL;
    }
    if (documenttypechecklist_request->fki_marketingprogram_id) {
        free(documenttypechecklist_request->fki_marketingprogram_id);
        documenttypechecklist_request->fki_marketingprogram_id = NULL;
    }
    if (documenttypechecklist_request->fki_marketingfollow_id) {
        free(documenttypechecklist_request->fki_marketingfollow_id);
        documenttypechecklist_request->fki_marketingfollow_id = NULL;
    }
    if (documenttypechecklist_request->fki_notary_id) {
        free(documenttypechecklist_request->fki_notary_id);
        documenttypechecklist_request->fki_notary_id = NULL;
    }
    if (documenttypechecklist_request->fki_officetaxreport_id) {
        free(documenttypechecklist_request->fki_officetaxreport_id);
        documenttypechecklist_request->fki_officetaxreport_id = NULL;
    }
    if (documenttypechecklist_request->fki_otherincome_id) {
        free(documenttypechecklist_request->fki_otherincome_id);
        documenttypechecklist_request->fki_otherincome_id = NULL;
    }
    if (documenttypechecklist_request->fki_paymentpreparation_id) {
        free(documenttypechecklist_request->fki_paymentpreparation_id);
        documenttypechecklist_request->fki_paymentpreparation_id = NULL;
    }
    if (documenttypechecklist_request->fki_purchase_id) {
        free(documenttypechecklist_request->fki_purchase_id);
        documenttypechecklist_request->fki_purchase_id = NULL;
    }
    if (documenttypechecklist_request->fki_salary_id) {
        free(documenttypechecklist_request->fki_salary_id);
        documenttypechecklist_request->fki_salary_id = NULL;
    }
    if (documenttypechecklist_request->fki_supplier_id) {
        free(documenttypechecklist_request->fki_supplier_id);
        documenttypechecklist_request->fki_supplier_id = NULL;
    }
    if (documenttypechecklist_request->fki_tranqcontract_id) {
        free(documenttypechecklist_request->fki_tranqcontract_id);
        documenttypechecklist_request->fki_tranqcontract_id = NULL;
    }
    if (documenttypechecklist_request->fki_template_id) {
        free(documenttypechecklist_request->fki_template_id);
        documenttypechecklist_request->fki_template_id = NULL;
    }
    free(documenttypechecklist_request);
}

cJSON *documenttypechecklist_request_convertToJSON(documenttypechecklist_request_t *documenttypechecklist_request) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_request->pki_documenttypechecklist_id
    if(documenttypechecklist_request->pki_documenttypechecklist_id) {
    if(cJSON_AddNumberToObject(item, "pkiDocumenttypechecklistID", *documenttypechecklist_request->pki_documenttypechecklist_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_documenttype_id
    if (!documenttypechecklist_request->fki_documenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDocumenttypeID", *documenttypechecklist_request->fki_documenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // documenttypechecklist_request->e_documenttypechecklist_status
    if (ezmax_api_definition__full_field_e_documenttypechecklist_status__NULL == documenttypechecklist_request->e_documenttypechecklist_status) {
        goto fail;
    }
    cJSON *e_documenttypechecklist_status_local_JSON = field_e_documenttypechecklist_status_convertToJSON(documenttypechecklist_request->e_documenttypechecklist_status);
    if(e_documenttypechecklist_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDocumenttypechecklistStatus", e_documenttypechecklist_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // documenttypechecklist_request->t_documenttypechecklist_comment
    if (!documenttypechecklist_request->t_documenttypechecklist_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tDocumenttypechecklistComment", documenttypechecklist_request->t_documenttypechecklist_comment) == NULL) {
    goto fail; //String
    }


    // documenttypechecklist_request->fki_adjustment_id
    if(documenttypechecklist_request->fki_adjustment_id) {
    if(cJSON_AddNumberToObject(item, "fkiAdjustmentID", *documenttypechecklist_request->fki_adjustment_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_agent_id
    if(documenttypechecklist_request->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", *documenttypechecklist_request->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_bankaccount_id
    if(documenttypechecklist_request->fki_bankaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", *documenttypechecklist_request->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_broker_id
    if(documenttypechecklist_request->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", *documenttypechecklist_request->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_commissionadvance_id
    if(documenttypechecklist_request->fki_commissionadvance_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommissionadvanceID", *documenttypechecklist_request->fki_commissionadvance_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_communication_id
    if(documenttypechecklist_request->fki_communication_id) {
    if(cJSON_AddNumberToObject(item, "fkiCommunicationID", *documenttypechecklist_request->fki_communication_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_customer_id
    if(documenttypechecklist_request->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", *documenttypechecklist_request->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_customertemplate_id
    if(documenttypechecklist_request->fki_customertemplate_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomertemplateID", *documenttypechecklist_request->fki_customertemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_deposit_id
    if(documenttypechecklist_request->fki_deposit_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepositID", *documenttypechecklist_request->fki_deposit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_deposittransitcheque_id
    if(documenttypechecklist_request->fki_deposittransitcheque_id) {
    if(cJSON_AddNumberToObject(item, "fkiDeposittransitchequeID", *documenttypechecklist_request->fki_deposittransitcheque_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_electronicfundstransfer_id
    if(documenttypechecklist_request->fki_electronicfundstransfer_id) {
    if(cJSON_AddNumberToObject(item, "fkiElectronicfundstransferID", *documenttypechecklist_request->fki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_employee_id
    if(documenttypechecklist_request->fki_employee_id) {
    if(cJSON_AddNumberToObject(item, "fkiEmployeeID", *documenttypechecklist_request->fki_employee_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_externalbroker_id
    if(documenttypechecklist_request->fki_externalbroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiExternalbrokerID", *documenttypechecklist_request->fki_externalbroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_ezcomadvanceserver_id
    if(documenttypechecklist_request->fki_ezcomadvanceserver_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomadvanceserverID", *documenttypechecklist_request->fki_ezcomadvanceserver_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_ezcomcompany_id
    if(documenttypechecklist_request->fki_ezcomcompany_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzcomcompanyID", *documenttypechecklist_request->fki_ezcomcompany_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_ezsigndocument_id
    if(documenttypechecklist_request->fki_ezsigndocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", *documenttypechecklist_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_ghacqcontract_id
    if(documenttypechecklist_request->fki_ghacqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiGhacqcontractID", *documenttypechecklist_request->fki_ghacqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_inscription_id
    if(documenttypechecklist_request->fki_inscription_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionID", *documenttypechecklist_request->fki_inscription_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_inscriptiontemp_id
    if(documenttypechecklist_request->fki_inscriptiontemp_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontempID", *documenttypechecklist_request->fki_inscriptiontemp_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_inscriptionnotauthenticated_id
    if(documenttypechecklist_request->fki_inscriptionnotauthenticated_id) {
    if(cJSON_AddNumberToObject(item, "fkiInscriptionnotauthenticatedID", *documenttypechecklist_request->fki_inscriptionnotauthenticated_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_invoice_id
    if(documenttypechecklist_request->fki_invoice_id) {
    if(cJSON_AddNumberToObject(item, "fkiInvoiceID", *documenttypechecklist_request->fki_invoice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_buyercontract_id
    if(documenttypechecklist_request->fki_buyercontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiBuyercontractID", *documenttypechecklist_request->fki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_franchisebroker_id
    if(documenttypechecklist_request->fki_franchisebroker_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisebrokerID", *documenttypechecklist_request->fki_franchisebroker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_franchiseagence_id
    if(documenttypechecklist_request->fki_franchiseagence_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseagenceID", *documenttypechecklist_request->fki_franchiseagence_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_franchiseoffice_id
    if(documenttypechecklist_request->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", *documenttypechecklist_request->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_franchisefranchise_id
    if(documenttypechecklist_request->fki_franchisefranchise_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisefranchiseID", *documenttypechecklist_request->fki_franchisefranchise_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_franchisecomplaint_id
    if(documenttypechecklist_request->fki_franchisecomplaint_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchisecomplaintID", *documenttypechecklist_request->fki_franchisecomplaint_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_lead_id
    if(documenttypechecklist_request->fki_lead_id) {
    if(cJSON_AddNumberToObject(item, "fkiLeadID", *documenttypechecklist_request->fki_lead_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_marketingprogram_id
    if(documenttypechecklist_request->fki_marketingprogram_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingprogramID", *documenttypechecklist_request->fki_marketingprogram_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_marketingfollow_id
    if(documenttypechecklist_request->fki_marketingfollow_id) {
    if(cJSON_AddNumberToObject(item, "fkiMarketingfollowID", *documenttypechecklist_request->fki_marketingfollow_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_notary_id
    if(documenttypechecklist_request->fki_notary_id) {
    if(cJSON_AddNumberToObject(item, "fkiNotaryID", *documenttypechecklist_request->fki_notary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_officetaxreport_id
    if(documenttypechecklist_request->fki_officetaxreport_id) {
    if(cJSON_AddNumberToObject(item, "fkiOfficetaxreportID", *documenttypechecklist_request->fki_officetaxreport_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_otherincome_id
    if(documenttypechecklist_request->fki_otherincome_id) {
    if(cJSON_AddNumberToObject(item, "fkiOtherincomeID", *documenttypechecklist_request->fki_otherincome_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_paymentpreparation_id
    if(documenttypechecklist_request->fki_paymentpreparation_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentpreparationID", *documenttypechecklist_request->fki_paymentpreparation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_purchase_id
    if(documenttypechecklist_request->fki_purchase_id) {
    if(cJSON_AddNumberToObject(item, "fkiPurchaseID", *documenttypechecklist_request->fki_purchase_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_salary_id
    if(documenttypechecklist_request->fki_salary_id) {
    if(cJSON_AddNumberToObject(item, "fkiSalaryID", *documenttypechecklist_request->fki_salary_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_supplier_id
    if(documenttypechecklist_request->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", *documenttypechecklist_request->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_tranqcontract_id
    if(documenttypechecklist_request->fki_tranqcontract_id) {
    if(cJSON_AddNumberToObject(item, "fkiTranqcontractID", *documenttypechecklist_request->fki_tranqcontract_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // documenttypechecklist_request->fki_template_id
    if(documenttypechecklist_request->fki_template_id) {
    if(cJSON_AddNumberToObject(item, "fkiTemplateID", *documenttypechecklist_request->fki_template_id) == NULL) {
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

documenttypechecklist_request_t *documenttypechecklist_request_parseFromJSON(cJSON *documenttypechecklist_requestJSON){

    documenttypechecklist_request_t *documenttypechecklist_request_local_var = NULL;

    // define the local variable for documenttypechecklist_request->pki_documenttypechecklist_id
    int *pki_documenttypechecklist_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_documenttype_id
    int *fki_documenttype_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->e_documenttypechecklist_status
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status_local_nonprim = 0;

    char *t_documenttypechecklist_comment_local_str = NULL;

    // define the local variable for documenttypechecklist_request->fki_adjustment_id
    int *fki_adjustment_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_agent_id
    int *fki_agent_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_bankaccount_id
    int *fki_bankaccount_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_broker_id
    int *fki_broker_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_commissionadvance_id
    int *fki_commissionadvance_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_communication_id
    int *fki_communication_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_customer_id
    int *fki_customer_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_customertemplate_id
    int *fki_customertemplate_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_deposit_id
    int *fki_deposit_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_deposittransitcheque_id
    int *fki_deposittransitcheque_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_electronicfundstransfer_id
    int *fki_electronicfundstransfer_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_employee_id
    int *fki_employee_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_externalbroker_id
    int *fki_externalbroker_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_ezcomadvanceserver_id
    int *fki_ezcomadvanceserver_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_ezcomcompany_id
    int *fki_ezcomcompany_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_ezsigndocument_id
    int *fki_ezsigndocument_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_ghacqcontract_id
    int *fki_ghacqcontract_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_inscription_id
    int *fki_inscription_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_inscriptiontemp_id
    int *fki_inscriptiontemp_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_inscriptionnotauthenticated_id
    int *fki_inscriptionnotauthenticated_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_invoice_id
    int *fki_invoice_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_buyercontract_id
    int *fki_buyercontract_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_franchisebroker_id
    int *fki_franchisebroker_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_franchiseagence_id
    int *fki_franchiseagence_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_franchiseoffice_id
    int *fki_franchiseoffice_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_franchisefranchise_id
    int *fki_franchisefranchise_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_franchisecomplaint_id
    int *fki_franchisecomplaint_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_lead_id
    int *fki_lead_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_marketingprogram_id
    int *fki_marketingprogram_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_marketingfollow_id
    int *fki_marketingfollow_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_notary_id
    int *fki_notary_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_officetaxreport_id
    int *fki_officetaxreport_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_otherincome_id
    int *fki_otherincome_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_paymentpreparation_id
    int *fki_paymentpreparation_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_purchase_id
    int *fki_purchase_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_salary_id
    int *fki_salary_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_supplier_id
    int *fki_supplier_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_tranqcontract_id
    int *fki_tranqcontract_id_local_var = NULL;

    // define the local variable for documenttypechecklist_request->fki_template_id
    int *fki_template_id_local_var = NULL;

    // documenttypechecklist_request->pki_documenttypechecklist_id
    cJSON *pki_documenttypechecklist_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "pkiDocumenttypechecklistID");
    if (cJSON_IsNull(pki_documenttypechecklist_id)) {
        pki_documenttypechecklist_id = NULL;
    }
    if (pki_documenttypechecklist_id) { 
    if(!cJSON_IsNumber(pki_documenttypechecklist_id))
    {
    goto end; //Numeric
    }
    pki_documenttypechecklist_id_local_var = malloc(sizeof(int));
    if(!pki_documenttypechecklist_id_local_var)
    {
        goto end;
    }
    *pki_documenttypechecklist_id_local_var = pki_documenttypechecklist_id->valuedouble;
    }

    // documenttypechecklist_request->fki_documenttype_id
    cJSON *fki_documenttype_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiDocumenttypeID");
    if (cJSON_IsNull(fki_documenttype_id)) {
        fki_documenttype_id = NULL;
    }
    if (!fki_documenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_documenttype_id))
    {
    goto end; //Numeric
    }
    fki_documenttype_id_local_var = malloc(sizeof(int));
    if(!fki_documenttype_id_local_var)
    {
        goto end;
    }
    *fki_documenttype_id_local_var = fki_documenttype_id->valuedouble;

    // documenttypechecklist_request->e_documenttypechecklist_status
    cJSON *e_documenttypechecklist_status = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "eDocumenttypechecklistStatus");
    if (cJSON_IsNull(e_documenttypechecklist_status)) {
        e_documenttypechecklist_status = NULL;
    }
    if (!e_documenttypechecklist_status) {
        goto end;
    }

    
    e_documenttypechecklist_status_local_nonprim = field_e_documenttypechecklist_status_parseFromJSON(e_documenttypechecklist_status); //custom

    // documenttypechecklist_request->t_documenttypechecklist_comment
    cJSON *t_documenttypechecklist_comment = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "tDocumenttypechecklistComment");
    if (cJSON_IsNull(t_documenttypechecklist_comment)) {
        t_documenttypechecklist_comment = NULL;
    }
    if (!t_documenttypechecklist_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(t_documenttypechecklist_comment))
    {
    goto end; //String
    }

    // documenttypechecklist_request->fki_adjustment_id
    cJSON *fki_adjustment_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiAdjustmentID");
    if (cJSON_IsNull(fki_adjustment_id)) {
        fki_adjustment_id = NULL;
    }
    if (fki_adjustment_id) { 
    if(!cJSON_IsNumber(fki_adjustment_id))
    {
    goto end; //Numeric
    }
    fki_adjustment_id_local_var = malloc(sizeof(int));
    if(!fki_adjustment_id_local_var)
    {
        goto end;
    }
    *fki_adjustment_id_local_var = fki_adjustment_id->valuedouble;
    }

    // documenttypechecklist_request->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    fki_agent_id_local_var = malloc(sizeof(int));
    if(!fki_agent_id_local_var)
    {
        goto end;
    }
    *fki_agent_id_local_var = fki_agent_id->valuedouble;
    }

    // documenttypechecklist_request->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiBankaccountID");
    if (cJSON_IsNull(fki_bankaccount_id)) {
        fki_bankaccount_id = NULL;
    }
    if (fki_bankaccount_id) { 
    if(!cJSON_IsNumber(fki_bankaccount_id))
    {
    goto end; //Numeric
    }
    fki_bankaccount_id_local_var = malloc(sizeof(int));
    if(!fki_bankaccount_id_local_var)
    {
        goto end;
    }
    *fki_bankaccount_id_local_var = fki_bankaccount_id->valuedouble;
    }

    // documenttypechecklist_request->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    fki_broker_id_local_var = malloc(sizeof(int));
    if(!fki_broker_id_local_var)
    {
        goto end;
    }
    *fki_broker_id_local_var = fki_broker_id->valuedouble;
    }

    // documenttypechecklist_request->fki_commissionadvance_id
    cJSON *fki_commissionadvance_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiCommissionadvanceID");
    if (cJSON_IsNull(fki_commissionadvance_id)) {
        fki_commissionadvance_id = NULL;
    }
    if (fki_commissionadvance_id) { 
    if(!cJSON_IsNumber(fki_commissionadvance_id))
    {
    goto end; //Numeric
    }
    fki_commissionadvance_id_local_var = malloc(sizeof(int));
    if(!fki_commissionadvance_id_local_var)
    {
        goto end;
    }
    *fki_commissionadvance_id_local_var = fki_commissionadvance_id->valuedouble;
    }

    // documenttypechecklist_request->fki_communication_id
    cJSON *fki_communication_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiCommunicationID");
    if (cJSON_IsNull(fki_communication_id)) {
        fki_communication_id = NULL;
    }
    if (fki_communication_id) { 
    if(!cJSON_IsNumber(fki_communication_id))
    {
    goto end; //Numeric
    }
    fki_communication_id_local_var = malloc(sizeof(int));
    if(!fki_communication_id_local_var)
    {
        goto end;
    }
    *fki_communication_id_local_var = fki_communication_id->valuedouble;
    }

    // documenttypechecklist_request->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiCustomerID");
    if (cJSON_IsNull(fki_customer_id)) {
        fki_customer_id = NULL;
    }
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    fki_customer_id_local_var = malloc(sizeof(int));
    if(!fki_customer_id_local_var)
    {
        goto end;
    }
    *fki_customer_id_local_var = fki_customer_id->valuedouble;
    }

    // documenttypechecklist_request->fki_customertemplate_id
    cJSON *fki_customertemplate_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiCustomertemplateID");
    if (cJSON_IsNull(fki_customertemplate_id)) {
        fki_customertemplate_id = NULL;
    }
    if (fki_customertemplate_id) { 
    if(!cJSON_IsNumber(fki_customertemplate_id))
    {
    goto end; //Numeric
    }
    fki_customertemplate_id_local_var = malloc(sizeof(int));
    if(!fki_customertemplate_id_local_var)
    {
        goto end;
    }
    *fki_customertemplate_id_local_var = fki_customertemplate_id->valuedouble;
    }

    // documenttypechecklist_request->fki_deposit_id
    cJSON *fki_deposit_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiDepositID");
    if (cJSON_IsNull(fki_deposit_id)) {
        fki_deposit_id = NULL;
    }
    if (fki_deposit_id) { 
    if(!cJSON_IsNumber(fki_deposit_id))
    {
    goto end; //Numeric
    }
    fki_deposit_id_local_var = malloc(sizeof(int));
    if(!fki_deposit_id_local_var)
    {
        goto end;
    }
    *fki_deposit_id_local_var = fki_deposit_id->valuedouble;
    }

    // documenttypechecklist_request->fki_deposittransitcheque_id
    cJSON *fki_deposittransitcheque_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiDeposittransitchequeID");
    if (cJSON_IsNull(fki_deposittransitcheque_id)) {
        fki_deposittransitcheque_id = NULL;
    }
    if (fki_deposittransitcheque_id) { 
    if(!cJSON_IsNumber(fki_deposittransitcheque_id))
    {
    goto end; //Numeric
    }
    fki_deposittransitcheque_id_local_var = malloc(sizeof(int));
    if(!fki_deposittransitcheque_id_local_var)
    {
        goto end;
    }
    *fki_deposittransitcheque_id_local_var = fki_deposittransitcheque_id->valuedouble;
    }

    // documenttypechecklist_request->fki_electronicfundstransfer_id
    cJSON *fki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiElectronicfundstransferID");
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

    // documenttypechecklist_request->fki_employee_id
    cJSON *fki_employee_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiEmployeeID");
    if (cJSON_IsNull(fki_employee_id)) {
        fki_employee_id = NULL;
    }
    if (fki_employee_id) { 
    if(!cJSON_IsNumber(fki_employee_id))
    {
    goto end; //Numeric
    }
    fki_employee_id_local_var = malloc(sizeof(int));
    if(!fki_employee_id_local_var)
    {
        goto end;
    }
    *fki_employee_id_local_var = fki_employee_id->valuedouble;
    }

    // documenttypechecklist_request->fki_externalbroker_id
    cJSON *fki_externalbroker_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiExternalbrokerID");
    if (cJSON_IsNull(fki_externalbroker_id)) {
        fki_externalbroker_id = NULL;
    }
    if (fki_externalbroker_id) { 
    if(!cJSON_IsNumber(fki_externalbroker_id))
    {
    goto end; //Numeric
    }
    fki_externalbroker_id_local_var = malloc(sizeof(int));
    if(!fki_externalbroker_id_local_var)
    {
        goto end;
    }
    *fki_externalbroker_id_local_var = fki_externalbroker_id->valuedouble;
    }

    // documenttypechecklist_request->fki_ezcomadvanceserver_id
    cJSON *fki_ezcomadvanceserver_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiEzcomadvanceserverID");
    if (cJSON_IsNull(fki_ezcomadvanceserver_id)) {
        fki_ezcomadvanceserver_id = NULL;
    }
    if (fki_ezcomadvanceserver_id) { 
    if(!cJSON_IsNumber(fki_ezcomadvanceserver_id))
    {
    goto end; //Numeric
    }
    fki_ezcomadvanceserver_id_local_var = malloc(sizeof(int));
    if(!fki_ezcomadvanceserver_id_local_var)
    {
        goto end;
    }
    *fki_ezcomadvanceserver_id_local_var = fki_ezcomadvanceserver_id->valuedouble;
    }

    // documenttypechecklist_request->fki_ezcomcompany_id
    cJSON *fki_ezcomcompany_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiEzcomcompanyID");
    if (cJSON_IsNull(fki_ezcomcompany_id)) {
        fki_ezcomcompany_id = NULL;
    }
    if (fki_ezcomcompany_id) { 
    if(!cJSON_IsNumber(fki_ezcomcompany_id))
    {
    goto end; //Numeric
    }
    fki_ezcomcompany_id_local_var = malloc(sizeof(int));
    if(!fki_ezcomcompany_id_local_var)
    {
        goto end;
    }
    *fki_ezcomcompany_id_local_var = fki_ezcomcompany_id->valuedouble;
    }

    // documenttypechecklist_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (fki_ezsigndocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigndocument_id_local_var = fki_ezsigndocument_id->valuedouble;
    }

    // documenttypechecklist_request->fki_ghacqcontract_id
    cJSON *fki_ghacqcontract_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiGhacqcontractID");
    if (cJSON_IsNull(fki_ghacqcontract_id)) {
        fki_ghacqcontract_id = NULL;
    }
    if (fki_ghacqcontract_id) { 
    if(!cJSON_IsNumber(fki_ghacqcontract_id))
    {
    goto end; //Numeric
    }
    fki_ghacqcontract_id_local_var = malloc(sizeof(int));
    if(!fki_ghacqcontract_id_local_var)
    {
        goto end;
    }
    *fki_ghacqcontract_id_local_var = fki_ghacqcontract_id->valuedouble;
    }

    // documenttypechecklist_request->fki_inscription_id
    cJSON *fki_inscription_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiInscriptionID");
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

    // documenttypechecklist_request->fki_inscriptiontemp_id
    cJSON *fki_inscriptiontemp_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiInscriptiontempID");
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

    // documenttypechecklist_request->fki_inscriptionnotauthenticated_id
    cJSON *fki_inscriptionnotauthenticated_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiInscriptionnotauthenticatedID");
    if (cJSON_IsNull(fki_inscriptionnotauthenticated_id)) {
        fki_inscriptionnotauthenticated_id = NULL;
    }
    if (fki_inscriptionnotauthenticated_id) { 
    if(!cJSON_IsNumber(fki_inscriptionnotauthenticated_id))
    {
    goto end; //Numeric
    }
    fki_inscriptionnotauthenticated_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptionnotauthenticated_id_local_var)
    {
        goto end;
    }
    *fki_inscriptionnotauthenticated_id_local_var = fki_inscriptionnotauthenticated_id->valuedouble;
    }

    // documenttypechecklist_request->fki_invoice_id
    cJSON *fki_invoice_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiInvoiceID");
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

    // documenttypechecklist_request->fki_buyercontract_id
    cJSON *fki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiBuyercontractID");
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

    // documenttypechecklist_request->fki_franchisebroker_id
    cJSON *fki_franchisebroker_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiFranchisebrokerID");
    if (cJSON_IsNull(fki_franchisebroker_id)) {
        fki_franchisebroker_id = NULL;
    }
    if (fki_franchisebroker_id) { 
    if(!cJSON_IsNumber(fki_franchisebroker_id))
    {
    goto end; //Numeric
    }
    fki_franchisebroker_id_local_var = malloc(sizeof(int));
    if(!fki_franchisebroker_id_local_var)
    {
        goto end;
    }
    *fki_franchisebroker_id_local_var = fki_franchisebroker_id->valuedouble;
    }

    // documenttypechecklist_request->fki_franchiseagence_id
    cJSON *fki_franchiseagence_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiFranchiseagenceID");
    if (cJSON_IsNull(fki_franchiseagence_id)) {
        fki_franchiseagence_id = NULL;
    }
    if (fki_franchiseagence_id) { 
    if(!cJSON_IsNumber(fki_franchiseagence_id))
    {
    goto end; //Numeric
    }
    fki_franchiseagence_id_local_var = malloc(sizeof(int));
    if(!fki_franchiseagence_id_local_var)
    {
        goto end;
    }
    *fki_franchiseagence_id_local_var = fki_franchiseagence_id->valuedouble;
    }

    // documenttypechecklist_request->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    fki_franchiseoffice_id_local_var = malloc(sizeof(int));
    if(!fki_franchiseoffice_id_local_var)
    {
        goto end;
    }
    *fki_franchiseoffice_id_local_var = fki_franchiseoffice_id->valuedouble;
    }

    // documenttypechecklist_request->fki_franchisefranchise_id
    cJSON *fki_franchisefranchise_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiFranchisefranchiseID");
    if (cJSON_IsNull(fki_franchisefranchise_id)) {
        fki_franchisefranchise_id = NULL;
    }
    if (fki_franchisefranchise_id) { 
    if(!cJSON_IsNumber(fki_franchisefranchise_id))
    {
    goto end; //Numeric
    }
    fki_franchisefranchise_id_local_var = malloc(sizeof(int));
    if(!fki_franchisefranchise_id_local_var)
    {
        goto end;
    }
    *fki_franchisefranchise_id_local_var = fki_franchisefranchise_id->valuedouble;
    }

    // documenttypechecklist_request->fki_franchisecomplaint_id
    cJSON *fki_franchisecomplaint_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiFranchisecomplaintID");
    if (cJSON_IsNull(fki_franchisecomplaint_id)) {
        fki_franchisecomplaint_id = NULL;
    }
    if (fki_franchisecomplaint_id) { 
    if(!cJSON_IsNumber(fki_franchisecomplaint_id))
    {
    goto end; //Numeric
    }
    fki_franchisecomplaint_id_local_var = malloc(sizeof(int));
    if(!fki_franchisecomplaint_id_local_var)
    {
        goto end;
    }
    *fki_franchisecomplaint_id_local_var = fki_franchisecomplaint_id->valuedouble;
    }

    // documenttypechecklist_request->fki_lead_id
    cJSON *fki_lead_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiLeadID");
    if (cJSON_IsNull(fki_lead_id)) {
        fki_lead_id = NULL;
    }
    if (fki_lead_id) { 
    if(!cJSON_IsNumber(fki_lead_id))
    {
    goto end; //Numeric
    }
    fki_lead_id_local_var = malloc(sizeof(int));
    if(!fki_lead_id_local_var)
    {
        goto end;
    }
    *fki_lead_id_local_var = fki_lead_id->valuedouble;
    }

    // documenttypechecklist_request->fki_marketingprogram_id
    cJSON *fki_marketingprogram_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiMarketingprogramID");
    if (cJSON_IsNull(fki_marketingprogram_id)) {
        fki_marketingprogram_id = NULL;
    }
    if (fki_marketingprogram_id) { 
    if(!cJSON_IsNumber(fki_marketingprogram_id))
    {
    goto end; //Numeric
    }
    fki_marketingprogram_id_local_var = malloc(sizeof(int));
    if(!fki_marketingprogram_id_local_var)
    {
        goto end;
    }
    *fki_marketingprogram_id_local_var = fki_marketingprogram_id->valuedouble;
    }

    // documenttypechecklist_request->fki_marketingfollow_id
    cJSON *fki_marketingfollow_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiMarketingfollowID");
    if (cJSON_IsNull(fki_marketingfollow_id)) {
        fki_marketingfollow_id = NULL;
    }
    if (fki_marketingfollow_id) { 
    if(!cJSON_IsNumber(fki_marketingfollow_id))
    {
    goto end; //Numeric
    }
    fki_marketingfollow_id_local_var = malloc(sizeof(int));
    if(!fki_marketingfollow_id_local_var)
    {
        goto end;
    }
    *fki_marketingfollow_id_local_var = fki_marketingfollow_id->valuedouble;
    }

    // documenttypechecklist_request->fki_notary_id
    cJSON *fki_notary_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiNotaryID");
    if (cJSON_IsNull(fki_notary_id)) {
        fki_notary_id = NULL;
    }
    if (fki_notary_id) { 
    if(!cJSON_IsNumber(fki_notary_id))
    {
    goto end; //Numeric
    }
    fki_notary_id_local_var = malloc(sizeof(int));
    if(!fki_notary_id_local_var)
    {
        goto end;
    }
    *fki_notary_id_local_var = fki_notary_id->valuedouble;
    }

    // documenttypechecklist_request->fki_officetaxreport_id
    cJSON *fki_officetaxreport_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiOfficetaxreportID");
    if (cJSON_IsNull(fki_officetaxreport_id)) {
        fki_officetaxreport_id = NULL;
    }
    if (fki_officetaxreport_id) { 
    if(!cJSON_IsNumber(fki_officetaxreport_id))
    {
    goto end; //Numeric
    }
    fki_officetaxreport_id_local_var = malloc(sizeof(int));
    if(!fki_officetaxreport_id_local_var)
    {
        goto end;
    }
    *fki_officetaxreport_id_local_var = fki_officetaxreport_id->valuedouble;
    }

    // documenttypechecklist_request->fki_otherincome_id
    cJSON *fki_otherincome_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiOtherincomeID");
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

    // documenttypechecklist_request->fki_paymentpreparation_id
    cJSON *fki_paymentpreparation_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiPaymentpreparationID");
    if (cJSON_IsNull(fki_paymentpreparation_id)) {
        fki_paymentpreparation_id = NULL;
    }
    if (fki_paymentpreparation_id) { 
    if(!cJSON_IsNumber(fki_paymentpreparation_id))
    {
    goto end; //Numeric
    }
    fki_paymentpreparation_id_local_var = malloc(sizeof(int));
    if(!fki_paymentpreparation_id_local_var)
    {
        goto end;
    }
    *fki_paymentpreparation_id_local_var = fki_paymentpreparation_id->valuedouble;
    }

    // documenttypechecklist_request->fki_purchase_id
    cJSON *fki_purchase_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiPurchaseID");
    if (cJSON_IsNull(fki_purchase_id)) {
        fki_purchase_id = NULL;
    }
    if (fki_purchase_id) { 
    if(!cJSON_IsNumber(fki_purchase_id))
    {
    goto end; //Numeric
    }
    fki_purchase_id_local_var = malloc(sizeof(int));
    if(!fki_purchase_id_local_var)
    {
        goto end;
    }
    *fki_purchase_id_local_var = fki_purchase_id->valuedouble;
    }

    // documenttypechecklist_request->fki_salary_id
    cJSON *fki_salary_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiSalaryID");
    if (cJSON_IsNull(fki_salary_id)) {
        fki_salary_id = NULL;
    }
    if (fki_salary_id) { 
    if(!cJSON_IsNumber(fki_salary_id))
    {
    goto end; //Numeric
    }
    fki_salary_id_local_var = malloc(sizeof(int));
    if(!fki_salary_id_local_var)
    {
        goto end;
    }
    *fki_salary_id_local_var = fki_salary_id->valuedouble;
    }

    // documenttypechecklist_request->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiSupplierID");
    if (cJSON_IsNull(fki_supplier_id)) {
        fki_supplier_id = NULL;
    }
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    fki_supplier_id_local_var = malloc(sizeof(int));
    if(!fki_supplier_id_local_var)
    {
        goto end;
    }
    *fki_supplier_id_local_var = fki_supplier_id->valuedouble;
    }

    // documenttypechecklist_request->fki_tranqcontract_id
    cJSON *fki_tranqcontract_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiTranqcontractID");
    if (cJSON_IsNull(fki_tranqcontract_id)) {
        fki_tranqcontract_id = NULL;
    }
    if (fki_tranqcontract_id) { 
    if(!cJSON_IsNumber(fki_tranqcontract_id))
    {
    goto end; //Numeric
    }
    fki_tranqcontract_id_local_var = malloc(sizeof(int));
    if(!fki_tranqcontract_id_local_var)
    {
        goto end;
    }
    *fki_tranqcontract_id_local_var = fki_tranqcontract_id->valuedouble;
    }

    // documenttypechecklist_request->fki_template_id
    cJSON *fki_template_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_requestJSON, "fkiTemplateID");
    if (cJSON_IsNull(fki_template_id)) {
        fki_template_id = NULL;
    }
    if (fki_template_id) { 
    if(!cJSON_IsNumber(fki_template_id))
    {
    goto end; //Numeric
    }
    fki_template_id_local_var = malloc(sizeof(int));
    if(!fki_template_id_local_var)
    {
        goto end;
    }
    *fki_template_id_local_var = fki_template_id->valuedouble;
    }


    if (t_documenttypechecklist_comment && !cJSON_IsNull(t_documenttypechecklist_comment)) t_documenttypechecklist_comment_local_str = strdup(t_documenttypechecklist_comment->valuestring);

    documenttypechecklist_request_local_var = documenttypechecklist_request_create_internal (
        pki_documenttypechecklist_id_local_var,
        fki_documenttype_id_local_var,
        e_documenttypechecklist_status_local_nonprim,
        t_documenttypechecklist_comment_local_str,
        fki_adjustment_id_local_var,
        fki_agent_id_local_var,
        fki_bankaccount_id_local_var,
        fki_broker_id_local_var,
        fki_commissionadvance_id_local_var,
        fki_communication_id_local_var,
        fki_customer_id_local_var,
        fki_customertemplate_id_local_var,
        fki_deposit_id_local_var,
        fki_deposittransitcheque_id_local_var,
        fki_electronicfundstransfer_id_local_var,
        fki_employee_id_local_var,
        fki_externalbroker_id_local_var,
        fki_ezcomadvanceserver_id_local_var,
        fki_ezcomcompany_id_local_var,
        fki_ezsigndocument_id_local_var,
        fki_ghacqcontract_id_local_var,
        fki_inscription_id_local_var,
        fki_inscriptiontemp_id_local_var,
        fki_inscriptionnotauthenticated_id_local_var,
        fki_invoice_id_local_var,
        fki_buyercontract_id_local_var,
        fki_franchisebroker_id_local_var,
        fki_franchiseagence_id_local_var,
        fki_franchiseoffice_id_local_var,
        fki_franchisefranchise_id_local_var,
        fki_franchisecomplaint_id_local_var,
        fki_lead_id_local_var,
        fki_marketingprogram_id_local_var,
        fki_marketingfollow_id_local_var,
        fki_notary_id_local_var,
        fki_officetaxreport_id_local_var,
        fki_otherincome_id_local_var,
        fki_paymentpreparation_id_local_var,
        fki_purchase_id_local_var,
        fki_salary_id_local_var,
        fki_supplier_id_local_var,
        fki_tranqcontract_id_local_var,
        fki_template_id_local_var
        );

    if (!documenttypechecklist_request_local_var) {
        goto end;
    }

    return documenttypechecklist_request_local_var;
end:
    if (pki_documenttypechecklist_id_local_var) {
        free(pki_documenttypechecklist_id_local_var);
        pki_documenttypechecklist_id_local_var = NULL;
    }
    if (fki_documenttype_id_local_var) {
        free(fki_documenttype_id_local_var);
        fki_documenttype_id_local_var = NULL;
    }
    if (e_documenttypechecklist_status_local_nonprim) {
        e_documenttypechecklist_status_local_nonprim = 0;
    }
    if (t_documenttypechecklist_comment_local_str) {
        free(t_documenttypechecklist_comment_local_str);
        t_documenttypechecklist_comment_local_str = NULL;
    }
    if (fki_adjustment_id_local_var) {
        free(fki_adjustment_id_local_var);
        fki_adjustment_id_local_var = NULL;
    }
    if (fki_agent_id_local_var) {
        free(fki_agent_id_local_var);
        fki_agent_id_local_var = NULL;
    }
    if (fki_bankaccount_id_local_var) {
        free(fki_bankaccount_id_local_var);
        fki_bankaccount_id_local_var = NULL;
    }
    if (fki_broker_id_local_var) {
        free(fki_broker_id_local_var);
        fki_broker_id_local_var = NULL;
    }
    if (fki_commissionadvance_id_local_var) {
        free(fki_commissionadvance_id_local_var);
        fki_commissionadvance_id_local_var = NULL;
    }
    if (fki_communication_id_local_var) {
        free(fki_communication_id_local_var);
        fki_communication_id_local_var = NULL;
    }
    if (fki_customer_id_local_var) {
        free(fki_customer_id_local_var);
        fki_customer_id_local_var = NULL;
    }
    if (fki_customertemplate_id_local_var) {
        free(fki_customertemplate_id_local_var);
        fki_customertemplate_id_local_var = NULL;
    }
    if (fki_deposit_id_local_var) {
        free(fki_deposit_id_local_var);
        fki_deposit_id_local_var = NULL;
    }
    if (fki_deposittransitcheque_id_local_var) {
        free(fki_deposittransitcheque_id_local_var);
        fki_deposittransitcheque_id_local_var = NULL;
    }
    if (fki_electronicfundstransfer_id_local_var) {
        free(fki_electronicfundstransfer_id_local_var);
        fki_electronicfundstransfer_id_local_var = NULL;
    }
    if (fki_employee_id_local_var) {
        free(fki_employee_id_local_var);
        fki_employee_id_local_var = NULL;
    }
    if (fki_externalbroker_id_local_var) {
        free(fki_externalbroker_id_local_var);
        fki_externalbroker_id_local_var = NULL;
    }
    if (fki_ezcomadvanceserver_id_local_var) {
        free(fki_ezcomadvanceserver_id_local_var);
        fki_ezcomadvanceserver_id_local_var = NULL;
    }
    if (fki_ezcomcompany_id_local_var) {
        free(fki_ezcomcompany_id_local_var);
        fki_ezcomcompany_id_local_var = NULL;
    }
    if (fki_ezsigndocument_id_local_var) {
        free(fki_ezsigndocument_id_local_var);
        fki_ezsigndocument_id_local_var = NULL;
    }
    if (fki_ghacqcontract_id_local_var) {
        free(fki_ghacqcontract_id_local_var);
        fki_ghacqcontract_id_local_var = NULL;
    }
    if (fki_inscription_id_local_var) {
        free(fki_inscription_id_local_var);
        fki_inscription_id_local_var = NULL;
    }
    if (fki_inscriptiontemp_id_local_var) {
        free(fki_inscriptiontemp_id_local_var);
        fki_inscriptiontemp_id_local_var = NULL;
    }
    if (fki_inscriptionnotauthenticated_id_local_var) {
        free(fki_inscriptionnotauthenticated_id_local_var);
        fki_inscriptionnotauthenticated_id_local_var = NULL;
    }
    if (fki_invoice_id_local_var) {
        free(fki_invoice_id_local_var);
        fki_invoice_id_local_var = NULL;
    }
    if (fki_buyercontract_id_local_var) {
        free(fki_buyercontract_id_local_var);
        fki_buyercontract_id_local_var = NULL;
    }
    if (fki_franchisebroker_id_local_var) {
        free(fki_franchisebroker_id_local_var);
        fki_franchisebroker_id_local_var = NULL;
    }
    if (fki_franchiseagence_id_local_var) {
        free(fki_franchiseagence_id_local_var);
        fki_franchiseagence_id_local_var = NULL;
    }
    if (fki_franchiseoffice_id_local_var) {
        free(fki_franchiseoffice_id_local_var);
        fki_franchiseoffice_id_local_var = NULL;
    }
    if (fki_franchisefranchise_id_local_var) {
        free(fki_franchisefranchise_id_local_var);
        fki_franchisefranchise_id_local_var = NULL;
    }
    if (fki_franchisecomplaint_id_local_var) {
        free(fki_franchisecomplaint_id_local_var);
        fki_franchisecomplaint_id_local_var = NULL;
    }
    if (fki_lead_id_local_var) {
        free(fki_lead_id_local_var);
        fki_lead_id_local_var = NULL;
    }
    if (fki_marketingprogram_id_local_var) {
        free(fki_marketingprogram_id_local_var);
        fki_marketingprogram_id_local_var = NULL;
    }
    if (fki_marketingfollow_id_local_var) {
        free(fki_marketingfollow_id_local_var);
        fki_marketingfollow_id_local_var = NULL;
    }
    if (fki_notary_id_local_var) {
        free(fki_notary_id_local_var);
        fki_notary_id_local_var = NULL;
    }
    if (fki_officetaxreport_id_local_var) {
        free(fki_officetaxreport_id_local_var);
        fki_officetaxreport_id_local_var = NULL;
    }
    if (fki_otherincome_id_local_var) {
        free(fki_otherincome_id_local_var);
        fki_otherincome_id_local_var = NULL;
    }
    if (fki_paymentpreparation_id_local_var) {
        free(fki_paymentpreparation_id_local_var);
        fki_paymentpreparation_id_local_var = NULL;
    }
    if (fki_purchase_id_local_var) {
        free(fki_purchase_id_local_var);
        fki_purchase_id_local_var = NULL;
    }
    if (fki_salary_id_local_var) {
        free(fki_salary_id_local_var);
        fki_salary_id_local_var = NULL;
    }
    if (fki_supplier_id_local_var) {
        free(fki_supplier_id_local_var);
        fki_supplier_id_local_var = NULL;
    }
    if (fki_tranqcontract_id_local_var) {
        free(fki_tranqcontract_id_local_var);
        fki_tranqcontract_id_local_var = NULL;
    }
    if (fki_template_id_local_var) {
        free(fki_template_id_local_var);
        fki_template_id_local_var = NULL;
    }
    return NULL;

}
