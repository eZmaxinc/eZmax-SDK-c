#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_request_v4.h"



static ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4_create_internal(
    int *pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int *fki_branding_id,
    int *fki_billingentityinternal_id,
    int *fki_ezsigntsarequirement_id,
    int *fki_font_id_annotation,
    int *fki_font_id_formfield,
    int *fki_font_id_signature,
    int *fki_pdfalevel_id_convert,
    list_t *a_fki_pdfalevel_id,
    list_t *a_fki_userlogintype_id,
    list_t *a_fki_usergroup_id_all,
    list_t *a_fki_usergroup_id_restricted,
    list_t *a_fki_usergroup_id_template,
    ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e e_ezsignfoldertype_signaturedatedisplay,
    char *s_ezsignfoldertype_signaturedatecustomformat,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge,
    char *s_email_address_signed,
    char *s_email_address_summary,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    int *i_ezsignfoldertype_fontsizeannotation,
    int *i_ezsignfoldertype_fontsizeformfield,
    int *i_ezsignfoldertype_sendreminderfirstdays,
    int *i_ezsignfoldertype_sendreminderotherdays,
    int *i_ezsignfoldertype_archivaldays,
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal,
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion,
    int *i_ezsignfoldertype_disposaldays,
    int *i_ezsignfoldertype_deadlinedays,
    int *b_ezsignfoldertype_prematurelyendautomatically,
    int *i_ezsignfoldertype_prematurelyendautomaticallydays,
    int *b_ezsignfoldertype_automaticsignature,
    int *b_ezsignfoldertype_delegate,
    int *b_ezsignfoldertype_discussion,
    int *b_ezsignfoldertype_logrecipientinproof,
    int *b_ezsignfoldertype_reassignezsignsigner,
    int *b_ezsignfoldertype_reassignuser,
    int *b_ezsignfoldertype_reassigngroup,
    int *b_ezsignfoldertype_senddocumentmergetoemail,
    int *b_ezsignfoldertype_senddocumentmergetoezsignsigner,
    int *b_ezsignfoldertype_senddocumentmergetoreceivealldocument,
    int *b_ezsignfoldertype_senddocumentmergetouser,
    int *b_ezsignfoldertype_sendsignedtoezsignsigner,
    int *b_ezsignfoldertype_sendsignedtouser,
    int *b_ezsignfoldertype_sendattachmentezsignsigner,
    int *b_ezsignfoldertype_sendsignatureattachmentezsignsigner,
    int *b_ezsignfoldertype_sendsignatureattachment,
    int *b_ezsignfoldertype_sendproofezsignsigner,
    int *b_ezsignfoldertype_sendattachmentuser,
    int *b_ezsignfoldertype_sendsignatureattachmentuser,
    int *b_ezsignfoldertype_sendproofuser,
    int *b_ezsignfoldertype_sendproofemail,
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int *b_ezsignfoldertype_sendproofreceivealldocument,
    int *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument,
    int *b_ezsignfoldertype_sendsignedtodocumentowner,
    int *b_ezsignfoldertype_sendsignedtofolderowner,
    int *b_ezsignfoldertype_sendsignedtofullgroup,
    int *b_ezsignfoldertype_sendsignedtolimitedgroup,
    int *b_ezsignfoldertype_sendsignedtocolleague,
    int *b_ezsignfoldertype_sendsummarytodocumentowner,
    int *b_ezsignfoldertype_sendsummarytofolderowner,
    int *b_ezsignfoldertype_sendsummarytofullgroup,
    int *b_ezsignfoldertype_sendsummarytolimitedgroup,
    int *b_ezsignfoldertype_sendsummarytocolleague,
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess,
    int *b_ezsignfoldertype_isactive
    ) {
    ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4_local_var = malloc(sizeof(ezsignfoldertype_request_v4_t));
    if (!ezsignfoldertype_request_v4_local_var) {
        return NULL;
    }
    memset(ezsignfoldertype_request_v4_local_var, 0, sizeof(ezsignfoldertype_request_v4_t));
    ezsignfoldertype_request_v4_local_var->_library_owned = 1;
    ezsignfoldertype_request_v4_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_request_v4_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_request_v4_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_request_v4_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_request_v4_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_request_v4_local_var->fki_font_id_annotation = fki_font_id_annotation;
    ezsignfoldertype_request_v4_local_var->fki_font_id_formfield = fki_font_id_formfield;
    ezsignfoldertype_request_v4_local_var->fki_font_id_signature = fki_font_id_signature;
    ezsignfoldertype_request_v4_local_var->fki_pdfalevel_id_convert = fki_pdfalevel_id_convert;
    ezsignfoldertype_request_v4_local_var->a_fki_pdfalevel_id = a_fki_pdfalevel_id;
    ezsignfoldertype_request_v4_local_var->a_fki_userlogintype_id = a_fki_userlogintype_id;
    ezsignfoldertype_request_v4_local_var->a_fki_usergroup_id_all = a_fki_usergroup_id_all;
    ezsignfoldertype_request_v4_local_var->a_fki_usergroup_id_restricted = a_fki_usergroup_id_restricted;
    ezsignfoldertype_request_v4_local_var->a_fki_usergroup_id_template = a_fki_usergroup_id_template;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_signaturedatedisplay = e_ezsignfoldertype_signaturedatedisplay;
    ezsignfoldertype_request_v4_local_var->s_ezsignfoldertype_signaturedatecustomformat = s_ezsignfoldertype_signaturedatecustomformat;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_documentdependency = e_ezsignfoldertype_documentdependency;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_documentmerge = e_ezsignfoldertype_documentmerge;
    ezsignfoldertype_request_v4_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_request_v4_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_pdfarequirement = e_ezsignfoldertype_pdfarequirement;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_pdfanoncompliantaction = e_ezsignfoldertype_pdfanoncompliantaction;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_fontsizeannotation = i_ezsignfoldertype_fontsizeannotation;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_fontsizeformfield = i_ezsignfoldertype_fontsizeformfield;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_sendreminderfirstdays = i_ezsignfoldertype_sendreminderfirstdays;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_sendreminderotherdays = i_ezsignfoldertype_sendreminderotherdays;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_completion = e_ezsignfoldertype_completion;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_prematurelyendautomatically = b_ezsignfoldertype_prematurelyendautomatically;
    ezsignfoldertype_request_v4_local_var->i_ezsignfoldertype_prematurelyendautomaticallydays = i_ezsignfoldertype_prematurelyendautomaticallydays;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_automaticsignature = b_ezsignfoldertype_automaticsignature;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_logrecipientinproof = b_ezsignfoldertype_logrecipientinproof;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_reassigngroup = b_ezsignfoldertype_reassigngroup;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_senddocumentmergetoemail = b_ezsignfoldertype_senddocumentmergetoemail;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_senddocumentmergetoezsignsigner = b_ezsignfoldertype_senddocumentmergetoezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_senddocumentmergetoreceivealldocument = b_ezsignfoldertype_senddocumentmergetoreceivealldocument;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_senddocumentmergetouser = b_ezsignfoldertype_senddocumentmergetouser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtoezsignsigner = b_ezsignfoldertype_sendsignedtoezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtouser = b_ezsignfoldertype_sendsignedtouser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendattachmentezsignsigner = b_ezsignfoldertype_sendattachmentezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignatureattachmentezsignsigner = b_ezsignfoldertype_sendsignatureattachmentezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignatureattachment = b_ezsignfoldertype_sendsignatureattachment;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendattachmentuser = b_ezsignfoldertype_sendattachmentuser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignatureattachmentuser = b_ezsignfoldertype_sendsignatureattachmentuser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendproofuser = b_ezsignfoldertype_sendproofuser;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendproofemail = b_ezsignfoldertype_sendproofemail;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner = b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendproofreceivealldocument = b_ezsignfoldertype_sendproofreceivealldocument;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument = b_ezsignfoldertype_sendsignatureattachmentreceivealldocument;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_request_v4_local_var->e_ezsignfoldertype_signeraccess = e_ezsignfoldertype_signeraccess;
    ezsignfoldertype_request_v4_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    return ezsignfoldertype_request_v4_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4_create(
    int *pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int *fki_branding_id,
    int *fki_billingentityinternal_id,
    int *fki_ezsigntsarequirement_id,
    int *fki_font_id_annotation,
    int *fki_font_id_formfield,
    int *fki_font_id_signature,
    int *fki_pdfalevel_id_convert,
    list_t *a_fki_pdfalevel_id,
    list_t *a_fki_userlogintype_id,
    list_t *a_fki_usergroup_id_all,
    list_t *a_fki_usergroup_id_restricted,
    list_t *a_fki_usergroup_id_template,
    ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e e_ezsignfoldertype_signaturedatedisplay,
    char *s_ezsignfoldertype_signaturedatecustomformat,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge,
    char *s_email_address_signed,
    char *s_email_address_summary,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement,
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    int *i_ezsignfoldertype_fontsizeannotation,
    int *i_ezsignfoldertype_fontsizeformfield,
    int *i_ezsignfoldertype_sendreminderfirstdays,
    int *i_ezsignfoldertype_sendreminderotherdays,
    int *i_ezsignfoldertype_archivaldays,
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal,
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion,
    int *i_ezsignfoldertype_disposaldays,
    int *i_ezsignfoldertype_deadlinedays,
    int *b_ezsignfoldertype_prematurelyendautomatically,
    int *i_ezsignfoldertype_prematurelyendautomaticallydays,
    int *b_ezsignfoldertype_automaticsignature,
    int *b_ezsignfoldertype_delegate,
    int *b_ezsignfoldertype_discussion,
    int *b_ezsignfoldertype_logrecipientinproof,
    int *b_ezsignfoldertype_reassignezsignsigner,
    int *b_ezsignfoldertype_reassignuser,
    int *b_ezsignfoldertype_reassigngroup,
    int *b_ezsignfoldertype_senddocumentmergetoemail,
    int *b_ezsignfoldertype_senddocumentmergetoezsignsigner,
    int *b_ezsignfoldertype_senddocumentmergetoreceivealldocument,
    int *b_ezsignfoldertype_senddocumentmergetouser,
    int *b_ezsignfoldertype_sendsignedtoezsignsigner,
    int *b_ezsignfoldertype_sendsignedtouser,
    int *b_ezsignfoldertype_sendattachmentezsignsigner,
    int *b_ezsignfoldertype_sendsignatureattachmentezsignsigner,
    int *b_ezsignfoldertype_sendsignatureattachment,
    int *b_ezsignfoldertype_sendproofezsignsigner,
    int *b_ezsignfoldertype_sendattachmentuser,
    int *b_ezsignfoldertype_sendsignatureattachmentuser,
    int *b_ezsignfoldertype_sendproofuser,
    int *b_ezsignfoldertype_sendproofemail,
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int *b_ezsignfoldertype_sendproofreceivealldocument,
    int *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument,
    int *b_ezsignfoldertype_sendsignedtodocumentowner,
    int *b_ezsignfoldertype_sendsignedtofolderowner,
    int *b_ezsignfoldertype_sendsignedtofullgroup,
    int *b_ezsignfoldertype_sendsignedtolimitedgroup,
    int *b_ezsignfoldertype_sendsignedtocolleague,
    int *b_ezsignfoldertype_sendsummarytodocumentowner,
    int *b_ezsignfoldertype_sendsummarytofolderowner,
    int *b_ezsignfoldertype_sendsummarytofullgroup,
    int *b_ezsignfoldertype_sendsummarytolimitedgroup,
    int *b_ezsignfoldertype_sendsummarytocolleague,
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess,
    int *b_ezsignfoldertype_isactive
    ) {
    int *pki_ezsignfoldertype_id_copy = NULL;
    if (pki_ezsignfoldertype_id) {
        pki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldertype_id_copy) *pki_ezsignfoldertype_id_copy = *pki_ezsignfoldertype_id;
    }
    int *fki_branding_id_copy = NULL;
    if (fki_branding_id) {
        fki_branding_id_copy = malloc(sizeof(int));
        if (fki_branding_id_copy) *fki_branding_id_copy = *fki_branding_id;
    }
    int *fki_billingentityinternal_id_copy = NULL;
    if (fki_billingentityinternal_id) {
        fki_billingentityinternal_id_copy = malloc(sizeof(int));
        if (fki_billingentityinternal_id_copy) *fki_billingentityinternal_id_copy = *fki_billingentityinternal_id;
    }
    int *fki_ezsigntsarequirement_id_copy = NULL;
    if (fki_ezsigntsarequirement_id) {
        fki_ezsigntsarequirement_id_copy = malloc(sizeof(int));
        if (fki_ezsigntsarequirement_id_copy) *fki_ezsigntsarequirement_id_copy = *fki_ezsigntsarequirement_id;
    }
    int *fki_font_id_annotation_copy = NULL;
    if (fki_font_id_annotation) {
        fki_font_id_annotation_copy = malloc(sizeof(int));
        if (fki_font_id_annotation_copy) *fki_font_id_annotation_copy = *fki_font_id_annotation;
    }
    int *fki_font_id_formfield_copy = NULL;
    if (fki_font_id_formfield) {
        fki_font_id_formfield_copy = malloc(sizeof(int));
        if (fki_font_id_formfield_copy) *fki_font_id_formfield_copy = *fki_font_id_formfield;
    }
    int *fki_font_id_signature_copy = NULL;
    if (fki_font_id_signature) {
        fki_font_id_signature_copy = malloc(sizeof(int));
        if (fki_font_id_signature_copy) *fki_font_id_signature_copy = *fki_font_id_signature;
    }
    int *fki_pdfalevel_id_convert_copy = NULL;
    if (fki_pdfalevel_id_convert) {
        fki_pdfalevel_id_convert_copy = malloc(sizeof(int));
        if (fki_pdfalevel_id_convert_copy) *fki_pdfalevel_id_convert_copy = *fki_pdfalevel_id_convert;
    }
    int *i_ezsignfoldertype_fontsizeannotation_copy = NULL;
    if (i_ezsignfoldertype_fontsizeannotation) {
        i_ezsignfoldertype_fontsizeannotation_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_fontsizeannotation_copy) *i_ezsignfoldertype_fontsizeannotation_copy = *i_ezsignfoldertype_fontsizeannotation;
    }
    int *i_ezsignfoldertype_fontsizeformfield_copy = NULL;
    if (i_ezsignfoldertype_fontsizeformfield) {
        i_ezsignfoldertype_fontsizeformfield_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_fontsizeformfield_copy) *i_ezsignfoldertype_fontsizeformfield_copy = *i_ezsignfoldertype_fontsizeformfield;
    }
    int *i_ezsignfoldertype_sendreminderfirstdays_copy = NULL;
    if (i_ezsignfoldertype_sendreminderfirstdays) {
        i_ezsignfoldertype_sendreminderfirstdays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_sendreminderfirstdays_copy) *i_ezsignfoldertype_sendreminderfirstdays_copy = *i_ezsignfoldertype_sendreminderfirstdays;
    }
    int *i_ezsignfoldertype_sendreminderotherdays_copy = NULL;
    if (i_ezsignfoldertype_sendreminderotherdays) {
        i_ezsignfoldertype_sendreminderotherdays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_sendreminderotherdays_copy) *i_ezsignfoldertype_sendreminderotherdays_copy = *i_ezsignfoldertype_sendreminderotherdays;
    }
    int *i_ezsignfoldertype_archivaldays_copy = NULL;
    if (i_ezsignfoldertype_archivaldays) {
        i_ezsignfoldertype_archivaldays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_archivaldays_copy) *i_ezsignfoldertype_archivaldays_copy = *i_ezsignfoldertype_archivaldays;
    }
    int *i_ezsignfoldertype_disposaldays_copy = NULL;
    if (i_ezsignfoldertype_disposaldays) {
        i_ezsignfoldertype_disposaldays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_disposaldays_copy) *i_ezsignfoldertype_disposaldays_copy = *i_ezsignfoldertype_disposaldays;
    }
    int *i_ezsignfoldertype_deadlinedays_copy = NULL;
    if (i_ezsignfoldertype_deadlinedays) {
        i_ezsignfoldertype_deadlinedays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_deadlinedays_copy) *i_ezsignfoldertype_deadlinedays_copy = *i_ezsignfoldertype_deadlinedays;
    }
    int *b_ezsignfoldertype_prematurelyendautomatically_copy = NULL;
    if (b_ezsignfoldertype_prematurelyendautomatically) {
        b_ezsignfoldertype_prematurelyendautomatically_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_prematurelyendautomatically_copy) *b_ezsignfoldertype_prematurelyendautomatically_copy = *b_ezsignfoldertype_prematurelyendautomatically;
    }
    int *i_ezsignfoldertype_prematurelyendautomaticallydays_copy = NULL;
    if (i_ezsignfoldertype_prematurelyendautomaticallydays) {
        i_ezsignfoldertype_prematurelyendautomaticallydays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_prematurelyendautomaticallydays_copy) *i_ezsignfoldertype_prematurelyendautomaticallydays_copy = *i_ezsignfoldertype_prematurelyendautomaticallydays;
    }
    int *b_ezsignfoldertype_automaticsignature_copy = NULL;
    if (b_ezsignfoldertype_automaticsignature) {
        b_ezsignfoldertype_automaticsignature_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_automaticsignature_copy) *b_ezsignfoldertype_automaticsignature_copy = *b_ezsignfoldertype_automaticsignature;
    }
    int *b_ezsignfoldertype_delegate_copy = NULL;
    if (b_ezsignfoldertype_delegate) {
        b_ezsignfoldertype_delegate_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_delegate_copy) *b_ezsignfoldertype_delegate_copy = *b_ezsignfoldertype_delegate;
    }
    int *b_ezsignfoldertype_discussion_copy = NULL;
    if (b_ezsignfoldertype_discussion) {
        b_ezsignfoldertype_discussion_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_discussion_copy) *b_ezsignfoldertype_discussion_copy = *b_ezsignfoldertype_discussion;
    }
    int *b_ezsignfoldertype_logrecipientinproof_copy = NULL;
    if (b_ezsignfoldertype_logrecipientinproof) {
        b_ezsignfoldertype_logrecipientinproof_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_logrecipientinproof_copy) *b_ezsignfoldertype_logrecipientinproof_copy = *b_ezsignfoldertype_logrecipientinproof;
    }
    int *b_ezsignfoldertype_reassignezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_reassignezsignsigner) {
        b_ezsignfoldertype_reassignezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_reassignezsignsigner_copy) *b_ezsignfoldertype_reassignezsignsigner_copy = *b_ezsignfoldertype_reassignezsignsigner;
    }
    int *b_ezsignfoldertype_reassignuser_copy = NULL;
    if (b_ezsignfoldertype_reassignuser) {
        b_ezsignfoldertype_reassignuser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_reassignuser_copy) *b_ezsignfoldertype_reassignuser_copy = *b_ezsignfoldertype_reassignuser;
    }
    int *b_ezsignfoldertype_reassigngroup_copy = NULL;
    if (b_ezsignfoldertype_reassigngroup) {
        b_ezsignfoldertype_reassigngroup_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_reassigngroup_copy) *b_ezsignfoldertype_reassigngroup_copy = *b_ezsignfoldertype_reassigngroup;
    }
    int *b_ezsignfoldertype_senddocumentmergetoemail_copy = NULL;
    if (b_ezsignfoldertype_senddocumentmergetoemail) {
        b_ezsignfoldertype_senddocumentmergetoemail_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_senddocumentmergetoemail_copy) *b_ezsignfoldertype_senddocumentmergetoemail_copy = *b_ezsignfoldertype_senddocumentmergetoemail;
    }
    int *b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_senddocumentmergetoezsignsigner) {
        b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy) *b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy = *b_ezsignfoldertype_senddocumentmergetoezsignsigner;
    }
    int *b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy = NULL;
    if (b_ezsignfoldertype_senddocumentmergetoreceivealldocument) {
        b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy) *b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy = *b_ezsignfoldertype_senddocumentmergetoreceivealldocument;
    }
    int *b_ezsignfoldertype_senddocumentmergetouser_copy = NULL;
    if (b_ezsignfoldertype_senddocumentmergetouser) {
        b_ezsignfoldertype_senddocumentmergetouser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_senddocumentmergetouser_copy) *b_ezsignfoldertype_senddocumentmergetouser_copy = *b_ezsignfoldertype_senddocumentmergetouser;
    }
    int *b_ezsignfoldertype_sendsignedtoezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtoezsignsigner) {
        b_ezsignfoldertype_sendsignedtoezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtoezsignsigner_copy) *b_ezsignfoldertype_sendsignedtoezsignsigner_copy = *b_ezsignfoldertype_sendsignedtoezsignsigner;
    }
    int *b_ezsignfoldertype_sendsignedtouser_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtouser) {
        b_ezsignfoldertype_sendsignedtouser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtouser_copy) *b_ezsignfoldertype_sendsignedtouser_copy = *b_ezsignfoldertype_sendsignedtouser;
    }
    int *b_ezsignfoldertype_sendattachmentezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_sendattachmentezsignsigner) {
        b_ezsignfoldertype_sendattachmentezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendattachmentezsignsigner_copy) *b_ezsignfoldertype_sendattachmentezsignsigner_copy = *b_ezsignfoldertype_sendattachmentezsignsigner;
    }
    int *b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_sendsignatureattachmentezsignsigner) {
        b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy) *b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy = *b_ezsignfoldertype_sendsignatureattachmentezsignsigner;
    }
    int *b_ezsignfoldertype_sendsignatureattachment_copy = NULL;
    if (b_ezsignfoldertype_sendsignatureattachment) {
        b_ezsignfoldertype_sendsignatureattachment_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignatureattachment_copy) *b_ezsignfoldertype_sendsignatureattachment_copy = *b_ezsignfoldertype_sendsignatureattachment;
    }
    int *b_ezsignfoldertype_sendproofezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_sendproofezsignsigner) {
        b_ezsignfoldertype_sendproofezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendproofezsignsigner_copy) *b_ezsignfoldertype_sendproofezsignsigner_copy = *b_ezsignfoldertype_sendproofezsignsigner;
    }
    int *b_ezsignfoldertype_sendattachmentuser_copy = NULL;
    if (b_ezsignfoldertype_sendattachmentuser) {
        b_ezsignfoldertype_sendattachmentuser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendattachmentuser_copy) *b_ezsignfoldertype_sendattachmentuser_copy = *b_ezsignfoldertype_sendattachmentuser;
    }
    int *b_ezsignfoldertype_sendsignatureattachmentuser_copy = NULL;
    if (b_ezsignfoldertype_sendsignatureattachmentuser) {
        b_ezsignfoldertype_sendsignatureattachmentuser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignatureattachmentuser_copy) *b_ezsignfoldertype_sendsignatureattachmentuser_copy = *b_ezsignfoldertype_sendsignatureattachmentuser;
    }
    int *b_ezsignfoldertype_sendproofuser_copy = NULL;
    if (b_ezsignfoldertype_sendproofuser) {
        b_ezsignfoldertype_sendproofuser_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendproofuser_copy) *b_ezsignfoldertype_sendproofuser_copy = *b_ezsignfoldertype_sendproofuser;
    }
    int *b_ezsignfoldertype_sendproofemail_copy = NULL;
    if (b_ezsignfoldertype_sendproofemail) {
        b_ezsignfoldertype_sendproofemail_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendproofemail_copy) *b_ezsignfoldertype_sendproofemail_copy = *b_ezsignfoldertype_sendproofemail;
    }
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy) *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = *b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    }
    int *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner) {
        b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy) *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy = *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner;
    }
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) {
        b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_allowdownloadproofezsignsigner_copy) *b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = *b_ezsignfoldertype_allowdownloadproofezsignsigner;
    }
    int *b_ezsignfoldertype_sendproofreceivealldocument_copy = NULL;
    if (b_ezsignfoldertype_sendproofreceivealldocument) {
        b_ezsignfoldertype_sendproofreceivealldocument_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendproofreceivealldocument_copy) *b_ezsignfoldertype_sendproofreceivealldocument_copy = *b_ezsignfoldertype_sendproofreceivealldocument;
    }
    int *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy = NULL;
    if (b_ezsignfoldertype_sendsignatureattachmentreceivealldocument) {
        b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy) *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy = *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument;
    }
    int *b_ezsignfoldertype_sendsignedtodocumentowner_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtodocumentowner) {
        b_ezsignfoldertype_sendsignedtodocumentowner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtodocumentowner_copy) *b_ezsignfoldertype_sendsignedtodocumentowner_copy = *b_ezsignfoldertype_sendsignedtodocumentowner;
    }
    int *b_ezsignfoldertype_sendsignedtofolderowner_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtofolderowner) {
        b_ezsignfoldertype_sendsignedtofolderowner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtofolderowner_copy) *b_ezsignfoldertype_sendsignedtofolderowner_copy = *b_ezsignfoldertype_sendsignedtofolderowner;
    }
    int *b_ezsignfoldertype_sendsignedtofullgroup_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtofullgroup) {
        b_ezsignfoldertype_sendsignedtofullgroup_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtofullgroup_copy) *b_ezsignfoldertype_sendsignedtofullgroup_copy = *b_ezsignfoldertype_sendsignedtofullgroup;
    }
    int *b_ezsignfoldertype_sendsignedtolimitedgroup_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) {
        b_ezsignfoldertype_sendsignedtolimitedgroup_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtolimitedgroup_copy) *b_ezsignfoldertype_sendsignedtolimitedgroup_copy = *b_ezsignfoldertype_sendsignedtolimitedgroup;
    }
    int *b_ezsignfoldertype_sendsignedtocolleague_copy = NULL;
    if (b_ezsignfoldertype_sendsignedtocolleague) {
        b_ezsignfoldertype_sendsignedtocolleague_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsignedtocolleague_copy) *b_ezsignfoldertype_sendsignedtocolleague_copy = *b_ezsignfoldertype_sendsignedtocolleague;
    }
    int *b_ezsignfoldertype_sendsummarytodocumentowner_copy = NULL;
    if (b_ezsignfoldertype_sendsummarytodocumentowner) {
        b_ezsignfoldertype_sendsummarytodocumentowner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsummarytodocumentowner_copy) *b_ezsignfoldertype_sendsummarytodocumentowner_copy = *b_ezsignfoldertype_sendsummarytodocumentowner;
    }
    int *b_ezsignfoldertype_sendsummarytofolderowner_copy = NULL;
    if (b_ezsignfoldertype_sendsummarytofolderowner) {
        b_ezsignfoldertype_sendsummarytofolderowner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsummarytofolderowner_copy) *b_ezsignfoldertype_sendsummarytofolderowner_copy = *b_ezsignfoldertype_sendsummarytofolderowner;
    }
    int *b_ezsignfoldertype_sendsummarytofullgroup_copy = NULL;
    if (b_ezsignfoldertype_sendsummarytofullgroup) {
        b_ezsignfoldertype_sendsummarytofullgroup_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsummarytofullgroup_copy) *b_ezsignfoldertype_sendsummarytofullgroup_copy = *b_ezsignfoldertype_sendsummarytofullgroup;
    }
    int *b_ezsignfoldertype_sendsummarytolimitedgroup_copy = NULL;
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) {
        b_ezsignfoldertype_sendsummarytolimitedgroup_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsummarytolimitedgroup_copy) *b_ezsignfoldertype_sendsummarytolimitedgroup_copy = *b_ezsignfoldertype_sendsummarytolimitedgroup;
    }
    int *b_ezsignfoldertype_sendsummarytocolleague_copy = NULL;
    if (b_ezsignfoldertype_sendsummarytocolleague) {
        b_ezsignfoldertype_sendsummarytocolleague_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendsummarytocolleague_copy) *b_ezsignfoldertype_sendsummarytocolleague_copy = *b_ezsignfoldertype_sendsummarytocolleague;
    }
    int *b_ezsignfoldertype_isactive_copy = NULL;
    if (b_ezsignfoldertype_isactive) {
        b_ezsignfoldertype_isactive_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_isactive_copy) *b_ezsignfoldertype_isactive_copy = *b_ezsignfoldertype_isactive;
    }
    ezsignfoldertype_request_v4_t *result = ezsignfoldertype_request_v4_create_internal (
        pki_ezsignfoldertype_id_copy,
        obj_ezsignfoldertype_name,
        fki_branding_id_copy,
        fki_billingentityinternal_id_copy,
        fki_ezsigntsarequirement_id_copy,
        fki_font_id_annotation_copy,
        fki_font_id_formfield_copy,
        fki_font_id_signature_copy,
        fki_pdfalevel_id_convert_copy,
        a_fki_pdfalevel_id,
        a_fki_userlogintype_id,
        a_fki_usergroup_id_all,
        a_fki_usergroup_id_restricted,
        a_fki_usergroup_id_template,
        e_ezsignfoldertype_signaturedatedisplay,
        s_ezsignfoldertype_signaturedatecustomformat,
        e_ezsignfoldertype_documentdependency,
        e_ezsignfoldertype_documentmerge,
        s_email_address_signed,
        s_email_address_summary,
        e_ezsignfoldertype_pdfarequirement,
        e_ezsignfoldertype_pdfanoncompliantaction,
        e_ezsignfoldertype_privacylevel,
        i_ezsignfoldertype_fontsizeannotation_copy,
        i_ezsignfoldertype_fontsizeformfield_copy,
        i_ezsignfoldertype_sendreminderfirstdays_copy,
        i_ezsignfoldertype_sendreminderotherdays_copy,
        i_ezsignfoldertype_archivaldays_copy,
        e_ezsignfoldertype_disposal,
        e_ezsignfoldertype_completion,
        i_ezsignfoldertype_disposaldays_copy,
        i_ezsignfoldertype_deadlinedays_copy,
        b_ezsignfoldertype_prematurelyendautomatically_copy,
        i_ezsignfoldertype_prematurelyendautomaticallydays_copy,
        b_ezsignfoldertype_automaticsignature_copy,
        b_ezsignfoldertype_delegate_copy,
        b_ezsignfoldertype_discussion_copy,
        b_ezsignfoldertype_logrecipientinproof_copy,
        b_ezsignfoldertype_reassignezsignsigner_copy,
        b_ezsignfoldertype_reassignuser_copy,
        b_ezsignfoldertype_reassigngroup_copy,
        b_ezsignfoldertype_senddocumentmergetoemail_copy,
        b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy,
        b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy,
        b_ezsignfoldertype_senddocumentmergetouser_copy,
        b_ezsignfoldertype_sendsignedtoezsignsigner_copy,
        b_ezsignfoldertype_sendsignedtouser_copy,
        b_ezsignfoldertype_sendattachmentezsignsigner_copy,
        b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy,
        b_ezsignfoldertype_sendsignatureattachment_copy,
        b_ezsignfoldertype_sendproofezsignsigner_copy,
        b_ezsignfoldertype_sendattachmentuser_copy,
        b_ezsignfoldertype_sendsignatureattachmentuser_copy,
        b_ezsignfoldertype_sendproofuser_copy,
        b_ezsignfoldertype_sendproofemail_copy,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy,
        b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy,
        b_ezsignfoldertype_allowdownloadproofezsignsigner_copy,
        b_ezsignfoldertype_sendproofreceivealldocument_copy,
        b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy,
        b_ezsignfoldertype_sendsignedtodocumentowner_copy,
        b_ezsignfoldertype_sendsignedtofolderowner_copy,
        b_ezsignfoldertype_sendsignedtofullgroup_copy,
        b_ezsignfoldertype_sendsignedtolimitedgroup_copy,
        b_ezsignfoldertype_sendsignedtocolleague_copy,
        b_ezsignfoldertype_sendsummarytodocumentowner_copy,
        b_ezsignfoldertype_sendsummarytofolderowner_copy,
        b_ezsignfoldertype_sendsummarytofullgroup_copy,
        b_ezsignfoldertype_sendsummarytolimitedgroup_copy,
        b_ezsignfoldertype_sendsummarytocolleague_copy,
        e_ezsignfoldertype_signeraccess,
        b_ezsignfoldertype_isactive_copy
        );
    if (!result) {
        free(pki_ezsignfoldertype_id_copy);
        free(fki_branding_id_copy);
        free(fki_billingentityinternal_id_copy);
        free(fki_ezsigntsarequirement_id_copy);
        free(fki_font_id_annotation_copy);
        free(fki_font_id_formfield_copy);
        free(fki_font_id_signature_copy);
        free(fki_pdfalevel_id_convert_copy);
        free(i_ezsignfoldertype_fontsizeannotation_copy);
        free(i_ezsignfoldertype_fontsizeformfield_copy);
        free(i_ezsignfoldertype_sendreminderfirstdays_copy);
        free(i_ezsignfoldertype_sendreminderotherdays_copy);
        free(i_ezsignfoldertype_archivaldays_copy);
        free(i_ezsignfoldertype_disposaldays_copy);
        free(i_ezsignfoldertype_deadlinedays_copy);
        free(b_ezsignfoldertype_prematurelyendautomatically_copy);
        free(i_ezsignfoldertype_prematurelyendautomaticallydays_copy);
        free(b_ezsignfoldertype_automaticsignature_copy);
        free(b_ezsignfoldertype_delegate_copy);
        free(b_ezsignfoldertype_discussion_copy);
        free(b_ezsignfoldertype_logrecipientinproof_copy);
        free(b_ezsignfoldertype_reassignezsignsigner_copy);
        free(b_ezsignfoldertype_reassignuser_copy);
        free(b_ezsignfoldertype_reassigngroup_copy);
        free(b_ezsignfoldertype_senddocumentmergetoemail_copy);
        free(b_ezsignfoldertype_senddocumentmergetoezsignsigner_copy);
        free(b_ezsignfoldertype_senddocumentmergetoreceivealldocument_copy);
        free(b_ezsignfoldertype_senddocumentmergetouser_copy);
        free(b_ezsignfoldertype_sendsignedtoezsignsigner_copy);
        free(b_ezsignfoldertype_sendsignedtouser_copy);
        free(b_ezsignfoldertype_sendattachmentezsignsigner_copy);
        free(b_ezsignfoldertype_sendsignatureattachmentezsignsigner_copy);
        free(b_ezsignfoldertype_sendsignatureattachment_copy);
        free(b_ezsignfoldertype_sendproofezsignsigner_copy);
        free(b_ezsignfoldertype_sendattachmentuser_copy);
        free(b_ezsignfoldertype_sendsignatureattachmentuser_copy);
        free(b_ezsignfoldertype_sendproofuser_copy);
        free(b_ezsignfoldertype_sendproofemail_copy);
        free(b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy);
        free(b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_copy);
        free(b_ezsignfoldertype_allowdownloadproofezsignsigner_copy);
        free(b_ezsignfoldertype_sendproofreceivealldocument_copy);
        free(b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_copy);
        free(b_ezsignfoldertype_sendsignedtodocumentowner_copy);
        free(b_ezsignfoldertype_sendsignedtofolderowner_copy);
        free(b_ezsignfoldertype_sendsignedtofullgroup_copy);
        free(b_ezsignfoldertype_sendsignedtolimitedgroup_copy);
        free(b_ezsignfoldertype_sendsignedtocolleague_copy);
        free(b_ezsignfoldertype_sendsummarytodocumentowner_copy);
        free(b_ezsignfoldertype_sendsummarytofolderowner_copy);
        free(b_ezsignfoldertype_sendsummarytofullgroup_copy);
        free(b_ezsignfoldertype_sendsummarytolimitedgroup_copy);
        free(b_ezsignfoldertype_sendsummarytocolleague_copy);
        free(b_ezsignfoldertype_isactive_copy);
    }
    return result;
}

