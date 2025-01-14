#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_response_v4.h"


char* ezsignfoldertype_response_v4_e_ezsignfoldertype_documentdependency_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_documentdependency) {
    char* e_ezsignfoldertype_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    return e_ezsignfoldertype_documentdependencyArray[e_ezsignfoldertype_documentdependency];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_documentdependency_FromString(char* e_ezsignfoldertype_documentdependency){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_documentdependencyArray[] =  { "NULL", "All", "EzsignsignerOnly" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_documentdependencyArray) / sizeof(e_ezsignfoldertype_documentdependencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_documentdependency, e_ezsignfoldertype_documentdependencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_pdfarequirement_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_pdfarequirement) {
    char* e_ezsignfoldertype_pdfarequirementArray[] =  { "NULL", "None", "Declared", "Verified" };
    return e_ezsignfoldertype_pdfarequirementArray[e_ezsignfoldertype_pdfarequirement];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_pdfarequirement_FromString(char* e_ezsignfoldertype_pdfarequirement){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_pdfarequirementArray[] =  { "NULL", "None", "Declared", "Verified" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_pdfarequirementArray) / sizeof(e_ezsignfoldertype_pdfarequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_pdfarequirement, e_ezsignfoldertype_pdfarequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_pdfanoncompliantaction_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_pdfanoncompliantaction) {
    char* e_ezsignfoldertype_pdfanoncompliantactionArray[] =  { "NULL", "Reject", "Convert" };
    return e_ezsignfoldertype_pdfanoncompliantactionArray[e_ezsignfoldertype_pdfanoncompliantaction];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_pdfanoncompliantaction_FromString(char* e_ezsignfoldertype_pdfanoncompliantaction){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_pdfanoncompliantactionArray[] =  { "NULL", "Reject", "Convert" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_pdfanoncompliantactionArray) / sizeof(e_ezsignfoldertype_pdfanoncompliantactionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_pdfanoncompliantaction, e_ezsignfoldertype_pdfanoncompliantactionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_privacylevel) {
    char* e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    return e_ezsignfoldertype_privacylevelArray[e_ezsignfoldertype_privacylevel];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_privacylevelArray[] =  { "NULL", "User", "Usergroup" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_privacylevelArray) / sizeof(e_ezsignfoldertype_privacylevelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_privacylevel, e_ezsignfoldertype_privacylevelArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_disposal_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_disposal) {
    char* e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    return e_ezsignfoldertype_disposalArray[e_ezsignfoldertype_disposal];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_disposal_FromString(char* e_ezsignfoldertype_disposal){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_disposalArray[] =  { "NULL", "No", "Manual", "Automatic" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_disposalArray) / sizeof(e_ezsignfoldertype_disposalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_disposal, e_ezsignfoldertype_disposalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_completion_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_completion) {
    char* e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    return e_ezsignfoldertype_completionArray[e_ezsignfoldertype_completion];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_completion_FromString(char* e_ezsignfoldertype_completion){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_completionArray) / sizeof(e_ezsignfoldertype_completionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_completion, e_ezsignfoldertype_completionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfoldertype_response_v4_e_ezsignfoldertype_signeraccess_ToString(ezmax_api_definition__full_ezsignfoldertype_response_v4__e e_ezsignfoldertype_signeraccess) {
    char* e_ezsignfoldertype_signeraccessArray[] =  { "NULL", "No", "SignerDocuments", "AllDocuments" };
    return e_ezsignfoldertype_signeraccessArray[e_ezsignfoldertype_signeraccess];
}

ezmax_api_definition__full_ezsignfoldertype_response_v4__e ezsignfoldertype_response_v4_e_ezsignfoldertype_signeraccess_FromString(char* e_ezsignfoldertype_signeraccess){
    int stringToReturn = 0;
    char *e_ezsignfoldertype_signeraccessArray[] =  { "NULL", "No", "SignerDocuments", "AllDocuments" };
    size_t sizeofArray = sizeof(e_ezsignfoldertype_signeraccessArray) / sizeof(e_ezsignfoldertype_signeraccessArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfoldertype_signeraccess, e_ezsignfoldertype_signeraccessArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4_create(
    int pki_ezsignfoldertype_id,
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name,
    int fki_branding_id,
    int fki_billingentityinternal_id,
    int fki_ezsigntsarequirement_id,
    int fki_font_id_annotation,
    int fki_font_id_formfield,
    int fki_font_id_signature,
    int fki_pdfalevel_id_convert,
    field_e_ezsignfoldertype_documentdependency_t *e_ezsignfoldertype_documentdependency,
    char *s_branding_description_x,
    char *s_billingentityinternal_description_x,
    char *s_ezsigntsarequirement_description_x,
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
    list_t *a_fki_pdfalevel_id,
    list_t *a_obj_userlogintype,
    list_t *a_obj_usergroup_all,
    list_t *a_obj_usergroup_restricted,
    list_t *a_obj_usergroup_template,
    common_audit_t *obj_audit
    ) {
    ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4_local_var = malloc(sizeof(ezsignfoldertype_response_v4_t));
    if (!ezsignfoldertype_response_v4_local_var) {
        return NULL;
    }
    ezsignfoldertype_response_v4_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_response_v4_local_var->obj_ezsignfoldertype_name = obj_ezsignfoldertype_name;
    ezsignfoldertype_response_v4_local_var->fki_branding_id = fki_branding_id;
    ezsignfoldertype_response_v4_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfoldertype_response_v4_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfoldertype_response_v4_local_var->fki_font_id_annotation = fki_font_id_annotation;
    ezsignfoldertype_response_v4_local_var->fki_font_id_formfield = fki_font_id_formfield;
    ezsignfoldertype_response_v4_local_var->fki_font_id_signature = fki_font_id_signature;
    ezsignfoldertype_response_v4_local_var->fki_pdfalevel_id_convert = fki_pdfalevel_id_convert;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_documentdependency = e_ezsignfoldertype_documentdependency;
    ezsignfoldertype_response_v4_local_var->s_branding_description_x = s_branding_description_x;
    ezsignfoldertype_response_v4_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfoldertype_response_v4_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfoldertype_response_v4_local_var->s_email_address_signed = s_email_address_signed;
    ezsignfoldertype_response_v4_local_var->s_email_address_summary = s_email_address_summary;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_pdfarequirement = e_ezsignfoldertype_pdfarequirement;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_pdfanoncompliantaction = e_ezsignfoldertype_pdfanoncompliantaction;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_fontsizeannotation = i_ezsignfoldertype_fontsizeannotation;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_fontsizeformfield = i_ezsignfoldertype_fontsizeformfield;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_sendreminderfirstdays = i_ezsignfoldertype_sendreminderfirstdays;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_sendreminderotherdays = i_ezsignfoldertype_sendreminderotherdays;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_archivaldays = i_ezsignfoldertype_archivaldays;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_disposal = e_ezsignfoldertype_disposal;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_completion = e_ezsignfoldertype_completion;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_disposaldays = i_ezsignfoldertype_disposaldays;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_prematurelyendautomatically = b_ezsignfoldertype_prematurelyendautomatically;
    ezsignfoldertype_response_v4_local_var->i_ezsignfoldertype_prematurelyendautomaticallydays = i_ezsignfoldertype_prematurelyendautomaticallydays;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_automaticsignature = b_ezsignfoldertype_automaticsignature;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_logrecipientinproof = b_ezsignfoldertype_logrecipientinproof;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_reassigngroup = b_ezsignfoldertype_reassigngroup;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtoezsignsigner = b_ezsignfoldertype_sendsignedtoezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtouser = b_ezsignfoldertype_sendsignedtouser;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendattachmentezsignsigner = b_ezsignfoldertype_sendattachmentezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendattachmentuser = b_ezsignfoldertype_sendattachmentuser;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendproofuser = b_ezsignfoldertype_sendproofuser;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendproofemail = b_ezsignfoldertype_sendproofemail;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendproofreceivealldocument = b_ezsignfoldertype_sendproofreceivealldocument;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtodocumentowner = b_ezsignfoldertype_sendsignedtodocumentowner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtofolderowner = b_ezsignfoldertype_sendsignedtofolderowner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtofullgroup = b_ezsignfoldertype_sendsignedtofullgroup;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtolimitedgroup = b_ezsignfoldertype_sendsignedtolimitedgroup;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsignedtocolleague = b_ezsignfoldertype_sendsignedtocolleague;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsummarytodocumentowner = b_ezsignfoldertype_sendsummarytodocumentowner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsummarytofolderowner = b_ezsignfoldertype_sendsummarytofolderowner;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsummarytofullgroup = b_ezsignfoldertype_sendsummarytofullgroup;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsummarytolimitedgroup = b_ezsignfoldertype_sendsummarytolimitedgroup;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_sendsummarytocolleague = b_ezsignfoldertype_sendsummarytocolleague;
    ezsignfoldertype_response_v4_local_var->e_ezsignfoldertype_signeraccess = e_ezsignfoldertype_signeraccess;
    ezsignfoldertype_response_v4_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    ezsignfoldertype_response_v4_local_var->a_fki_pdfalevel_id = a_fki_pdfalevel_id;
    ezsignfoldertype_response_v4_local_var->a_obj_userlogintype = a_obj_userlogintype;
    ezsignfoldertype_response_v4_local_var->a_obj_usergroup_all = a_obj_usergroup_all;
    ezsignfoldertype_response_v4_local_var->a_obj_usergroup_restricted = a_obj_usergroup_restricted;
    ezsignfoldertype_response_v4_local_var->a_obj_usergroup_template = a_obj_usergroup_template;
    ezsignfoldertype_response_v4_local_var->obj_audit = obj_audit;

    return ezsignfoldertype_response_v4_local_var;
}


void ezsignfoldertype_response_v4_free(ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4) {
    if(NULL == ezsignfoldertype_response_v4){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_response_v4->obj_ezsignfoldertype_name) {
        multilingual_ezsignfoldertype_name_free(ezsignfoldertype_response_v4->obj_ezsignfoldertype_name);
        ezsignfoldertype_response_v4->obj_ezsignfoldertype_name = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency) {
        field_e_ezsignfoldertype_documentdependency_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency = NULL;
    }
    if (ezsignfoldertype_response_v4->s_branding_description_x) {
        free(ezsignfoldertype_response_v4->s_branding_description_x);
        ezsignfoldertype_response_v4->s_branding_description_x = NULL;
    }
    if (ezsignfoldertype_response_v4->s_billingentityinternal_description_x) {
        free(ezsignfoldertype_response_v4->s_billingentityinternal_description_x);
        ezsignfoldertype_response_v4->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x) {
        free(ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x);
        ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfoldertype_response_v4->s_email_address_signed) {
        free(ezsignfoldertype_response_v4->s_email_address_signed);
        ezsignfoldertype_response_v4->s_email_address_signed = NULL;
    }
    if (ezsignfoldertype_response_v4->s_email_address_summary) {
        free(ezsignfoldertype_response_v4->s_email_address_summary);
        ezsignfoldertype_response_v4->s_email_address_summary = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement) {
        field_e_ezsignfoldertype_pdfarequirement_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction) {
        field_e_ezsignfoldertype_pdfanoncompliantaction_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel) {
        field_e_ezsignfoldertype_privacylevel_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal) {
        field_e_ezsignfoldertype_disposal_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_completion) {
        field_e_ezsignfoldertype_completion_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_completion);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_completion = NULL;
    }
    if (ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess) {
        field_e_ezsignfoldertype_signeraccess_free(ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess);
        ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess = NULL;
    }
    if (ezsignfoldertype_response_v4->a_fki_pdfalevel_id) {
        list_ForEach(listEntry, ezsignfoldertype_response_v4->a_fki_pdfalevel_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_response_v4->a_fki_pdfalevel_id);
        ezsignfoldertype_response_v4->a_fki_pdfalevel_id = NULL;
    }
    if (ezsignfoldertype_response_v4->a_obj_userlogintype) {
        list_ForEach(listEntry, ezsignfoldertype_response_v4->a_obj_userlogintype) {
            userlogintype_response_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_response_v4->a_obj_userlogintype);
        ezsignfoldertype_response_v4->a_obj_userlogintype = NULL;
    }
    if (ezsignfoldertype_response_v4->a_obj_usergroup_all) {
        list_ForEach(listEntry, ezsignfoldertype_response_v4->a_obj_usergroup_all) {
            usergroup_response_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_response_v4->a_obj_usergroup_all);
        ezsignfoldertype_response_v4->a_obj_usergroup_all = NULL;
    }
    if (ezsignfoldertype_response_v4->a_obj_usergroup_restricted) {
        list_ForEach(listEntry, ezsignfoldertype_response_v4->a_obj_usergroup_restricted) {
            usergroup_response_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_response_v4->a_obj_usergroup_restricted);
        ezsignfoldertype_response_v4->a_obj_usergroup_restricted = NULL;
    }
    if (ezsignfoldertype_response_v4->a_obj_usergroup_template) {
        list_ForEach(listEntry, ezsignfoldertype_response_v4->a_obj_usergroup_template) {
            usergroup_response_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_response_v4->a_obj_usergroup_template);
        ezsignfoldertype_response_v4->a_obj_usergroup_template = NULL;
    }
    if (ezsignfoldertype_response_v4->obj_audit) {
        common_audit_free(ezsignfoldertype_response_v4->obj_audit);
        ezsignfoldertype_response_v4->obj_audit = NULL;
    }
    free(ezsignfoldertype_response_v4);
}

cJSON *ezsignfoldertype_response_v4_convertToJSON(ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_response_v4->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_response_v4->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", ezsignfoldertype_response_v4->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response_v4->obj_ezsignfoldertype_name
    if (!ezsignfoldertype_response_v4->obj_ezsignfoldertype_name) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_name_local_JSON = multilingual_ezsignfoldertype_name_convertToJSON(ezsignfoldertype_response_v4->obj_ezsignfoldertype_name);
    if(obj_ezsignfoldertype_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertypeName", obj_ezsignfoldertype_name_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_response_v4->fki_branding_id
    if (!ezsignfoldertype_response_v4->fki_branding_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBrandingID", ezsignfoldertype_response_v4->fki_branding_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response_v4->fki_billingentityinternal_id
    if(ezsignfoldertype_response_v4->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfoldertype_response_v4->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->fki_ezsigntsarequirement_id
    if(ezsignfoldertype_response_v4->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfoldertype_response_v4->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->fki_font_id_annotation
    if(ezsignfoldertype_response_v4->fki_font_id_annotation) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDAnnotation", ezsignfoldertype_response_v4->fki_font_id_annotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->fki_font_id_formfield
    if(ezsignfoldertype_response_v4->fki_font_id_formfield) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDFormfield", ezsignfoldertype_response_v4->fki_font_id_formfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->fki_font_id_signature
    if(ezsignfoldertype_response_v4->fki_font_id_signature) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDSignature", ezsignfoldertype_response_v4->fki_font_id_signature) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->fki_pdfalevel_id_convert
    if(ezsignfoldertype_response_v4->fki_pdfalevel_id_convert) {
    if(cJSON_AddNumberToObject(item, "fkiPdfalevelIDConvert", ezsignfoldertype_response_v4->fki_pdfalevel_id_convert) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency
    if(ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency != ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL) {
    cJSON *e_ezsignfoldertype_documentdependency_local_JSON = field_e_ezsignfoldertype_documentdependency_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency);
    if(e_ezsignfoldertype_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDocumentdependency", e_ezsignfoldertype_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_response_v4->s_branding_description_x
    if (!ezsignfoldertype_response_v4->s_branding_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBrandingDescriptionX", ezsignfoldertype_response_v4->s_branding_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignfoldertype_response_v4->s_billingentityinternal_description_x
    if(ezsignfoldertype_response_v4->s_billingentityinternal_description_x) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfoldertype_response_v4->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x
    if(ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response_v4->s_email_address_signed
    if(ezsignfoldertype_response_v4->s_email_address_signed) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSigned", ezsignfoldertype_response_v4->s_email_address_signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response_v4->s_email_address_summary
    if(ezsignfoldertype_response_v4->s_email_address_summary) {
    if(cJSON_AddStringToObject(item, "sEmailAddressSummary", ezsignfoldertype_response_v4->s_email_address_summary) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement
    if(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement != ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL) {
    cJSON *e_ezsignfoldertype_pdfarequirement_local_JSON = field_e_ezsignfoldertype_pdfarequirement_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement);
    if(e_ezsignfoldertype_pdfarequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfarequirement", e_ezsignfoldertype_pdfarequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction
    if(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction != ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL) {
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction_local_JSON = field_e_ezsignfoldertype_pdfanoncompliantaction_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction);
    if(e_ezsignfoldertype_pdfanoncompliantaction_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePdfanoncompliantaction", e_ezsignfoldertype_pdfanoncompliantaction_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL == ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeannotation
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeannotation) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeannotation", ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeannotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeformfield
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeformfield) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeformfield", ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeformfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderfirstdays
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderfirstdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderfirstdays", ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderotherdays
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderotherdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeSendreminderotherdays", ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_archivaldays
    if (!ezsignfoldertype_response_v4->i_ezsignfoldertype_archivaldays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeArchivaldays", ezsignfoldertype_response_v4->i_ezsignfoldertype_archivaldays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal
    if (ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL == ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_disposal_local_JSON = field_e_ezsignfoldertype_disposal_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal);
    if(e_ezsignfoldertype_disposal_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDisposal", e_ezsignfoldertype_disposal_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_completion
    if (ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL == ezsignfoldertype_response_v4->e_ezsignfoldertype_completion) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_completion_local_JSON = field_e_ezsignfoldertype_completion_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_completion);
    if(e_ezsignfoldertype_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeCompletion", e_ezsignfoldertype_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_disposaldays
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_disposaldays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDisposaldays", ezsignfoldertype_response_v4->i_ezsignfoldertype_disposaldays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_deadlinedays
    if (!ezsignfoldertype_response_v4->i_ezsignfoldertype_deadlinedays) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", ezsignfoldertype_response_v4->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_prematurelyendautomatically
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_prematurelyendautomatically) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypePrematurelyendautomatically", ezsignfoldertype_response_v4->b_ezsignfoldertype_prematurelyendautomatically) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->i_ezsignfoldertype_prematurelyendautomaticallydays
    if(ezsignfoldertype_response_v4->i_ezsignfoldertype_prematurelyendautomaticallydays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypePrematurelyendautomaticallydays", ezsignfoldertype_response_v4->i_ezsignfoldertype_prematurelyendautomaticallydays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_automaticsignature
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_automaticsignature) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAutomaticsignature", ezsignfoldertype_response_v4->b_ezsignfoldertype_automaticsignature) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_delegate
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", ezsignfoldertype_response_v4->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_discussion
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", ezsignfoldertype_response_v4->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_logrecipientinproof
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_logrecipientinproof) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeLogrecipientinproof", ezsignfoldertype_response_v4->b_ezsignfoldertype_logrecipientinproof) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignuser
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassigngroup
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_reassigngroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassigngroup", ezsignfoldertype_response_v4->b_ezsignfoldertype_reassigngroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtoezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtoezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtoezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtoezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtouser
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtouser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtouser", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtouser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentuser
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendattachmentuser", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofuser
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofuser", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofuser) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofemail
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofemail) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofemail", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofemail) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofreceivealldocument
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofreceivealldocument) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofreceivealldocument", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofreceivealldocument) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtodocumentowner
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtodocumentowner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofolderowner
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofolderowner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofullgroup
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtofullgroup", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtolimitedgroup
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtolimitedgroup", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtocolleague
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsignedtocolleague", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytodocumentowner
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytodocumentowner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytodocumentowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofolderowner
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofolderowner) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofolderowner", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofolderowner) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofullgroup
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofullgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytofullgroup", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofullgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytolimitedgroup
    if(ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytolimitedgroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytolimitedgroup", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytolimitedgroup) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytocolleague
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytocolleague) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendsummarytocolleague", ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytocolleague) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess
    if(ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess != ezmax_api_definition__full_ezsignfoldertype_response_v4__NULL) {
    cJSON *e_ezsignfoldertype_signeraccess_local_JSON = field_e_ezsignfoldertype_signeraccess_convertToJSON(ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess);
    if(e_ezsignfoldertype_signeraccess_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeSigneraccess", e_ezsignfoldertype_signeraccess_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfoldertype_response_v4->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_response_v4->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", ezsignfoldertype_response_v4->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldertype_response_v4->a_fki_pdfalevel_id
    if(ezsignfoldertype_response_v4->a_fki_pdfalevel_id) {
    cJSON *a_fki_pdfalevel_id = cJSON_AddArrayToObject(item, "a_fkiPdfalevelID");
    if(a_fki_pdfalevel_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_pdfalevel_idListEntry;
    list_ForEach(a_fki_pdfalevel_idListEntry, ezsignfoldertype_response_v4->a_fki_pdfalevel_id) {
    if(cJSON_AddNumberToObject(a_fki_pdfalevel_id, "", *(double *)a_fki_pdfalevel_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // ezsignfoldertype_response_v4->a_obj_userlogintype
    if (!ezsignfoldertype_response_v4->a_obj_userlogintype) {
        goto fail;
    }
    cJSON *a_obj_userlogintype = cJSON_AddArrayToObject(item, "a_objUserlogintype");
    if(a_obj_userlogintype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userlogintypeListEntry;
    if (ezsignfoldertype_response_v4->a_obj_userlogintype) {
    list_ForEach(a_obj_userlogintypeListEntry, ezsignfoldertype_response_v4->a_obj_userlogintype) {
    cJSON *itemLocal = userlogintype_response_convertToJSON(a_obj_userlogintypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_userlogintype, itemLocal);
    }
    }


    // ezsignfoldertype_response_v4->a_obj_usergroup_all
    if(ezsignfoldertype_response_v4->a_obj_usergroup_all) {
    cJSON *a_obj_usergroup_all = cJSON_AddArrayToObject(item, "a_objUsergroupAll");
    if(a_obj_usergroup_all == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroup_allListEntry;
    if (ezsignfoldertype_response_v4->a_obj_usergroup_all) {
    list_ForEach(a_obj_usergroup_allListEntry, ezsignfoldertype_response_v4->a_obj_usergroup_all) {
    cJSON *itemLocal = usergroup_response_convertToJSON(a_obj_usergroup_allListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup_all, itemLocal);
    }
    }
    }


    // ezsignfoldertype_response_v4->a_obj_usergroup_restricted
    if(ezsignfoldertype_response_v4->a_obj_usergroup_restricted) {
    cJSON *a_obj_usergroup_restricted = cJSON_AddArrayToObject(item, "a_objUsergroupRestricted");
    if(a_obj_usergroup_restricted == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroup_restrictedListEntry;
    if (ezsignfoldertype_response_v4->a_obj_usergroup_restricted) {
    list_ForEach(a_obj_usergroup_restrictedListEntry, ezsignfoldertype_response_v4->a_obj_usergroup_restricted) {
    cJSON *itemLocal = usergroup_response_convertToJSON(a_obj_usergroup_restrictedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup_restricted, itemLocal);
    }
    }
    }


    // ezsignfoldertype_response_v4->a_obj_usergroup_template
    if(ezsignfoldertype_response_v4->a_obj_usergroup_template) {
    cJSON *a_obj_usergroup_template = cJSON_AddArrayToObject(item, "a_objUsergroupTemplate");
    if(a_obj_usergroup_template == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroup_templateListEntry;
    if (ezsignfoldertype_response_v4->a_obj_usergroup_template) {
    list_ForEach(a_obj_usergroup_templateListEntry, ezsignfoldertype_response_v4->a_obj_usergroup_template) {
    cJSON *itemLocal = usergroup_response_convertToJSON(a_obj_usergroup_templateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup_template, itemLocal);
    }
    }
    }


    // ezsignfoldertype_response_v4->obj_audit
    if (!ezsignfoldertype_response_v4->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfoldertype_response_v4->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4_parseFromJSON(cJSON *ezsignfoldertype_response_v4JSON){

    ezsignfoldertype_response_v4_t *ezsignfoldertype_response_v4_local_var = NULL;

    // define the local variable for ezsignfoldertype_response_v4->obj_ezsignfoldertype_name
    multilingual_ezsignfoldertype_name_t *obj_ezsignfoldertype_name_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency
    field_e_ezsignfoldertype_documentdependency_t *e_ezsignfoldertype_documentdependency_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement
    field_e_ezsignfoldertype_pdfarequirement_t *e_ezsignfoldertype_pdfarequirement_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction
    field_e_ezsignfoldertype_pdfanoncompliantaction_t *e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal
    field_e_ezsignfoldertype_disposal_t *e_ezsignfoldertype_disposal_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_completion
    field_e_ezsignfoldertype_completion_t *e_ezsignfoldertype_completion_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess
    field_e_ezsignfoldertype_signeraccess_t *e_ezsignfoldertype_signeraccess_local_nonprim = NULL;

    // define the local list for ezsignfoldertype_response_v4->a_fki_pdfalevel_id
    list_t *a_fki_pdfalevel_idList = NULL;

    // define the local list for ezsignfoldertype_response_v4->a_obj_userlogintype
    list_t *a_obj_userlogintypeList = NULL;

    // define the local list for ezsignfoldertype_response_v4->a_obj_usergroup_all
    list_t *a_obj_usergroup_allList = NULL;

    // define the local list for ezsignfoldertype_response_v4->a_obj_usergroup_restricted
    list_t *a_obj_usergroup_restrictedList = NULL;

    // define the local list for ezsignfoldertype_response_v4->a_obj_usergroup_template
    list_t *a_obj_usergroup_templateList = NULL;

    // define the local variable for ezsignfoldertype_response_v4->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignfoldertype_response_v4->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "pkiEzsignfoldertypeID");
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response_v4->obj_ezsignfoldertype_name
    cJSON *obj_ezsignfoldertype_name = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "objEzsignfoldertypeName");
    if (!obj_ezsignfoldertype_name) {
        goto end;
    }

    
    obj_ezsignfoldertype_name_local_nonprim = multilingual_ezsignfoldertype_name_parseFromJSON(obj_ezsignfoldertype_name); //nonprimitive

    // ezsignfoldertype_response_v4->fki_branding_id
    cJSON *fki_branding_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiBrandingID");
    if (!fki_branding_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_branding_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response_v4->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->fki_font_id_annotation
    cJSON *fki_font_id_annotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiFontIDAnnotation");
    if (fki_font_id_annotation) { 
    if(!cJSON_IsNumber(fki_font_id_annotation))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->fki_font_id_formfield
    cJSON *fki_font_id_formfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiFontIDFormfield");
    if (fki_font_id_formfield) { 
    if(!cJSON_IsNumber(fki_font_id_formfield))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->fki_font_id_signature
    cJSON *fki_font_id_signature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiFontIDSignature");
    if (fki_font_id_signature) { 
    if(!cJSON_IsNumber(fki_font_id_signature))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->fki_pdfalevel_id_convert
    cJSON *fki_pdfalevel_id_convert = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "fkiPdfalevelIDConvert");
    if (fki_pdfalevel_id_convert) { 
    if(!cJSON_IsNumber(fki_pdfalevel_id_convert))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_documentdependency
    cJSON *e_ezsignfoldertype_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypeDocumentdependency");
    if (e_ezsignfoldertype_documentdependency) { 
    e_ezsignfoldertype_documentdependency_local_nonprim = field_e_ezsignfoldertype_documentdependency_parseFromJSON(e_ezsignfoldertype_documentdependency); //custom
    }

    // ezsignfoldertype_response_v4->s_branding_description_x
    cJSON *s_branding_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "sBrandingDescriptionX");
    if (!s_branding_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_branding_description_x))
    {
    goto end; //String
    }

    // ezsignfoldertype_response_v4->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "sBillingentityinternalDescriptionX");
    if (s_billingentityinternal_description_x) { 
    if(!cJSON_IsString(s_billingentityinternal_description_x) && !cJSON_IsNull(s_billingentityinternal_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response_v4->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "sEzsigntsarequirementDescriptionX");
    if (s_ezsigntsarequirement_description_x) { 
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x) && !cJSON_IsNull(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response_v4->s_email_address_signed
    cJSON *s_email_address_signed = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "sEmailAddressSigned");
    if (s_email_address_signed) { 
    if(!cJSON_IsString(s_email_address_signed) && !cJSON_IsNull(s_email_address_signed))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response_v4->s_email_address_summary
    cJSON *s_email_address_summary = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "sEmailAddressSummary");
    if (s_email_address_summary) { 
    if(!cJSON_IsString(s_email_address_summary) && !cJSON_IsNull(s_email_address_summary))
    {
    goto end; //String
    }
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfarequirement
    cJSON *e_ezsignfoldertype_pdfarequirement = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypePdfarequirement");
    if (e_ezsignfoldertype_pdfarequirement) { 
    e_ezsignfoldertype_pdfarequirement_local_nonprim = field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(e_ezsignfoldertype_pdfarequirement); //custom
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_pdfanoncompliantaction
    cJSON *e_ezsignfoldertype_pdfanoncompliantaction = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypePdfanoncompliantaction");
    if (e_ezsignfoldertype_pdfanoncompliantaction) { 
    e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = field_e_ezsignfoldertype_pdfanoncompliantaction_parseFromJSON(e_ezsignfoldertype_pdfanoncompliantaction); //custom
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypePrivacylevel");
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeannotation
    cJSON *i_ezsignfoldertype_fontsizeannotation = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeFontsizeannotation");
    if (i_ezsignfoldertype_fontsizeannotation) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeannotation))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_fontsizeformfield
    cJSON *i_ezsignfoldertype_fontsizeformfield = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeFontsizeformfield");
    if (i_ezsignfoldertype_fontsizeformfield) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_fontsizeformfield))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderfirstdays
    cJSON *i_ezsignfoldertype_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeSendreminderfirstdays");
    if (i_ezsignfoldertype_sendreminderfirstdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_sendreminderotherdays
    cJSON *i_ezsignfoldertype_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeSendreminderotherdays");
    if (i_ezsignfoldertype_sendreminderotherdays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_archivaldays
    cJSON *i_ezsignfoldertype_archivaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeArchivaldays");
    if (!i_ezsignfoldertype_archivaldays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_archivaldays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_disposal
    cJSON *e_ezsignfoldertype_disposal = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypeDisposal");
    if (!e_ezsignfoldertype_disposal) {
        goto end;
    }

    
    e_ezsignfoldertype_disposal_local_nonprim = field_e_ezsignfoldertype_disposal_parseFromJSON(e_ezsignfoldertype_disposal); //custom

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_completion
    cJSON *e_ezsignfoldertype_completion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypeCompletion");
    if (!e_ezsignfoldertype_completion) {
        goto end;
    }

    
    e_ezsignfoldertype_completion_local_nonprim = field_e_ezsignfoldertype_completion_parseFromJSON(e_ezsignfoldertype_completion); //custom

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_disposaldays
    cJSON *i_ezsignfoldertype_disposaldays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeDisposaldays");
    if (i_ezsignfoldertype_disposaldays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_disposaldays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypeDeadlinedays");
    if (!i_ezsignfoldertype_deadlinedays) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignfoldertype_deadlinedays))
    {
    goto end; //Numeric
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_prematurelyendautomatically
    cJSON *b_ezsignfoldertype_prematurelyendautomatically = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypePrematurelyendautomatically");
    if (b_ezsignfoldertype_prematurelyendautomatically) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_prematurelyendautomatically))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->i_ezsignfoldertype_prematurelyendautomaticallydays
    cJSON *i_ezsignfoldertype_prematurelyendautomaticallydays = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "iEzsignfoldertypePrematurelyendautomaticallydays");
    if (i_ezsignfoldertype_prematurelyendautomaticallydays) { 
    if(!cJSON_IsNumber(i_ezsignfoldertype_prematurelyendautomaticallydays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_automaticsignature
    cJSON *b_ezsignfoldertype_automaticsignature = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeAutomaticsignature");
    if (b_ezsignfoldertype_automaticsignature) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_automaticsignature))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeDelegate");
    if (b_ezsignfoldertype_delegate) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_delegate))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeDiscussion");
    if (b_ezsignfoldertype_discussion) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_discussion))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_logrecipientinproof
    cJSON *b_ezsignfoldertype_logrecipientinproof = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeLogrecipientinproof");
    if (b_ezsignfoldertype_logrecipientinproof) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_logrecipientinproof))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeReassignezsignsigner");
    if (b_ezsignfoldertype_reassignezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeReassignuser");
    if (b_ezsignfoldertype_reassignuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassignuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_reassigngroup
    cJSON *b_ezsignfoldertype_reassigngroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeReassigngroup");
    if (b_ezsignfoldertype_reassigngroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_reassigngroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtoezsignsigner
    cJSON *b_ezsignfoldertype_sendsignedtoezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtoezsignsigner");
    if (b_ezsignfoldertype_sendsignedtoezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtoezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtouser
    cJSON *b_ezsignfoldertype_sendsignedtouser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtouser");
    if (b_ezsignfoldertype_sendsignedtouser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtouser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentezsignsigner
    cJSON *b_ezsignfoldertype_sendattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendattachmentezsignsigner");
    if (b_ezsignfoldertype_sendattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendproofezsignsigner");
    if (b_ezsignfoldertype_sendproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendattachmentuser
    cJSON *b_ezsignfoldertype_sendattachmentuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendattachmentuser");
    if (b_ezsignfoldertype_sendattachmentuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendattachmentuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofuser
    cJSON *b_ezsignfoldertype_sendproofuser = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendproofuser");
    if (b_ezsignfoldertype_sendproofuser) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofuser))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofemail
    cJSON *b_ezsignfoldertype_sendproofemail = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendproofemail");
    if (b_ezsignfoldertype_sendproofemail) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofemail))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadattachmentezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_allowdownloadproofezsignsigner))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendproofreceivealldocument
    cJSON *b_ezsignfoldertype_sendproofreceivealldocument = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendproofreceivealldocument");
    if (b_ezsignfoldertype_sendproofreceivealldocument) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendproofreceivealldocument))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtodocumentowner
    cJSON *b_ezsignfoldertype_sendsignedtodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtodocumentowner");
    if (!b_ezsignfoldertype_sendsignedtodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofolderowner
    cJSON *b_ezsignfoldertype_sendsignedtofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtofolderowner");
    if (!b_ezsignfoldertype_sendsignedtofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtofullgroup
    cJSON *b_ezsignfoldertype_sendsignedtofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtofullgroup");
    if (b_ezsignfoldertype_sendsignedtofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtolimitedgroup
    cJSON *b_ezsignfoldertype_sendsignedtolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtolimitedgroup");
    if (b_ezsignfoldertype_sendsignedtolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsignedtocolleague
    cJSON *b_ezsignfoldertype_sendsignedtocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsignedtocolleague");
    if (!b_ezsignfoldertype_sendsignedtocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsignedtocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytodocumentowner
    cJSON *b_ezsignfoldertype_sendsummarytodocumentowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsummarytodocumentowner");
    if (!b_ezsignfoldertype_sendsummarytodocumentowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytodocumentowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofolderowner
    cJSON *b_ezsignfoldertype_sendsummarytofolderowner = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsummarytofolderowner");
    if (!b_ezsignfoldertype_sendsummarytofolderowner) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofolderowner))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytofullgroup
    cJSON *b_ezsignfoldertype_sendsummarytofullgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsummarytofullgroup");
    if (b_ezsignfoldertype_sendsummarytofullgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytofullgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytolimitedgroup
    cJSON *b_ezsignfoldertype_sendsummarytolimitedgroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsummarytolimitedgroup");
    if (b_ezsignfoldertype_sendsummarytolimitedgroup) { 
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytolimitedgroup))
    {
    goto end; //Bool
    }
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_sendsummarytocolleague
    cJSON *b_ezsignfoldertype_sendsummarytocolleague = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeSendsummarytocolleague");
    if (!b_ezsignfoldertype_sendsummarytocolleague) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_sendsummarytocolleague))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->e_ezsignfoldertype_signeraccess
    cJSON *e_ezsignfoldertype_signeraccess = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "eEzsignfoldertypeSigneraccess");
    if (e_ezsignfoldertype_signeraccess) { 
    e_ezsignfoldertype_signeraccess_local_nonprim = field_e_ezsignfoldertype_signeraccess_parseFromJSON(e_ezsignfoldertype_signeraccess); //custom
    }

    // ezsignfoldertype_response_v4->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "bEzsignfoldertypeIsactive");
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }

    // ezsignfoldertype_response_v4->a_fki_pdfalevel_id
    cJSON *a_fki_pdfalevel_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "a_fkiPdfalevelID");
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
        double *a_fki_pdfalevel_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_pdfalevel_id_local_value)
        {
            goto end;
        }
        *a_fki_pdfalevel_id_local_value = a_fki_pdfalevel_id_local->valuedouble;
        list_addElement(a_fki_pdfalevel_idList , a_fki_pdfalevel_id_local_value);
    }
    }

    // ezsignfoldertype_response_v4->a_obj_userlogintype
    cJSON *a_obj_userlogintype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "a_objUserlogintype");
    if (!a_obj_userlogintype) {
        goto end;
    }

    
    cJSON *a_obj_userlogintype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_userlogintype)){
        goto end; //nonprimitive container
    }

    a_obj_userlogintypeList = list_createList();

    cJSON_ArrayForEach(a_obj_userlogintype_local_nonprimitive,a_obj_userlogintype )
    {
        if(!cJSON_IsObject(a_obj_userlogintype_local_nonprimitive)){
            goto end;
        }
        userlogintype_response_t *a_obj_userlogintypeItem = userlogintype_response_parseFromJSON(a_obj_userlogintype_local_nonprimitive);

        list_addElement(a_obj_userlogintypeList, a_obj_userlogintypeItem);
    }

    // ezsignfoldertype_response_v4->a_obj_usergroup_all
    cJSON *a_obj_usergroup_all = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "a_objUsergroupAll");
    if (a_obj_usergroup_all) { 
    cJSON *a_obj_usergroup_all_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroup_all)){
        goto end; //nonprimitive container
    }

    a_obj_usergroup_allList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroup_all_local_nonprimitive,a_obj_usergroup_all )
    {
        if(!cJSON_IsObject(a_obj_usergroup_all_local_nonprimitive)){
            goto end;
        }
        usergroup_response_t *a_obj_usergroup_allItem = usergroup_response_parseFromJSON(a_obj_usergroup_all_local_nonprimitive);

        list_addElement(a_obj_usergroup_allList, a_obj_usergroup_allItem);
    }
    }

    // ezsignfoldertype_response_v4->a_obj_usergroup_restricted
    cJSON *a_obj_usergroup_restricted = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "a_objUsergroupRestricted");
    if (a_obj_usergroup_restricted) { 
    cJSON *a_obj_usergroup_restricted_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroup_restricted)){
        goto end; //nonprimitive container
    }

    a_obj_usergroup_restrictedList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroup_restricted_local_nonprimitive,a_obj_usergroup_restricted )
    {
        if(!cJSON_IsObject(a_obj_usergroup_restricted_local_nonprimitive)){
            goto end;
        }
        usergroup_response_t *a_obj_usergroup_restrictedItem = usergroup_response_parseFromJSON(a_obj_usergroup_restricted_local_nonprimitive);

        list_addElement(a_obj_usergroup_restrictedList, a_obj_usergroup_restrictedItem);
    }
    }

    // ezsignfoldertype_response_v4->a_obj_usergroup_template
    cJSON *a_obj_usergroup_template = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "a_objUsergroupTemplate");
    if (a_obj_usergroup_template) { 
    cJSON *a_obj_usergroup_template_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroup_template)){
        goto end; //nonprimitive container
    }

    a_obj_usergroup_templateList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroup_template_local_nonprimitive,a_obj_usergroup_template )
    {
        if(!cJSON_IsObject(a_obj_usergroup_template_local_nonprimitive)){
            goto end;
        }
        usergroup_response_t *a_obj_usergroup_templateItem = usergroup_response_parseFromJSON(a_obj_usergroup_template_local_nonprimitive);

        list_addElement(a_obj_usergroup_templateList, a_obj_usergroup_templateItem);
    }
    }

    // ezsignfoldertype_response_v4->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_response_v4JSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignfoldertype_response_v4_local_var = ezsignfoldertype_response_v4_create (
        pki_ezsignfoldertype_id->valuedouble,
        obj_ezsignfoldertype_name_local_nonprim,
        fki_branding_id->valuedouble,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        fki_font_id_annotation ? fki_font_id_annotation->valuedouble : 0,
        fki_font_id_formfield ? fki_font_id_formfield->valuedouble : 0,
        fki_font_id_signature ? fki_font_id_signature->valuedouble : 0,
        fki_pdfalevel_id_convert ? fki_pdfalevel_id_convert->valuedouble : 0,
        e_ezsignfoldertype_documentdependency ? e_ezsignfoldertype_documentdependency_local_nonprim : NULL,
        strdup(s_branding_description_x->valuestring),
        s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x) ? strdup(s_billingentityinternal_description_x->valuestring) : NULL,
        s_ezsigntsarequirement_description_x && !cJSON_IsNull(s_ezsigntsarequirement_description_x) ? strdup(s_ezsigntsarequirement_description_x->valuestring) : NULL,
        s_email_address_signed && !cJSON_IsNull(s_email_address_signed) ? strdup(s_email_address_signed->valuestring) : NULL,
        s_email_address_summary && !cJSON_IsNull(s_email_address_summary) ? strdup(s_email_address_summary->valuestring) : NULL,
        e_ezsignfoldertype_pdfarequirement ? e_ezsignfoldertype_pdfarequirement_local_nonprim : NULL,
        e_ezsignfoldertype_pdfanoncompliantaction ? e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim : NULL,
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
        e_ezsignfoldertype_signeraccess ? e_ezsignfoldertype_signeraccess_local_nonprim : NULL,
        b_ezsignfoldertype_isactive->valueint,
        a_fki_pdfalevel_id ? a_fki_pdfalevel_idList : NULL,
        a_obj_userlogintypeList,
        a_obj_usergroup_all ? a_obj_usergroup_allList : NULL,
        a_obj_usergroup_restricted ? a_obj_usergroup_restrictedList : NULL,
        a_obj_usergroup_template ? a_obj_usergroup_templateList : NULL,
        obj_audit_local_nonprim
        );

    return ezsignfoldertype_response_v4_local_var;
end:
    if (obj_ezsignfoldertype_name_local_nonprim) {
        multilingual_ezsignfoldertype_name_free(obj_ezsignfoldertype_name_local_nonprim);
        obj_ezsignfoldertype_name_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_documentdependency_local_nonprim) {
        field_e_ezsignfoldertype_documentdependency_free(e_ezsignfoldertype_documentdependency_local_nonprim);
        e_ezsignfoldertype_documentdependency_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_pdfarequirement_local_nonprim) {
        field_e_ezsignfoldertype_pdfarequirement_free(e_ezsignfoldertype_pdfarequirement_local_nonprim);
        e_ezsignfoldertype_pdfarequirement_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim) {
        field_e_ezsignfoldertype_pdfanoncompliantaction_free(e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim);
        e_ezsignfoldertype_pdfanoncompliantaction_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        field_e_ezsignfoldertype_privacylevel_free(e_ezsignfoldertype_privacylevel_local_nonprim);
        e_ezsignfoldertype_privacylevel_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_disposal_local_nonprim) {
        field_e_ezsignfoldertype_disposal_free(e_ezsignfoldertype_disposal_local_nonprim);
        e_ezsignfoldertype_disposal_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_completion_local_nonprim) {
        field_e_ezsignfoldertype_completion_free(e_ezsignfoldertype_completion_local_nonprim);
        e_ezsignfoldertype_completion_local_nonprim = NULL;
    }
    if (e_ezsignfoldertype_signeraccess_local_nonprim) {
        field_e_ezsignfoldertype_signeraccess_free(e_ezsignfoldertype_signeraccess_local_nonprim);
        e_ezsignfoldertype_signeraccess_local_nonprim = NULL;
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
    if (a_obj_userlogintypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userlogintypeList) {
            userlogintype_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userlogintypeList);
        a_obj_userlogintypeList = NULL;
    }
    if (a_obj_usergroup_allList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroup_allList) {
            usergroup_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroup_allList);
        a_obj_usergroup_allList = NULL;
    }
    if (a_obj_usergroup_restrictedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroup_restrictedList) {
            usergroup_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroup_restrictedList);
        a_obj_usergroup_restrictedList = NULL;
    }
    if (a_obj_usergroup_templateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroup_templateList) {
            usergroup_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroup_templateList);
        a_obj_usergroup_templateList = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
