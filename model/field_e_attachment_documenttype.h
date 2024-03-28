/*
 * field_e_attachment_documenttype.h
 *
 * The documenttype of the Attachment
 */

#ifndef _field_e_attachment_documenttype_H_
#define _field_e_attachment_documenttype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_attachment_documenttype_t field_e_attachment_documenttype_t;


// Enum  for field_e_attachment_documenttype

typedef enum { ezmax_api_definition__full_field_e_attachment_documenttype__NULL = 0, ezmax_api_definition__full_field_e_attachment_documenttype__Adjustment, ezmax_api_definition__full_field_e_attachment_documenttype__Agent, ezmax_api_definition__full_field_e_attachment_documenttype__Bankaccount, ezmax_api_definition__full_field_e_attachment_documenttype__Broker, ezmax_api_definition__full_field_e_attachment_documenttype__Buyercontract, ezmax_api_definition__full_field_e_attachment_documenttype__Commissionadvance, ezmax_api_definition__full_field_e_attachment_documenttype__Communication, ezmax_api_definition__full_field_e_attachment_documenttype__Customer, ezmax_api_definition__full_field_e_attachment_documenttype__Customertemplate, ezmax_api_definition__full_field_e_attachment_documenttype__Deposit, ezmax_api_definition__full_field_e_attachment_documenttype__Deposittransitcheque, ezmax_api_definition__full_field_e_attachment_documenttype__Disclosure, ezmax_api_definition__full_field_e_attachment_documenttype__Electronicfundstransfer, ezmax_api_definition__full_field_e_attachment_documenttype__Employee, ezmax_api_definition__full_field_e_attachment_documenttype__Externalbroker, ezmax_api_definition__full_field_e_attachment_documenttype__Ezcomadvanceserver, ezmax_api_definition__full_field_e_attachment_documenttype__Ezcomcompany, ezmax_api_definition__full_field_e_attachment_documenttype__Ezsigndocument, ezmax_api_definition__full_field_e_attachment_documenttype__EzsigndocumentProof, ezmax_api_definition__full_field_e_attachment_documenttype__EzsigndocumentProofdocument, ezmax_api_definition__full_field_e_attachment_documenttype__Ezsigndocumentgroup, ezmax_api_definition__full_field_e_attachment_documenttype__EzsigndocumentgroupProof, ezmax_api_definition__full_field_e_attachment_documenttype__EzsigndocumentgroupProofdocument, ezmax_api_definition__full_field_e_attachment_documenttype__EzsigndocumentAttachment, ezmax_api_definition__full_field_e_attachment_documenttype__Folder, ezmax_api_definition__full_field_e_attachment_documenttype__Franchiseagence, ezmax_api_definition__full_field_e_attachment_documenttype__Franchisebroker, ezmax_api_definition__full_field_e_attachment_documenttype__Franchisecomplaint, ezmax_api_definition__full_field_e_attachment_documenttype__Franchisefranchise, ezmax_api_definition__full_field_e_attachment_documenttype__Franchiseoffice, ezmax_api_definition__full_field_e_attachment_documenttype__Ghacqcontract, ezmax_api_definition__full_field_e_attachment_documenttype__Inscription, ezmax_api_definition__full_field_e_attachment_documenttype__Inscriptionnotauthenticated, ezmax_api_definition__full_field_e_attachment_documenttype__Inscriptiontemp, ezmax_api_definition__full_field_e_attachment_documenttype__Invoice, ezmax_api_definition__full_field_e_attachment_documenttype__Lead, ezmax_api_definition__full_field_e_attachment_documenttype__Marketingfollow, ezmax_api_definition__full_field_e_attachment_documenttype__Marketingprogram, ezmax_api_definition__full_field_e_attachment_documenttype__Notary, ezmax_api_definition__full_field_e_attachment_documenttype__Officetaxreport, ezmax_api_definition__full_field_e_attachment_documenttype__Otherincome, ezmax_api_definition__full_field_e_attachment_documenttype__Paymentpreparation, ezmax_api_definition__full_field_e_attachment_documenttype__Purchase, ezmax_api_definition__full_field_e_attachment_documenttype__Reconciliation, ezmax_api_definition__full_field_e_attachment_documenttype__Rejectedoffertopurchase, ezmax_api_definition__full_field_e_attachment_documenttype__Salary, ezmax_api_definition__full_field_e_attachment_documenttype__Supplier, ezmax_api_definition__full_field_e_attachment_documenttype___Template, ezmax_api_definition__full_field_e_attachment_documenttype__Tranqcontract } ezmax_api_definition__full_field_e_attachment_documenttype__e;

char* field_e_attachment_documenttype_field_e_attachment_documenttype_ToString(ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype);

ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype_field_e_attachment_documenttype_FromString(char* field_e_attachment_documenttype);

//cJSON *field_e_attachment_documenttype_field_e_attachment_documenttype_convertToJSON(ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype);

//ezmax_api_definition__full_field_e_attachment_documenttype__e field_e_attachment_documenttype_field_e_attachment_documenttype_parseFromJSON(cJSON *field_e_attachment_documenttypeJSON);

#endif /* _field_e_attachment_documenttype_H_ */
