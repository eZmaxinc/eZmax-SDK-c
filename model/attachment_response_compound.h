/*
 * attachment_response_compound.h
 *
 * A Attachment Object
 */

#ifndef _attachment_response_compound_H_
#define _attachment_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_response_compound_t attachment_response_compound_t;

#include "common_audit.h"
#include "field_e_attachment_documenttype.h"
#include "field_e_attachment_privacy.h"
#include "field_e_attachment_type.h"
#include "field_e_attachment_verified.h"

// Enum  for attachment_response_compound

typedef enum  { ezmax_api_definition__full_attachment_response_compound__NULL = 0, ezmax_api_definition__full_attachment_response_compound__Adjustment, ezmax_api_definition__full_attachment_response_compound__Agent, ezmax_api_definition__full_attachment_response_compound__Bankaccount, ezmax_api_definition__full_attachment_response_compound__Broker, ezmax_api_definition__full_attachment_response_compound__Buyercontract, ezmax_api_definition__full_attachment_response_compound__Commissionadvance, ezmax_api_definition__full_attachment_response_compound__Communication, ezmax_api_definition__full_attachment_response_compound__Customer, ezmax_api_definition__full_attachment_response_compound__Customertemplate, ezmax_api_definition__full_attachment_response_compound__Deposit, ezmax_api_definition__full_attachment_response_compound__Deposittransitcheque, ezmax_api_definition__full_attachment_response_compound__Disclosure, ezmax_api_definition__full_attachment_response_compound__Electronicfundstransfer, ezmax_api_definition__full_attachment_response_compound__Employee, ezmax_api_definition__full_attachment_response_compound__Externalbroker, ezmax_api_definition__full_attachment_response_compound__Ezcomadvanceserver, ezmax_api_definition__full_attachment_response_compound__Ezcomcompany, ezmax_api_definition__full_attachment_response_compound__Ezsigndocument, ezmax_api_definition__full_attachment_response_compound__EzsigndocumentProof, ezmax_api_definition__full_attachment_response_compound__EzsigndocumentProofdocument, ezmax_api_definition__full_attachment_response_compound__Ezsigndocumentgroup, ezmax_api_definition__full_attachment_response_compound__EzsigndocumentgroupProof, ezmax_api_definition__full_attachment_response_compound__EzsigndocumentgroupProofdocument, ezmax_api_definition__full_attachment_response_compound__EzsigndocumentAttachment, ezmax_api_definition__full_attachment_response_compound__Folder, ezmax_api_definition__full_attachment_response_compound__Franchiseagence, ezmax_api_definition__full_attachment_response_compound__Franchisebroker, ezmax_api_definition__full_attachment_response_compound__Franchisecomplaint, ezmax_api_definition__full_attachment_response_compound__Franchisefranchise, ezmax_api_definition__full_attachment_response_compound__Franchiseoffice, ezmax_api_definition__full_attachment_response_compound__Ghacqcontract, ezmax_api_definition__full_attachment_response_compound__Inscription, ezmax_api_definition__full_attachment_response_compound__Inscriptionnotauthenticated, ezmax_api_definition__full_attachment_response_compound__Inscriptiontemp, ezmax_api_definition__full_attachment_response_compound__Invoice, ezmax_api_definition__full_attachment_response_compound__Lead, ezmax_api_definition__full_attachment_response_compound__Marketingfollow, ezmax_api_definition__full_attachment_response_compound__Marketingprogram, ezmax_api_definition__full_attachment_response_compound__Notary, ezmax_api_definition__full_attachment_response_compound__Officetaxreport, ezmax_api_definition__full_attachment_response_compound__Otherincome, ezmax_api_definition__full_attachment_response_compound__Paymentpreparation, ezmax_api_definition__full_attachment_response_compound__Purchase, ezmax_api_definition__full_attachment_response_compound__Reconciliation, ezmax_api_definition__full_attachment_response_compound__Rejectedoffertopurchase, ezmax_api_definition__full_attachment_response_compound__Salary, ezmax_api_definition__full_attachment_response_compound__Supplier, ezmax_api_definition__full_attachment_response_compound___Template, ezmax_api_definition__full_attachment_response_compound__Tranqcontract } ezmax_api_definition__full_attachment_response_compound__e;

char* attachment_response_compound_e_attachment_documenttype_ToString(ezmax_api_definition__full_attachment_response_compound__e e_attachment_documenttype);

ezmax_api_definition__full_attachment_response_compound__e attachment_response_compound_e_attachment_documenttype_FromString(char* e_attachment_documenttype);

// Enum  for attachment_response_compound

typedef enum  { ezmax_api_definition__full_attachment_response_compound__NULL = 0, ezmax_api_definition__full_attachment_response_compound__All, ezmax_api_definition__full_attachment_response_compound__Inscriptor, ezmax_api_definition__full_attachment_response_compound__Seller, ezmax_api_definition__full_attachment_response_compound__Administration, ezmax_api_definition__full_attachment_response_compound__Creator, ezmax_api_definition__full_attachment_response_compound__Specificuser } ezmax_api_definition__full_attachment_response_compound__e;

