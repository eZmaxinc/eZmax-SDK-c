#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignfoldertype_response.h"



static custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_create_internal(
    int *pki_ezsignfoldertype_id,
    int *fki_font_id_annotation,
    int *fki_font_id_formfield,
    int *fki_font_id_signature,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignfoldertype_sendproofezsignsigner,
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int *b_ezsignfoldertype_automaticsignature,
    int *b_ezsignfoldertype_delegate,
    int *b_ezsignfoldertype_discussion,
    int *b_ezsignfoldertype_reassignezsignsigner,
    int *b_ezsignfoldertype_reassignuser,
    int *b_ezsignfoldertype_reassigngroup,
    int *i_ezsignfoldertype_deadlinedays,
    int *i_ezsignfoldertype_fontsizeannotation,
    int *i_ezsignfoldertype_fontsizeformfield,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge
    ) {
    custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_local_var = malloc(sizeof(custom_ezsignfoldertype_response_t));
    if (!custom_ezsignfoldertype_response_local_var) {
        return NULL;
    }
    memset(custom_ezsignfoldertype_response_local_var, 0, sizeof(custom_ezsignfoldertype_response_t));
    custom_ezsignfoldertype_response_local_var->_library_owned = 1;
    custom_ezsignfoldertype_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    custom_ezsignfoldertype_response_local_var->fki_font_id_annotation = fki_font_id_annotation;
    custom_ezsignfoldertype_response_local_var->fki_font_id_formfield = fki_font_id_formfield;
    custom_ezsignfoldertype_response_local_var->fki_font_id_signature = fki_font_id_signature;
    custom_ezsignfoldertype_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_sendproofezsignsigner = b_ezsignfoldertype_sendproofezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_allowdownloadproofezsignsigner = b_ezsignfoldertype_allowdownloadproofezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_automaticsignature = b_ezsignfoldertype_automaticsignature;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_delegate = b_ezsignfoldertype_delegate;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_discussion = b_ezsignfoldertype_discussion;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassignezsignsigner = b_ezsignfoldertype_reassignezsignsigner;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassignuser = b_ezsignfoldertype_reassignuser;
    custom_ezsignfoldertype_response_local_var->b_ezsignfoldertype_reassigngroup = b_ezsignfoldertype_reassigngroup;
    custom_ezsignfoldertype_response_local_var->i_ezsignfoldertype_deadlinedays = i_ezsignfoldertype_deadlinedays;
    custom_ezsignfoldertype_response_local_var->i_ezsignfoldertype_fontsizeannotation = i_ezsignfoldertype_fontsizeannotation;
    custom_ezsignfoldertype_response_local_var->i_ezsignfoldertype_fontsizeformfield = i_ezsignfoldertype_fontsizeformfield;
    custom_ezsignfoldertype_response_local_var->e_ezsignfoldertype_documentmerge = e_ezsignfoldertype_documentmerge;
    return custom_ezsignfoldertype_response_local_var;
}

