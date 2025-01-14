/*
 * ezsignfoldertype_request_compound_v3.h
 *
 * A Ezsignfoldertype Object and children
 */

#ifndef _ezsignfoldertype_request_compound_v3_H_
#define _ezsignfoldertype_request_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_request_compound_v3_t ezsignfoldertype_request_compound_v3_t;

#include "field_e_ezsignfoldertype_completion.h"
#include "field_e_ezsignfoldertype_disposal.h"
#include "field_e_ezsignfoldertype_documentdependency.h"
#include "field_e_ezsignfoldertype_pdfanoncompliantaction.h"
#include "field_e_ezsignfoldertype_pdfarequirement.h"
#include "field_e_ezsignfoldertype_privacylevel.h"
#include "field_e_ezsignfoldertype_signeraccess.h"
#include "multilingual_ezsignfoldertype_name.h"

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__All, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__EzsignsignerOnly } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_documentdependency_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_documentdependency);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_documentdependency_FromString(char* e_ezsignfoldertype_documentdependency);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__None, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Declared, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Verified } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_pdfarequirement_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_pdfarequirement);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_pdfarequirement_FromString(char* e_ezsignfoldertype_pdfarequirement);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Reject, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Convert } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_pdfanoncompliantaction_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_pdfanoncompliantaction);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_pdfanoncompliantaction_FromString(char* e_ezsignfoldertype_pdfanoncompliantaction);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__User, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Usergroup } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__No, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Manual, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__Automatic } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_disposal);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_disposal_FromString(char* e_ezsignfoldertype_disposal);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__PerEzsigndocument, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__PerEzsignfolder } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_completion_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_completion);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_completion_FromString(char* e_ezsignfoldertype_completion);

// Enum  for ezsignfoldertype_request_compound_v3

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__No, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__SignerDocuments, ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__AllDocuments } ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e;

char* ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_signeraccess_ToString(ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e e_ezsignfoldertype_signeraccess);

ezmax_api_definition__full_ezsignfoldertype_request_compound_v3__e ezsignfoldertype_request_compound_v3_e_ezsignfoldertype_signeraccess_FromString(char* e_ezsignfoldertype_signeraccess);



