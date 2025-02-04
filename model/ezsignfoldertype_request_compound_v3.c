#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_request_compound_v3.h"



static ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_create_internal(
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
    int b_ezsignfoldertype_sendattachmentreceivecopy,
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
    int b_ezsignfoldertype_isactive,
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
    ) {
    ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_local_var = malloc(sizeof(ezsignfoldertype_request_compound_v3_t));
    if (!ezsignfoldertype_request_compound_v3_local_var) {
        return NULL;
    }
    ezsignfoldertype_request_compound_v3_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_request_compound_v3_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_request_compound_v3_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_request_compound_v3_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_request_compound_v3_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_request_compound_v3_local_var->fki_font_id_annotation = fki_font_id_annotation;
    ezsignfoldertype_request_compound_v3_local_var->fki_font_id_formfield = fki_font_id_formfield;
    ezsignfoldertype_request_compound_v3_local_var->fki_font_id_signature = fki_font_id_signature;
    ezsignfoldertype_request_compound_v3_local_var->fki_pdfalevel_id_convert = fki_pdfalevel_id_convert;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_pdfalevel_id = a_fki_pdfalevel_id;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_userlogintype_id = a_fki_userlogintype_id;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_usergroup_id_all = a_fki_usergroup_id_all;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_usergroup_id_restricted = a_fki_usergroup_id_restricted;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_usergroup_id_template = a_fki_usergroup_id_template;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_documentdependency = e_ezsignfoldertype_documentdependency;
    ezsignfoldertype_request_compound_v3_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_request_compound_v3_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_pdfarequirement = e_ezsignfoldertype_pdfarequirement;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_pdfanoncompliantaction = e_ezsignfoldertype_pdfanoncompliantaction;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_fontsizeannotation = i_ezsignfoldertype_fontsizeannotation;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_fontsizeformfield = i_ezsignfoldertype_fontsizeformfield;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_sendreminderfirstdays = i_ezsignfoldertype_sendreminderfirstdays;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_sendreminderotherdays = i_ezsignfoldertype_sendreminderotherdays;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_completion = e_ezsignfoldertype_completion;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_prematurelyendautomatically = b_ezsignfoldertype_prematurelyendautomatically;
    ezsignfoldertype_request_compound_v3_local_var->i_ezsignfoldertype_prematurelyendautomaticallydays = i_ezsignfoldertype_prematurelyendautomaticallydays;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_automaticsignature = b_ezsignfoldertype_automaticsignature;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_logrecipientinproof = b_ezsignfoldertype_logrecipientinproof;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_reassigngroup = b_ezsignfoldertype_reassigngroup;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtoezsignsigner = b_ezsignfoldertype_sendsignedtoezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtouser = b_ezsignfoldertype_sendsignedtouser;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendattachmentezsignsigner = b_ezsignfoldertype_sendattachmentezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendattachmentreceivecopy = b_ezsignfoldertype_sendattachmentreceivecopy;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendattachmentuser = b_ezsignfoldertype_sendattachmentuser;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendproofuser = b_ezsignfoldertype_sendproofuser;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendproofemail = b_ezsignfoldertype_sendproofemail;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendproofreceivealldocument = b_ezsignfoldertype_sendproofreceivealldocument;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_request_compound_v3_local_var->e_ezsignfoldertype_signeraccess = e_ezsignfoldertype_signeraccess;
    ezsignfoldertype_request_compound_v3_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_user_id_signed = a_fki_user_id_signed;
    ezsignfoldertype_request_compound_v3_local_var->a_fki_user_id_summary = a_fki_user_id_summary;

    ezsignfoldertype_request_compound_v3_local_var->_library_owned = 1;
    return ezsignfoldertype_request_compound_v3_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_create(
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
    int b_ezsignfoldertype_sendattachmentreceivecopy,
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
    int b_ezsignfoldertype_isactive,
    list_t *a_fki_user_id_signed,
    list_t *a_fki_user_id_summary
    ) {
    return ezsignfoldertype_request_compound_v3_create_internal (
        pki_ezsignfoldertype_id,
        obj_ezsignfoldertype_name,
        fki_branding_id,
        fki_billingentityinternal_id,
        fki_ezsigntsarequirement_id,
        fki_font_id_annotation,
        fki_font_id_formfield,
        fki_font_id_signature,
        fki_pdfalevel_id_convert,
        a_fki_pdfalevel_id,
        a_fki_userlogintype_id,
        a_fki_usergroup_id_all,
        a_fki_usergroup_id_restricted,
        a_fki_usergroup_id_template,
        e_ezsignfoldertype_documentdependency,
        s_email_address_signed,
        s_email_address_summary,
        e_ezsignfoldertype_pdfarequirement,
        e_ezsignfoldertype_pdfanoncompliantaction,
        e_ezsignfoldertype_privacylevel,
        i_ezsignfoldertype_fontsizeannotation,
        i_ezsignfoldertype_fontsizeformfield,
        i_ezsignfoldertype_sendreminderfirstdays,
        i_ezsignfoldertype_sendreminderotherdays,
        i_ezsignfoldertype_archivaldays,
        e_ezsignfoldertype_disposal,
        e_ezsignfoldertype_completion,
        i_ezsignfoldertype_disposaldays,
        i_ezsignfoldertype_deadlinedays,
        b_ezsignfoldertype_prematurelyendautomatically,
        i_ezsignfoldertype_prematurelyendautomaticallydays,
        b_ezsignfoldertype_automaticsignature,
        b_ezsignfoldertype_delegate,
        b_ezsignfoldertype_discussion,
        b_ezsignfoldertype_logrecipientinproof,
        b_ezsignfoldertype_reassignezsignsigner,
        b_ezsignfoldertype_reassignuser,
        b_ezsignfoldertype_reassigngroup,
        b_ezsignfoldertype_sendsignedtoezsignsigner,
        b_ezsignfoldertype_sendsignedtouser,
        b_ezsignfoldertype_sendattachmentezsignsigner,
        b_ezsignfoldertype_sendproofezsignsigner,
        b_ezsignfoldertype_sendattachmentreceivecopy,
        b_ezsignfoldertype_sendattachmentuser,
        b_ezsignfoldertype_sendproofuser,
        b_ezsignfoldertype_sendproofemail,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
        b_ezsignfoldertype_allowdownloadproofezsignsigner,
        b_ezsignfoldertype_sendproofreceivealldocument,
        b_ezsignfoldertype_sendsignedtodocumentowner,
        b_ezsignfoldertype_sendsignedtofolderowner,
        b_ezsignfoldertype_sendsignedtofullgroup,
        b_ezsignfoldertype_sendsignedtolimitedgroup,
        b_ezsignfoldertype_sendsignedtocolleague,
        b_ezsignfoldertype_sendsummarytodocumentowner,
        b_ezsignfoldertype_sendsummarytofolderowner,
        b_ezsignfoldertype_sendsummarytofullgroup,
        b_ezsignfoldertype_sendsummarytolimitedgroup,
        b_ezsignfoldertype_sendsummarytocolleague,
        e_ezsignfoldertype_signeraccess,
        b_ezsignfoldertype_isactive,
        a_fki_user_id_signed,
        a_fki_user_id_summary
        );
}

void ezsignfoldertype_request_compound_v3_free(ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3) {
    if(NULL == ezsignfoldertype_request_compound_v3){
        return ;
    }
    if(ezsignfoldertype_request_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_request_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name);
        ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id);
        ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id);
        ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all);
        ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted);
        ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template);
        ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->s_email_address_signed) {
        free(ezsignfoldertype_request_compound_v3->s_email_address_signed);
        ezsignfoldertype_request_compound_v3->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->s_email_address_summary) {
        free(ezsignfoldertype_request_compound_v3->s_email_address_summary);
        ezsignfoldertype_request_compound_v3->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_user_id_signed) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_user_id_signed) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_user_id_signed);
        ezsignfoldertype_request_compound_v3->a_fki_user_id_signed = NULL;
    }
    if (ezsignfoldertype_request_compound_v3->a_fki_user_id_summary) {
        list_ForEach(listEntry, ezsignfoldertype_request_compound_v3->a_fki_user_id_summary) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_request_compound_v3->a_fki_user_id_summary);
        ezsignfoldertype_request_compound_v3->a_fki_user_id_summary = NULL;
    }
    free(ezsignfoldertype_request_compound_v3);
}