char* attachment_response_compound_e_attachment_privacy_ToString(ezmax_api_definition__full_attachment_response_compound__e e_attachment_privacy);

ezmax_api_definition__full_attachment_response_compound__e attachment_response_compound_e_attachment_privacy_FromString(char* e_attachment_privacy);

// Enum  for attachment_response_compound

typedef enum  { ezmax_api_definition__full_attachment_response_compound__NULL = 0, ezmax_api_definition__full_attachment_response_compound__Other, ezmax_api_definition__full_attachment_response_compound__Pdf, ezmax_api_definition__full_attachment_response_compound__PdfGenerated, ezmax_api_definition__full_attachment_response_compound__PdfScanned, ezmax_api_definition__full_attachment_response_compound__Ezsign } ezmax_api_definition__full_attachment_response_compound__e;

char* attachment_response_compound_e_attachment_type_ToString(ezmax_api_definition__full_attachment_response_compound__e e_attachment_type);

ezmax_api_definition__full_attachment_response_compound__e attachment_response_compound_e_attachment_type_FromString(char* e_attachment_type);

// Enum  for attachment_response_compound

typedef enum  { ezmax_api_definition__full_attachment_response_compound__NULL = 0, ezmax_api_definition__full_attachment_response_compound__No, ezmax_api_definition__full_attachment_response_compound__Yes, ezmax_api_definition__full_attachment_response_compound__Rejected } ezmax_api_definition__full_attachment_response_compound__e;

char* attachment_response_compound_e_attachment_verified_ToString(ezmax_api_definition__full_attachment_response_compound__e e_attachment_verified);

ezmax_api_definition__full_attachment_response_compound__e attachment_response_compound_e_attachment_verified_FromString(char* e_attachment_verified);



typedef struct attachment_response_compound_t {
    int pki_attachment_id; //numeric
    int fki_computer_id; //numeric
    int fki_adjustment_id; //numeric
    int fki_agent_id; //numeric
    int fki_bankaccount_id; //numeric
    int fki_broker_id; //numeric
    int fki_commissionadvance_id; //numeric
    int fki_communication_id; //numeric
    int fki_customer_id; //numeric
    int fki_customertemplate_id; //numeric
    int fki_deposit_id; //numeric
    int fki_deposittransitcheque_id; //numeric
    int fki_electronicfundstransfer_id; //numeric
    int fki_employee_id; //numeric
    int fki_externalbroker_id; //numeric
    int fki_ezcomadvanceserver_id; //numeric
    int fki_ezcomcompany_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ghacqcontract_id; //numeric
    int fki_inscription_id; //numeric
    int fki_inscriptiontemp_id; //numeric
    int fki_inscriptionnotauthenticated_id; //numeric
    int fki_invoice_id; //numeric
    int fki_buyercontract_id; //numeric
    int fki_franchisebroker_id; //numeric
    int fki_franchiseagence_id; //numeric
    int fki_franchiseoffice_id; //numeric
    int fki_franchisefranchise_id; //numeric
    int fki_franchisecomplaint_id; //numeric
    int fki_lead_id; //numeric
    int fki_marketingprogram_id; //numeric
    int fki_marketingfollow_id; //numeric
    int fki_notary_id; //numeric
    int fki_officetaxreport_id; //numeric
    int fki_otherincome_id; //numeric
    int fki_paymentpreparation_id; //numeric
    int fki_purchase_id; //numeric
    int fki_salary_id; //numeric
    int fki_supplier_id; //numeric
    int fki_tranqcontract_id; //numeric
    int fki_template_id; //numeric
    int fki_inscriptionchecklist_id; //numeric
    int fki_folder_id; //numeric
    int fki_rejectedoffertopurchase_id; //numeric
    int fki_disclosure_id; //numeric
    int fki_reconciliation_id; //numeric
    int fki_ezsigndocument_id_reference; //numeric
    field_e_attachment_documenttype_t *e_attachment_documenttype; // custom
    char *s_attachment_name; // string
    field_e_attachment_privacy_t *e_attachment_privacy; // custom
    int fki_user_id_specific; //numeric
    field_e_attachment_type_t *e_attachment_type; // custom
    int i_attachment_size; //numeric
    int i_attachment_ed_mmoduleflag; //numeric
    char *s_attachment_md5; // string
    int b_attachment_deleted; //boolean
    int b_attachment_valid; //boolean
    field_e_attachment_verified_t *e_attachment_verified; // custom
    char *t_attachment_rejectioncomment; // string
    int fki_user_id_owner; //numeric
    struct common_audit_t *obj_audit; //model

} attachment_response_compound_t;

attachment_response_compound_t *attachment_response_compound_create(
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
    common_audit_t *obj_audit
);

void attachment_response_compound_free(attachment_response_compound_t *attachment_response_compound);

attachment_response_compound_t *attachment_response_compound_parseFromJSON(cJSON *attachment_response_compoundJSON);

cJSON *attachment_response_compound_convertToJSON(attachment_response_compound_t *attachment_response_compound);

#endif /* _attachment_response_compound_H_ */