typedef struct ezsignfoldertype_request_compound_v3_t {
    int pki_ezsignfoldertype_id; //numeric
    struct multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name; //model
    int fki_branding_id; //numeric
    int fki_billingentityinternal_id; //numeric
    int fki_ezsigntsarequirement_id; //numeric
    int fki_font_id_annotation; //numeric
    int fki_font_id_formfield; //numeric
    int fki_font_id_signature; //numeric
    int fki_pdfalevel_id_convert; //numeric
    list_t *a_fki_pdfalevel_id; //primitive container
    list_t *a_fki_userlogintype_id; //primitive container
    list_t *a_fki_usergroup_id_all; //primitive container
    list_t *a_fki_usergroup_id_restricted; //primitive container
    list_t *a_fki_usergroup_id_template; //primitive container
    field_e_ezsignfoldertype_documentdependency_t *e_ezsignfoldertype_documentdependency; // custom
    char *s_email_address_signed; // string
    char *s_email_address_summary; // string
    field_e_ezsignfoldertype_pdfarequirement_t *e_ezsignfoldertype_pdfarequirement; // custom
    field_e_ezsignfoldertype_pdfanoncompliantaction_t *e_ezsignfoldertype_pdfanoncompliantaction; // custom
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    int i_ezsignfoldertype_fontsizeannotation; //numeric
    int i_ezsignfoldertype_fontsizeformfield; //numeric
    int i_ezsignfoldertype_sendreminderfirstdays; //numeric
    int i_ezsignfoldertype_sendreminderotherdays; //numeric
    int i_ezsignfoldertype_archivaldays; //numeric
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal; // custom
    field_e_ezsignfoldertype_completion_t *e_ezsignfoldertype_completion; // custom
    int i_ezsignfoldertype_disposaldays; //numeric
    int i_ezsignfoldertype_deadlinedays; //numeric
    int b_ezsignfoldertype_prematurelyendautomatically; //boolean
    int i_ezsignfoldertype_prematurelyendautomaticallydays; //numeric
    int b_ezsignfoldertype_automaticsignature; //boolean
    int b_ezsignfoldertype_delegate; //boolean
    int b_ezsignfoldertype_discussion; //boolean
    int b_ezsignfoldertype_logrecipientinproof; //boolean
    int b_ezsignfoldertype_reassignezsignsigner; //boolean
    int b_ezsignfoldertype_reassignuser; //boolean
    int b_ezsignfoldertype_reassigngroup; //boolean
    int b_ezsignfoldertype_sendsignedtoezsignsigner; //boolean
    int b_ezsignfoldertype_sendsignedtouser; //boolean
    int b_ezsignfoldertype_sendattachmentezsignsigner; //boolean
    int b_ezsignfoldertype_sendproofezsignsigner; //boolean
    int b_ezsignfoldertype_sendattachmentuser; //boolean
    int b_ezsignfoldertype_sendproofuser; //boolean
    int b_ezsignfoldertype_sendproofemail; //boolean
    int b_ezsignfoldertype_allowdownloadattachmentezsignsigner; //boolean
    int b_ezsignfoldertype_allowdownloadproofezsignsigner; //boolean
    int b_ezsignfoldertype_sendproofreceivealldocument; //boolean
    int b_ezsignfoldertype_sendsignedtodocumentowner; //boolean
    int b_ezsignfoldertype_sendsignedtofolderowner; //boolean
    int b_ezsignfoldertype_sendsignedtofullgroup; //boolean
    int b_ezsignfoldertype_sendsignedtolimitedgroup; //boolean
    int b_ezsignfoldertype_sendsignedtocolleague; //boolean
    int b_ezsignfoldertype_sendsummarytodocumentowner; //boolean
    int b_ezsignfoldertype_sendsummarytofolderowner; //boolean
    int b_ezsignfoldertype_sendsummarytofullgroup; //boolean
    int b_ezsignfoldertype_sendsummarytolimitedgroup; //boolean
    int b_ezsignfoldertype_sendsummarytocolleague; //boolean
    field_e_ezsignfoldertype_signeraccess_t *e_ezsignfoldertype_signeraccess; // custom
    int b_ezsignfoldertype_isactive; //boolean
    list_t *a_fki_user_id_signed; //primitive container
    list_t *a_fki_user_id_summary; //primitive container

} ezsignfoldertype_request_compound_v3_t;

ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_create(
    int pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int fki_branding_id,
    int fki_billingentityinternal_id,
    int fki_ezsigntsarequirement_id,
    int fki_font_id_annotation,
    int fki_font_id_formfield,
    int fki_font_id_signature,
    int fki_pdfalevel_id_convert,
    list_t *a_fki_pdfalevel_id,
    list_t *a_fki_userlogintype_id,
    list_t *a_fki_usergroup_id_all,
    list_t *a_fki_usergroup_id_restricted,
    list_t *a_fki_usergroup_id_template,
    field_e_ezsignfoldertype_documentdependency_t *e_ezsignfoldertype_documentdependency,
    char *s_email_address_signed,
    char *s_email_address_summary,
    field_e_ezsignfoldertype_pdfarequirement_t *e_ezsignfoldertype_pdfarequirement,
    field_e_ezsignfoldertype_pdfanoncompliantaction_t *e_ezsignfoldertype_pdfanoncompliantaction,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    int i_ezsignfoldertype_fontsizeannotation,
    int i_ezsignfoldertype_fontsizeformfield,
    int i_ezsignfoldertype_sendreminderfirstdays,
    int i_ezsignfoldertype_sendreminderotherdays,
    int i_ezsignfoldertype_archivaldays,
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal,
    field_e_ezsignfoldertype_completion_t *e_ezsignfoldertype_completion,
    int i_ezsignfoldertype_disposaldays,
    int i_ezsignfoldertype_deadlinedays,
    int b_ezsignfoldertype_prematurelyendautomatically,
    int i_ezsignfoldertype_prematurelyendautomaticallydays,
    int b_ezsignfoldertype_automaticsignature,
    int b_ezsignfoldertype_delegate,
    int b_ezsignfoldertype_discussion,
    int b_ezsignfoldertype_logrecipientinproof,
    int b_ezsignfoldertype_reassignezsignsigner,
    int b_ezsignfoldertype_reassignuser,
    int b_ezsignfoldertype_reassigngroup,
    int b_ezsignfoldertype_sendsignedtoezsignsigner,
    int b_ezsignfoldertype_sendsignedtouser,
    int b_ezsignfoldertype_sendattachmentezsignsigner,
    int b_ezsignfoldertype_sendproofezsignsigner,
    int b_ezsignfoldertype_sendattachmentuser,
    int b_ezsignfoldertype_sendproofuser,
    int b_ezsignfoldertype_sendproofemail,
    int b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int b_ezsignfoldertype_sendproofreceivealldocument,
    int b_ezsignfoldertype_sendsignedtodocumentowner,
    int b_ezsignfoldertype_sendsignedtofolderowner,
    int b_ezsignfoldertype_sendsignedtofullgroup,
    int b_ezsignfoldertype_sendsignedtolimitedgroup,
    int b_ezsignfoldertype_sendsignedtocolleague,
    int b_ezsignfoldertype_sendsummarytodocumentowner,
    int b_ezsignfoldertype_sendsummarytofolderowner,
    int b_ezsignfoldertype_sendsummarytofullgroup,
    int b_ezsignfoldertype_sendsummarytolimitedgroup,
    int b_ezsignfoldertype_sendsummarytocolleague,
    field_e_ezsignfoldertype_signeraccess_t *e_ezsignfoldertype_signeraccess,
    int b_ezsignfoldertype_isactive,
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
);

void ezsignfoldertype_request_compound_v3_free(ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3);

ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_parseFromJSON(cJSON *ezsignfoldertype_request_compound_v3JSON);

cJSON *ezsignfoldertype_request_compound_v3_convertToJSON(ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3);

#endif /* _ezsignfoldertype_request_compound_v3_H_ */

