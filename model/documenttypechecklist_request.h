/*
 * documenttypechecklist_request.h
 *
 * A Documenttypechecklist Object
 */

#ifndef _documenttypechecklist_request_H_
#define _documenttypechecklist_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_request_t documenttypechecklist_request_t;

#include "field_e_documenttypechecklist_status.h"



typedef struct documenttypechecklist_request_t {
    int *pki_documenttypechecklist_id; //numeric
    int *fki_documenttype_id; //numeric
    ezmax_api_definition__full_field_e_documenttypechecklist_status__e e_documenttypechecklist_status; //referenced enum
    char *t_documenttypechecklist_comment; // string
    int *fki_adjustment_id; //numeric
    int *fki_agent_id; //numeric
    int *fki_bankaccount_id; //numeric
    int *fki_broker_id; //numeric
    int *fki_commissionadvance_id; //numeric
    int *fki_communication_id; //numeric
    int *fki_customer_id; //numeric
    int *fki_customertemplate_id; //numeric
    int *fki_deposit_id; //numeric
    int *fki_deposittransitcheque_id; //numeric
    int *fki_electronicfundstransfer_id; //numeric
    int *fki_employee_id; //numeric
    int *fki_externalbroker_id; //numeric
    int *fki_ezcomadvanceserver_id; //numeric
    int *fki_ezcomcompany_id; //numeric
    int *fki_ezsigndocument_id; //numeric
    int *fki_ghacqcontract_id; //numeric
    int *fki_inscription_id; //numeric
    int *fki_inscriptiontemp_id; //numeric
    int *fki_inscriptionnotauthenticated_id; //numeric
    int *fki_invoice_id; //numeric
    int *fki_buyercontract_id; //numeric
    int *fki_franchisebroker_id; //numeric
    int *fki_franchiseagence_id; //numeric
    int *fki_franchiseoffice_id; //numeric
    int *fki_franchisefranchise_id; //numeric
    int *fki_franchisecomplaint_id; //numeric
    int *fki_lead_id; //numeric
    int *fki_marketingprogram_id; //numeric
    int *fki_marketingfollow_id; //numeric
    int *fki_notary_id; //numeric
    int *fki_officetaxreport_id; //numeric
    int *fki_otherincome_id; //numeric
    int *fki_paymentpreparation_id; //numeric
    int *fki_purchase_id; //numeric
    int *fki_salary_id; //numeric
    int *fki_supplier_id; //numeric
    int *fki_tranqcontract_id; //numeric
    int *fki_template_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_request_t;

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
);

void documenttypechecklist_request_free(documenttypechecklist_request_t *documenttypechecklist_request);

documenttypechecklist_request_t *documenttypechecklist_request_parseFromJSON(cJSON *documenttypechecklist_requestJSON);

cJSON *documenttypechecklist_request_convertToJSON(documenttypechecklist_request_t *documenttypechecklist_request);

#endif /* _documenttypechecklist_request_H_ */

