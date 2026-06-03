#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_request_compound_v2.h"



static ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_create_internal(
    int *pki_ezsignsignature_id,
    int *fki_ezsignfoldersignerassociation_id,
    int *fki_paymentgateway_id,
    int *i_ezsignpage_pagenumber,
    int *i_ezsignsignature_x,
    int *i_ezsignsignature_y,
    int *i_ezsignsignature_width,
    int *i_ezsignsignature_height,
    int *i_ezsignsignature_step,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e e_ezsignsignature_signaturepad,
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepadrequired__e e_ezsignsignature_signaturepadrequired,
    int *fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int *fki_ezsignfoldersignerassociation_id_validation,
    int *b_ezsignsignature_handwritten,
    int *b_ezsignsignature_reason,
    int *b_ezsignsignature_required,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int *i_ezsignsignature_validationstep,
    int *i_ezsignsignature_maxlength,
    char *s_ezsignsignature_defaultvalue,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    char *s_ezsignsignature_regexp,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    char *s_ezsignsignature_creditcardamountdescription,
    char *d_ezsignsignature_creditcardamount,
    int *b_ezsignsignature_creditcardcustomamount,
    int *b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency,
    list_t *a_obj_ezsignsignaturepaymentdetail
    ) {
    ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_local_var = malloc(sizeof(ezsignsignature_request_compound_v2_t));
    if (!ezsignsignature_request_compound_v2_local_var) {
        return NULL;
    }
    memset(ezsignsignature_request_compound_v2_local_var, 0, sizeof(ezsignsignature_request_compound_v2_t));
    ezsignsignature_request_compound_v2_local_var->_library_owned = 1;
    ezsignsignature_request_compound_v2_local_var->pki_ezsignsignature_id = pki_ezsignsignature_id;
    ezsignsignature_request_compound_v2_local_var->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    ezsignsignature_request_compound_v2_local_var->fki_paymentgateway_id = fki_paymentgateway_id;
    ezsignsignature_request_compound_v2_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_x = i_ezsignsignature_x;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_y = i_ezsignsignature_y;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_width = i_ezsignsignature_width;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_height = i_ezsignsignature_height;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_step = i_ezsignsignature_step;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_type = e_ezsignsignature_type;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_signaturepad = e_ezsignsignature_signaturepad;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_signaturepadrequired = e_ezsignsignature_signaturepadrequired;
    ezsignsignature_request_compound_v2_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignsignature_request_compound_v2_local_var->t_ezsignsignature_tooltip = t_ezsignsignature_tooltip;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_tooltipposition = e_ezsignsignature_tooltipposition;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_font = e_ezsignsignature_font;
    ezsignsignature_request_compound_v2_local_var->fki_ezsignfoldersignerassociation_id_validation = fki_ezsignfoldersignerassociation_id_validation;
    ezsignsignature_request_compound_v2_local_var->b_ezsignsignature_handwritten = b_ezsignsignature_handwritten;
    ezsignsignature_request_compound_v2_local_var->b_ezsignsignature_reason = b_ezsignsignature_reason;
    ezsignsignature_request_compound_v2_local_var->b_ezsignsignature_required = b_ezsignsignature_required;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_attachmentnamesource = e_ezsignsignature_attachmentnamesource;
    ezsignsignature_request_compound_v2_local_var->s_ezsignsignature_attachmentdescription = s_ezsignsignature_attachmentdescription;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_consultationtrigger = e_ezsignsignature_consultationtrigger;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_validationstep = i_ezsignsignature_validationstep;
    ezsignsignature_request_compound_v2_local_var->i_ezsignsignature_maxlength = i_ezsignsignature_maxlength;
    ezsignsignature_request_compound_v2_local_var->s_ezsignsignature_defaultvalue = s_ezsignsignature_defaultvalue;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_textvalidation = e_ezsignsignature_textvalidation;
    ezsignsignature_request_compound_v2_local_var->s_ezsignsignature_textvalidationcustommessage = s_ezsignsignature_textvalidationcustommessage;
    ezsignsignature_request_compound_v2_local_var->s_ezsignsignature_regexp = s_ezsignsignature_regexp;
    ezsignsignature_request_compound_v2_local_var->e_ezsignsignature_dependencyrequirement = e_ezsignsignature_dependencyrequirement;
    ezsignsignature_request_compound_v2_local_var->s_ezsignsignature_creditcardamountdescription = s_ezsignsignature_creditcardamountdescription;
    ezsignsignature_request_compound_v2_local_var->d_ezsignsignature_creditcardamount = d_ezsignsignature_creditcardamount;
    ezsignsignature_request_compound_v2_local_var->b_ezsignsignature_creditcardcustomamount = b_ezsignsignature_creditcardcustomamount;
    ezsignsignature_request_compound_v2_local_var->b_ezsignsignature_customdate = b_ezsignsignature_customdate;
    ezsignsignature_request_compound_v2_local_var->a_obj_ezsignsignaturecustomdate = a_obj_ezsignsignaturecustomdate;
    ezsignsignature_request_compound_v2_local_var->a_obj_ezsignelementdependency = a_obj_ezsignelementdependency;
    ezsignsignature_request_compound_v2_local_var->a_obj_ezsignsignaturepaymentdetail = a_obj_ezsignsignaturepaymentdetail;
    return ezsignsignature_request_compound_v2_local_var;
}