__attribute__((deprecated)) custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_create(
    int *pki_ezsignfoldertype_id,
    int *fki_font_id_annotation,
    int *fki_font_id_formfield,
    int *fki_font_id_signature,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsignfoldertype_sendproofezsignsigner,
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner,
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner,
    int *b_ezsignfoldertype_automaticsignature,
    int *b_ezsignfoldertype_delegate,
    int *b_ezsignfoldertype_discussion,
    int *b_ezsignfoldertype_reassignezsignsigner,
    int *b_ezsignfoldertype_reassignuser,
    int *b_ezsignfoldertype_reassigngroup,
    int *i_ezsignfoldertype_deadlinedays,
    int *i_ezsignfoldertype_fontsizeannotation,
    int *i_ezsignfoldertype_fontsizeformfield,
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge
    ) {
    int *pki_ezsignfoldertype_id_copy = NULL;
    if (pki_ezsignfoldertype_id) {
        pki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldertype_id_copy) *pki_ezsignfoldertype_id_copy = *pki_ezsignfoldertype_id;
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
    int *b_ezsignfoldertype_sendproofezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_sendproofezsignsigner) {
        b_ezsignfoldertype_sendproofezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_sendproofezsignsigner_copy) *b_ezsignfoldertype_sendproofezsignsigner_copy = *b_ezsignfoldertype_sendproofezsignsigner;
    }
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy) *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy = *b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    }
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = NULL;
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner) {
        b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_allowdownloadproofezsignsigner_copy) *b_ezsignfoldertype_allowdownloadproofezsignsigner_copy = *b_ezsignfoldertype_allowdownloadproofezsignsigner;
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
    int *i_ezsignfoldertype_deadlinedays_copy = NULL;
    if (i_ezsignfoldertype_deadlinedays) {
        i_ezsignfoldertype_deadlinedays_copy = malloc(sizeof(int));
        if (i_ezsignfoldertype_deadlinedays_copy) *i_ezsignfoldertype_deadlinedays_copy = *i_ezsignfoldertype_deadlinedays;
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
    custom_ezsignfoldertype_response_t *result = custom_ezsignfoldertype_response_create_internal (
        pki_ezsignfoldertype_id_copy,
        fki_font_id_annotation_copy,
        fki_font_id_formfield_copy,
        fki_font_id_signature_copy,
        s_ezsignfoldertype_name_x,
        b_ezsignfoldertype_sendproofezsignsigner_copy,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy,
        b_ezsignfoldertype_allowdownloadproofezsignsigner_copy,
        b_ezsignfoldertype_automaticsignature_copy,
        b_ezsignfoldertype_delegate_copy,
        b_ezsignfoldertype_discussion_copy,
        b_ezsignfoldertype_reassignezsignsigner_copy,
        b_ezsignfoldertype_reassignuser_copy,
        b_ezsignfoldertype_reassigngroup_copy,
        i_ezsignfoldertype_deadlinedays_copy,
        i_ezsignfoldertype_fontsizeannotation_copy,
        i_ezsignfoldertype_fontsizeformfield_copy,
        e_ezsignfoldertype_documentmerge
        );
    if (!result) {
        free(pki_ezsignfoldertype_id_copy);
        free(fki_font_id_annotation_copy);
        free(fki_font_id_formfield_copy);
        free(fki_font_id_signature_copy);
        free(b_ezsignfoldertype_sendproofezsignsigner_copy);
        free(b_ezsignfoldertype_allowdownloadattachmentezsignsigner_copy);
        free(b_ezsignfoldertype_allowdownloadproofezsignsigner_copy);
        free(b_ezsignfoldertype_automaticsignature_copy);
        free(b_ezsignfoldertype_delegate_copy);
        free(b_ezsignfoldertype_discussion_copy);
        free(b_ezsignfoldertype_reassignezsignsigner_copy);
        free(b_ezsignfoldertype_reassignuser_copy);
        free(b_ezsignfoldertype_reassigngroup_copy);
        free(i_ezsignfoldertype_deadlinedays_copy);
        free(i_ezsignfoldertype_fontsizeannotation_copy);
        free(i_ezsignfoldertype_fontsizeformfield_copy);
    }
    return result;
}

void custom_ezsignfoldertype_response_free(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response) {
    if(NULL == custom_ezsignfoldertype_response){
        return ;
    }
    if(custom_ezsignfoldertype_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignfoldertype_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignfoldertype_response->pki_ezsignfoldertype_id) {
        free(custom_ezsignfoldertype_response->pki_ezsignfoldertype_id);
        custom_ezsignfoldertype_response->pki_ezsignfoldertype_id = NULL;
    }
    if (custom_ezsignfoldertype_response->fki_font_id_annotation) {
        free(custom_ezsignfoldertype_response->fki_font_id_annotation);
        custom_ezsignfoldertype_response->fki_font_id_annotation = NULL;
    }
    if (custom_ezsignfoldertype_response->fki_font_id_formfield) {
        free(custom_ezsignfoldertype_response->fki_font_id_formfield);
        custom_ezsignfoldertype_response->fki_font_id_formfield = NULL;
    }
    if (custom_ezsignfoldertype_response->fki_font_id_signature) {
        free(custom_ezsignfoldertype_response->fki_font_id_signature);
        custom_ezsignfoldertype_response->fki_font_id_signature = NULL;
    }
    if (custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) {
        free(custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x);
        custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser = NULL;
    }
    if (custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup) {
        free(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup);
        custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup = NULL;
    }
    if (custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays) {
        free(custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays);
        custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays = NULL;
    }
    if (custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation) {
        free(custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation);
        custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation = NULL;
    }
    if (custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield) {
        free(custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield);
        custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield = NULL;
    }
    free(custom_ezsignfoldertype_response);
}

