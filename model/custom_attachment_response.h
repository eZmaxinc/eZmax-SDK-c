/*
 * custom_attachment_response.h
 *
 * A Custom Attachment Object
 */

#ifndef _custom_attachment_response_H_
#define _custom_attachment_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attachment_response_t custom_attachment_response_t;

#include "attachment_response_compound.h"
#include "common_audit.h"
#include "field_e_attachment_documenttype.h"
#include "field_e_attachment_privacy.h"
#include "field_e_attachment_type.h"
#include "field_e_attachment_verified.h"

// Enum  for custom_attachment_response

typedef enum  { ezmax_api_definition__full_custom_attachment_response__NULL = 0, ezmax_api_definition__full_custom_attachment_response__Adjustment, ezmax_api_definition__full_custom_attachment_response__Agent, ezmax_api_definition__full_custom_attachment_response__Bankaccount, ezmax_api_definition__full_custom_attachment_response__Broker, ezmax_api_definition__full_custom_attachment_response__Buyercontract, ezmax_api_definition__full_custom_attachment_response__Commissionadvance, ezmax_api_definition__full_custom_attachment_response__Communication, ezmax_api_definition__full_custom_attachment_response__Customer, ezmax_api_definition__full_custom_attachment_response__Customertemplate, ezmax_api_definition__full_custom_attachment_response__Deposit, ezmax_api_definition__full_custom_attachment_response__Deposittransitcheque, ezmax_api_definition__full_custom_attachment_response__Disclosure, ezmax_api_definition__full_custom_attachment_response__Electronicfundstransfer, ezmax_api_definition__full_custom_attachment_response__Employee, ezmax_api_definition__full_custom_attachment_response__Externalbroker, ezmax_api_definition__full_custom_attachment_response__Ezcomadvanceserver, ezmax_api_definition__full_custom_attachment_response__Ezcomcompany, ezmax_api_definition__full_custom_attachment_response__Ezsigndocument, ezmax_api_definition__full_custom_attachment_response__EzsigndocumentProof, ezmax_api_definition__full_custom_attachment_response__EzsigndocumentProofdocument, ezmax_api_definition__full_custom_attachment_response__Ezsigndocumentgroup, ezmax_api_definition__full_custom_attachment_response__EzsigndocumentgroupProof, ezmax_api_definition__full_custom_attachment_response__EzsigndocumentgroupProofdocument, ezmax_api_definition__full_custom_attachment_response__EzsigndocumentAttachment, ezmax_api_definition__full_custom_attachment_response__Folder, ezmax_api_definition__full_custom_attachment_response__Franchiseagence, ezmax_api_definition__full_custom_attachment_response__Franchisebroker, ezmax_api_definition__full_custom_attachment_response__Franchisecomplaint, ezmax_api_definition__full_custom_attachment_response__Franchisefranchise, ezmax_api_definition__full_custom_attachment_response__Franchiseoffice, ezmax_api_definition__full_custom_attachment_response__Ghacqcontract, ezmax_api_definition__full_custom_attachment_response__Inscription, ezmax_api_definition__full_custom_attachment_response__Inscriptionnotauthenticated, ezmax_api_definition__full_custom_attachment_response__Inscriptiontemp, ezmax_api_definition__full_custom_attachment_response__Invoice, ezmax_api_definition__full_custom_attachment_response__Lead, ezmax_api_definition__full_custom_attachment_response__Marketingfollow, ezmax_api_definition__full_custom_attachment_response__Marketingprogram, ezmax_api_definition__full_custom_attachment_response__Notary, ezmax_api_definition__full_custom_attachment_response__Officetaxreport, ezmax_api_definition__full_custom_attachment_response__Otherincome, ezmax_api_definition__full_custom_attachment_response__Paymentpreparation, ezmax_api_definition__full_custom_attachment_response__Purchase, ezmax_api_definition__full_custom_attachment_response__Reconciliation, ezmax_api_definition__full_custom_attachment_response__Rejectedoffertopurchase, ezmax_api_definition__full_custom_attachment_response__Salary, ezmax_api_definition__full_custom_attachment_response__Supplier, ezmax_api_definition__full_custom_attachment_response___Template, ezmax_api_definition__full_custom_attachment_response__Tranqcontract } ezmax_api_definition__full_custom_attachment_response__e;

char* custom_attachment_response_e_attachment_documenttype_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_documenttype);

ezmax_api_definition__full_custom_attachment_response__e custom_attachment_response_e_attachment_documenttype_FromString(char* e_attachment_documenttype);

// Enum  for custom_attachment_response

typedef enum  { ezmax_api_definition__full_custom_attachment_response__NULL = 0, ezmax_api_definition__full_custom_attachment_response__All, ezmax_api_definition__full_custom_attachment_response__Inscriptor, ezmax_api_definition__full_custom_attachment_response__Seller, ezmax_api_definition__full_custom_attachment_response__Administration, ezmax_api_definition__full_custom_attachment_response__Creator, ezmax_api_definition__full_custom_attachment_response__Specificuser } ezmax_api_definition__full_custom_attachment_response__e;

char* custom_attachment_response_e_attachment_privacy_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_privacy);

ezmax_api_definition__full_custom_attachment_response__e custom_attachment_response_e_attachment_privacy_FromString(char* e_attachment_privacy);

// Enum  for custom_attachment_response

typedef enum  { ezmax_api_definition__full_custom_attachment_response__NULL = 0, ezmax_api_definition__full_custom_attachment_response__Other, ezmax_api_definition__full_custom_attachment_response__Pdf, ezmax_api_definition__full_custom_attachment_response__PdfGenerated, ezmax_api_definition__full_custom_attachment_response__PdfScanned, ezmax_api_definition__full_custom_attachment_response__Ezsign } ezmax_api_definition__full_custom_attachment_response__e;

char* custom_attachment_response_e_attachment_type_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_type);

ezmax_api_definition__full_custom_attachment_response__e custom_attachment_response_e_attachment_type_FromString(char* e_attachment_type);

// Enum  for custom_attachment_response

typedef enum  { ezmax_api_definition__full_custom_attachment_response__NULL = 0, ezmax_api_definition__full_custom_attachment_response__No, ezmax_api_definition__full_custom_attachment_response__Yes, ezmax_api_definition__full_custom_attachment_response__Rejected } ezmax_api_definition__full_custom_attachment_response__e;

char* custom_attachment_response_e_attachment_verified_ToString(ezmax_api_definition__full_custom_attachment_response__e e_attachment_verified);

ezmax_api_definition__full_custom_attachment_response__e custom_attachment_response_e_attachment_verified_FromString(char* e_attachment_verified);



typedef struct custom_attachment_response_t {
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
    struct attachment_response_compound_t *obj_attachment_proof; //model
    struct attachment_response_compound_t *obj_attachment_proofdocument; //model
    list_t *a_obj_attachment_attachment; //nonprimitive container
    list_t *a_obj_attachment_version; //nonprimitive container

} custom_attachment_response_t;

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
);

void custom_attachment_response_free(custom_attachment_response_t *custom_attachment_response);

custom_attachment_response_t *custom_attachment_response_parseFromJSON(cJSON *custom_attachment_responseJSON);

cJSON *custom_attachment_response_convertToJSON(custom_attachment_response_t *custom_attachment_response);

#endif /* _custom_attachment_response_H_ */