__attribute__((deprecated)) ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_create(
    int *pki_ezsignsignature_id,
    int *fki_ezsignfoldersignerassociation_id,
    int *fki_paymentgateway_id,
    int *i_ezsignpage_pagenumber,
    int *i_ezsignsignature_x,
    int *i_ezsignsignature_y,
    int *i_ezsignsignature_width,
    int *i_ezsignsignature_height,
    int *i_ezsignsignature_step,
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type,
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e e_ezsignsignature_signaturepad,
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepadrequired__e e_ezsignsignature_signaturepadrequired,
    int *fki_ezsigndocument_id,
    char *t_ezsignsignature_tooltip,
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font,
    int *fki_ezsignfoldersignerassociation_id_validation,
    int *b_ezsignsignature_handwritten,
    int *b_ezsignsignature_reason,
    int *b_ezsignsignature_required,
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource,
    char *s_ezsignsignature_attachmentdescription,
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger,
    int *i_ezsignsignature_validationstep,
    int *i_ezsignsignature_maxlength,
    char *s_ezsignsignature_defaultvalue,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation,
    char *s_ezsignsignature_textvalidationcustommessage,
    char *s_ezsignsignature_regexp,
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement,
    char *s_ezsignsignature_creditcardamountdescription,
    char *d_ezsignsignature_creditcardamount,
    int *b_ezsignsignature_creditcardcustomamount,
    int *b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate,
    list_t *a_obj_ezsignelementdependency,
    list_t *a_obj_ezsignsignaturepaymentdetail
    ) {
    int *pki_ezsignsignature_id_copy = NULL;
    if (pki_ezsignsignature_id) {
        pki_ezsignsignature_id_copy = malloc(sizeof(int));
        if (pki_ezsignsignature_id_copy) *pki_ezsignsignature_id_copy = *pki_ezsignsignature_id;
    }
    int *fki_ezsignfoldersignerassociation_id_copy = NULL;
    if (fki_ezsignfoldersignerassociation_id) {
        fki_ezsignfoldersignerassociation_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldersignerassociation_id_copy) *fki_ezsignfoldersignerassociation_id_copy = *fki_ezsignfoldersignerassociation_id;
    }
    int *fki_paymentgateway_id_copy = NULL;
    if (fki_paymentgateway_id) {
        fki_paymentgateway_id_copy = malloc(sizeof(int));
        if (fki_paymentgateway_id_copy) *fki_paymentgateway_id_copy = *fki_paymentgateway_id;
    }
    int *i_ezsignpage_pagenumber_copy = NULL;
    if (i_ezsignpage_pagenumber) {
        i_ezsignpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsignpage_pagenumber_copy) *i_ezsignpage_pagenumber_copy = *i_ezsignpage_pagenumber;
    }
    int *i_ezsignsignature_x_copy = NULL;
    if (i_ezsignsignature_x) {
        i_ezsignsignature_x_copy = malloc(sizeof(int));
        if (i_ezsignsignature_x_copy) *i_ezsignsignature_x_copy = *i_ezsignsignature_x;
    }
    int *i_ezsignsignature_y_copy = NULL;
    if (i_ezsignsignature_y) {
        i_ezsignsignature_y_copy = malloc(sizeof(int));
        if (i_ezsignsignature_y_copy) *i_ezsignsignature_y_copy = *i_ezsignsignature_y;
    }
    int *i_ezsignsignature_width_copy = NULL;
    if (i_ezsignsignature_width) {
        i_ezsignsignature_width_copy = malloc(sizeof(int));
        if (i_ezsignsignature_width_copy) *i_ezsignsignature_width_copy = *i_ezsignsignature_width;
    }
    int *i_ezsignsignature_height_copy = NULL;
    if (i_ezsignsignature_height) {
        i_ezsignsignature_height_copy = malloc(sizeof(int));
        if (i_ezsignsignature_height_copy) *i_ezsignsignature_height_copy = *i_ezsignsignature_height;
    }
    int *i_ezsignsignature_step_copy = NULL;
    if (i_ezsignsignature_step) {
        i_ezsignsignature_step_copy = malloc(sizeof(int));
        if (i_ezsignsignature_step_copy) *i_ezsignsignature_step_copy = *i_ezsignsignature_step;
    }
    int *fki_ezsigndocument_id_copy = NULL;
    if (fki_ezsigndocument_id) {
        fki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigndocument_id_copy) *fki_ezsigndocument_id_copy = *fki_ezsigndocument_id;
    }
    int *fki_ezsignfoldersignerassociation_id_validation_copy = NULL;
    if (fki_ezsignfoldersignerassociation_id_validation) {
        fki_ezsignfoldersignerassociation_id_validation_copy = malloc(sizeof(int));
        if (fki_ezsignfoldersignerassociation_id_validation_copy) *fki_ezsignfoldersignerassociation_id_validation_copy = *fki_ezsignfoldersignerassociation_id_validation;
    }
    int *b_ezsignsignature_handwritten_copy = NULL;
    if (b_ezsignsignature_handwritten) {
        b_ezsignsignature_handwritten_copy = malloc(sizeof(int));
        if (b_ezsignsignature_handwritten_copy) *b_ezsignsignature_handwritten_copy = *b_ezsignsignature_handwritten;
    }
    int *b_ezsignsignature_reason_copy = NULL;
    if (b_ezsignsignature_reason) {
        b_ezsignsignature_reason_copy = malloc(sizeof(int));
        if (b_ezsignsignature_reason_copy) *b_ezsignsignature_reason_copy = *b_ezsignsignature_reason;
    }
    int *b_ezsignsignature_required_copy = NULL;
    if (b_ezsignsignature_required) {
        b_ezsignsignature_required_copy = malloc(sizeof(int));
        if (b_ezsignsignature_required_copy) *b_ezsignsignature_required_copy = *b_ezsignsignature_required;
    }
    int *i_ezsignsignature_validationstep_copy = NULL;
    if (i_ezsignsignature_validationstep) {
        i_ezsignsignature_validationstep_copy = malloc(sizeof(int));
        if (i_ezsignsignature_validationstep_copy) *i_ezsignsignature_validationstep_copy = *i_ezsignsignature_validationstep;
    }
    int *i_ezsignsignature_maxlength_copy = NULL;
    if (i_ezsignsignature_maxlength) {
        i_ezsignsignature_maxlength_copy = malloc(sizeof(int));
        if (i_ezsignsignature_maxlength_copy) *i_ezsignsignature_maxlength_copy = *i_ezsignsignature_maxlength;
    }
    int *b_ezsignsignature_creditcardcustomamount_copy = NULL;
    if (b_ezsignsignature_creditcardcustomamount) {
        b_ezsignsignature_creditcardcustomamount_copy = malloc(sizeof(int));
        if (b_ezsignsignature_creditcardcustomamount_copy) *b_ezsignsignature_creditcardcustomamount_copy = *b_ezsignsignature_creditcardcustomamount;
    }
    int *b_ezsignsignature_customdate_copy = NULL;
    if (b_ezsignsignature_customdate) {
        b_ezsignsignature_customdate_copy = malloc(sizeof(int));
        if (b_ezsignsignature_customdate_copy) *b_ezsignsignature_customdate_copy = *b_ezsignsignature_customdate;
    }
    ezsignsignature_request_compound_v2_t *result = ezsignsignature_request_compound_v2_create_internal (
        pki_ezsignsignature_id_copy,
        fki_ezsignfoldersignerassociation_id_copy,
        fki_paymentgateway_id_copy,
        i_ezsignpage_pagenumber_copy,
        i_ezsignsignature_x_copy,
        i_ezsignsignature_y_copy,
        i_ezsignsignature_width_copy,
        i_ezsignsignature_height_copy,
        i_ezsignsignature_step_copy,
        e_ezsignsignature_type,
        e_ezsignsignature_signaturepad,
        e_ezsignsignature_signaturepadrequired,
        fki_ezsigndocument_id_copy,
        t_ezsignsignature_tooltip,
        e_ezsignsignature_tooltipposition,
        e_ezsignsignature_font,
        fki_ezsignfoldersignerassociation_id_validation_copy,
        b_ezsignsignature_handwritten_copy,
        b_ezsignsignature_reason_copy,
        b_ezsignsignature_required_copy,
        e_ezsignsignature_attachmentnamesource,
        s_ezsignsignature_attachmentdescription,
        e_ezsignsignature_consultationtrigger,
        i_ezsignsignature_validationstep_copy,
        i_ezsignsignature_maxlength_copy,
        s_ezsignsignature_defaultvalue,
        e_ezsignsignature_textvalidation,
        s_ezsignsignature_textvalidationcustommessage,
        s_ezsignsignature_regexp,
        e_ezsignsignature_dependencyrequirement,
        s_ezsignsignature_creditcardamountdescription,
        d_ezsignsignature_creditcardamount,
        b_ezsignsignature_creditcardcustomamount_copy,
        b_ezsignsignature_customdate_copy,
        a_obj_ezsignsignaturecustomdate,
        a_obj_ezsignelementdependency,
        a_obj_ezsignsignaturepaymentdetail
        );
    if (!result) {
        free(pki_ezsignsignature_id_copy);
        free(fki_ezsignfoldersignerassociation_id_copy);
        free(fki_paymentgateway_id_copy);
        free(i_ezsignpage_pagenumber_copy);
        free(i_ezsignsignature_x_copy);
        free(i_ezsignsignature_y_copy);
        free(i_ezsignsignature_width_copy);
        free(i_ezsignsignature_height_copy);
        free(i_ezsignsignature_step_copy);
        free(fki_ezsigndocument_id_copy);
        free(fki_ezsignfoldersignerassociation_id_validation_copy);
        free(b_ezsignsignature_handwritten_copy);
        free(b_ezsignsignature_reason_copy);
        free(b_ezsignsignature_required_copy);
        free(i_ezsignsignature_validationstep_copy);
        free(i_ezsignsignature_maxlength_copy);
        free(b_ezsignsignature_creditcardcustomamount_copy);
        free(b_ezsignsignature_customdate_copy);
    }
    return result;
}