cJSON *ezsignfoldertype_request_compound_v3_convertToJSON(ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_request_compound_v3->pki_ezsignfoldertype_id
    if(ezsignfoldertype_request_compound_v3->pki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_request_compound_v3->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_request_compound_v3->fki_branding_id
    if (!ezsignfoldertype_request_compound_v3->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", ezsignfoldertype_request_compound_v3->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_compound_v3->fki_billingentityinternal_id
    if(ezsignfoldertype_request_compound_v3->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfoldertype_request_compound_v3->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_request_compound_v3->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfoldertype_request_compound_v3->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->fki_font_id_annotation
    if(ezsignfoldertype_request_compound_v3->fki_font_id_annotation) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDAnnotation", ezsignfoldertype_request_compound_v3->fki_font_id_annotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->fki_font_id_formfield
    if(ezsignfoldertype_request_compound_v3->fki_font_id_formfield) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDFormfield", ezsignfoldertype_request_compound_v3->fki_font_id_formfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->fki_font_id_signature
    if(ezsignfoldertype_request_compound_v3->fki_font_id_signature) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDSignature", ezsignfoldertype_request_compound_v3->fki_font_id_signature) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->fki_pdfalevel_id_convert
    if(ezsignfoldertype_request_compound_v3->fki_pdfalevel_id_convert) {
    if(cJSON_AddNumberToObject(item, "fkiPdfalevelIDConvert", ezsignfoldertype_request_compound_v3->fki_pdfalevel_id_convert) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id
    if(ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id) {
    cJSON *a_fki_pdfalevel_id = cJSON_AddArrayToObject(item, "a_fkiPdfalevelID");
    if(a_fki_pdfalevel_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_pdfalevel_idListEntry;
    list_ForEach(a_fki_pdfalevel_idListEntry, ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id) {
    if(cJSON_AddNumberToObject(a_fki_pdfalevel_id, "", *(double *)a_fki_pdfalevel_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id
    if (!ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id) {
        goto fail;
    }
    cJSON *a_fki_userlogintype_id = cJSON_AddArrayToObject(item, "a_fkiUserlogintypeID");
    if(a_fki_userlogintype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_userlogintype_idListEntry;
    list_ForEach(a_fki_userlogintype_idListEntry, ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id) {
    if(cJSON_AddNumberToObject(a_fki_userlogintype_id, "", *(double *)a_fki_userlogintype_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all
    if(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all) {
    cJSON *a_fki_usergroup_id_all = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDAll");
    if(a_fki_usergroup_id_all == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_allListEntry;
    list_ForEach(a_fki_usergroup_id_allListEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_all, "", *(double *)a_fki_usergroup_id_allListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted
    if(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted) {
    cJSON *a_fki_usergroup_id_restricted = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDRestricted");
    if(a_fki_usergroup_id_restricted == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_restrictedListEntry;
    list_ForEach(a_fki_usergroup_id_restrictedListEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_restricted, "", *(double *)a_fki_usergroup_id_restrictedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template
    if(ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template) {
    cJSON *a_fki_usergroup_id_template = cJSON_AddArrayToObject(item, "a_fkiUsergroupIDTemplate");
    if(a_fki_usergroup_id_template == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_usergroup_id_templateListEntry;
    list_ForEach(a_fki_usergroup_id_templateListEntry, ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template) {
    if(cJSON_AddNumberToObject(a_fki_usergroup_id_template, "", *(double *)a_fki_usergroup_id_templateListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_documentdependency
    if(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_documentdependency != ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__NULL) {
    cJSON *e_ezsignfoldertype_documentdependency_local_JSON = field_e_ezsignfoldertype_documentdependency_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_documentdependency);
    if(e_ezsignfoldertype_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDocumentdependency", e_ezsignfoldertype_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_compound_v3->s_email_address_signed
    if(ezsignfoldertype_request_compound_v3->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_request_compound_v3->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_compound_v3->s_email_address_summary
    if(ezsignfoldertype_request_compound_v3->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_request_compound_v3->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfarequirement
    if(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfarequirement != ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__NULL) {
    cJSON *e_ezsignfoldertype_pdfarequirement_local_JSON = field_e_ezsignfoldertype_pdfarequirement_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfarequirement);
    if(e_ezsignfoldertype_pdfarequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfarequirement", e_ezsignfoldertype_pdfarequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfanoncompliantaction
    if(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfanoncompliantaction != ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__NULL) {
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction_local_JSON = field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfanoncompliantaction);
    if(e_ezsignfoldertype_pdfanoncompliantaction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfanoncompliantaction", e_ezsignfoldertype_pdfanoncompliantaction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeannotation
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeannotation) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeannotation", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeannotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeformfield
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeformfield) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeformfield", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeformfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderfirstdays
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderfirstdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderfirstdays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderotherdays
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderotherdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderotherdays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__NULL == ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_completion
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_completion__NULL == ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_completion) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_completion_local_JSON = field_e_ezsignfoldertype_completion_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_completion);
    if(e_ezsignfoldertype_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeCompletion", e_ezsignfoldertype_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_prematurelyendautomatically
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_prematurelyendautomatically) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypePrematurelyendautomatically", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_prematurelyendautomatically) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_prematurelyendautomaticallydays
    if(ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_prematurelyendautomaticallydays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypePrematurelyendautomaticallydays", ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_prematurelyendautomaticallydays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_automaticsignature
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_automaticsignature) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAutomaticsignature", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_automaticsignature) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_delegate
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_discussion
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_logrecipientinproof
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_logrecipientinproof) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeLogrecipientinproof", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_logrecipientinproof) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignuser
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassigngroup
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassigngroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassigngroup", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassigngroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtoezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtoezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtoezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtoezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtouser
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtouser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtouser", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtouser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentreceivecopy
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentreceivecopy) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentreceivecopy", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentreceivecopy) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentuser
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentuser", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofuser
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofuser", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofemail
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofemail) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofemail", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofemail) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofreceivealldocument
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofreceivealldocument", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_signeraccess
    if(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_signeraccess != ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__NULL) {
    cJSON *e_ezsignfoldertype_signeraccess_local_JSON = field_e_ezsignfoldertype_signeraccess_convertToJSON(ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_signeraccess);
    if(e_ezsignfoldertype_signeraccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSigneraccess", e_ezsignfoldertype_signeraccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_request_compound_v3->a_fki_user_id_signed
    if(ezsignfoldertype_request_compound_v3->a_fki_user_id_signed) {
    cJSON *a_fki_user_id_signed = cJSON_AddArrayToObject(item, "a_fkiUserIDSigned");
    if(a_fki_user_id_signed == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_signedListEntry;
    list_ForEach(a_fki_user_id_signedListEntry, ezsignfoldertype_request_compound_v3->a_fki_user_id_signed) {
    if(cJSON_AddNumberToObject(a_fki_user_id_signed, "", *(double *)a_fki_user_id_signedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_request_compound_v3->a_fki_user_id_summary
    if(ezsignfoldertype_request_compound_v3->a_fki_user_id_summary) {
    cJSON *a_fki_user_id_summary = cJSON_AddArrayToObject(item, "a_fkiUserIDSummary");
    if(a_fki_user_id_summary == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_id_summaryListEntry;
    list_ForEach(a_fki_user_id_summaryListEntry, ezsignfoldertype_request_compound_v3->a_fki_user_id_summary) {
    if(cJSON_AddNumberToObject(a_fki_user_id_summary, "", *(double *)a_fki_user_id_summaryListEntry->data) == NULL)
    {
        goto fail;
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

ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_parseFromJSON(cJSON *ezsignfoldertype_request_compound_v3JSON){

    ezsignfoldertype_request_compound_v3_t *ezsignfoldertype_request_compound_v3_local_var = NULL;

    // define the local variable for ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id
    list_t *a_fki_pdfalevel_idList = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id
    list_t *a_fki_userlogintype_idList = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all
    list_t *a_fki_usergroup_id_allList = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted
    list_t *a_fki_usergroup_id_restrictedList = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template
    list_t *a_fki_usergroup_id_templateList = NULL;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_documentdependency
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentdependency__e e_ezsignfoldertype_documentdependency_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfarequirement
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e e_ezsignfoldertype_pdfarequirement_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfanoncompliantaction
    ezmax_api_definition__full_field_e_ezsignfoldertype_pdfanoncompliantaction__e e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_disposal
    ezmax_api_definition__full_field_e_ezsignfoldertype_disposal__e e_ezsignfoldertype_disposal_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_completion
    ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e e_ezsignfoldertype_completion_local_nonprim = 0;

    // define the local variable for ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_signeraccess
    ezmax_api_definition__full_field_e_ezsignfoldertype_signeraccess__e e_ezsignfoldertype_signeraccess_local_nonprim = 0;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_user_id_signed
    list_t *a_fki_user_id_signedList = NULL;

    // define the local list for ezsignfoldertype_request_compound_v3->a_fki_user_id_summary
    list_t *a_fki_user_id_summaryList = NULL;

    // ezsignfoldertype_request_compound_v3->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (pki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "objEzsignfoldertypeName");
    if (cJSON_IsNull(obj_ezsignfoldertype_name)) {
        obj_ezsignfoldertype_name = NULL;
    }
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_request_compound_v3->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiBrandingID");
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

    // ezsignfoldertype_request_compound_v3->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiEzsigntsarequirementID");
    if (cJSON_IsNull(fki_ezsigntsarequirement_id)) {
        fki_ezsigntsarequirement_id = NULL;
    }
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->fki_font_id_annotation
    cJSON *fki_font_id_annotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiFontIDAnnotation");
    if (cJSON_IsNull(fki_font_id_annotation)) {
        fki_font_id_annotation = NULL;
    }
    if (fki_font_id_annotation) { 
    if(!cJSON_IsNumber(fki_font_id_annotation))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->fki_font_id_formfield
    cJSON *fki_font_id_formfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiFontIDFormfield");
    if (cJSON_IsNull(fki_font_id_formfield)) {
        fki_font_id_formfield = NULL;
    }
    if (fki_font_id_formfield) { 
    if(!cJSON_IsNumber(fki_font_id_formfield))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->fki_font_id_signature
    cJSON *fki_font_id_signature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiFontIDSignature");
    if (cJSON_IsNull(fki_font_id_signature)) {
        fki_font_id_signature = NULL;
    }
    if (fki_font_id_signature) { 
    if(!cJSON_IsNumber(fki_font_id_signature))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->fki_pdfalevel_id_convert
    cJSON *fki_pdfalevel_id_convert = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "fkiPdfalevelIDConvert");
    if (cJSON_IsNull(fki_pdfalevel_id_convert)) {
        fki_pdfalevel_id_convert = NULL;
    }
    if (fki_pdfalevel_id_convert) { 
    if(!cJSON_IsNumber(fki_pdfalevel_id_convert))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->a_fki_pdfalevel_id
    cJSON *a_fki_pdfalevel_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiPdfalevelID");
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

    // ezsignfoldertype_request_compound_v3->a_fki_userlogintype_id
    cJSON *a_fki_userlogintype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUserlogintypeID");
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

    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_all
    cJSON *a_fki_usergroup_id_all = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUsergroupIDAll");
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

    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_restricted
    cJSON *a_fki_usergroup_id_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUsergroupIDRestricted");
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

    // ezsignfoldertype_request_compound_v3->a_fki_usergroup_id_template
    cJSON *a_fki_usergroup_id_template = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUsergroupIDTemplate");
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

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_documentdependency
    cJSON *e_ezsignfoldertype_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypeDocumentdependency");
    if (cJSON_IsNull(e_ezsignfoldertype_documentdependency)) {
        e_ezsignfoldertype_documentdependency = NULL;
    }
    if (e_ezsignfoldertype_documentdependency) { 
    e_ezsignfoldertype_documentdependency_local_nonprim = field_e_ezsignfoldertype_documentdependency_parseFromJSON(e_ezsignfoldertype_documentdependency); //custom
    }

    // ezsignfoldertype_request_compound_v3->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "sEmailAddressSigned");
    if (cJSON_IsNull(s_email_address_signed)) {
        s_email_address_signed = NULL;
    }
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed) && !cJSON_IsNull(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_compound_v3->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "sEmailAddressSummary");
    if (cJSON_IsNull(s_email_address_summary)) {
        s_email_address_summary = NULL;
    }
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary) && !cJSON_IsNull(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfarequirement
    cJSON *e_ezsignfoldertype_pdfarequirement = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypePdfarequirement");
    if (cJSON_IsNull(e_ezsignfoldertype_pdfarequirement)) {
        e_ezsignfoldertype_pdfarequirement = NULL;
    }
    if (e_ezsignfoldertype_pdfarequirement) { 
    e_ezsignfoldertype_pdfarequirement_local_nonprim = field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(e_ezsignfoldertype_pdfarequirement); //custom
    }

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_pdfanoncompliantaction
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypePdfanoncompliantaction");
    if (cJSON_IsNull(e_ezsignfoldertype_pdfanoncompliantaction)) {
        e_ezsignfoldertype_pdfanoncompliantaction = NULL;
    }
    if (e_ezsignfoldertype_pdfanoncompliantaction) { 
    e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(e_ezsignfoldertype_pdfanoncompliantaction); //custom
    }

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeannotation
    cJSON *i_ezsignfoldertype_fontsizeannotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeFontsizeannotation");
    if (cJSON_IsNull(i_ezsignfoldertype_fontsizeannotation)) {
        i_ezsignfoldertype_fontsizeannotation = NULL;
    }
    if (i_ezsignfoldertype_fontsizeannotation) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeannotation))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_fontsizeformfield
    cJSON *i_ezsignfoldertype_fontsizeformfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeFontsizeformfield");
    if (cJSON_IsNull(i_ezsignfoldertype_fontsizeformfield)) {
        i_ezsignfoldertype_fontsizeformfield = NULL;
    }
    if (i_ezsignfoldertype_fontsizeformfield) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeformfield))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderfirstdays
    cJSON *i_ezsignfoldertype_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeSendreminderfirstdays");
    if (cJSON_IsNull(i_ezsignfoldertype_sendreminderfirstdays)) {
        i_ezsignfoldertype_sendreminderfirstdays = NULL;
    }
    if (i_ezsignfoldertype_sendreminderfirstdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_sendreminderotherdays
    cJSON *i_ezsignfoldertype_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeSendreminderotherdays");
    if (cJSON_IsNull(i_ezsignfoldertype_sendreminderotherdays)) {
        i_ezsignfoldertype_sendreminderotherdays = NULL;
    }
    if (i_ezsignfoldertype_sendreminderotherdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeArchivaldays");
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

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypeDisposal");
    if (cJSON_IsNull(e_ezsignfoldertype_disposal)) {
        e_ezsignfoldertype_disposal = NULL;
    }
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_completion
    cJSON *e_ezsignfoldertype_completion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypeCompletion");
    if (cJSON_IsNull(e_ezsignfoldertype_completion)) {
        e_ezsignfoldertype_completion = NULL;
    }
    if (!e_ezsignfoldertype_completion) {
        goto end;
    }

    
    e_ezsignfoldertype_completion_local_nonprim = field_e_ezsignfoldertype_completion_parseFromJSON(e_ezsignfoldertype_completion); //custom

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeDisposaldays");
    if (cJSON_IsNull(i_ezsignfoldertype_disposaldays)) {
        i_ezsignfoldertype_disposaldays = NULL;
    }
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypeDeadlinedays");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_prematurelyendautomatically
    cJSON *b_ezsignfoldertype_prematurelyendautomatically = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypePrematurelyendautomatically");
    if (cJSON_IsNull(b_ezsignfoldertype_prematurelyendautomatically)) {
        b_ezsignfoldertype_prematurelyendautomatically = NULL;
    }
    if (b_ezsignfoldertype_prematurelyendautomatically) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_prematurelyendautomatically))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->i_ezsignfoldertype_prematurelyendautomaticallydays
    cJSON *i_ezsignfoldertype_prematurelyendautomaticallydays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "iEzsignfoldertypePrematurelyendautomaticallydays");
    if (cJSON_IsNull(i_ezsignfoldertype_prematurelyendautomaticallydays)) {
        i_ezsignfoldertype_prematurelyendautomaticallydays = NULL;
    }
    if (i_ezsignfoldertype_prematurelyendautomaticallydays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_prematurelyendautomaticallydays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_automaticsignature
    cJSON *b_ezsignfoldertype_automaticsignature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeAutomaticsignature");
    if (cJSON_IsNull(b_ezsignfoldertype_automaticsignature)) {
        b_ezsignfoldertype_automaticsignature = NULL;
    }
    if (b_ezsignfoldertype_automaticsignature) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_automaticsignature))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeDelegate");
    if (cJSON_IsNull(b_ezsignfoldertype_delegate)) {
        b_ezsignfoldertype_delegate = NULL;
    }
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeDiscussion");
    if (cJSON_IsNull(b_ezsignfoldertype_discussion)) {
        b_ezsignfoldertype_discussion = NULL;
    }
    if (b_ezsignfoldertype_discussion) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_discussion))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_logrecipientinproof
    cJSON *b_ezsignfoldertype_logrecipientinproof = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeLogrecipientinproof");
    if (cJSON_IsNull(b_ezsignfoldertype_logrecipientinproof)) {
        b_ezsignfoldertype_logrecipientinproof = NULL;
    }
    if (b_ezsignfoldertype_logrecipientinproof) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_logrecipientinproof))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeReassignezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_reassignezsignsigner)) {
        b_ezsignfoldertype_reassignezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_reassignezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeReassignuser");
    if (cJSON_IsNull(b_ezsignfoldertype_reassignuser)) {
        b_ezsignfoldertype_reassignuser = NULL;
    }
    if (b_ezsignfoldertype_reassignuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_reassigngroup
    cJSON *b_ezsignfoldertype_reassigngroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeReassigngroup");
    if (cJSON_IsNull(b_ezsignfoldertype_reassigngroup)) {
        b_ezsignfoldertype_reassigngroup = NULL;
    }
    if (b_ezsignfoldertype_reassigngroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassigngroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtoezsignsigner
    cJSON *b_ezsignfoldertype_sendsignedtoezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtoezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtoezsignsigner)) {
        b_ezsignfoldertype_sendsignedtoezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtoezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtoezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtouser
    cJSON *b_ezsignfoldertype_sendsignedtouser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtouser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtouser)) {
        b_ezsignfoldertype_sendsignedtouser = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtouser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtouser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentezsignsigner
    cJSON *b_ezsignfoldertype_sendattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendattachmentezsignsigner)) {
        b_ezsignfoldertype_sendattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendproofezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofezsignsigner)) {
        b_ezsignfoldertype_sendproofezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_sendproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentreceivecopy
    cJSON *b_ezsignfoldertype_sendattachmentreceivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendattachmentreceivecopy");
    if (cJSON_IsNull(b_ezsignfoldertype_sendattachmentreceivecopy)) {
        b_ezsignfoldertype_sendattachmentreceivecopy = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentreceivecopy) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentreceivecopy))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendattachmentuser
    cJSON *b_ezsignfoldertype_sendattachmentuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendattachmentuser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendattachmentuser)) {
        b_ezsignfoldertype_sendattachmentuser = NULL;
    }
    if (b_ezsignfoldertype_sendattachmentuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofuser
    cJSON *b_ezsignfoldertype_sendproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendproofuser");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofuser)) {
        b_ezsignfoldertype_sendproofuser = NULL;
    }
    if (b_ezsignfoldertype_sendproofuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofemail
    cJSON *b_ezsignfoldertype_sendproofemail = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendproofemail");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofemail)) {
        b_ezsignfoldertype_sendproofemail = NULL;
    }
    if (b_ezsignfoldertype_sendproofemail) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofemail))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadattachmentezsignsigner)) {
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (cJSON_IsNull(b_ezsignfoldertype_allowdownloadproofezsignsigner)) {
        b_ezsignfoldertype_allowdownloadproofezsignsigner = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendproofreceivealldocument
    cJSON *b_ezsignfoldertype_sendproofreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendproofreceivealldocument");
    if (cJSON_IsNull(b_ezsignfoldertype_sendproofreceivealldocument)) {
        b_ezsignfoldertype_sendproofreceivealldocument = NULL;
    }
    if (b_ezsignfoldertype_sendproofreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofreceivealldocument))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtodocumentowner");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtofolderowner");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtofullgroup)) {
        b_ezsignfoldertype_sendsignedtofullgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsignedtolimitedgroup)) {
        b_ezsignfoldertype_sendsignedtolimitedgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsignedtocolleague");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsummarytodocumentowner");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsummarytofolderowner");
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

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytofullgroup)) {
        b_ezsignfoldertype_sendsummarytofullgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (cJSON_IsNull(b_ezsignfoldertype_sendsummarytolimitedgroup)) {
        b_ezsignfoldertype_sendsummarytolimitedgroup = NULL;
    }
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeSendsummarytocolleague");
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

    // ezsignfoldertype_request_compound_v3->e_ezsignfoldertype_signeraccess
    cJSON *e_ezsignfoldertype_signeraccess = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "eEzsignfoldertypeSigneraccess");
    if (cJSON_IsNull(e_ezsignfoldertype_signeraccess)) {
        e_ezsignfoldertype_signeraccess = NULL;
    }
    if (e_ezsignfoldertype_signeraccess) { 
    e_ezsignfoldertype_signeraccess_local_nonprim = field_e_ezsignfoldertype_signeraccess_parseFromJSON(e_ezsignfoldertype_signeraccess); //custom
    }

    // ezsignfoldertype_request_compound_v3->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "bEzsignfoldertypeIsactive");
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

    // ezsignfoldertype_request_compound_v3->a_fki_user_id_signed
    cJSON *a_fki_user_id_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUserIDSigned");
    if (cJSON_IsNull(a_fki_user_id_signed)) {
        a_fki_user_id_signed = NULL;
    }
    if (a_fki_user_id_signed) { 
    cJSON *a_fki_user_id_signed_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_signed)) {
        goto end;//primitive container
    }
    a_fki_user_id_signedList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_signed_local, a_fki_user_id_signed)
    {
        if(!cJSON_IsNumber(a_fki_user_id_signed_local))
        {
            goto end;
        }
        double *a_fki_user_id_signed_local_value = calloc(1, sizeof(double));
        if(!a_fki_user_id_signed_local_value)
        {
            goto end;
        }
        *a_fki_user_id_signed_local_value = a_fki_user_id_signed_local->valuedouble;
        list_addElement(a_fki_user_id_signedList , a_fki_user_id_signed_local_value);
    }
    }

    // ezsignfoldertype_request_compound_v3->a_fki_user_id_summary
    cJSON *a_fki_user_id_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_request_compound_v3JSON, "a_fkiUserIDSummary");
    if (cJSON_IsNull(a_fki_user_id_summary)) {
        a_fki_user_id_summary = NULL;
    }
    if (a_fki_user_id_summary) { 
    cJSON *a_fki_user_id_summary_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id_summary)) {
        goto end;//primitive container
    }
    a_fki_user_id_summaryList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_summary_local, a_fki_user_id_summary)
    {
        if(!cJSON_IsNumber(a_fki_user_id_summary_local))
        {
            goto end;
        }
        double *a_fki_user_id_summary_local_value = calloc(1, sizeof(double));
        if(!a_fki_user_id_summary_local_value)
        {
            goto end;
        }
        *a_fki_user_id_summary_local_value = a_fki_user_id_summary_local->valuedouble;
        list_addElement(a_fki_user_id_summaryList , a_fki_user_id_summary_local_value);
    }
    }


    ezsignfoldertype_request_compound_v3_local_var = ezsignfoldertype_request_compound_v3_create_internal (
        pki_ezsignfoldertype_id ? pki_ezsignfoldertype_id->valuedouble : 0,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        fki_font_id_annotation ? fki_font_id_annotation->valuedouble : 0,
        fki_font_id_formfield ? fki_font_id_formfield->valuedouble : 0,
        fki_font_id_signature ? fki_font_id_signature->valuedouble : 0,
        fki_pdfalevel_id_convert ? fki_pdfalevel_id_convert->valuedouble : 0,
        a_fki_pdfalevel_id ? a_fki_pdfalevel_idList : NULL,
        a_fki_userlogintype_idList,
        a_fki_usergroup_id_all ? a_fki_usergroup_id_allList : NULL,
        a_fki_usergroup_id_restricted ? a_fki_usergroup_id_restrictedList : NULL,
        a_fki_usergroup_id_template ? a_fki_usergroup_id_templateList : NULL,
        e_ezsignfoldertype_documentdependency ? e_ezsignfoldertype_documentdependency_local_nonprim : 0,
        s_email_address_signed && !cJSON_IsNull(s_email_address_signed) ? strdup(s_email_address_signed->valuestring) : NULL,
        s_email_address_summary && !cJSON_IsNull(s_email_address_summary) ? strdup(s_email_address_summary->valuestring) : NULL,
        e_ezsignfoldertype_pdfarequirement ? e_ezsignfoldertype_pdfarequirement_local_nonprim : 0,
        e_ezsignfoldertype_pdfanoncompliantaction ? e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim : 0,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        i_ezsignfoldertype_fontsizeannotation ? i_ezsignfoldertype_fontsizeannotation->valuedouble : 0,
        i_ezsignfoldertype_fontsizeformfield ? i_ezsignfoldertype_fontsizeformfield->valuedouble : 0,
        i_ezsignfoldertype_sendreminderfirstdays ? i_ezsignfoldertype_sendreminderfirstdays->valuedouble : 0,
        i_ezsignfoldertype_sendreminderotherdays ? i_ezsignfoldertype_sendreminderotherdays->valuedouble : 0,
        i_ezsignfoldertype_archivaldays->valuedouble,
        e_ezsignfoldertype_disposal_local_nonprim,
        e_ezsignfoldertype_completion_local_nonprim,
        i_ezsignfoldertype_disposaldays ? i_ezsignfoldertype_disposaldays->valuedouble : 0,
        i_ezsignfoldertype_deadlinedays->valuedouble,
        b_ezsignfoldertype_prematurelyendautomatically ? b_ezsignfoldertype_prematurelyendautomatically->valueint : 0,
        i_ezsignfoldertype_prematurelyendautomaticallydays ? i_ezsignfoldertype_prematurelyendautomaticallydays->valuedouble : 0,
        b_ezsignfoldertype_automaticsignature ? b_ezsignfoldertype_automaticsignature->valueint : 0,
        b_ezsignfoldertype_delegate ? b_ezsignfoldertype_delegate->valueint : 0,
        b_ezsignfoldertype_discussion ? b_ezsignfoldertype_discussion->valueint : 0,
        b_ezsignfoldertype_logrecipientinproof ? b_ezsignfoldertype_logrecipientinproof->valueint : 0,
        b_ezsignfoldertype_reassignezsignsigner ? b_ezsignfoldertype_reassignezsignsigner->valueint : 0,
        b_ezsignfoldertype_reassignuser ? b_ezsignfoldertype_reassignuser->valueint : 0,
        b_ezsignfoldertype_reassigngroup ? b_ezsignfoldertype_reassigngroup->valueint : 0,
        b_ezsignfoldertype_sendsignedtoezsignsigner ? b_ezsignfoldertype_sendsignedtoezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendsignedtouser ? b_ezsignfoldertype_sendsignedtouser->valueint : 0,
        b_ezsignfoldertype_sendattachmentezsignsigner ? b_ezsignfoldertype_sendattachmentezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendproofezsignsigner ? b_ezsignfoldertype_sendproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendattachmentreceivecopy ? b_ezsignfoldertype_sendattachmentreceivecopy->valueint : 0,
        b_ezsignfoldertype_sendattachmentuser ? b_ezsignfoldertype_sendattachmentuser->valueint : 0,
        b_ezsignfoldertype_sendproofuser ? b_ezsignfoldertype_sendproofuser->valueint : 0,
        b_ezsignfoldertype_sendproofemail ? b_ezsignfoldertype_sendproofemail->valueint : 0,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner ? b_ezsignfoldertype_allowdownloadattachmentezsignsigner->valueint : 0,
        b_ezsignfoldertype_allowdownloadproofezsignsigner ? b_ezsignfoldertype_allowdownloadproofezsignsigner->valueint : 0,
        b_ezsignfoldertype_sendproofreceivealldocument ? b_ezsignfoldertype_sendproofreceivealldocument->valueint : 0,
        b_ezsignfoldertype_sendsignedtodocumentowner->valueint,
        b_ezsignfoldertype_sendsignedtofolderowner->valueint,
        b_ezsignfoldertype_sendsignedtofullgroup ? b_ezsignfoldertype_sendsignedtofullgroup->valueint : 0,
        b_ezsignfoldertype_sendsignedtolimitedgroup ? b_ezsignfoldertype_sendsignedtolimitedgroup->valueint : 0,
        b_ezsignfoldertype_sendsignedtocolleague->valueint,
        b_ezsignfoldertype_sendsummarytodocumentowner->valueint,
        b_ezsignfoldertype_sendsummarytofolderowner->valueint,
        b_ezsignfoldertype_sendsummarytofullgroup ? b_ezsignfoldertype_sendsummarytofullgroup->valueint : 0,
        b_ezsignfoldertype_sendsummarytolimitedgroup ? b_ezsignfoldertype_sendsummarytolimitedgroup->valueint : 0,
        b_ezsignfoldertype_sendsummarytocolleague->valueint,
        e_ezsignfoldertype_signeraccess ? e_ezsignfoldertype_signeraccess_local_nonprim : 0,
        b_ezsignfoldertype_isactive->valueint,
        a_fki_user_id_signed ? a_fki_user_id_signedList : NULL,
        a_fki_user_id_summary ? a_fki_user_id_summaryList : NULL
        );

    return ezsignfoldertype_request_compound_v3_local_var;
end:
    if (obj_ezsignfoldertype_name_local_nonprim) {
        multilingual_ezsignfoldertype_name_free(obj_ezsignfoldertype_name_local_nonprim);
        obj_ezsignfoldertype_name_local_nonprim = NULL;
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
    if (e_ezsignfoldertype_documentdependency_local_nonprim) {
        e_ezsignfoldertype_documentdependency_local_nonprim = 0;
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
    if (e_ezsignfoldertype_disposal_local_nonprim) {
        e_ezsignfoldertype_disposal_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_completion_local_nonprim) {
        e_ezsignfoldertype_completion_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_signeraccess_local_nonprim) {
        e_ezsignfoldertype_signeraccess_local_nonprim = 0;
    }
    if (a_fki_user_id_signedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_signedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_signedList);
        a_fki_user_id_signedList = NULL;
    }
    if (a_fki_user_id_summaryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_id_summaryList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_id_summaryList);
        a_fki_user_id_summaryList = NULL;
    }
    return NULL;

}