void ezsignfoldertype_request_v4_free(ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4) {
    if(NULL == ezsignfoldertype_request_v4){
        return ;
    }
    if(ezsignfoldertype_request_v4->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_request_v4_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_request_v4->pki_ezsignfoldertype_id) {
        free(ezsignfoldertype_request_v4->pki_ezsignfoldertype_id);
        ezsignfoldertype_request_v4->pki_ezsignfoldertype_id = NULL;
    }
    if (ezsignfoldertype_request_v4->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_request_v4->obj_ezsignfoldertype_name);
        ezsignfoldertype_request_v4->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_branding_id) {
        free(ezsignfoldertype_request_v4->fki_branding_id);
        ezsignfoldertype_request_v4->fki_branding_id = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_billingentityinternal_id) {
        free(ezsignfoldertype_request_v4->fki_billingentityinternal_id);
        ezsignfoldertype_request_v4->fki_billingentityinternal_id = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id) {
        free(ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id);
        ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_font_id_annotation) {
        free(ezsignfoldertype_request_v4->fki_font_id_annotation);
        ezsignfoldertype_request_v4->fki_font_id_annotation = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_font_id_formfield) {
        free(ezsignfoldertype_request_v4->fki_font_id_formfield);
        ezsignfoldertype_request_v4->fki_font_id_formfield = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_font_id_signature) {
        free(ezsignfoldertype_request_v4->fki_font_id_signature);
        ezsignfoldertype_request_v4->fki_font_id_signature = NULL;
    }
    if (ezsignfoldertype_request_v4->fki_pdfalevel_id_convert) {
        free(ezsignfoldertype_request_v4->fki_pdfalevel_id_convert);
        ezsignfoldertype_request_v4->fki_pdfalevel_id_convert = NULL;
    }
    if (ezsignfoldertype_request_v4->a_fki_pdfalevel_id) {
        list_ForEach(listEntry, ezsignfoldertype_request_v4->a_fki_pdfalevel_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v4->a_fki_pdfalevel_id);
        ezsignfoldertype_request_v4->a_fki_pdfalevel_id = NULL;
    }
    if (ezsignfoldertype_request_v4->a_fki_userlogintype_id) {
        list_ForEach(listEntry, ezsignfoldertype_request_v4->a_fki_userlogintype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v4->a_fki_userlogintype_id);
        ezsignfoldertype_request_v4->a_fki_userlogintype_id = NULL;
    }
    if (ezsignfoldertype_request_v4->a_fki_usergroup_id_all) {
        list_ForEach(listEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_all) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v4->a_fki_usergroup_id_all);
        ezsignfoldertype_request_v4->a_fki_usergroup_id_all = NULL;
    }
    if (ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted) {
        list_ForEach(listEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted);
        ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted = NULL;
    }
    if (ezsignfoldertype_request_v4->a_fki_usergroup_id_template) {
        list_ForEach(listEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_template) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_v4->a_fki_usergroup_id_template);
        ezsignfoldertype_request_v4->a_fki_usergroup_id_template = NULL;
    }
    if (ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat) {
        free(ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat);
        ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat = NULL;
    }
    if (ezsignfoldertype_request_v4->s_email_address_signed) {
        free(ezsignfoldertype_request_v4->s_email_address_signed);
        ezsignfoldertype_request_v4->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_request_v4->s_email_address_summary) {
        free(ezsignfoldertype_request_v4->s_email_address_summary);
        ezsignfoldertype_request_v4->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically = NULL;
    }
    if (ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays) {
        free(ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays);
        ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague = NULL;
    }
    if (ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive) {
        free(ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive);
        ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive = NULL;
    }
    free(ezsignfoldertype_request_v4);
}