void ezsignsignature_request_compound_v2_free(ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2) {
    if(NULL == ezsignsignature_request_compound_v2){
        return ;
    }
    if(ezsignsignature_request_compound_v2->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_request_compound_v2_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_request_compound_v2->pki_ezsignsignature_id) {
        free(ezsignsignature_request_compound_v2->pki_ezsignsignature_id);
        ezsignsignature_request_compound_v2->pki_ezsignsignature_id = NULL;
    }
    if (ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id) {
        free(ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id);
        ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignsignature_request_compound_v2->fki_paymentgateway_id) {
        free(ezsignsignature_request_compound_v2->fki_paymentgateway_id);
        ezsignsignature_request_compound_v2->fki_paymentgateway_id = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber) {
        free(ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber);
        ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_x) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_x);
        ezsignsignature_request_compound_v2->i_ezsignsignature_x = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_y) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_y);
        ezsignsignature_request_compound_v2->i_ezsignsignature_y = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_width) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_width);
        ezsignsignature_request_compound_v2->i_ezsignsignature_width = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_height) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_height);
        ezsignsignature_request_compound_v2->i_ezsignsignature_height = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_step) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_step);
        ezsignsignature_request_compound_v2->i_ezsignsignature_step = NULL;
    }
    if (ezsignsignature_request_compound_v2->fki_ezsigndocument_id) {
        free(ezsignsignature_request_compound_v2->fki_ezsigndocument_id);
        ezsignsignature_request_compound_v2->fki_ezsigndocument_id = NULL;
    }
    if (ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip) {
        free(ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip);
        ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip = NULL;
    }
    if (ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation) {
        free(ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation);
        ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation = NULL;
    }
    if (ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten) {
        free(ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten);
        ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten = NULL;
    }
    if (ezsignsignature_request_compound_v2->b_ezsignsignature_reason) {
        free(ezsignsignature_request_compound_v2->b_ezsignsignature_reason);
        ezsignsignature_request_compound_v2->b_ezsignsignature_reason = NULL;
    }
    if (ezsignsignature_request_compound_v2->b_ezsignsignature_required) {
        free(ezsignsignature_request_compound_v2->b_ezsignsignature_required);
        ezsignsignature_request_compound_v2->b_ezsignsignature_required = NULL;
    }
    if (ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription) {
        free(ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription);
        ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep);
        ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep = NULL;
    }
    if (ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength) {
        free(ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength);
        ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength = NULL;
    }
    if (ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue) {
        free(ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue);
        ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue = NULL;
    }
    if (ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage) {
        free(ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage);
        ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (ezsignsignature_request_compound_v2->s_ezsignsignature_regexp) {
        free(ezsignsignature_request_compound_v2->s_ezsignsignature_regexp);
        ezsignsignature_request_compound_v2->s_ezsignsignature_regexp = NULL;
    }
    if (ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription) {
        free(ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription);
        ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription = NULL;
    }
    if (ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount) {
        free(ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount);
        ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount = NULL;
    }
    if (ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount) {
        free(ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount);
        ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount = NULL;
    }
    if (ezsignsignature_request_compound_v2->b_ezsignsignature_customdate) {
        free(ezsignsignature_request_compound_v2->b_ezsignsignature_customdate);
        ezsignsignature_request_compound_v2->b_ezsignsignature_customdate = NULL;
    }
    if (ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate) {
        list_ForEach(listEntry, ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate) {
            ezsignsignaturecustomdate_request_compound_v2_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate);
        ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency) {
        list_ForEach(listEntry, ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency) {
            ezsignelementdependency_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency);
        ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency = NULL;
    }
    if (ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail) {
        list_ForEach(listEntry, ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail) {
            ezsignsignaturepaymentdetail_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail);
        ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail = NULL;
    }
    free(ezsignsignature_request_compound_v2);
}