cJSON *custom_ezsignfoldertype_response_convertToJSON(custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignfoldertype_response->pki_ezsignfoldertype_id
    if (!custom_ezsignfoldertype_response->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", *custom_ezsignfoldertype_response->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_ezsignfoldertype_response->fki_font_id_annotation
    if(custom_ezsignfoldertype_response->fki_font_id_annotation) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDAnnotation", *custom_ezsignfoldertype_response->fki_font_id_annotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->fki_font_id_formfield
    if(custom_ezsignfoldertype_response->fki_font_id_formfield) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDFormfield", *custom_ezsignfoldertype_response->fki_font_id_formfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->fki_font_id_signature
    if(custom_ezsignfoldertype_response->fki_font_id_signature) {
    if(cJSON_AddNumberToObject(item, "fkiFontIDSignature", *custom_ezsignfoldertype_response->fki_font_id_signature) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x
    if(custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeSendproofezsignsigner", *custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner", *custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAllowdownloadproofezsignsigner", *custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeAutomaticsignature", *custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDelegate", *custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeDiscussion", *custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignezsignsigner", *custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassignuser", *custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup
    if(custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup) {
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeReassigngroup", *custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup) == NULL) {
    goto fail; //Bool
    }
    }


    // custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays
    if(custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeDeadlinedays", *custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation
    if(custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeannotation", *custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield
    if(custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield) {
    if(cJSON_AddNumberToObject(item, "iEzsignfoldertypeFontsizeformfield", *custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_ezsignfoldertype_response->e_ezsignfoldertype_documentmerge
    if(custom_ezsignfoldertype_response->e_ezsignfoldertype_documentmerge != ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__NULL) {
    cJSON *e_ezsignfoldertype_documentmerge_local_JSON = field_e_ezsignfoldertype_documentmerge_convertToJSON(custom_ezsignfoldertype_response->e_ezsignfoldertype_documentmerge);
    if(e_ezsignfoldertype_documentmerge_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypeDocumentmerge", e_ezsignfoldertype_documentmerge_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_parseFromJSON(cJSON *custom_ezsignfoldertype_responseJSON){

    custom_ezsignfoldertype_response_t *custom_ezsignfoldertype_response_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->pki_ezsignfoldertype_id
    int *pki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->fki_font_id_annotation
    int *fki_font_id_annotation_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->fki_font_id_formfield
    int *fki_font_id_formfield_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->fki_font_id_signature
    int *fki_font_id_signature_local_var = NULL;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner
    int *b_ezsignfoldertype_sendproofezsignsigner_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    int *b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    int *b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature
    int *b_ezsignfoldertype_automaticsignature_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    int *b_ezsignfoldertype_delegate_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion
    int *b_ezsignfoldertype_discussion_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner
    int *b_ezsignfoldertype_reassignezsignsigner_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser
    int *b_ezsignfoldertype_reassignuser_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup
    int *b_ezsignfoldertype_reassigngroup_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays
    int *i_ezsignfoldertype_deadlinedays_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation
    int *i_ezsignfoldertype_fontsizeannotation_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield
    int *i_ezsignfoldertype_fontsizeformfield_local_var = NULL;

    // define the local variable for custom_ezsignfoldertype_response->e_ezsignfoldertype_documentmerge
    ezmax_api_definition__full_field_e_ezsignfoldertype_documentmerge__e e_ezsignfoldertype_documentmerge_local_nonprim = 0;

    // custom_ezsignfoldertype_response->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
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

    // custom_ezsignfoldertype_response->fki_font_id_annotation
    cJSON *fki_font_id_annotation = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "fkiFontIDAnnotation");
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

    // custom_ezsignfoldertype_response->fki_font_id_formfield
    cJSON *fki_font_id_formfield = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "fkiFontIDFormfield");
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

    // custom_ezsignfoldertype_response->fki_font_id_signature
    cJSON *fki_font_id_signature = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "fkiFontIDSignature");
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

    // custom_ezsignfoldertype_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_sendproofezsignsigner
    cJSON *b_ezsignfoldertype_sendproofezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeSendproofezsignsigner");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadattachmentezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadattachmentezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeAllowdownloadattachmentezsignsigner");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_allowdownloadproofezsignsigner
    cJSON *b_ezsignfoldertype_allowdownloadproofezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeAllowdownloadproofezsignsigner");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_automaticsignature
    cJSON *b_ezsignfoldertype_automaticsignature = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeAutomaticsignature");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_delegate
    cJSON *b_ezsignfoldertype_delegate = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeDelegate");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_discussion
    cJSON *b_ezsignfoldertype_discussion = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeDiscussion");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignezsignsigner
    cJSON *b_ezsignfoldertype_reassignezsignsigner = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassignezsignsigner");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassignuser
    cJSON *b_ezsignfoldertype_reassignuser = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassignuser");
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

    // custom_ezsignfoldertype_response->b_ezsignfoldertype_reassigngroup
    cJSON *b_ezsignfoldertype_reassigngroup = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "bEzsignfoldertypeReassigngroup");
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

    // custom_ezsignfoldertype_response->i_ezsignfoldertype_deadlinedays
    cJSON *i_ezsignfoldertype_deadlinedays = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "iEzsignfoldertypeDeadlinedays");
    if (cJSON_IsNull(i_ezsignfoldertype_deadlinedays)) {
        i_ezsignfoldertype_deadlinedays = NULL;
    }
    if (i_ezsignfoldertype_deadlinedays) { 
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
    }

    // custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeannotation
    cJSON *i_ezsignfoldertype_fontsizeannotation = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "iEzsignfoldertypeFontsizeannotation");
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

    // custom_ezsignfoldertype_response->i_ezsignfoldertype_fontsizeformfield
    cJSON *i_ezsignfoldertype_fontsizeformfield = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "iEzsignfoldertypeFontsizeformfield");
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

    // custom_ezsignfoldertype_response->e_ezsignfoldertype_documentmerge
    cJSON *e_ezsignfoldertype_documentmerge = cJSON_GetObjectItemCaseSensitive(custom_ezsignfoldertype_responseJSON, "eEzsignfoldertypeDocumentmerge");
    if (cJSON_IsNull(e_ezsignfoldertype_documentmerge)) {
        e_ezsignfoldertype_documentmerge = NULL;
    }
    if (e_ezsignfoldertype_documentmerge) { 
    e_ezsignfoldertype_documentmerge_local_nonprim = field_e_ezsignfoldertype_documentmerge_parseFromJSON(e_ezsignfoldertype_documentmerge); //custom
    }


    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    custom_ezsignfoldertype_response_local_var = custom_ezsignfoldertype_response_create_internal (
        pki_ezsignfoldertype_id_local_var,
        fki_font_id_annotation_local_var,
        fki_font_id_formfield_local_var,
        fki_font_id_signature_local_var,
        s_ezsignfoldertype_name_x_local_str,
        b_ezsignfoldertype_sendproofezsignsigner_local_var,
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var,
        b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var,
        b_ezsignfoldertype_automaticsignature_local_var,
        b_ezsignfoldertype_delegate_local_var,
        b_ezsignfoldertype_discussion_local_var,
        b_ezsignfoldertype_reassignezsignsigner_local_var,
        b_ezsignfoldertype_reassignuser_local_var,
        b_ezsignfoldertype_reassigngroup_local_var,
        i_ezsignfoldertype_deadlinedays_local_var,
        i_ezsignfoldertype_fontsizeannotation_local_var,
        i_ezsignfoldertype_fontsizeformfield_local_var,
        e_ezsignfoldertype_documentmerge ? e_ezsignfoldertype_documentmerge_local_nonprim : 0
        );

    if (!custom_ezsignfoldertype_response_local_var) {
        goto end;
    }

    return custom_ezsignfoldertype_response_local_var;
end:
    if (pki_ezsignfoldertype_id_local_var) {
        free(pki_ezsignfoldertype_id_local_var);
        pki_ezsignfoldertype_id_local_var = NULL;
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
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (b_ezsignfoldertype_sendproofezsignsigner_local_var) {
        free(b_ezsignfoldertype_sendproofezsignsigner_local_var);
        b_ezsignfoldertype_sendproofezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var) {
        free(b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var);
        b_ezsignfoldertype_allowdownloadattachmentezsignsigner_local_var = NULL;
    }
    if (b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var) {
        free(b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var);
        b_ezsignfoldertype_allowdownloadproofezsignsigner_local_var = NULL;
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
    if (i_ezsignfoldertype_deadlinedays_local_var) {
        free(i_ezsignfoldertype_deadlinedays_local_var);
        i_ezsignfoldertype_deadlinedays_local_var = NULL;
    }
    if (i_ezsignfoldertype_fontsizeannotation_local_var) {
        free(i_ezsignfoldertype_fontsizeannotation_local_var);
        i_ezsignfoldertype_fontsizeannotation_local_var = NULL;
    }
    if (i_ezsignfoldertype_fontsizeformfield_local_var) {
        free(i_ezsignfoldertype_fontsizeformfield_local_var);
        i_ezsignfoldertype_fontsizeformfield_local_var = NULL;
    }
    if (e_ezsignfoldertype_documentmerge_local_nonprim) {
        e_ezsignfoldertype_documentmerge_local_nonprim = 0;
    }
    return NULL;

}