cJSON *ezsignfoldertype_request_v4_convertToJSON(ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_request_v4->pki_ezsignfoldertype_id
    if(ezsignfoldertype_request_v4->pki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", *ezsignfoldertype_request_v4->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_request_v4->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_request_v4->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_request_v4->fki_branding_id
    if (!ezsignfoldertype_request_v4->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", *ezsignfoldertype_request_v4->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v4->fki_billingentityinternal_id
    if(ezsignfoldertype_request_v4->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", *ezsignfoldertype_request_v4->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", *ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->fki_font_id_annotation
    if(ezsignfoldertype_request_v4->fki_font_id_annotation) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDAnnotation", *ezsignfoldertype_request_v4->fki_font_id_annotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->fki_font_id_formfield
    if(ezsignfoldertype_request_v4->fki_font_id_formfield) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDFormfield", *ezsignfoldertype_request_v4->fki_font_id_formfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->fki_font_id_signature
    if(ezsignfoldertype_request_v4->fki_font_id_signature) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDSignature", *ezsignfoldertype_request_v4->fki_font_id_signature) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->fki_pdfalevel_id_convert
    if(ezsignfoldertype_request_v4->fki_pdfalevel_id_convert) {
    if(cJSON_AddNumberToObject(item, "fkiPdfalevelIDConvert", *ezsignfoldertype_request_v4->fki_pdfalevel_id_convert) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->a_fki_pdfalevel_id
    if(ezsignfoldertype_request_v4->a_fki_pdfalevel_id) {
    cJSON *a_fki_pdfalevel_id = cJSON_AddArrayToObject(item, "a_fkiPdfalevelID");
    if(a_fki_pdfalevel_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_pdfalevel_idListEntry;
    list_ForEach(a_fki_pdfalevel_idListEntry, ezsignfoldertype_request_v4->a_fki_pdfalevel_id) {
    if(cJSON_AddNumberToObject(a_fki_pdfalevel_id, "", *(double *)a_fki_pdfalevel_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v4->a_fki_userlogintype_id
    if (!ezsignfoldertype_request_v4->a_fki_userlogintype_id) {
        goto fail;
    }
    cJSON *a_fki_userlogintype_id = cJSON_AddArrayToObject(item, "a_fkiUserlogintypeID");
    if(a_fki_userlogintype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_userlogintype_idListEntry;
    list_ForEach(a_fki_userlogintype_idListEntry, ezsignfoldertype_request_v4->a_fki_userlogintype_id) {
    if(cJSON_AddNumberToObject(a_fki_userlogintype_id, "", *(double *)a_fki_userlogintype_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->a_fki_usergroup_id_all
    if(ezsignfoldertype_request_v4->a_fki_usergroup_id_all) {
    cJSON *a_fki_usergroup_id_all = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDAll");
    if(a_fki_usergroup_id_all == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_allListEntry;
    list_ForEach(a_fki_usergroup_id_allListEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_all) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_all, "", *(double *)a_fki_usergroup_id_allListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted
    if(ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted) {
    cJSON *a_fki_usergroup_id_restricted = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDRestricted");
    if(a_fki_usergroup_id_restricted == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_restrictedListEntry;
    list_ForEach(a_fki_usergroup_id_restrictedListEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_restricted, "", *(double *)a_fki_usergroup_id_restrictedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v4->a_fki_usergroup_id_template
    if(ezsignfoldertype_request_v4->a_fki_usergroup_id_template) {
    cJSON *a_fki_usergroup_id_template = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDTemplate");
    if(a_fki_usergroup_id_template == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_templateListEntry;
    list_ForEach(a_fki_usergroup_id_templateListEntry, ezsignfoldertype_request_v4->a_fki_usergroup_id_template) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_template, "", *(double *)a_fki_usergroup_id_templateListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_signaturedatedisplay
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__NULL == ezsignfoldertype_request_v4->e_ezsignfoldertype_signaturedatedisplay) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_signaturedatedisplay_local_JSON = field_e_ezsignfoldertype_signaturedatedisplay_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_signaturedatedisplay);
    if(e_ezsignfoldertype_signaturedatedisplay_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSignaturedatedisplay", e_ezsignfoldertype_signaturedatedisplay_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat
    if(ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeSignaturedatecustomformat", ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_documentdependency
    if(ezsignfoldertype_request_v4->e_ezsignfoldertype_documentdependency != ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__NULL) {
    cJSON *e_ezsignfoldertype_documentdependency_local_JSON = field_e_ezsignfoldertype_documentdependency_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_documentdependency);
    if(e_ezsignfoldertype_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDocumentdependency", e_ezsignfoldertype_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_documentmerge
    if(ezsignfoldertype_request_v4->e_ezsignfoldertype_documentmerge != ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__NULL) {
    cJSON *e_ezsignfoldertype_documentmerge_local_JSON = field_e_ezsignfoldertype_documentmerge_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_documentmerge);
    if(e_ezsignfoldertype_documentmerge_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDocumentmerge", e_ezsignfoldertype_documentmerge_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->s_email_address_signed
    if(ezsignfoldertype_request_v4->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_request_v4->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_v4->s_email_address_summary
    if(ezsignfoldertype_request_v4->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_request_v4->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfarequirement
    if(ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfarequirement != ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__NULL) {
    cJSON *e_ezsignfoldertype_pdfarequirement_local_JSON = field_e_ezsignfoldertype_pdfarequirement_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfarequirement);
    if(e_ezsignfoldertype_pdfarequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfarequirement", e_ezsignfoldertype_pdfarequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfanoncompliantaction
    if(ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfanoncompliantaction != ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__NULL) {
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction_local_JSON = field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfanoncompliantaction);
    if(e_ezsignfoldertype_pdfanoncompliantaction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfanoncompliantaction", e_ezsignfoldertype_pdfanoncompliantaction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfoldertype_request_v4->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeannotation", *ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeformfield", *ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderfirstdays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderotherdays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__NULL == ezsignfoldertype_request_v4->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_completion
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_completion__NULL == ezsignfoldertype_request_v4->e_ezsignfoldertype_completion) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_completion_local_JSON = field_e_ezsignfoldertype_completion_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_completion);
    if(e_ezsignfoldertype_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeCompletion", e_ezsignfoldertype_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypePrematurelyendautomatically", *ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays
    if(ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypePrematurelyendautomaticallydays", *ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAutomaticsignature", *ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", *ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", *ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeLogrecipientinproof", *ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassigngroup", *ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSenddocumentmergetoemail", *ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSenddocumentmergetoezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSenddocumentmergetoreceivealldocument", *ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSenddocumentmergetouser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtoezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtouser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignatureattachmentezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignatureattachment", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentuser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignatureattachmentuser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofuser", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofemail", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadsignatureattachmentezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofreceivealldocument", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignatureattachmentreceivealldocument", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", *ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_v4->e_ezsignfoldertype_signeraccess
    if(ezsignfoldertype_request_v4->e_ezsignfoldertype_signeraccess != ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__NULL) {
    cJSON *e_ezsignfoldertype_signeraccess_local_JSON = field_e_ezsignfoldertype_signeraccess_convertToJSON(ezsignfoldertype_request_v4->e_ezsignfoldertype_signeraccess);
    if(e_ezsignfoldertype_signeraccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSigneraccess", e_ezsignfoldertype_signeraccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", *ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4_parseFromJSON(cJSON *ezsignfoldertype_request_v4JSON){

    ezsignfoldertype_request_v4_t *ezsignfoldertype_request_v4_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->pki_ezsignfoldertype_id
    int *pki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_branding_id
    int *fki_branding_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_billingentityinternal_id
    int *fki_billingentityinternal_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id
    int *fki_ezsigntsarequirement_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_font_id_annotation
    int *fki_font_id_annotation_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_font_id_formfield
    int *fki_font_id_formfield_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_font_id_signature
    int *fki_font_id_signature_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->fki_pdfalevel_id_convert
    int *fki_pdfalevel_id_convert_local_var = NULL;

    // define the local list for ezsignfoldertype_request_v4->a_fki_pdfalevel_id
    list_t *a_fki_pdfalevel_idList = NULL;

    // define the local list for ezsignfoldertype_request_v4->a_fki_userlogintype_id
    list_t *a_fki_userlogintype_idList = NULL;

    // define the local list for ezsignfoldertype_request_v4->a_fki_usergroup_id_all
    list_t *a_fki_usergroup_id_allList = NULL;

    // define the local list for ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted
    list_t *a_fki_usergroup_id_restrictedList = NULL;

    // define the local list for ezsignfoldertype_request_v4->a_fki_usergroup_id_template
    list_t *a_fki_usergroup_id_templateList = NULL;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_signaturedatedisplay
    ezmax_api_definition__full_field_e_ezsignfoldertype_signaturedatedisplay__e e_ezsignfoldertype_signaturedatedisplay_local_nonprim = 0;

    char *s_ezsignfoldertype_signaturedatecustomformat_local_str = NULL;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_documentdependency
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_documentmerge
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge_local_nonprim = 0;

    char *s_email_address_signed_local_str = NULL;

    char *s_email_address_summary_local_str = NULL;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfarequirement
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfanoncompliantaction
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation
    int *i_ezsignfoldertype_fontsizeannotation_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield
    int *i_ezsignfoldertype_fontsizeformfield_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays
    int *i_ezsignfoldertype_sendreminderfirstdays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays
    int *i_ezsignfoldertype_sendreminderotherdays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays
    int *i_ezsignfoldertype_archivaldays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_disposal
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_completion
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays
    int *i_ezsignfoldertype_disposaldays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays
    int *i_ezsignfoldertype_deadlinedays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically
    int *b_ezsignfoldertype_prematurelyendautomatically_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays
    int *i_ezsignfoldertype_prematurelyendautomaticallydays_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature
    int *b_ezsignfoldertype_automaticsignature_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate
    int *b_ezsignfoldertype_delegate_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion
    int *b_ezsignfoldertype_discussion_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof
    int *b_ezsignfoldertype_logrecipientinproof_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner
    int *b_ezsignfoldertype_reassignezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser
    int *b_ezsignfoldertype_reassignuser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup
    int *b_ezsignfoldertype_reassigngroup_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail
    int *b_ezsignfoldertype_senddocumentmergetoemail_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner
    int *b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument
    int *b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser
    int *b_ezsignfoldertype_senddocumentmergetouser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner
    int *b_ezsignfoldertype_sendsignedtoezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser
    int *b_ezsignfoldertype_sendsignedtouser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner
    int *b_ezsignfoldertype_sendattachmentezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner
    int *b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment
    int *b_ezsignfoldertype_sendsignatureattachment_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner
    int *b_ezsignfoldertype_sendproofezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser
    int *b_ezsignfoldertype_sendattachmentuser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser
    int *b_ezsignfoldertype_sendsignatureattachmentuser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser
    int *b_ezsignfoldertype_sendproofuser_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail
    int *b_ezsignfoldertype_sendproofemail_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner
    int *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument
    int *b_ezsignfoldertype_sendproofreceivealldocument_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument
    int *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner
    int *b_ezsignfoldertype_sendsignedtodocumentowner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner
    int *b_ezsignfoldertype_sendsignedtofolderowner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup
    int *b_ezsignfoldertype_sendsignedtofullgroup_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup
    int *b_ezsignfoldertype_sendsignedtolimitedgroup_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague
    int *b_ezsignfoldertype_sendsignedtocolleague_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner
    int *b_ezsignfoldertype_sendsummarytodocumentowner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner
    int *b_ezsignfoldertype_sendsummarytofolderowner_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup
    int *b_ezsignfoldertype_sendsummarytofullgroup_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup
    int *b_ezsignfoldertype_sendsummarytolimitedgroup_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague
    int *b_ezsignfoldertype_sendsummarytocolleague_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_v4->e_ezsignfoldertype_signeraccess
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive
    int *b_ezsignfoldertype_isactive_local_var = NULL;

    // ezsignfoldertype_request_v4->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (pki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfoldertype_id_local_var = pki_ezsignfoldertype_id->valuedouble;
    }

    // ezsignfoldertype_request_v4->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "objEzsignfoldertypeName");
    if (cJSON_IsNull(obj_ezsignfoldertype_name)) {
        obj_ezsignfoldertype_name = NULL;
    }
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_request_v4->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiBrandingID");
    if (cJSON_IsNull(fki_branding_id)) {
        fki_branding_id = NULL;
    }
    if (!fki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }
    fki_branding_id_local_var = malloc(sizeof(int));
    if(!fki_branding_id_local_var)
    {
        goto end;
    }
    *fki_branding_id_local_var = fki_branding_id->valuedouble;

    // ezsignfoldertype_request_v4->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    fki_billingentityinternal_id_local_var = malloc(sizeof(int));
    if(!fki_billingentityinternal_id_local_var)
    {
        goto end;
    }
    *fki_billingentityinternal_id_local_var = fki_billingentityinternal_id->valuedouble;
    }

    // ezsignfoldertype_request_v4->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiEzsigntsarequirementID");
    if (cJSON_IsNull(fki_ezsigntsarequirement_id)) {
        fki_ezsigntsarequirement_id = NULL;
    }
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntsarequirement_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntsarequirement_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntsarequirement_id_local_var = fki_ezsigntsarequirement_id->valuedouble;
    }

    // ezsignfoldertype_request_v4->fki_font_id_annotation
    cJSON *fki_font_id_annotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiFontIDAnnotation");
    if (cJSON_IsNull(fki_font_id_annotation)) {
        fki_font_id_annotation = NULL;
    }
    if (fki_font_id_annotation) { 
    if(!cJSON_IsNumber(fki_font_id_annotation))
    {
    goto end; //Numeric
    }
    fki_font_id_annotation_local_var = malloc(sizeof(int));
    if(!fki_font_id_annotation_local_var)
    {
        goto end;
    }
    *fki_font_id_annotation_local_var = fki_font_id_annotation->valuedouble;
    }

    // ezsignfoldertype_request_v4->fki_font_id_formfield
    cJSON *fki_font_id_formfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiFontIDFormfield");
    if (cJSON_IsNull(fki_font_id_formfield)) {
        fki_font_id_formfield = NULL;
    }
    if (fki_font_id_formfield) { 
    if(!cJSON_IsNumber(fki_font_id_formfield))
    {
    goto end; //Numeric
    }
    fki_font_id_formfield_local_var = malloc(sizeof(int));
    if(!fki_font_id_formfield_local_var)
    {
        goto end;
    }
    *fki_font_id_formfield_local_var = fki_font_id_formfield->valuedouble;
    }

    // ezsignfoldertype_request_v4->fki_font_id_signature
    cJSON *fki_font_id_signature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiFontIDSignature");
    if (cJSON_IsNull(fki_font_id_signature)) {
        fki_font_id_signature = NULL;
    }
    if (fki_font_id_signature) { 
    if(!cJSON_IsNumber(fki_font_id_signature))
    {
    goto end; //Numeric
    }
    fki_font_id_signature_local_var = malloc(sizeof(int));
    if(!fki_font_id_signature_local_var)
    {
        goto end;
    }
    *fki_font_id_signature_local_var = fki_font_id_signature->valuedouble;
    }

    // ezsignfoldertype_request_v4->fki_pdfalevel_id_convert
    cJSON *fki_pdfalevel_id_convert = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "fkiPdfalevelIDConvert");
    if (cJSON_IsNull(fki_pdfalevel_id_convert)) {
        fki_pdfalevel_id_convert = NULL;
    }
    if (fki_pdfalevel_id_convert) { 
    if(!cJSON_IsNumber(fki_pdfalevel_id_convert))
    {
    goto end; //Numeric
    }
    fki_pdfalevel_id_convert_local_var = malloc(sizeof(int));
    if(!fki_pdfalevel_id_convert_local_var)
    {
        goto end;
    }
    *fki_pdfalevel_id_convert_local_var = fki_pdfalevel_id_convert->valuedouble;
    }

    // ezsignfoldertype_request_v4->a_fki_pdfalevel_id
    cJSON *a_fki_pdfalevel_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "a_fkiPdfalevelID");
    if (cJSON_IsNull(a_fki_pdfalevel_id)) {
        a_fki_pdfalevel_id = NULL;
    }
    if (a_fki_pdfalevel_id) { 
    cJSON *a_fki_pdfalevel_id_local = NULL;
    if(!cJSON_IsArray(a_fki_pdfalevel_id)) {
        goto end;//primitive container
    }
    a_fki_pdfalevel_idList = list_createList();

    cJSON_ArrayForEach(a_fki_pdfalevel_id_local, a_fki_pdfalevel_id)
    {
        if(!cJSON_IsNumber(a_fki_pdfalevel_id_local))
        {
            goto end;
        }
        double *a_fki_pdfalevel_id_local_value = calloc(1, sizeof(double));
        if(!a_fki_pdfalevel_id_local_value)
        {
            goto end;
        }
        *a_fki_pdfalevel_id_local_value = a_fki_pdfalevel_id_local->valuedouble;
        list_addElement(a_fki_pdfalevel_idList , a_fki_pdfalevel_id_local_value);
    }
    }

    // ezsignfoldertype_request_v4->a_fki_userlogintype_id
    cJSON *a_fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "a_fkiUserlogintypeID");
    if (cJSON_IsNull(a_fki_userlogintype_id)) {
        a_fki_userlogintype_id = NULL;
    }
    if (!a_fki_userlogintype_id) {
        goto end;
    }

    
    cJSON *a_fki_userlogintype_id_local = NULL;
    if(!cJSON_IsArray(a_fki_userlogintype_id)) {
        goto end;//primitive container
    }
    a_fki_userlogintype_idList = list_createList();

    cJSON_ArrayForEach(a_fki_userlogintype_id_local, a_fki_userlogintype_id)
    {
        if(!cJSON_IsNumber(a_fki_userlogintype_id_local))
        {
            goto end;
        }
        double *a_fki_userlogintype_id_local_value = calloc(1, sizeof(double));
        if(!a_fki_userlogintype_id_local_value)
        {
            goto end;
        }
        *a_fki_userlogintype_id_local_value = a_fki_userlogintype_id_local->valuedouble;
        list_addElement(a_fki_userlogintype_idList , a_fki_userlogintype_id_local_value);
    }

    // ezsignfoldertype_request_v4->a_fki_usergroup_id_all
    cJSON *a_fki_usergroup_id_all = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "a_fkiUsergroupIDAll");
    if (cJSON_IsNull(a_fki_usergroup_id_all)) {
        a_fki_usergroup_id_all = NULL;
    }
    if (a_fki_usergroup_id_all) { 
    cJSON *a_fki_usergroup_id_all_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_all)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_allList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_all_local, a_fki_usergroup_id_all)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_all_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_all_local_value = calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_all_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_all_local_value = a_fki_usergroup_id_all_local->valuedouble;
        list_addElement(a_fki_usergroup_id_allList , a_fki_usergroup_id_all_local_value);
    }
    }

    // ezsignfoldertype_request_v4->a_fki_usergroup_id_restricted
    cJSON *a_fki_usergroup_id_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "a_fkiUsergroupIDRestricted");
    if (cJSON_IsNull(a_fki_usergroup_id_restricted)) {
        a_fki_usergroup_id_restricted = NULL;
    }
    if (a_fki_usergroup_id_restricted) { 
    cJSON *a_fki_usergroup_id_restricted_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_restricted)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_restrictedList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_restricted_local, a_fki_usergroup_id_restricted)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_restricted_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_restricted_local_value = calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_restricted_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_restricted_local_value = a_fki_usergroup_id_restricted_local->valuedouble;
        list_addElement(a_fki_usergroup_id_restrictedList , a_fki_usergroup_id_restricted_local_value);
    }
    }

    // ezsignfoldertype_request_v4->a_fki_usergroup_id_template
    cJSON *a_fki_usergroup_id_template = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "a_fkiUsergroupIDTemplate");
    if (cJSON_IsNull(a_fki_usergroup_id_template)) {
        a_fki_usergroup_id_template = NULL;
    }
    if (a_fki_usergroup_id_template) { 
    cJSON *a_fki_usergroup_id_template_local = NULL;
    if(!cJSON_IsArray(a_fki_usergroup_id_template)) {
        goto end;//primitive container
    }
    a_fki_usergroup_id_templateList = list_createList();

    cJSON_ArrayForEach(a_fki_usergroup_id_template_local, a_fki_usergroup_id_template)
    {
        if(!cJSON_IsNumber(a_fki_usergroup_id_template_local))
        {
            goto end;
        }
        double *a_fki_usergroup_id_template_local_value = calloc(1, sizeof(double));
        if(!a_fki_usergroup_id_template_local_value)
        {
            goto end;
        }
        *a_fki_usergroup_id_template_local_value = a_fki_usergroup_id_template_local->valuedouble;
        list_addElement(a_fki_usergroup_id_templateList , a_fki_usergroup_id_template_local_value);
    }
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_signaturedatedisplay
    cJSON *e_ezsignfoldertype_signaturedatedisplay = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeSignaturedatedisplay");
    if (cJSON_IsNull(e_ezsignfoldertype_signaturedatedisplay)) {
        e_ezsignfoldertype_signaturedatedisplay = NULL;
    }
    if (!e_ezsignfoldertype_signaturedatedisplay) {
        goto end;
    }

    
    e_ezsignfoldertype_signaturedatedisplay_local_nonprim = field_e_ezsignfoldertype_signaturedatedisplay_parseFromJSON(e_ezsignfoldertype_signaturedatedisplay); //custom

    // ezsignfoldertype_request_v4->s_ezsignfoldertype_signaturedatecustomformat
    cJSON *s_ezsignfoldertype_signaturedatecustomformat = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "sEzsignfoldertypeSignaturedatecustomformat");
    if (cJSON_IsNull(s_ezsignfoldertype_signaturedatecustomformat)) {
        s_ezsignfoldertype_signaturedatecustomformat = NULL;
    }
    if (s_ezsignfoldertype_signaturedatecustomformat) { 
    if(!cJSON_IsString(s_ezsignfoldertype_signaturedatecustomformat) && !cJSON_IsNull(s_ezsignfoldertype_signaturedatecustomformat))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_documentdependency
    cJSON *e_ezsignfoldertype_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeDocumentdependency");
    if (cJSON_IsNull(e_ezsignfoldertype_documentdependency)) {
        e_ezsignfoldertype_documentdependency = NULL;
    }
    if (e_ezsignfoldertype_documentdependency) { 
    e_ezsignfoldertype_documentdependency_local_nonprim = field_e_ezsignfoldertype_documentdependency_parseFromJSON(e_ezsignfoldertype_documentdependency); //custom
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_documentmerge
    cJSON *e_ezsignfoldertype_documentmerge = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeDocumentmerge");
    if (cJSON_IsNull(e_ezsignfoldertype_documentmerge)) {
        e_ezsignfoldertype_documentmerge = NULL;
    }
    if (e_ezsignfoldertype_documentmerge) { 
    e_ezsignfoldertype_documentmerge_local_nonprim = field_e_ezsignfoldertype_documentmerge_parseFromJSON(e_ezsignfoldertype_documentmerge); //custom
    }

    // ezsignfoldertype_request_v4->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "sEmailAddressSigned");
    if (cJSON_IsNull(s_email_address_signed)) {
        s_email_address_signed = NULL;
    }
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed) && !cJSON_IsNull(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_v4->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "sEmailAddressSummary");
    if (cJSON_IsNull(s_email_address_summary)) {
        s_email_address_summary = NULL;
    }
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary) && !cJSON_IsNull(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfarequirement
    cJSON *e_ezsignfoldertype_pdfarequirement = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypePdfarequirement");
    if (cJSON_IsNull(e_ezsignfoldertype_pdfarequirement)) {
        e_ezsignfoldertype_pdfarequirement = NULL;
    }
    if (e_ezsignfoldertype_pdfarequirement) { 
    e_ezsignfoldertype_pdfarequirement_local_nonprim = field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(e_ezsignfoldertype_pdfarequirement); //custom
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_pdfanoncompliantaction
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypePdfanoncompliantaction");
    if (cJSON_IsNull(e_ezsignfoldertype_pdfanoncompliantaction)) {
        e_ezsignfoldertype_pdfanoncompliantaction = NULL;
    }
    if (e_ezsignfoldertype_pdfanoncompliantaction) { 
    e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(e_ezsignfoldertype_pdfanoncompliantaction); //custom
    }

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeannotation
    cJSON *i_ezsignfoldertype_fontsizeannotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeFontsizeannotation");
    if (cJSON_IsNull(i_ezsignfoldertype_fontsizeannotation)) {
        i_ezsignfoldertype_fontsizeannotation = NULL;
    }
    if (i_ezsignfoldertype_fontsizeannotation) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeannotation))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_fontsizeannotation_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_fontsizeannotation_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_fontsizeannotation_local_var = i_ezsignfoldertype_fontsizeannotation->valuedouble;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_fontsizeformfield
    cJSON *i_ezsignfoldertype_fontsizeformfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeFontsizeformfield");
    if (cJSON_IsNull(i_ezsignfoldertype_fontsizeformfield)) {
        i_ezsignfoldertype_fontsizeformfield = NULL;
    }
    if (i_ezsignfoldertype_fontsizeformfield) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeformfield))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_fontsizeformfield_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_fontsizeformfield_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_fontsizeformfield_local_var = i_ezsignfoldertype_fontsizeformfield->valuedouble;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderfirstdays
    cJSON *i_ezsignfoldertype_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeSendreminderfirstdays");
    if (cJSON_IsNull(i_ezsignfoldertype_sendreminderfirstdays)) {
        i_ezsignfoldertype_sendreminderfirstdays = NULL;
    }
    if (i_ezsignfoldertype_sendreminderfirstdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_sendreminderfirstdays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_sendreminderfirstdays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_sendreminderfirstdays_local_var = i_ezsignfoldertype_sendreminderfirstdays->valuedouble;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_sendreminderotherdays
    cJSON *i_ezsignfoldertype_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeSendreminderotherdays");
    if (cJSON_IsNull(i_ezsignfoldertype_sendreminderotherdays)) {
        i_ezsignfoldertype_sendreminderotherdays = NULL;
    }
    if (i_ezsignfoldertype_sendreminderotherdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_sendreminderotherdays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_sendreminderotherdays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_sendreminderotherdays_local_var = i_ezsignfoldertype_sendreminderotherdays->valuedouble;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeArchivaldays");
    if (cJSON_IsNull(i_ezsignfoldertype_archivaldays)) {
        i_ezsignfoldertype_archivaldays = NULL;
    }
    if (!i_ezsignfoldertype_archivaldays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_archivaldays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_archivaldays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_archivaldays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_archivaldays_local_var = i_ezsignfoldertype_archivaldays->valuedouble;

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeDisposal");
    if (cJSON_IsNull(e_ezsignfoldertype_disposal)) {
        e_ezsignfoldertype_disposal = NULL;
    }
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_completion
    cJSON *e_ezsignfoldertype_completion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeCompletion");
    if (cJSON_IsNull(e_ezsignfoldertype_completion)) {
        e_ezsignfoldertype_completion = NULL;
    }
    if (!e_ezsignfoldertype_completion) {
        goto end;
    }

    
    e_ezsignfoldertype_completion_local_nonprim = field_e_ezsignfoldertype_completion_parseFromJSON(e_ezsignfoldertype_completion); //custom

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeDisposaldays");
    if (cJSON_IsNull(i_ezsignfoldertype_disposaldays)) {
        i_ezsignfoldertype_disposaldays = NULL;
    }
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_disposaldays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_disposaldays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_disposaldays_local_var = i_ezsignfoldertype_disposaldays->valuedouble;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypeDeadlinedays");
    if (cJSON_IsNull(i_ezsignfoldertype_deadlinedays)) {
        i_ezsignfoldertype_deadlinedays = NULL;
    }
    if (!i_ezsignfoldertype_deadlinedays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_deadlinedays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_deadlinedays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_deadlinedays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_deadlinedays_local_var = i_ezsignfoldertype_deadlinedays->valuedouble;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_prematurelyendautomatically
    cJSON *b_ezsignfoldertype_prematurelyendautomatically = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypePrematurelyendautomatically");
    if (cJSON_IsNull(b_ezsignfoldertype_prematurelyendautomatically)) {
        b_ezsignfoldertype_prematurelyendautomatically = NULL;
    }
    if (b_ezsignfoldertype_prematurelyendautomatically) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_prematurelyendautomatically))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_prematurelyendautomatically_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_prematurelyendautomatically_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_prematurelyendautomatically_local_var = b_ezsignfoldertype_prematurelyendautomatically->valueint;
    }

    // ezsignfoldertype_request_v4->i_ezsignfoldertype_prematurelyendautomaticallydays
    cJSON *i_ezsignfoldertype_prematurelyendautomaticallydays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "iEzsignfoldertypePrematurelyendautomaticallydays");
    if (cJSON_IsNull(i_ezsignfoldertype_prematurelyendautomaticallydays)) {
        i_ezsignfoldertype_prematurelyendautomaticallydays = NULL;
    }
    if (i_ezsignfoldertype_prematurelyendautomaticallydays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_prematurelyendautomaticallydays))
    {
    goto end; //Numeric
    }
    i_ezsignfoldertype_prematurelyendautomaticallydays_local_var = malloc(sizeof(int));
    if(!i_ezsignfoldertype_prematurelyendautomaticallydays_local_var)
    {
        goto end;
    }
    *i_ezsignfoldertype_prematurelyendautomaticallydays_local_var = i_ezsignfoldertype_prematurelyendautomaticallydays->valuedouble;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_automaticsignature
    cJSON *b_ezsignfoldertype_automaticsignature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeAutomaticsignature");
    if (cJSON_IsNull(b_ezsignfoldertype_automaticsignature)) {
        b_ezsignfoldertype_automaticsignature = NULL;
    }
    if (b_ezsignfoldertype_automaticsignature) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_automaticsignature))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_automaticsignature_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_automaticsignature_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_automaticsignature_local_var = b_ezsignfoldertype_automaticsignature->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeDelegate");
    if (cJSON_IsNull(b_ezsignfoldertype_delegate)) {
        b_ezsignfoldertype_delegate = NULL;
    }
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_delegate_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_delegate_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_delegate_local_var = b_ezsignfoldertype_delegate->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeDiscussion");
    if (cJSON_IsNull(b_ezsignfoldertype_discussion)) {
        b_ezsignfoldertype_discussion = NULL;
    }
    if (b_ezsignfoldertype_discussion) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_discussion))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_discussion_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_discussion_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_discussion_local_var = b_ezsignfoldertype_discussion->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_logrecipientinproof
    cJSON *b_ezsignfoldertype_logrecipientinproof = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeLogrecipientinproof");
    if (cJSON_IsNull(b_ezsignfoldertype_logrecipientinproof)) {
        b_ezsignfoldertype_logrecipientinproof = NULL;
    }
    if (b_ezsignfoldertype_logrecipientinproof) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_logrecipientinproof))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_logrecipientinproof_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_logrecipientinproof_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_logrecipientinproof_local_var = b_ezsignfoldertype_logrecipientinproof->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeReassignezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_reassignezsignsigner)) {
        b_ezsignfoldertype_reassignezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_reassignezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_reassignezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_reassignezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_reassignezsignsigner_local_var = b_ezsignfoldertype_reassignezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeReassignuser");
    if (cJSON_IsNull(b_ezsignfoldertype_reassignuser)) {
        b_ezsignfoldertype_reassignuser = NULL;
    }
    if (b_ezsignfoldertype_reassignuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignuser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_reassignuser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_reassignuser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_reassignuser_local_var = b_ezsignfoldertype_reassignuser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_reassigngroup
    cJSON *b_ezsignfoldertype_reassigngroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeReassigngroup");
    if (cJSON_IsNull(b_ezsignfoldertype_reassigngroup)) {
        b_ezsignfoldertype_reassigngroup = NULL;
    }
    if (b_ezsignfoldertype_reassigngroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassigngroup))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_reassigngroup_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_reassigngroup_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_reassigngroup_local_var = b_ezsignfoldertype_reassigngroup->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoemail
    cJSON *b_ezsignfoldertype_senddocumentmergetoemail = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSenddocumentmergetoemail");
    if (cJSON_IsNull(b_ezsignfoldertype_senddocumentmergetoemail)) {
        b_ezsignfoldertype_senddocumentmergetoemail = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoemail) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_senddocumentmergetoemail))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_senddocumentmergetoemail_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_senddocumentmergetoemail_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_senddocumentmergetoemail_local_var = b_ezsignfoldertype_senddocumentmergetoemail->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoezsignsigner
    cJSON *b_ezsignfoldertype_senddocumentmergetoezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSenddocumentmergetoezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_senddocumentmergetoezsignsigner)) {
        b_ezsignfoldertype_senddocumentmergetoezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_senddocumentmergetoezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var = b_ezsignfoldertype_senddocumentmergetoezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetoreceivealldocument
    cJSON *b_ezsignfoldertype_senddocumentmergetoreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSenddocumentmergetoreceivealldocument");
    if (cJSON_IsNull(b_ezsignfoldertype_senddocumentmergetoreceivealldocument)) {
        b_ezsignfoldertype_senddocumentmergetoreceivealldocument = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_senddocumentmergetoreceivealldocument))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var = b_ezsignfoldertype_senddocumentmergetoreceivealldocument->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_senddocumentmergetouser
    cJSON *b_ezsignfoldertype_senddocumentmergetouser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSenddocumentmergetouser");
    if (cJSON_IsNull(b_ezsignfoldertype_senddocumentmergetouser)) {
        b_ezsignfoldertype_senddocumentmergetouser = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetouser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_senddocumentmergetouser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_senddocumentmergetouser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_senddocumentmergetouser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_senddocumentmergetouser_local_var = b_ezsignfoldertype_senddocumentmergetouser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtoezsignsigner
    cJSON *b_ezsignfoldertype_sendsignedtoezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtoezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtoezsignsigner)) {
        b_ezsignfoldertype_sendsignedtoezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtoezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtoezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtoezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtoezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtoezsignsigner_local_var = b_ezsignfoldertype_sendsignedtoezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtouser
    cJSON *b_ezsignfoldertype_sendsignedtouser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtouser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtouser)) {
        b_ezsignfoldertype_sendsignedtouser = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtouser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtouser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtouser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtouser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtouser_local_var = b_ezsignfoldertype_sendsignedtouser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentezsignsigner
    cJSON *b_ezsignfoldertype_sendattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendattachmentezsignsigner)) {
        b_ezsignfoldertype_sendattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendattachmentezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendattachmentezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendattachmentezsignsigner_local_var = b_ezsignfoldertype_sendattachmentezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentezsignsigner
    cJSON *b_ezsignfoldertype_sendsignatureattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignatureattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignatureattachmentezsignsigner)) {
        b_ezsignfoldertype_sendsignatureattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignatureattachmentezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var = b_ezsignfoldertype_sendsignatureattachmentezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachment
    cJSON *b_ezsignfoldertype_sendsignatureattachment = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignatureattachment");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignatureattachment)) {
        b_ezsignfoldertype_sendsignatureattachment = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachment) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignatureattachment))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignatureattachment_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignatureattachment_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignatureattachment_local_var = b_ezsignfoldertype_sendsignatureattachment->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendproofezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofezsignsigner)) {
        b_ezsignfoldertype_sendproofezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendproofezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendproofezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendproofezsignsigner_local_var = b_ezsignfoldertype_sendproofezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendattachmentuser
    cJSON *b_ezsignfoldertype_sendattachmentuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendattachmentuser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendattachmentuser)) {
        b_ezsignfoldertype_sendattachmentuser = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentuser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendattachmentuser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendattachmentuser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendattachmentuser_local_var = b_ezsignfoldertype_sendattachmentuser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentuser
    cJSON *b_ezsignfoldertype_sendsignatureattachmentuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignatureattachmentuser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignatureattachmentuser)) {
        b_ezsignfoldertype_sendsignatureattachmentuser = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignatureattachmentuser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignatureattachmentuser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignatureattachmentuser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignatureattachmentuser_local_var = b_ezsignfoldertype_sendsignatureattachmentuser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofuser
    cJSON *b_ezsignfoldertype_sendproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendproofuser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofuser)) {
        b_ezsignfoldertype_sendproofuser = NULL;
    }
    if (b_ezsignfoldertype_sendproofuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofuser))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendproofuser_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendproofuser_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendproofuser_local_var = b_ezsignfoldertype_sendproofuser->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofemail
    cJSON *b_ezsignfoldertype_sendproofemail = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendproofemail");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofemail)) {
        b_ezsignfoldertype_sendproofemail = NULL;
    }
    if (b_ezsignfoldertype_sendproofemail) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofemail))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendproofemail_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendproofemail_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendproofemail_local_var = b_ezsignfoldertype_sendproofemail->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadattachmentezsignsigner)) {
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadattachmentezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = b_ezsignfoldertype_allowdownloadattachmentezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeAllowdownloadsignatureattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner)) {
        b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var = b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadproofezsignsigner)) {
        b_ezsignfoldertype_allowdownloadproofezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = b_ezsignfoldertype_allowdownloadproofezsignsigner->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendproofreceivealldocument
    cJSON *b_ezsignfoldertype_sendproofreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendproofreceivealldocument");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofreceivealldocument)) {
        b_ezsignfoldertype_sendproofreceivealldocument = NULL;
    }
    if (b_ezsignfoldertype_sendproofreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofreceivealldocument))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendproofreceivealldocument_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendproofreceivealldocument_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendproofreceivealldocument_local_var = b_ezsignfoldertype_sendproofreceivealldocument->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignatureattachmentreceivealldocument
    cJSON *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignatureattachmentreceivealldocument");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignatureattachmentreceivealldocument)) {
        b_ezsignfoldertype_sendsignatureattachmentreceivealldocument = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignatureattachmentreceivealldocument))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var = b_ezsignfoldertype_sendsignatureattachmentreceivealldocument->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtodocumentowner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtodocumentowner)) {
        b_ezsignfoldertype_sendsignedtodocumentowner = NULL;
    }
    if (!b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtodocumentowner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtodocumentowner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtodocumentowner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtodocumentowner_local_var = b_ezsignfoldertype_sendsignedtodocumentowner->valueint;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtofolderowner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtofolderowner)) {
        b_ezsignfoldertype_sendsignedtofolderowner = NULL;
    }
    if (!b_ezsignfoldertype_sendsignedtofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofolderowner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtofolderowner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtofolderowner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtofolderowner_local_var = b_ezsignfoldertype_sendsignedtofolderowner->valueint;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtofullgroup)) {
        b_ezsignfoldertype_sendsignedtofullgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtofullgroup_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtofullgroup_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtofullgroup_local_var = b_ezsignfoldertype_sendsignedtofullgroup->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtolimitedgroup)) {
        b_ezsignfoldertype_sendsignedtolimitedgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtolimitedgroup_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtolimitedgroup_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtolimitedgroup_local_var = b_ezsignfoldertype_sendsignedtolimitedgroup->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsignedtocolleague");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtocolleague)) {
        b_ezsignfoldertype_sendsignedtocolleague = NULL;
    }
    if (!b_ezsignfoldertype_sendsignedtocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtocolleague))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsignedtocolleague_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsignedtocolleague_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsignedtocolleague_local_var = b_ezsignfoldertype_sendsignedtocolleague->valueint;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsummarytodocumentowner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytodocumentowner)) {
        b_ezsignfoldertype_sendsummarytodocumentowner = NULL;
    }
    if (!b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytodocumentowner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsummarytodocumentowner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsummarytodocumentowner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsummarytodocumentowner_local_var = b_ezsignfoldertype_sendsummarytodocumentowner->valueint;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsummarytofolderowner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytofolderowner)) {
        b_ezsignfoldertype_sendsummarytofolderowner = NULL;
    }
    if (!b_ezsignfoldertype_sendsummarytofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofolderowner))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsummarytofolderowner_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsummarytofolderowner_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsummarytofolderowner_local_var = b_ezsignfoldertype_sendsummarytofolderowner->valueint;

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytofullgroup)) {
        b_ezsignfoldertype_sendsummarytofullgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsummarytofullgroup_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsummarytofullgroup_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsummarytofullgroup_local_var = b_ezsignfoldertype_sendsummarytofullgroup->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytolimitedgroup)) {
        b_ezsignfoldertype_sendsummarytolimitedgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsummarytolimitedgroup_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsummarytolimitedgroup_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsummarytolimitedgroup_local_var = b_ezsignfoldertype_sendsummarytolimitedgroup->valueint;
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeSendsummarytocolleague");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytocolleague)) {
        b_ezsignfoldertype_sendsummarytocolleague = NULL;
    }
    if (!b_ezsignfoldertype_sendsummarytocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytocolleague))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_sendsummarytocolleague_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_sendsummarytocolleague_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_sendsummarytocolleague_local_var = b_ezsignfoldertype_sendsummarytocolleague->valueint;

    // ezsignfoldertype_request_v4->e_ezsignfoldertype_signeraccess
    cJSON *e_ezsignfoldertype_signeraccess = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "eEzsignfoldertypeSigneraccess");
    if (cJSON_IsNull(e_ezsignfoldertype_signeraccess)) {
        e_ezsignfoldertype_signeraccess = NULL;
    }
    if (e_ezsignfoldertype_signeraccess) { 
    e_ezsignfoldertype_signeraccess_local_nonprim = field_e_ezsignfoldertype_signeraccess_parseFromJSON(e_ezsignfoldertype_signeraccess); //custom
    }

    // ezsignfoldertype_request_v4->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_v4JSON, "bEzsignfoldertypeIsactive");
    if (cJSON_IsNull(b_ezsignfoldertype_isactive)) {
        b_ezsignfoldertype_isactive = NULL;
    }
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_isactive_local_var = b_ezsignfoldertype_isactive->valueint;


    if (s_ezsignfoldertype_signaturedatecustomformat && !cJSON_IsNull(s_ezsignfoldertype_signaturedatecustomformat)) s_ezsignfoldertype_signaturedatecustomformat_local_str = strdup(s_ezsignfoldertype_signaturedatecustomformat->valuestring);
    if (s_email_address_signed && !cJSON_IsNull(s_email_address_signed)) s_email_address_signed_local_str = strdup(s_email_address_signed->valuestring);
    if (s_email_address_summary && !cJSON_IsNull(s_email_address_summary)) s_email_address_summary_local_str = strdup(s_email_address_summary->valuestring);

    ezsignfoldertype_request_v4_local_var = ezsignfoldertype_request_v4_create_internal (
        pki_ezsignfoldertype_id_local_var,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id_local_var,
        fki_billingentityinternal_id_local_var,
        fki_ezsigntsarequirement_id_local_var,
        fki_font_id_annotation_local_var,
        fki_font_id_formfield_local_var,
        fki_font_id_signature_local_var,
        fki_pdfalevel_id_convert_local_var,
        a_fki_pdfalevel_id ? a_fki_pdfalevel_idList : NULL,
        a_fki_userlogintype_idList,
        a_fki_usergroup_id_all ? a_fki_usergroup_id_allList : NULL,
        a_fki_usergroup_id_restricted ? a_fki_usergroup_id_restrictedList : NULL,
        a_fki_usergroup_id_template ? a_fki_usergroup_id_templateList : NULL,
        e_ezsignfoldertype_signaturedatedisplay_local_nonprim,
        s_ezsignfoldertype_signaturedatecustomformat_local_str,
        e_ezsignfoldertype_documentdependency ? e_ezsignfoldertype_documentdependency_local_nonprim : 0,
        e_ezsignfoldertype_documentmerge ? e_ezsignfoldertype_documentmerge_local_nonprim : 0,
        s_email_address_signed_local_str,
        s_email_address_summary_local_str,
        e_ezsignfoldertype_pdfarequirement ? e_ezsignfoldertype_pdfarequirement_local_nonprim : 0,
        e_ezsignfoldertype_pdfanoncompliantaction ? e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim : 0,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        i_ezsignfoldertype_fontsizeannotation_local_var,
        i_ezsignfoldertype_fontsizeformfield_local_var,
        i_ezsignfoldertype_sendreminderfirstdays_local_var,
        i_ezsignfoldertype_sendreminderotherdays_local_var,
        i_ezsignfoldertype_archivaldays_local_var,
        e_ezsignfoldertype_disposal_local_nonprim,
        e_ezsignfoldertype_completion_local_nonprim,
        i_ezsignfoldertype_disposaldays_local_var,
        i_ezsignfoldertype_deadlinedays_local_var,
        b_ezsignfoldertype_prematurelyendautomatically_local_var,
        i_ezsignfoldertype_prematurelyendautomaticallydays_local_var,
        b_ezsignfoldertype_automaticsignature_local_var,
        b_ezsignfoldertype_delegate_local_var,
        b_ezsignfoldertype_discussion_local_var,
        b_ezsignfoldertype_logrecipientinproof_local_var,
        b_ezsignfoldertype_reassignezsignsigner_local_var,
        b_ezsignfoldertype_reassignuser_local_var,
        b_ezsignfoldertype_reassigngroup_local_var,
        b_ezsignfoldertype_senddocumentmergetoemail_local_var,
        b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var,
        b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var,
        b_ezsignfoldertype_senddocumentmergetouser_local_var,
        b_ezsignfoldertype_sendsignedtoezsignsigner_local_var,
        b_ezsignfoldertype_sendsignedtouser_local_var,
        b_ezsignfoldertype_sendattachmentezsignsigner_local_var,
        b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var,
        b_ezsignfoldertype_sendsignatureattachment_local_var,
        b_ezsignfoldertype_sendproofezsignsigner_local_var,
        b_ezsignfoldertype_sendattachmentuser_local_var,
        b_ezsignfoldertype_sendsignatureattachmentuser_local_var,
        b_ezsignfoldertype_sendproofuser_local_var,
        b_ezsignfoldertype_sendproofemail_local_var,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var,
        b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var,
        b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var,
        b_ezsignfoldertype_sendproofreceivealldocument_local_var,
        b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var,
        b_ezsignfoldertype_sendsignedtodocumentowner_local_var,
        b_ezsignfoldertype_sendsignedtofolderowner_local_var,
        b_ezsignfoldertype_sendsignedtofullgroup_local_var,
        b_ezsignfoldertype_sendsignedtolimitedgroup_local_var,
        b_ezsignfoldertype_sendsignedtocolleague_local_var,
        b_ezsignfoldertype_sendsummarytodocumentowner_local_var,
        b_ezsignfoldertype_sendsummarytofolderowner_local_var,
        b_ezsignfoldertype_sendsummarytofullgroup_local_var,
        b_ezsignfoldertype_sendsummarytolimitedgroup_local_var,
        b_ezsignfoldertype_sendsummarytocolleague_local_var,
        e_ezsignfoldertype_signeraccess ? e_ezsignfoldertype_signeraccess_local_nonprim : 0,
        b_ezsignfoldertype_isactive_local_var
        );

    if (!ezsignfoldertype_request_v4_local_var) {
        goto end;
    }

    return ezsignfoldertype_request_v4_local_var;
