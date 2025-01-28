/*
 * ezsignfoldertype_request_v3.h
 *
 * A Ezsignfoldertype Object
 */

#ifndef _ezsignfoldertype_request_v3_H_
#define _ezsignfoldertype_request_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_request_v3_t ezsignfoldertype_request_v3_t;

#include "field_e_ezsignfoldertype_completion.h"
#include "field_e_ezsignfoldertype_disposal.h"
#include "field_e_ezsignfoldertype_documentdependency.h"
#include "field_e_ezsignfoldertype_pdfanoncompliantaction.h"
#include "field_e_ezsignfoldertype_pdfarequirement.h"
#include "field_e_ezsignfoldertype_privacylevel.h"
#include "field_e_ezsignfoldertype_signeraccess.h"
#include "multilingual_ezsignfoldertype_name.h"



typedef struct ezsignfoldertype_request_v3_t {
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
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency; //referenced enum
    char *s_email_address_signed; // string
    char *s_email_address_summary; // string
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    int i_ezsignfoldertype_fontsizeannotation; //numeric
    int i_ezsignfoldertype_fontsizeformfield; //numeric
    int i_ezsignfoldertype_sendreminderfirstdays; //numeric
    int i_ezsignfoldertype_sendreminderotherdays; //numeric
    int i_ezsignfoldertype_archivaldays; //numeric
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal; //referenced enum
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion; //referenced enum
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
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess; //referenced enum
    int b_ezsignfoldertype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_request_v3_t;

__attribute__((deprecated)) ezsignfoldertype_request_v3_t *ezsignfoldertype_request_v3_create(
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
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency,
    char *s_email_address_signed,
    char *s_email_address_summary,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    int i_ezsignfoldertype_fontsizeannotation,
    int i_ezsignfoldertype_fontsizeformfield,
    int i_ezsignfoldertype_sendreminderfirstdays,
    int i_ezsignfoldertype_sendreminderotherdays,
    int i_ezsignfoldertype_archivaldays,
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal,
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion,
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
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_request_v3_free(ezsignfoldertype_request_v3_t *ezsignfoldertype_request_v3);

ezsignfoldertype_request_v3_t *ezsignfoldertype_request_v3_parseFromJSON(cJSON *ezsignfoldertype_request_v3JSON);

cJSON *ezsignfoldertype_request_v3_convertToJSON(ezsignfoldertype_request_v3_t *ezsignfoldertype_request_v3);

#endif /* _ezsignfoldertype_request_v3_H_ */