cJSON *ezsignsignature_request_compound_v2_convertToJSON(ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_request_compound_v2->pki_ezsignsignature_id
    if(ezsignsignature_request_compound_v2->pki_ezsignsignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignatureID", *ezsignsignature_request_compound_v2->pki_ezsignsignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id
    if (!ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationID", *ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->fki_paymentgateway_id
    if(ezsignsignature_request_compound_v2->fki_paymentgateway_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentgatewayID", *ezsignsignature_request_compound_v2->fki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber
    if (!ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", *ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_x
    if (!ezsignsignature_request_compound_v2->i_ezsignsignature_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureX", *ezsignsignature_request_compound_v2->i_ezsignsignature_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_y
    if (!ezsignsignature_request_compound_v2->i_ezsignsignature_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureY", *ezsignsignature_request_compound_v2->i_ezsignsignature_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_width
    if(ezsignsignature_request_compound_v2->i_ezsignsignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureWidth", *ezsignsignature_request_compound_v2->i_ezsignsignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_height
    if(ezsignsignature_request_compound_v2->i_ezsignsignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureHeight", *ezsignsignature_request_compound_v2->i_ezsignsignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_step
    if (!ezsignsignature_request_compound_v2->i_ezsignsignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureStep", *ezsignsignature_request_compound_v2->i_ezsignsignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_type
    if (ezmax_api_definition__full_field_e_ezsignsignature_type__NULL == ezsignsignature_request_compound_v2->e_ezsignsignature_type) {
        goto fail;
    }
    cJSON *e_ezsignsignature_type_local_JSON = field_e_ezsignsignature_type_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_type);
    if(e_ezsignsignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureType", e_ezsignsignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepad
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepad != ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__NULL) {
    cJSON *e_ezsignsignature_signaturepad_local_JSON = field_e_ezsignsignature_signaturepad_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepad);
    if(e_ezsignsignature_signaturepad_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureSignaturepad", e_ezsignsignature_signaturepad_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepadrequired
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepadrequired != ezmax_api_definition__full_field_e_ezsignsignature_signaturepadrequired__NULL) {
    cJSON *e_ezsignsignature_signaturepadrequired_local_JSON = field_e_ezsignsignature_signaturepadrequired_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepadrequired);
    if(e_ezsignsignature_signaturepadrequired_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureSignaturepadrequired", e_ezsignsignature_signaturepadrequired_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->fki_ezsigndocument_id
    if (!ezsignsignature_request_compound_v2->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", *ezsignsignature_request_compound_v2->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip
    if(ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignsignatureTooltip", ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_tooltipposition
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_tooltipposition != ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__NULL) {
    cJSON *e_ezsignsignature_tooltipposition_local_JSON = field_e_ezsignsignature_tooltipposition_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_tooltipposition);
    if(e_ezsignsignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTooltipposition", e_ezsignsignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_font
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_font != ezmax_api_definition__full_field_e_ezsignsignature_font__NULL) {
    cJSON *e_ezsignsignature_font_local_JSON = field_e_ezsignsignature_font_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_font);
    if(e_ezsignsignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureFont", e_ezsignsignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation
    if(ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDValidation", *ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten
    if(ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureHandwritten", *ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound_v2->b_ezsignsignature_reason
    if(ezsignsignature_request_compound_v2->b_ezsignsignature_reason) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureReason", *ezsignsignature_request_compound_v2->b_ezsignsignature_reason) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound_v2->b_ezsignsignature_required
    if(ezsignsignature_request_compound_v2->b_ezsignsignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureRequired", *ezsignsignature_request_compound_v2->b_ezsignsignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_attachmentnamesource
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_attachmentnamesource != ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__NULL) {
    cJSON *e_ezsignsignature_attachmentnamesource_local_JSON = field_e_ezsignsignature_attachmentnamesource_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_attachmentnamesource);
    if(e_ezsignsignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureAttachmentnamesource", e_ezsignsignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription
    if(ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureAttachmentdescription", ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_consultationtrigger
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_consultationtrigger != ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__NULL) {
    cJSON *e_ezsignsignature_consultationtrigger_local_JSON = field_e_ezsignsignature_consultationtrigger_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_consultationtrigger);
    if(e_ezsignsignature_consultationtrigger_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureConsultationtrigger", e_ezsignsignature_consultationtrigger_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep
    if(ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureValidationstep", *ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength
    if(ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureMaxlength", *ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue
    if(ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureDefaultvalue", ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_textvalidation
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsignsignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_textvalidation);
    if(e_ezsignsignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureTextvalidation", e_ezsignsignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage
    if(ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureTextvalidationcustommessage", ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->s_ezsignsignature_regexp
    if(ezsignsignature_request_compound_v2->s_ezsignsignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureRegexp", ezsignsignature_request_compound_v2->s_ezsignsignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->e_ezsignsignature_dependencyrequirement
    if(ezsignsignature_request_compound_v2->e_ezsignsignature_dependencyrequirement != ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__NULL) {
    cJSON *e_ezsignsignature_dependencyrequirement_local_JSON = field_e_ezsignsignature_dependencyrequirement_convertToJSON(ezsignsignature_request_compound_v2->e_ezsignsignature_dependencyrequirement);
    if(e_ezsignsignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignatureDependencyrequirement", e_ezsignsignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription
    if(ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription) {
    if(cJSON_AddStringToObject(item, "sEzsignsignatureCreditcardamountdescription", ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount
    if(ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount) {
    if(cJSON_AddStringToObject(item, "dEzsignsignatureCreditcardamount", ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount) == NULL) {
    goto fail; //String
    }
    }


    // ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount
    if(ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCreditcardcustomamount", *ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound_v2->b_ezsignsignature_customdate
    if(ezsignsignature_request_compound_v2->b_ezsignsignature_customdate) {
    if(cJSON_AddBoolToObject(item, "bEzsignsignatureCustomdate", *ezsignsignature_request_compound_v2->b_ezsignsignature_customdate) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate
    if(ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate) {
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_AddArrayToObject(item, "a_objEzsignsignaturecustomdate");
    if(a_obj_ezsignsignaturecustomdate == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturecustomdateListEntry;
    if (ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate) {
    list_ForEach(a_obj_ezsignsignaturecustomdateListEntry, ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate) {
    cJSON *itemLocal = ezsignsignaturecustomdate_request_compound_v2_convertToJSON(a_obj_ezsignsignaturecustomdateListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturecustomdate, itemLocal);
    }
    }
    }


    // ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency
    if(ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency) {
    cJSON *a_obj_ezsignelementdependency = cJSON_AddArrayToObject(item, "a_objEzsignelementdependency");
    if(a_obj_ezsignelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignelementdependencyListEntry;
    if (ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency) {
    list_ForEach(a_obj_ezsignelementdependencyListEntry, ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency) {
    cJSON *itemLocal = ezsignelementdependency_request_compound_convertToJSON(a_obj_ezsignelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignelementdependency, itemLocal);
    }
    }
    }


    // ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail
    if(ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail) {
    cJSON *a_obj_ezsignsignaturepaymentdetail = cJSON_AddArrayToObject(item, "a_objEzsignsignaturepaymentdetail");
    if(a_obj_ezsignsignaturepaymentdetail == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignaturepaymentdetailListEntry;
    if (ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail) {
    list_ForEach(a_obj_ezsignsignaturepaymentdetailListEntry, ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail) {
    cJSON *itemLocal = ezsignsignaturepaymentdetail_request_compound_convertToJSON(a_obj_ezsignsignaturepaymentdetailListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignaturepaymentdetail, itemLocal);
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

ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_parseFromJSON(cJSON *ezsignsignature_request_compound_v2JSON){

    ezsignsignature_request_compound_v2_t *ezsignsignature_request_compound_v2_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->pki_ezsignsignature_id
    int *pki_ezsignsignature_id_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id
    int *fki_ezsignfoldersignerassociation_id_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->fki_paymentgateway_id
    int *fki_paymentgateway_id_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber
    int *i_ezsignpage_pagenumber_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_x
    int *i_ezsignsignature_x_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_y
    int *i_ezsignsignature_y_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_width
    int *i_ezsignsignature_width_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_height
    int *i_ezsignsignature_height_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_step
    int *i_ezsignsignature_step_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_type
    ezmax_api_definition__full_field_e_ezsignsignature_type__e e_ezsignsignature_type_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepad
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e e_ezsignsignature_signaturepad_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepadrequired
    ezmax_api_definition__full_field_e_ezsignsignature_signaturepadrequired__e e_ezsignsignature_signaturepadrequired_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->fki_ezsigndocument_id
    int *fki_ezsigndocument_id_local_var = NULL;

    char *t_ezsignsignature_tooltip_local_str = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_tooltipposition
    ezmax_api_definition__full_field_e_ezsignsignature_tooltipposition__e e_ezsignsignature_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_font
    ezmax_api_definition__full_field_e_ezsignsignature_font__e e_ezsignsignature_font_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation
    int *fki_ezsignfoldersignerassociation_id_validation_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten
    int *b_ezsignsignature_handwritten_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->b_ezsignsignature_reason
    int *b_ezsignsignature_reason_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->b_ezsignsignature_required
    int *b_ezsignsignature_required_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_attachmentnamesource
    ezmax_api_definition__full_field_e_ezsignsignature_attachmentnamesource__e e_ezsignsignature_attachmentnamesource_local_nonprim = 0;

    char *s_ezsignsignature_attachmentdescription_local_str = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_consultationtrigger
    ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e e_ezsignsignature_consultationtrigger_local_nonprim = 0;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep
    int *i_ezsignsignature_validationstep_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength
    int *i_ezsignsignature_maxlength_local_var = NULL;

    char *s_ezsignsignature_defaultvalue_local_str = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignsignature_textvalidation_local_nonprim = 0;

    char *s_ezsignsignature_textvalidationcustommessage_local_str = NULL;

    char *s_ezsignsignature_regexp_local_str = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->e_ezsignsignature_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e e_ezsignsignature_dependencyrequirement_local_nonprim = 0;

    char *s_ezsignsignature_creditcardamountdescription_local_str = NULL;

    char *d_ezsignsignature_creditcardamount_local_str = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount
    int *b_ezsignsignature_creditcardcustomamount_local_var = NULL;

    // define the local variable for ezsignsignature_request_compound_v2->b_ezsignsignature_customdate
    int *b_ezsignsignature_customdate_local_var = NULL;

    // define the local list for ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate
    list_t *a_obj_ezsignsignaturecustomdateList = NULL;

    // define the local list for ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency
    list_t *a_obj_ezsignelementdependencyList = NULL;

    // define the local list for ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail
    list_t *a_obj_ezsignsignaturepaymentdetailList = NULL;

    // ezsignsignature_request_compound_v2->pki_ezsignsignature_id
    cJSON *pki_ezsignsignature_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "pkiEzsignsignatureID");
    if (cJSON_IsNull(pki_ezsignsignature_id)) {
        pki_ezsignsignature_id = NULL;
    }
    if (pki_ezsignsignature_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignature_id))
    {
    goto end; //Numeric
    }
    pki_ezsignsignature_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignsignature_id_local_var)
    {
        goto end;
    }
    *pki_ezsignsignature_id_local_var = pki_ezsignsignature_id->valuedouble;
    }

    // ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id
    cJSON *fki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "fkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id)) {
        fki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!fki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldersignerassociation_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldersignerassociation_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldersignerassociation_id_local_var = fki_ezsignfoldersignerassociation_id->valuedouble;

    // ezsignsignature_request_compound_v2->fki_paymentgateway_id
    cJSON *fki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "fkiPaymentgatewayID");
    if (cJSON_IsNull(fki_paymentgateway_id)) {
        fki_paymentgateway_id = NULL;
    }
    if (fki_paymentgateway_id) { 
    if(!cJSON_IsNumber(fki_paymentgateway_id))
    {
    goto end; //Numeric
    }
    fki_paymentgateway_id_local_var = malloc(sizeof(int));
    if(!fki_paymentgateway_id_local_var)
    {
        goto end;
    }
    *fki_paymentgateway_id_local_var = fki_paymentgateway_id->valuedouble;
    }

    // ezsignsignature_request_compound_v2->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsignpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsignpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsignpage_pagenumber_local_var = i_ezsignpage_pagenumber->valuedouble;

    // ezsignsignature_request_compound_v2->i_ezsignsignature_x
    cJSON *i_ezsignsignature_x = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureX");
    if (cJSON_IsNull(i_ezsignsignature_x)) {
        i_ezsignsignature_x = NULL;
    }
    if (!i_ezsignsignature_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_x))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_x_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_x_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_x_local_var = i_ezsignsignature_x->valuedouble;

    // ezsignsignature_request_compound_v2->i_ezsignsignature_y
    cJSON *i_ezsignsignature_y = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureY");
    if (cJSON_IsNull(i_ezsignsignature_y)) {
        i_ezsignsignature_y = NULL;
    }
    if (!i_ezsignsignature_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_y))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_y_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_y_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_y_local_var = i_ezsignsignature_y->valuedouble;

    // ezsignsignature_request_compound_v2->i_ezsignsignature_width
    cJSON *i_ezsignsignature_width = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureWidth");
    if (cJSON_IsNull(i_ezsignsignature_width)) {
        i_ezsignsignature_width = NULL;
    }
    if (i_ezsignsignature_width) { 
    if(!cJSON_IsNumber(i_ezsignsignature_width))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_width_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_width_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_width_local_var = i_ezsignsignature_width->valuedouble;
    }

    // ezsignsignature_request_compound_v2->i_ezsignsignature_height
    cJSON *i_ezsignsignature_height = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureHeight");
    if (cJSON_IsNull(i_ezsignsignature_height)) {
        i_ezsignsignature_height = NULL;
    }
    if (i_ezsignsignature_height) { 
    if(!cJSON_IsNumber(i_ezsignsignature_height))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_height_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_height_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_height_local_var = i_ezsignsignature_height->valuedouble;
    }

    // ezsignsignature_request_compound_v2->i_ezsignsignature_step
    cJSON *i_ezsignsignature_step = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureStep");
    if (cJSON_IsNull(i_ezsignsignature_step)) {
        i_ezsignsignature_step = NULL;
    }
    if (!i_ezsignsignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_step))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_step_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_step_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_step_local_var = i_ezsignsignature_step->valuedouble;

    // ezsignsignature_request_compound_v2->e_ezsignsignature_type
    cJSON *e_ezsignsignature_type = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureType");
    if (cJSON_IsNull(e_ezsignsignature_type)) {
        e_ezsignsignature_type = NULL;
    }
    if (!e_ezsignsignature_type) {
        goto end;
    }

    
    e_ezsignsignature_type_local_nonprim = field_e_ezsignsignature_type_parseFromJSON(e_ezsignsignature_type); //custom

    // ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepad
    cJSON *e_ezsignsignature_signaturepad = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureSignaturepad");
    if (cJSON_IsNull(e_ezsignsignature_signaturepad)) {
        e_ezsignsignature_signaturepad = NULL;
    }
    if (e_ezsignsignature_signaturepad) { 
    e_ezsignsignature_signaturepad_local_nonprim = field_e_ezsignsignature_signaturepad_parseFromJSON(e_ezsignsignature_signaturepad); //custom
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_signaturepadrequired
    cJSON *e_ezsignsignature_signaturepadrequired = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureSignaturepadrequired");
    if (cJSON_IsNull(e_ezsignsignature_signaturepadrequired)) {
        e_ezsignsignature_signaturepadrequired = NULL;
    }
    if (e_ezsignsignature_signaturepadrequired) { 
    e_ezsignsignature_signaturepadrequired_local_nonprim = field_e_ezsignsignature_signaturepadrequired_parseFromJSON(e_ezsignsignature_signaturepadrequired); //custom
    }

    // ezsignsignature_request_compound_v2->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "fkiEzsigndocumentID");
    if (cJSON_IsNull(fki_ezsigndocument_id)) {
        fki_ezsigndocument_id = NULL;
    }
    if (!fki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigndocument_id_local_var = fki_ezsigndocument_id->valuedouble;

    // ezsignsignature_request_compound_v2->t_ezsignsignature_tooltip
    cJSON *t_ezsignsignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "tEzsignsignatureTooltip");
    if (cJSON_IsNull(t_ezsignsignature_tooltip)) {
        t_ezsignsignature_tooltip = NULL;
    }
    if (t_ezsignsignature_tooltip) { 
    if(!cJSON_IsString(t_ezsignsignature_tooltip) && !cJSON_IsNull(t_ezsignsignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_tooltipposition
    cJSON *e_ezsignsignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureTooltipposition");
    if (cJSON_IsNull(e_ezsignsignature_tooltipposition)) {
        e_ezsignsignature_tooltipposition = NULL;
    }
    if (e_ezsignsignature_tooltipposition) { 
    e_ezsignsignature_tooltipposition_local_nonprim = field_e_ezsignsignature_tooltipposition_parseFromJSON(e_ezsignsignature_tooltipposition); //custom
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_font
    cJSON *e_ezsignsignature_font = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureFont");
    if (cJSON_IsNull(e_ezsignsignature_font)) {
        e_ezsignsignature_font = NULL;
    }
    if (e_ezsignsignature_font) { 
    e_ezsignsignature_font_local_nonprim = field_e_ezsignsignature_font_parseFromJSON(e_ezsignsignature_font); //custom
    }

    // ezsignsignature_request_compound_v2->fki_ezsignfoldersignerassociation_id_validation
    cJSON *fki_ezsignfoldersignerassociation_id_validation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "fkiEzsignfoldersignerassociationIDValidation");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id_validation)) {
        fki_ezsignfoldersignerassociation_id_validation = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_validation))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldersignerassociation_id_validation_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldersignerassociation_id_validation_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldersignerassociation_id_validation_local_var = fki_ezsignfoldersignerassociation_id_validation->valuedouble;
    }

    // ezsignsignature_request_compound_v2->b_ezsignsignature_handwritten
    cJSON *b_ezsignsignature_handwritten = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "bEzsignsignatureHandwritten");
    if (cJSON_IsNull(b_ezsignsignature_handwritten)) {
        b_ezsignsignature_handwritten = NULL;
    }
    if (b_ezsignsignature_handwritten) { 
    if(!cJSON_IsBool(b_ezsignsignature_handwritten))
    {
    goto end; //Bool
    }
    b_ezsignsignature_handwritten_local_var = malloc(sizeof(int));
    if(!b_ezsignsignature_handwritten_local_var)
    {
        goto end;
    }
    *b_ezsignsignature_handwritten_local_var = b_ezsignsignature_handwritten->valueint;
    }

    // ezsignsignature_request_compound_v2->b_ezsignsignature_reason
    cJSON *b_ezsignsignature_reason = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "bEzsignsignatureReason");
    if (cJSON_IsNull(b_ezsignsignature_reason)) {
        b_ezsignsignature_reason = NULL;
    }
    if (b_ezsignsignature_reason) { 
    if(!cJSON_IsBool(b_ezsignsignature_reason))
    {
    goto end; //Bool
    }
    b_ezsignsignature_reason_local_var = malloc(sizeof(int));
    if(!b_ezsignsignature_reason_local_var)
    {
        goto end;
    }
    *b_ezsignsignature_reason_local_var = b_ezsignsignature_reason->valueint;
    }

    // ezsignsignature_request_compound_v2->b_ezsignsignature_required
    cJSON *b_ezsignsignature_required = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "bEzsignsignatureRequired");
    if (cJSON_IsNull(b_ezsignsignature_required)) {
        b_ezsignsignature_required = NULL;
    }
    if (b_ezsignsignature_required) { 
    if(!cJSON_IsBool(b_ezsignsignature_required))
    {
    goto end; //Bool
    }
    b_ezsignsignature_required_local_var = malloc(sizeof(int));
    if(!b_ezsignsignature_required_local_var)
    {
        goto end;
    }
    *b_ezsignsignature_required_local_var = b_ezsignsignature_required->valueint;
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_attachmentnamesource
    cJSON *e_ezsignsignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureAttachmentnamesource");
    if (cJSON_IsNull(e_ezsignsignature_attachmentnamesource)) {
        e_ezsignsignature_attachmentnamesource = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource) { 
    e_ezsignsignature_attachmentnamesource_local_nonprim = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(e_ezsignsignature_attachmentnamesource); //custom
    }

    // ezsignsignature_request_compound_v2->s_ezsignsignature_attachmentdescription
    cJSON *s_ezsignsignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "sEzsignsignatureAttachmentdescription");
    if (cJSON_IsNull(s_ezsignsignature_attachmentdescription)) {
        s_ezsignsignature_attachmentdescription = NULL;
    }
    if (s_ezsignsignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_attachmentdescription) && !cJSON_IsNull(s_ezsignsignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_consultationtrigger
    cJSON *e_ezsignsignature_consultationtrigger = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureConsultationtrigger");
    if (cJSON_IsNull(e_ezsignsignature_consultationtrigger)) {
        e_ezsignsignature_consultationtrigger = NULL;
    }
    if (e_ezsignsignature_consultationtrigger) { 
    e_ezsignsignature_consultationtrigger_local_nonprim = field_e_ezsignsignature_consultationtrigger_parseFromJSON(e_ezsignsignature_consultationtrigger); //custom
    }

    // ezsignsignature_request_compound_v2->i_ezsignsignature_validationstep
    cJSON *i_ezsignsignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureValidationstep");
    if (cJSON_IsNull(i_ezsignsignature_validationstep)) {
        i_ezsignsignature_validationstep = NULL;
    }
    if (i_ezsignsignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsignsignature_validationstep))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_validationstep_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_validationstep_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_validationstep_local_var = i_ezsignsignature_validationstep->valuedouble;
    }

    // ezsignsignature_request_compound_v2->i_ezsignsignature_maxlength
    cJSON *i_ezsignsignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "iEzsignsignatureMaxlength");
    if (cJSON_IsNull(i_ezsignsignature_maxlength)) {
        i_ezsignsignature_maxlength = NULL;
    }
    if (i_ezsignsignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignsignature_maxlength))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_maxlength_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_maxlength_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_maxlength_local_var = i_ezsignsignature_maxlength->valuedouble;
    }

    // ezsignsignature_request_compound_v2->s_ezsignsignature_defaultvalue
    cJSON *s_ezsignsignature_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "sEzsignsignatureDefaultvalue");
    if (cJSON_IsNull(s_ezsignsignature_defaultvalue)) {
        s_ezsignsignature_defaultvalue = NULL;
    }
    if (s_ezsignsignature_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignsignature_defaultvalue) && !cJSON_IsNull(s_ezsignsignature_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_textvalidation
    cJSON *e_ezsignsignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureTextvalidation");
    if (cJSON_IsNull(e_ezsignsignature_textvalidation)) {
        e_ezsignsignature_textvalidation = NULL;
    }
    if (e_ezsignsignature_textvalidation) { 
    e_ezsignsignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignsignature_textvalidation); //custom
    }

    // ezsignsignature_request_compound_v2->s_ezsignsignature_textvalidationcustommessage
    cJSON *s_ezsignsignature_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "sEzsignsignatureTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage)) {
        s_ezsignsignature_textvalidationcustommessage = NULL;
    }
    if (s_ezsignsignature_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsignsignature_textvalidationcustommessage) && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->s_ezsignsignature_regexp
    cJSON *s_ezsignsignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "sEzsignsignatureRegexp");
    if (cJSON_IsNull(s_ezsignsignature_regexp)) {
        s_ezsignsignature_regexp = NULL;
    }
    if (s_ezsignsignature_regexp) { 
    if(!cJSON_IsString(s_ezsignsignature_regexp) && !cJSON_IsNull(s_ezsignsignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->e_ezsignsignature_dependencyrequirement
    cJSON *e_ezsignsignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "eEzsignsignatureDependencyrequirement");
    if (cJSON_IsNull(e_ezsignsignature_dependencyrequirement)) {
        e_ezsignsignature_dependencyrequirement = NULL;
    }
    if (e_ezsignsignature_dependencyrequirement) { 
    e_ezsignsignature_dependencyrequirement_local_nonprim = field_e_ezsignsignature_dependencyrequirement_parseFromJSON(e_ezsignsignature_dependencyrequirement); //custom
    }

    // ezsignsignature_request_compound_v2->s_ezsignsignature_creditcardamountdescription
    cJSON *s_ezsignsignature_creditcardamountdescription = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "sEzsignsignatureCreditcardamountdescription");
    if (cJSON_IsNull(s_ezsignsignature_creditcardamountdescription)) {
        s_ezsignsignature_creditcardamountdescription = NULL;
    }
    if (s_ezsignsignature_creditcardamountdescription) { 
    if(!cJSON_IsString(s_ezsignsignature_creditcardamountdescription) && !cJSON_IsNull(s_ezsignsignature_creditcardamountdescription))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->d_ezsignsignature_creditcardamount
    cJSON *d_ezsignsignature_creditcardamount = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "dEzsignsignatureCreditcardamount");
    if (cJSON_IsNull(d_ezsignsignature_creditcardamount)) {
        d_ezsignsignature_creditcardamount = NULL;
    }
    if (d_ezsignsignature_creditcardamount) { 
    if(!cJSON_IsString(d_ezsignsignature_creditcardamount) && !cJSON_IsNull(d_ezsignsignature_creditcardamount))
    {
    goto end; //String
    }
    }

    // ezsignsignature_request_compound_v2->b_ezsignsignature_creditcardcustomamount
    cJSON *b_ezsignsignature_creditcardcustomamount = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "bEzsignsignatureCreditcardcustomamount");
    if (cJSON_IsNull(b_ezsignsignature_creditcardcustomamount)) {
        b_ezsignsignature_creditcardcustomamount = NULL;
    }
    if (b_ezsignsignature_creditcardcustomamount) { 
    if(!cJSON_IsBool(b_ezsignsignature_creditcardcustomamount))
    {
    goto end; //Bool
    }
    b_ezsignsignature_creditcardcustomamount_local_var = malloc(sizeof(int));
    if(!b_ezsignsignature_creditcardcustomamount_local_var)
    {
        goto end;
    }
    *b_ezsignsignature_creditcardcustomamount_local_var = b_ezsignsignature_creditcardcustomamount->valueint;
    }

    // ezsignsignature_request_compound_v2->b_ezsignsignature_customdate
    cJSON *b_ezsignsignature_customdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "bEzsignsignatureCustomdate");
    if (cJSON_IsNull(b_ezsignsignature_customdate)) {
        b_ezsignsignature_customdate = NULL;
    }
    if (b_ezsignsignature_customdate) { 
    if(!cJSON_IsBool(b_ezsignsignature_customdate))
    {
    goto end; //Bool
    }
    b_ezsignsignature_customdate_local_var = malloc(sizeof(int));
    if(!b_ezsignsignature_customdate_local_var)
    {
        goto end;
    }
    *b_ezsignsignature_customdate_local_var = b_ezsignsignature_customdate->valueint;
    }

    // ezsignsignature_request_compound_v2->a_obj_ezsignsignaturecustomdate
    cJSON *a_obj_ezsignsignaturecustomdate = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "a_objEzsignsignaturecustomdate");
    if (cJSON_IsNull(a_obj_ezsignsignaturecustomdate)) {
        a_obj_ezsignsignaturecustomdate = NULL;
    }
    if (a_obj_ezsignsignaturecustomdate) { 
    cJSON *a_obj_ezsignsignaturecustomdate_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturecustomdate)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturecustomdateList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturecustomdate_local_nonprimitive,a_obj_ezsignsignaturecustomdate )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturecustomdate_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturecustomdate_request_compound_v2_t *a_obj_ezsignsignaturecustomdateItem = ezsignsignaturecustomdate_request_compound_v2_parseFromJSON(a_obj_ezsignsignaturecustomdate_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturecustomdateList, a_obj_ezsignsignaturecustomdateItem);
    }
    }

    // ezsignsignature_request_compound_v2->a_obj_ezsignelementdependency
    cJSON *a_obj_ezsignelementdependency = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "a_objEzsignelementdependency");
    if (cJSON_IsNull(a_obj_ezsignelementdependency)) {
        a_obj_ezsignelementdependency = NULL;
    }
    if (a_obj_ezsignelementdependency) { 
    cJSON *a_obj_ezsignelementdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignelementdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignelementdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignelementdependency_local_nonprimitive,a_obj_ezsignelementdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsignelementdependency_local_nonprimitive)){
            goto end;
        }
        ezsignelementdependency_request_compound_t *a_obj_ezsignelementdependencyItem = ezsignelementdependency_request_compound_parseFromJSON(a_obj_ezsignelementdependency_local_nonprimitive);

        list_addElement(a_obj_ezsignelementdependencyList, a_obj_ezsignelementdependencyItem);
    }
    }

    // ezsignsignature_request_compound_v2->a_obj_ezsignsignaturepaymentdetail
    cJSON *a_obj_ezsignsignaturepaymentdetail = cJSON_GetObjectItemCaseSensitive(ezsignsignature_request_compound_v2JSON, "a_objEzsignsignaturepaymentdetail");
    if (cJSON_IsNull(a_obj_ezsignsignaturepaymentdetail)) {
        a_obj_ezsignsignaturepaymentdetail = NULL;
    }
    if (a_obj_ezsignsignaturepaymentdetail) { 
    cJSON *a_obj_ezsignsignaturepaymentdetail_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignaturepaymentdetail)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignaturepaymentdetailList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignaturepaymentdetail_local_nonprimitive,a_obj_ezsignsignaturepaymentdetail )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignaturepaymentdetail_local_nonprimitive)){
            goto end;
        }
        ezsignsignaturepaymentdetail_request_compound_t *a_obj_ezsignsignaturepaymentdetailItem = ezsignsignaturepaymentdetail_request_compound_parseFromJSON(a_obj_ezsignsignaturepaymentdetail_local_nonprimitive);

        list_addElement(a_obj_ezsignsignaturepaymentdetailList, a_obj_ezsignsignaturepaymentdetailItem);
    }
    }


    if (t_ezsignsignature_tooltip && !cJSON_IsNull(t_ezsignsignature_tooltip)) t_ezsignsignature_tooltip_local_str = strdup(t_ezsignsignature_tooltip->valuestring);
    if (s_ezsignsignature_attachmentdescription && !cJSON_IsNull(s_ezsignsignature_attachmentdescription)) s_ezsignsignature_attachmentdescription_local_str = strdup(s_ezsignsignature_attachmentdescription->valuestring);
    if (s_ezsignsignature_defaultvalue && !cJSON_IsNull(s_ezsignsignature_defaultvalue)) s_ezsignsignature_defaultvalue_local_str = strdup(s_ezsignsignature_defaultvalue->valuestring);
    if (s_ezsignsignature_textvalidationcustommessage && !cJSON_IsNull(s_ezsignsignature_textvalidationcustommessage)) s_ezsignsignature_textvalidationcustommessage_local_str = strdup(s_ezsignsignature_textvalidationcustommessage->valuestring);
    if (s_ezsignsignature_regexp && !cJSON_IsNull(s_ezsignsignature_regexp)) s_ezsignsignature_regexp_local_str = strdup(s_ezsignsignature_regexp->valuestring);
    if (s_ezsignsignature_creditcardamountdescription && !cJSON_IsNull(s_ezsignsignature_creditcardamountdescription)) s_ezsignsignature_creditcardamountdescription_local_str = strdup(s_ezsignsignature_creditcardamountdescription->valuestring);
    if (d_ezsignsignature_creditcardamount && !cJSON_IsNull(d_ezsignsignature_creditcardamount)) d_ezsignsignature_creditcardamount_local_str = strdup(d_ezsignsignature_creditcardamount->valuestring);

    ezsignsignature_request_compound_v2_local_var = ezsignsignature_request_compound_v2_create_internal (
        pki_ezsignsignature_id_local_var,
        fki_ezsignfoldersignerassociation_id_local_var,
        fki_paymentgateway_id_local_var,
        i_ezsignpage_pagenumber_local_var,
        i_ezsignsignature_x_local_var,
        i_ezsignsignature_y_local_var,
        i_ezsignsignature_width_local_var,
        i_ezsignsignature_height_local_var,
        i_ezsignsignature_step_local_var,
        e_ezsignsignature_type_local_nonprim,
        e_ezsignsignature_signaturepad ? e_ezsignsignature_signaturepad_local_nonprim : 0,
        e_ezsignsignature_signaturepadrequired ? e_ezsignsignature_signaturepadrequired_local_nonprim : 0,
        fki_ezsigndocument_id_local_var,
        t_ezsignsignature_tooltip_local_str,
        e_ezsignsignature_tooltipposition ? e_ezsignsignature_tooltipposition_local_nonprim : 0,
        e_ezsignsignature_font ? e_ezsignsignature_font_local_nonprim : 0,
        fki_ezsignfoldersignerassociation_id_validation_local_var,
        b_ezsignsignature_handwritten_local_var,
        b_ezsignsignature_reason_local_var,
        b_ezsignsignature_required_local_var,
        e_ezsignsignature_attachmentnamesource ? e_ezsignsignature_attachmentnamesource_local_nonprim : 0,
        s_ezsignsignature_attachmentdescription_local_str,
        e_ezsignsignature_consultationtrigger ? e_ezsignsignature_consultationtrigger_local_nonprim : 0,
        i_ezsignsignature_validationstep_local_var,
        i_ezsignsignature_maxlength_local_var,
        s_ezsignsignature_defaultvalue_local_str,
        e_ezsignsignature_textvalidation ? e_ezsignsignature_textvalidation_local_nonprim : 0,
        s_ezsignsignature_textvalidationcustommessage_local_str,
        s_ezsignsignature_regexp_local_str,
        e_ezsignsignature_dependencyrequirement ? e_ezsignsignature_dependencyrequirement_local_nonprim : 0,
        s_ezsignsignature_creditcardamountdescription_local_str,
        d_ezsignsignature_creditcardamount_local_str,
        b_ezsignsignature_creditcardcustomamount_local_var,
        b_ezsignsignature_customdate_local_var,
        a_obj_ezsignsignaturecustomdate ? a_obj_ezsignsignaturecustomdateList : NULL,
        a_obj_ezsignelementdependency ? a_obj_ezsignelementdependencyList : NULL,
        a_obj_ezsignsignaturepaymentdetail ? a_obj_ezsignsignaturepaymentdetailList : NULL
        );

    if (!ezsignsignature_request_compound_v2_local_var) {
        goto end;
    }

    return ezsignsignature_request_compound_v2_local_var;
end:
    if (pki_ezsignsignature_id_local_var) {
        free(pki_ezsignsignature_id_local_var);
        pki_ezsignsignature_id_local_var = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_local_var) {
        free(fki_ezsignfoldersignerassociation_id_local_var);
        fki_ezsignfoldersignerassociation_id_local_var = NULL;
    }
    if (fki_paymentgateway_id_local_var) {
        free(fki_paymentgateway_id_local_var);
        fki_paymentgateway_id_local_var = NULL;
    }
    if (i_ezsignpage_pagenumber_local_var) {
        free(i_ezsignpage_pagenumber_local_var);
        i_ezsignpage_pagenumber_local_var = NULL;
    }
    if (i_ezsignsignature_x_local_var) {
        free(i_ezsignsignature_x_local_var);
        i_ezsignsignature_x_local_var = NULL;
    }
    if (i_ezsignsignature_y_local_var) {
        free(i_ezsignsignature_y_local_var);
        i_ezsignsignature_y_local_var = NULL;
    }
    if (i_ezsignsignature_width_local_var) {
        free(i_ezsignsignature_width_local_var);
        i_ezsignsignature_width_local_var = NULL;
    }
    if (i_ezsignsignature_height_local_var) {
        free(i_ezsignsignature_height_local_var);
        i_ezsignsignature_height_local_var = NULL;
    }
    if (i_ezsignsignature_step_local_var) {
        free(i_ezsignsignature_step_local_var);
        i_ezsignsignature_step_local_var = NULL;
    }
    if (e_ezsignsignature_type_local_nonprim) {
        e_ezsignsignature_type_local_nonprim = 0;
    }
    if (e_ezsignsignature_signaturepad_local_nonprim) {
        e_ezsignsignature_signaturepad_local_nonprim = 0;
    }
    if (e_ezsignsignature_signaturepadrequired_local_nonprim) {
        e_ezsignsignature_signaturepadrequired_local_nonprim = 0;
    }
    if (fki_ezsigndocument_id_local_var) {
        free(fki_ezsigndocument_id_local_var);
        fki_ezsigndocument_id_local_var = NULL;
    }
    if (t_ezsignsignature_tooltip_local_str) {
        free(t_ezsignsignature_tooltip_local_str);
        t_ezsignsignature_tooltip_local_str = NULL;
    }
    if (e_ezsignsignature_tooltipposition_local_nonprim) {
        e_ezsignsignature_tooltipposition_local_nonprim = 0;
    }
    if (e_ezsignsignature_font_local_nonprim) {
        e_ezsignsignature_font_local_nonprim = 0;
    }
    if (fki_ezsignfoldersignerassociation_id_validation_local_var) {
        free(fki_ezsignfoldersignerassociation_id_validation_local_var);
        fki_ezsignfoldersignerassociation_id_validation_local_var = NULL;
    }
    if (b_ezsignsignature_handwritten_local_var) {
        free(b_ezsignsignature_handwritten_local_var);
        b_ezsignsignature_handwritten_local_var = NULL;
    }
    if (b_ezsignsignature_reason_local_var) {
        free(b_ezsignsignature_reason_local_var);
        b_ezsignsignature_reason_local_var = NULL;
    }
    if (b_ezsignsignature_required_local_var) {
        free(b_ezsignsignature_required_local_var);
        b_ezsignsignature_required_local_var = NULL;
    }
    if (e_ezsignsignature_attachmentnamesource_local_nonprim) {
        e_ezsignsignature_attachmentnamesource_local_nonprim = 0;
    }
    if (s_ezsignsignature_attachmentdescription_local_str) {
        free(s_ezsignsignature_attachmentdescription_local_str);
        s_ezsignsignature_attachmentdescription_local_str = NULL;
    }
    if (e_ezsignsignature_consultationtrigger_local_nonprim) {
        e_ezsignsignature_consultationtrigger_local_nonprim = 0;
    }
    if (i_ezsignsignature_validationstep_local_var) {
        free(i_ezsignsignature_validationstep_local_var);
        i_ezsignsignature_validationstep_local_var = NULL;
    }
    if (i_ezsignsignature_maxlength_local_var) {
        free(i_ezsignsignature_maxlength_local_var);
        i_ezsignsignature_maxlength_local_var = NULL;
    }
    if (s_ezsignsignature_defaultvalue_local_str) {
        free(s_ezsignsignature_defaultvalue_local_str);
        s_ezsignsignature_defaultvalue_local_str = NULL;
    }
    if (e_ezsignsignature_textvalidation_local_nonprim) {
        e_ezsignsignature_textvalidation_local_nonprim = 0;
    }
    if (s_ezsignsignature_textvalidationcustommessage_local_str) {
        free(s_ezsignsignature_textvalidationcustommessage_local_str);
        s_ezsignsignature_textvalidationcustommessage_local_str = NULL;
    }
    if (s_ezsignsignature_regexp_local_str) {
        free(s_ezsignsignature_regexp_local_str);
        s_ezsignsignature_regexp_local_str = NULL;
    }
    if (e_ezsignsignature_dependencyrequirement_local_nonprim) {
        e_ezsignsignature_dependencyrequirement_local_nonprim = 0;
    }
    if (s_ezsignsignature_creditcardamountdescription_local_str) {
        free(s_ezsignsignature_creditcardamountdescription_local_str);
        s_ezsignsignature_creditcardamountdescription_local_str = NULL;
    }
    if (d_ezsignsignature_creditcardamount_local_str) {
        free(d_ezsignsignature_creditcardamount_local_str);
        d_ezsignsignature_creditcardamount_local_str = NULL;
    }
    if (b_ezsignsignature_creditcardcustomamount_local_var) {
        free(b_ezsignsignature_creditcardcustomamount_local_var);
        b_ezsignsignature_creditcardcustomamount_local_var = NULL;
    }
    if (b_ezsignsignature_customdate_local_var) {
        free(b_ezsignsignature_customdate_local_var);
        b_ezsignsignature_customdate_local_var = NULL;
    }
    if (a_obj_ezsignsignaturecustomdateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturecustomdateList) {
            ezsignsignaturecustomdate_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturecustomdateList);
        a_obj_ezsignsignaturecustomdateList = NULL;
    }
    if (a_obj_ezsignelementdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignelementdependencyList) {
            ezsignelementdependency_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignelementdependencyList);
        a_obj_ezsignelementdependencyList = NULL;
    }
    if (a_obj_ezsignsignaturepaymentdetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignaturepaymentdetailList) {
            ezsignsignaturepaymentdetail_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignaturepaymentdetailList);
        a_obj_ezsignsignaturepaymentdetailList = NULL;
    }
    return NULL;

}