end:
    if (pki_ezsignfoldertype_id_local_var) {
        free(pki_ezsignfoldertype_id_local_var);
        pki_ezsignfoldertype_id_local_var = NULL;
    }
    if (obj_ezsignfoldertype_name_local_nonprim) {
        multilingual_ezsignfoldertype_name_free(obj_ezsignfoldertype_name_local_nonprim);
        obj_ezsignfoldertype_name_local_nonprim = NULL;
    }
    if (fki_branding_id_local_var) {
        free(fki_branding_id_local_var);
        fki_branding_id_local_var = NULL;
    }
    if (fki_billingentityinternal_id_local_var) {
        free(fki_billingentityinternal_id_local_var);
        fki_billingentityinternal_id_local_var = NULL;
    }
    if (fki_ezsigntsarequirement_id_local_var) {
        free(fki_ezsigntsarequirement_id_local_var);
        fki_ezsigntsarequirement_id_local_var = NULL;
    }
    if (fki_font_id_annotation_local_var) {
        free(fki_font_id_annotation_local_var);
        fki_font_id_annotation_local_var = NULL;
    }
    if (fki_font_id_formfield_local_var) {
        free(fki_font_id_formfield_local_var);
        fki_font_id_formfield_local_var = NULL;
    }
    if (fki_font_id_signature_local_var) {
        free(fki_font_id_signature_local_var);
        fki_font_id_signature_local_var = NULL;
    }
    if (fki_pdfalevel_id_convert_local_var) {
        free(fki_pdfalevel_id_convert_local_var);
        fki_pdfalevel_id_convert_local_var = NULL;
    }
    if (a_fki_pdfalevel_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_pdfalevel_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_pdfalevel_idList);
        a_fki_pdfalevel_idList = NULL;
    }
    if (a_fki_userlogintype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_userlogintype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_userlogintype_idList);
        a_fki_userlogintype_idList = NULL;
    }
    if (a_fki_usergroup_id_allList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_allList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_allList);
        a_fki_usergroup_id_allList = NULL;
    }
    if (a_fki_usergroup_id_restrictedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_restrictedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_restrictedList);
        a_fki_usergroup_id_restrictedList = NULL;
    }
    if (a_fki_usergroup_id_templateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_usergroup_id_templateList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_usergroup_id_templateList);
        a_fki_usergroup_id_templateList = NULL;
    }
    if (e_ezsignfoldertype_signaturedatedisplay_local_nonprim) {
        e_ezsignfoldertype_signaturedatedisplay_local_nonprim = 0;
    }
    if (s_ezsignfoldertype_signaturedatecustomformat_local_str) {
        free(s_ezsignfoldertype_signaturedatecustomformat_local_str);
        s_ezsignfoldertype_signaturedatecustomformat_local_str = NULL;
    }
    if (e_ezsignfoldertype_documentdependency_local_nonprim) {
        e_ezsignfoldertype_documentdependency_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_documentmerge_local_nonprim) {
        e_ezsignfoldertype_documentmerge_local_nonprim = 0;
    }
    if (s_email_address_signed_local_str) {
        free(s_email_address_signed_local_str);
        s_email_address_signed_local_str = NULL;
    }
    if (s_email_address_summary_local_str) {
        free(s_email_address_summary_local_str);
        s_email_address_summary_local_str = NULL;
    }
    if (e_ezsignfoldertype_pdfarequirement_local_nonprim) {
        e_ezsignfoldertype_pdfarequirement_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim) {
        e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (i_ezsignfoldertype_fontsizeannotation_local_var) {
        free(i_ezsignfoldertype_fontsizeannotation_local_var);
        i_ezsignfoldertype_fontsizeannotation_local_var = NULL;
    }
    if (i_ezsignfoldertype_fontsizeformfield_local_var) {
        free(i_ezsignfoldertype_fontsizeformfield_local_var);
        i_ezsignfoldertype_fontsizeformfield_local_var = NULL;
    }
    if (i_ezsignfoldertype_sendreminderfirstdays_local_var) {
        free(i_ezsignfoldertype_sendreminderfirstdays_local_var);
        i_ezsignfoldertype_sendreminderfirstdays_local_var = NULL;
    }
    if (i_ezsignfoldertype_sendreminderotherdays_local_var) {
        free(i_ezsignfoldertype_sendreminderotherdays_local_var);
        i_ezsignfoldertype_sendreminderotherdays_local_var = NULL;
    }
    if (i_ezsignfoldertype_archivaldays_local_var) {
        free(i_ezsignfoldertype_archivaldays_local_var);
        i_ezsignfoldertype_archivaldays_local_var = NULL;
    }
    if (e_ezsignfoldertype_disposal_local_nonprim) {
        e_ezsignfoldertype_disposal_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_completion_local_nonprim) {
        e_ezsignfoldertype_completion_local_nonprim = 0;
    }
    if (i_ezsignfoldertype_disposaldays_local_var) {
        free(i_ezsignfoldertype_disposaldays_local_var);
        i_ezsignfoldertype_disposaldays_local_var = NULL;
    }
    if (i_ezsignfoldertype_deadlinedays_local_var) {
        free(i_ezsignfoldertype_deadlinedays_local_var);
        i_ezsignfoldertype_deadlinedays_local_var = NULL;
    }
    if (b_ezsignfoldertype_prematurelyendautomatically_local_var) {
        free(b_ezsignfoldertype_prematurelyendautomatically_local_var);
        b_ezsignfoldertype_prematurelyendautomatically_local_var = NULL;
    }
    if (i_ezsignfoldertype_prematurelyendautomaticallydays_local_var) {
        free(i_ezsignfoldertype_prematurelyendautomaticallydays_local_var);
        i_ezsignfoldertype_prematurelyendautomaticallydays_local_var = NULL;
    }
    if (b_ezsignfoldertype_automaticsignature_local_var) {
        free(b_ezsignfoldertype_automaticsignature_local_var);
        b_ezsignfoldertype_automaticsignature_local_var = NULL;
    }
    if (b_ezsignfoldertype_delegate_local_var) {
        free(b_ezsignfoldertype_delegate_local_var);
        b_ezsignfoldertype_delegate_local_var = NULL;
    }
    if (b_ezsignfoldertype_discussion_local_var) {
        free(b_ezsignfoldertype_discussion_local_var);
        b_ezsignfoldertype_discussion_local_var = NULL;
    }
    if (b_ezsignfoldertype_logrecipientinproof_local_var) {
        free(b_ezsignfoldertype_logrecipientinproof_local_var);
        b_ezsignfoldertype_logrecipientinproof_local_var = NULL;
    }
    if (b_ezsignfoldertype_reassignezsignsigner_local_var) {
        free(b_ezsignfoldertype_reassignezsignsigner_local_var);
        b_ezsignfoldertype_reassignezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_reassignuser_local_var) {
        free(b_ezsignfoldertype_reassignuser_local_var);
        b_ezsignfoldertype_reassignuser_local_var = NULL;
    }
    if (b_ezsignfoldertype_reassigngroup_local_var) {
        free(b_ezsignfoldertype_reassigngroup_local_var);
        b_ezsignfoldertype_reassigngroup_local_var = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoemail_local_var) {
        free(b_ezsignfoldertype_senddocumentmergetoemail_local_var);
        b_ezsignfoldertype_senddocumentmergetoemail_local_var = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var) {
        free(b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var);
        b_ezsignfoldertype_senddocumentmergetoezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var) {
        free(b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var);
        b_ezsignfoldertype_senddocumentmergetoreceivealldocument_local_var = NULL;
    }
    if (b_ezsignfoldertype_senddocumentmergetouser_local_var) {
        free(b_ezsignfoldertype_senddocumentmergetouser_local_var);
        b_ezsignfoldertype_senddocumentmergetouser_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtoezsignsigner_local_var) {
        free(b_ezsignfoldertype_sendsignedtoezsignsigner_local_var);
        b_ezsignfoldertype_sendsignedtoezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtouser_local_var) {
        free(b_ezsignfoldertype_sendsignedtouser_local_var);
        b_ezsignfoldertype_sendsignedtouser_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentezsignsigner_local_var) {
        free(b_ezsignfoldertype_sendattachmentezsignsigner_local_var);
        b_ezsignfoldertype_sendattachmentezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var) {
        free(b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var);
        b_ezsignfoldertype_sendsignatureattachmentezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachment_local_var) {
        free(b_ezsignfoldertype_sendsignatureattachment_local_var);
        b_ezsignfoldertype_sendsignatureattachment_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendproofezsignsigner_local_var) {
        free(b_ezsignfoldertype_sendproofezsignsigner_local_var);
        b_ezsignfoldertype_sendproofezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentuser_local_var) {
        free(b_ezsignfoldertype_sendattachmentuser_local_var);
        b_ezsignfoldertype_sendattachmentuser_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentuser_local_var) {
        free(b_ezsignfoldertype_sendsignatureattachmentuser_local_var);
        b_ezsignfoldertype_sendsignatureattachmentuser_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendproofuser_local_var) {
        free(b_ezsignfoldertype_sendproofuser_local_var);
        b_ezsignfoldertype_sendproofuser_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendproofemail_local_var) {
        free(b_ezsignfoldertype_sendproofemail_local_var);
        b_ezsignfoldertype_sendproofemail_local_var = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var) {
        free(b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var);
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var) {
        free(b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var);
        b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var) {
        free(b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var);
        b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendproofreceivealldocument_local_var) {
        free(b_ezsignfoldertype_sendproofreceivealldocument_local_var);
        b_ezsignfoldertype_sendproofreceivealldocument_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var) {
        free(b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var);
        b_ezsignfoldertype_sendsignatureattachmentreceivealldocument_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtodocumentowner_local_var) {
        free(b_ezsignfoldertype_sendsignedtodocumentowner_local_var);
        b_ezsignfoldertype_sendsignedtodocumentowner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtofolderowner_local_var) {
        free(b_ezsignfoldertype_sendsignedtofolderowner_local_var);
        b_ezsignfoldertype_sendsignedtofolderowner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtofullgroup_local_var) {
        free(b_ezsignfoldertype_sendsignedtofullgroup_local_var);
        b_ezsignfoldertype_sendsignedtofullgroup_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtolimitedgroup_local_var) {
        free(b_ezsignfoldertype_sendsignedtolimitedgroup_local_var);
        b_ezsignfoldertype_sendsignedtolimitedgroup_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtocolleague_local_var) {
        free(b_ezsignfoldertype_sendsignedtocolleague_local_var);
        b_ezsignfoldertype_sendsignedtocolleague_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytodocumentowner_local_var) {
        free(b_ezsignfoldertype_sendsummarytodocumentowner_local_var);
        b_ezsignfoldertype_sendsummarytodocumentowner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytofolderowner_local_var) {
        free(b_ezsignfoldertype_sendsummarytofolderowner_local_var);
        b_ezsignfoldertype_sendsummarytofolderowner_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytofullgroup_local_var) {
        free(b_ezsignfoldertype_sendsummarytofullgroup_local_var);
        b_ezsignfoldertype_sendsummarytofullgroup_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytolimitedgroup_local_var) {
        free(b_ezsignfoldertype_sendsummarytolimitedgroup_local_var);
        b_ezsignfoldertype_sendsummarytolimitedgroup_local_var = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytocolleague_local_var) {
        free(b_ezsignfoldertype_sendsummarytocolleague_local_var);
        b_ezsignfoldertype_sendsummarytocolleague_local_var = NULL;
    }
    if (e_ezsignfoldertype_signeraccess_local_nonprim) {
        e_ezsignfoldertype_signeraccess_local_nonprim = 0;
    }
    if (b_ezsignfoldertype_isactive_local_var) {
        free(b_ezsignfoldertype_isactive_local_var);
        b_ezsignfoldertype_isactive_local_var = NULL;
    }
    return NULL;

}
