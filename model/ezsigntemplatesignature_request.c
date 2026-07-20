#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_request.h"



static ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_create_internal(
    int *pki_ezsigntemplatesignature_id,
    int *fki_ezsigntemplatedocument_id,
    int *fki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplatesigner_id_validation,
    int *fki_paymentgateway_id,
    int *b_ezsigntemplatesignature_handwritten,
    int *b_ezsigntemplatesignature_reason,
    int *b_ezsigntemplatesignature_creditcardcustomamount,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    int *i_ezsigntemplatesignature_x,
    int *i_ezsigntemplatesignature_y,
    int *i_ezsigntemplatesignature_width,
    int *i_ezsigntemplatesignature_height,
    int *i_ezsigntemplatesignature_step,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepad__e e_ezsigntemplatesignature_signaturepad,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e e_ezsigntemplatesignature_signaturepadrequired,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger,
    char *t_ezsigntemplatesignature_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font,
    int *b_ezsigntemplatesignature_required,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource,
    char *s_ezsigntemplatesignature_attachmentdescription,
    int *i_ezsigntemplatesignature_validationstep,
    int *i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_defaultvalue,
    char *s_ezsigntemplatesignature_regexp,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation,
    char *s_ezsigntemplatesignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement,
    char *s_ezsigntemplatesignature_positioningpattern,
    int *i_ezsigntemplatesignature_positioningoffsetx,
    int *i_ezsigntemplatesignature_positioningoffsety,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence,
    char *s_ezsigntemplatesignature_creditcardamountdescription,
    char *d_ezsigntemplatesignature_creditcardamount
    ) {
    ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_local_var = malloc(sizeof(ezsigntemplatesignature_request_t));
    if (!ezsigntemplatesignature_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesignature_request_local_var, 0, sizeof(ezsigntemplatesignature_request_t));
    ezsigntemplatesignature_request_local_var->_library_owned = 1;
    ezsigntemplatesignature_request_local_var->pki_ezsigntemplatesignature_id = pki_ezsigntemplatesignature_id;
    ezsigntemplatesignature_request_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplatesignature_request_local_var->fki_ezsigntemplatesigner_id = fki_ezsigntemplatesigner_id;
    ezsigntemplatesignature_request_local_var->fki_ezsigntemplatesigner_id_validation = fki_ezsigntemplatesigner_id_validation;
    ezsigntemplatesignature_request_local_var->fki_paymentgateway_id = fki_paymentgateway_id;
    ezsigntemplatesignature_request_local_var->b_ezsigntemplatesignature_handwritten = b_ezsigntemplatesignature_handwritten;
    ezsigntemplatesignature_request_local_var->b_ezsigntemplatesignature_reason = b_ezsigntemplatesignature_reason;
    ezsigntemplatesignature_request_local_var->b_ezsigntemplatesignature_creditcardcustomamount = b_ezsigntemplatesignature_creditcardcustomamount;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_positioning = e_ezsigntemplatesignature_positioning;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_x = i_ezsigntemplatesignature_x;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_y = i_ezsigntemplatesignature_y;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_width = i_ezsigntemplatesignature_width;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_height = i_ezsigntemplatesignature_height;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_step = i_ezsigntemplatesignature_step;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_type = e_ezsigntemplatesignature_type;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_signaturepad = e_ezsigntemplatesignature_signaturepad;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_signaturepadrequired = e_ezsigntemplatesignature_signaturepadrequired;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_consultationtrigger = e_ezsigntemplatesignature_consultationtrigger;
    ezsigntemplatesignature_request_local_var->t_ezsigntemplatesignature_tooltip = t_ezsigntemplatesignature_tooltip;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_tooltipposition = e_ezsigntemplatesignature_tooltipposition;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_font = e_ezsigntemplatesignature_font;
    ezsigntemplatesignature_request_local_var->b_ezsigntemplatesignature_required = b_ezsigntemplatesignature_required;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_attachmentnamesource = e_ezsigntemplatesignature_attachmentnamesource;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_attachmentdescription = s_ezsigntemplatesignature_attachmentdescription;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_validationstep = i_ezsigntemplatesignature_validationstep;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_maxlength = i_ezsigntemplatesignature_maxlength;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_defaultvalue = s_ezsigntemplatesignature_defaultvalue;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_regexp = s_ezsigntemplatesignature_regexp;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_textvalidation = e_ezsigntemplatesignature_textvalidation;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_textvalidationcustommessage = s_ezsigntemplatesignature_textvalidationcustommessage;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_dependencyrequirement = e_ezsigntemplatesignature_dependencyrequirement;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_positioningpattern = s_ezsigntemplatesignature_positioningpattern;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_positioningoffsetx = i_ezsigntemplatesignature_positioningoffsetx;
    ezsigntemplatesignature_request_local_var->i_ezsigntemplatesignature_positioningoffsety = i_ezsigntemplatesignature_positioningoffsety;
    ezsigntemplatesignature_request_local_var->e_ezsigntemplatesignature_positioningoccurence = e_ezsigntemplatesignature_positioningoccurence;
    ezsigntemplatesignature_request_local_var->s_ezsigntemplatesignature_creditcardamountdescription = s_ezsigntemplatesignature_creditcardamountdescription;
    ezsigntemplatesignature_request_local_var->d_ezsigntemplatesignature_creditcardamount = d_ezsigntemplatesignature_creditcardamount;
    return ezsigntemplatesignature_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_create(
    int *pki_ezsigntemplatesignature_id,
    int *fki_ezsigntemplatedocument_id,
    int *fki_ezsigntemplatesigner_id,
    int *fki_ezsigntemplatesigner_id_validation,
    int *fki_paymentgateway_id,
    int *b_ezsigntemplatesignature_handwritten,
    int *b_ezsigntemplatesignature_reason,
    int *b_ezsigntemplatesignature_creditcardcustomamount,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning,
    int *i_ezsigntemplatedocumentpage_pagenumber,
    int *i_ezsigntemplatesignature_x,
    int *i_ezsigntemplatesignature_y,
    int *i_ezsigntemplatesignature_width,
    int *i_ezsigntemplatesignature_height,
    int *i_ezsigntemplatesignature_step,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepad__e e_ezsigntemplatesignature_signaturepad,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e e_ezsigntemplatesignature_signaturepadrequired,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger,
    char *t_ezsigntemplatesignature_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font,
    int *b_ezsigntemplatesignature_required,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource,
    char *s_ezsigntemplatesignature_attachmentdescription,
    int *i_ezsigntemplatesignature_validationstep,
    int *i_ezsigntemplatesignature_maxlength,
    char *s_ezsigntemplatesignature_defaultvalue,
    char *s_ezsigntemplatesignature_regexp,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation,
    char *s_ezsigntemplatesignature_textvalidationcustommessage,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement,
    char *s_ezsigntemplatesignature_positioningpattern,
    int *i_ezsigntemplatesignature_positioningoffsetx,
    int *i_ezsigntemplatesignature_positioningoffsety,
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence,
    char *s_ezsigntemplatesignature_creditcardamountdescription,
    char *d_ezsigntemplatesignature_creditcardamount
    ) {
    int *pki_ezsigntemplatesignature_id_copy = NULL;
    if (pki_ezsigntemplatesignature_id) {
        pki_ezsigntemplatesignature_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatesignature_id_copy) *pki_ezsigntemplatesignature_id_copy = *pki_ezsigntemplatesignature_id;
    }
    int *fki_ezsigntemplatedocument_id_copy = NULL;
    if (fki_ezsigntemplatedocument_id) {
        fki_ezsigntemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatedocument_id_copy) *fki_ezsigntemplatedocument_id_copy = *fki_ezsigntemplatedocument_id;
    }
    int *fki_ezsigntemplatesigner_id_copy = NULL;
    if (fki_ezsigntemplatesigner_id) {
        fki_ezsigntemplatesigner_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatesigner_id_copy) *fki_ezsigntemplatesigner_id_copy = *fki_ezsigntemplatesigner_id;
    }
    int *fki_ezsigntemplatesigner_id_validation_copy = NULL;
    if (fki_ezsigntemplatesigner_id_validation) {
        fki_ezsigntemplatesigner_id_validation_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatesigner_id_validation_copy) *fki_ezsigntemplatesigner_id_validation_copy = *fki_ezsigntemplatesigner_id_validation;
    }
    int *fki_paymentgateway_id_copy = NULL;
    if (fki_paymentgateway_id) {
        fki_paymentgateway_id_copy = malloc(sizeof(int));
        if (fki_paymentgateway_id_copy) *fki_paymentgateway_id_copy = *fki_paymentgateway_id;
    }
    int *b_ezsigntemplatesignature_handwritten_copy = NULL;
    if (b_ezsigntemplatesignature_handwritten) {
        b_ezsigntemplatesignature_handwritten_copy = malloc(sizeof(int));
        if (b_ezsigntemplatesignature_handwritten_copy) *b_ezsigntemplatesignature_handwritten_copy = *b_ezsigntemplatesignature_handwritten;
    }
    int *b_ezsigntemplatesignature_reason_copy = NULL;
    if (b_ezsigntemplatesignature_reason) {
        b_ezsigntemplatesignature_reason_copy = malloc(sizeof(int));
        if (b_ezsigntemplatesignature_reason_copy) *b_ezsigntemplatesignature_reason_copy = *b_ezsigntemplatesignature_reason;
    }
    int *b_ezsigntemplatesignature_creditcardcustomamount_copy = NULL;
    if (b_ezsigntemplatesignature_creditcardcustomamount) {
        b_ezsigntemplatesignature_creditcardcustomamount_copy = malloc(sizeof(int));
        if (b_ezsigntemplatesignature_creditcardcustomamount_copy) *b_ezsigntemplatesignature_creditcardcustomamount_copy = *b_ezsigntemplatesignature_creditcardcustomamount;
    }
    int *i_ezsigntemplatedocumentpage_pagenumber_copy = NULL;
    if (i_ezsigntemplatedocumentpage_pagenumber) {
        i_ezsigntemplatedocumentpage_pagenumber_copy = malloc(sizeof(int));
        if (i_ezsigntemplatedocumentpage_pagenumber_copy) *i_ezsigntemplatedocumentpage_pagenumber_copy = *i_ezsigntemplatedocumentpage_pagenumber;
    }
    int *i_ezsigntemplatesignature_x_copy = NULL;
    if (i_ezsigntemplatesignature_x) {
        i_ezsigntemplatesignature_x_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_x_copy) *i_ezsigntemplatesignature_x_copy = *i_ezsigntemplatesignature_x;
    }
    int *i_ezsigntemplatesignature_y_copy = NULL;
    if (i_ezsigntemplatesignature_y) {
        i_ezsigntemplatesignature_y_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_y_copy) *i_ezsigntemplatesignature_y_copy = *i_ezsigntemplatesignature_y;
    }
    int *i_ezsigntemplatesignature_width_copy = NULL;
    if (i_ezsigntemplatesignature_width) {
        i_ezsigntemplatesignature_width_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_width_copy) *i_ezsigntemplatesignature_width_copy = *i_ezsigntemplatesignature_width;
    }
    int *i_ezsigntemplatesignature_height_copy = NULL;
    if (i_ezsigntemplatesignature_height) {
        i_ezsigntemplatesignature_height_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_height_copy) *i_ezsigntemplatesignature_height_copy = *i_ezsigntemplatesignature_height;
    }
    int *i_ezsigntemplatesignature_step_copy = NULL;
    if (i_ezsigntemplatesignature_step) {
        i_ezsigntemplatesignature_step_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_step_copy) *i_ezsigntemplatesignature_step_copy = *i_ezsigntemplatesignature_step;
    }
    int *b_ezsigntemplatesignature_required_copy = NULL;
    if (b_ezsigntemplatesignature_required) {
        b_ezsigntemplatesignature_required_copy = malloc(sizeof(int));
        if (b_ezsigntemplatesignature_required_copy) *b_ezsigntemplatesignature_required_copy = *b_ezsigntemplatesignature_required;
    }
    int *i_ezsigntemplatesignature_validationstep_copy = NULL;
    if (i_ezsigntemplatesignature_validationstep) {
        i_ezsigntemplatesignature_validationstep_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_validationstep_copy) *i_ezsigntemplatesignature_validationstep_copy = *i_ezsigntemplatesignature_validationstep;
    }
    int *i_ezsigntemplatesignature_maxlength_copy = NULL;
    if (i_ezsigntemplatesignature_maxlength) {
        i_ezsigntemplatesignature_maxlength_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_maxlength_copy) *i_ezsigntemplatesignature_maxlength_copy = *i_ezsigntemplatesignature_maxlength;
    }
    int *i_ezsigntemplatesignature_positioningoffsetx_copy = NULL;
    if (i_ezsigntemplatesignature_positioningoffsetx) {
        i_ezsigntemplatesignature_positioningoffsetx_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_positioningoffsetx_copy) *i_ezsigntemplatesignature_positioningoffsetx_copy = *i_ezsigntemplatesignature_positioningoffsetx;
    }
    int *i_ezsigntemplatesignature_positioningoffsety_copy = NULL;
    if (i_ezsigntemplatesignature_positioningoffsety) {
        i_ezsigntemplatesignature_positioningoffsety_copy = malloc(sizeof(int));
        if (i_ezsigntemplatesignature_positioningoffsety_copy) *i_ezsigntemplatesignature_positioningoffsety_copy = *i_ezsigntemplatesignature_positioningoffsety;
    }
    ezsigntemplatesignature_request_t *result = ezsigntemplatesignature_request_create_internal (
        pki_ezsigntemplatesignature_id_copy,
        fki_ezsigntemplatedocument_id_copy,
        fki_ezsigntemplatesigner_id_copy,
        fki_ezsigntemplatesigner_id_validation_copy,
        fki_paymentgateway_id_copy,
        b_ezsigntemplatesignature_handwritten_copy,
        b_ezsigntemplatesignature_reason_copy,
        b_ezsigntemplatesignature_creditcardcustomamount_copy,
        e_ezsigntemplatesignature_positioning,
        i_ezsigntemplatedocumentpage_pagenumber_copy,
        i_ezsigntemplatesignature_x_copy,
        i_ezsigntemplatesignature_y_copy,
        i_ezsigntemplatesignature_width_copy,
        i_ezsigntemplatesignature_height_copy,
        i_ezsigntemplatesignature_step_copy,
        e_ezsigntemplatesignature_type,
        e_ezsigntemplatesignature_signaturepad,
        e_ezsigntemplatesignature_signaturepadrequired,
        e_ezsigntemplatesignature_consultationtrigger,
        t_ezsigntemplatesignature_tooltip,
        e_ezsigntemplatesignature_tooltipposition,
        e_ezsigntemplatesignature_font,
        b_ezsigntemplatesignature_required_copy,
        e_ezsigntemplatesignature_attachmentnamesource,
        s_ezsigntemplatesignature_attachmentdescription,
        i_ezsigntemplatesignature_validationstep_copy,
        i_ezsigntemplatesignature_maxlength_copy,
        s_ezsigntemplatesignature_defaultvalue,
        s_ezsigntemplatesignature_regexp,
        e_ezsigntemplatesignature_textvalidation,
        s_ezsigntemplatesignature_textvalidationcustommessage,
        e_ezsigntemplatesignature_dependencyrequirement,
        s_ezsigntemplatesignature_positioningpattern,
        i_ezsigntemplatesignature_positioningoffsetx_copy,
        i_ezsigntemplatesignature_positioningoffsety_copy,
        e_ezsigntemplatesignature_positioningoccurence,
        s_ezsigntemplatesignature_creditcardamountdescription,
        d_ezsigntemplatesignature_creditcardamount
        );
    if (!result) {
        free(pki_ezsigntemplatesignature_id_copy);
        free(fki_ezsigntemplatedocument_id_copy);
        free(fki_ezsigntemplatesigner_id_copy);
        free(fki_ezsigntemplatesigner_id_validation_copy);
        free(fki_paymentgateway_id_copy);
        free(b_ezsigntemplatesignature_handwritten_copy);
        free(b_ezsigntemplatesignature_reason_copy);
        free(b_ezsigntemplatesignature_creditcardcustomamount_copy);
        free(i_ezsigntemplatedocumentpage_pagenumber_copy);
        free(i_ezsigntemplatesignature_x_copy);
        free(i_ezsigntemplatesignature_y_copy);
        free(i_ezsigntemplatesignature_width_copy);
        free(i_ezsigntemplatesignature_height_copy);
        free(i_ezsigntemplatesignature_step_copy);
        free(b_ezsigntemplatesignature_required_copy);
        free(i_ezsigntemplatesignature_validationstep_copy);
        free(i_ezsigntemplatesignature_maxlength_copy);
        free(i_ezsigntemplatesignature_positioningoffsetx_copy);
        free(i_ezsigntemplatesignature_positioningoffsety_copy);
    }
    return result;
}

void ezsigntemplatesignature_request_free(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request) {
    if(NULL == ezsigntemplatesignature_request){
        return ;
    }
    if(ezsigntemplatesignature_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignature_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id) {
        free(ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id);
        ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id = NULL;
    }
    if (ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id) {
        free(ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id);
        ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id = NULL;
    }
    if (ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id) {
        free(ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id);
        ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id = NULL;
    }
    if (ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation) {
        free(ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation);
        ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation = NULL;
    }
    if (ezsigntemplatesignature_request->fki_paymentgateway_id) {
        free(ezsigntemplatesignature_request->fki_paymentgateway_id);
        ezsigntemplatesignature_request->fki_paymentgateway_id = NULL;
    }
    if (ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten) {
        free(ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten);
        ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten = NULL;
    }
    if (ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason) {
        free(ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason);
        ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason = NULL;
    }
    if (ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount) {
        free(ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount);
        ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber);
        ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_x) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_x);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_x = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_y) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_y);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_y = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_width) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_width);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_width = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_height) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_height);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_height = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_step) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_step);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_step = NULL;
    }
    if (ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip) {
        free(ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip);
        ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (ezsigntemplatesignature_request->b_ezsigntemplatesignature_required) {
        free(ezsigntemplatesignature_request->b_ezsigntemplatesignature_required);
        ezsigntemplatesignature_request->b_ezsigntemplatesignature_required = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx = NULL;
    }
    if (ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety) {
        free(ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety);
        ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety = NULL;
    }
    if (ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription) {
        free(ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription);
        ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription = NULL;
    }
    if (ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount) {
        free(ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount);
        ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount = NULL;
    }
    free(ezsigntemplatesignature_request);
}

cJSON *ezsigntemplatesignature_request_convertToJSON(ezsigntemplatesignature_request_t *ezsigntemplatesignature_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id
    if(ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignatureID", *ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id
    if (!ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", *ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id
    if (!ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerID", *ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation
    if(ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatesignerIDValidation", *ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->fki_paymentgateway_id
    if(ezsigntemplatesignature_request->fki_paymentgateway_id) {
    if(cJSON_AddNumberToObject(item, "fkiPaymentgatewayID", *ezsigntemplatesignature_request->fki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten
    if(ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureHandwritten", *ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason
    if(ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureReason", *ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount
    if(ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureCreditcardcustomamount", *ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioning
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioning != ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__NULL) {
    cJSON *e_ezsigntemplatesignature_positioning_local_JSON = field_e_ezsigntemplatesignature_positioning_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioning);
    if(e_ezsigntemplatesignature_positioning_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignaturePositioning", e_ezsigntemplatesignature_positioning_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", *ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_x
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_x) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureX", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_x) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_y
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_y) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureY", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_y) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_width
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_width) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureWidth", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_width) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_height
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_height) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureHeight", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_height) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_step
    if (!ezsigntemplatesignature_request->i_ezsigntemplatesignature_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureStep", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_type
    if (ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__NULL == ezsigntemplatesignature_request->e_ezsigntemplatesignature_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplatesignature_type_local_JSON = field_e_ezsigntemplatesignature_type_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_type);
    if(e_ezsigntemplatesignature_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureType", e_ezsigntemplatesignature_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepad
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepad != ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepad__NULL) {
    cJSON *e_ezsigntemplatesignature_signaturepad_local_JSON = field_e_ezsigntemplatesignature_signaturepad_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepad);
    if(e_ezsigntemplatesignature_signaturepad_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureSignaturepad", e_ezsigntemplatesignature_signaturepad_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepadrequired
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepadrequired != ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__NULL) {
    cJSON *e_ezsigntemplatesignature_signaturepadrequired_local_JSON = field_e_ezsigntemplatesignature_signaturepadrequired_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepadrequired);
    if(e_ezsigntemplatesignature_signaturepadrequired_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureSignaturepadrequired", e_ezsigntemplatesignature_signaturepadrequired_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_consultationtrigger
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_consultationtrigger != ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__NULL) {
    cJSON *e_ezsigntemplatesignature_consultationtrigger_local_JSON = field_e_ezsigntemplatesignature_consultationtrigger_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_consultationtrigger);
    if(e_ezsigntemplatesignature_consultationtrigger_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureConsultationtrigger", e_ezsigntemplatesignature_consultationtrigger_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip
    if(ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignatureTooltip", ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_tooltipposition
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_tooltipposition != ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__NULL) {
    cJSON *e_ezsigntemplatesignature_tooltipposition_local_JSON = field_e_ezsigntemplatesignature_tooltipposition_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_tooltipposition);
    if(e_ezsigntemplatesignature_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTooltipposition", e_ezsigntemplatesignature_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_font
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_font != ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__NULL) {
    cJSON *e_ezsigntemplatesignature_font_local_JSON = field_e_ezsigntemplatesignature_font_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_font);
    if(e_ezsigntemplatesignature_font_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureFont", e_ezsigntemplatesignature_font_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_required
    if(ezsigntemplatesignature_request->b_ezsigntemplatesignature_required) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatesignatureRequired", *ezsigntemplatesignature_request->b_ezsigntemplatesignature_required) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_attachmentnamesource
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_attachmentnamesource != ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__NULL) {
    cJSON *e_ezsigntemplatesignature_attachmentnamesource_local_JSON = field_e_ezsigntemplatesignature_attachmentnamesource_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_attachmentnamesource);
    if(e_ezsigntemplatesignature_attachmentnamesource_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureAttachmentnamesource", e_ezsigntemplatesignature_attachmentnamesource_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureAttachmentdescription", ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureValidationstep", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignatureMaxlength", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureDefaultvalue", ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureRegexp", ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_textvalidation
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsigntemplatesignature_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_textvalidation);
    if(e_ezsigntemplatesignature_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureTextvalidation", e_ezsigntemplatesignature_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureTextvalidationcustommessage", ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_dependencyrequirement
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_dependencyrequirement != ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__NULL) {
    cJSON *e_ezsigntemplatesignature_dependencyrequirement_local_JSON = field_e_ezsigntemplatesignature_dependencyrequirement_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_dependencyrequirement);
    if(e_ezsigntemplatesignature_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignatureDependencyrequirement", e_ezsigntemplatesignature_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignaturePositioningpattern", ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturePositioningoffsetx", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety
    if(ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatesignaturePositioningoffsety", *ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioningoccurence
    if(ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioningoccurence != ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__NULL) {
    cJSON *e_ezsigntemplatesignature_positioningoccurence_local_JSON = field_e_ezsigntemplatesignature_positioningoccurence_convertToJSON(ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioningoccurence);
    if(e_ezsigntemplatesignature_positioningoccurence_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignaturePositioningoccurence", e_ezsigntemplatesignature_positioningoccurence_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription
    if(ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatesignatureCreditcardamountdescription", ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount
    if(ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount) {
    if(cJSON_AddStringToObject(item, "dEzsigntemplatesignatureCreditcardamount", ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_parseFromJSON(cJSON *ezsigntemplatesignature_requestJSON){

    ezsigntemplatesignature_request_t *ezsigntemplatesignature_request_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id
    int *pki_ezsigntemplatesignature_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id
    int *fki_ezsigntemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id
    int *fki_ezsigntemplatesigner_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation
    int *fki_ezsigntemplatesigner_id_validation_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->fki_paymentgateway_id
    int *fki_paymentgateway_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten
    int *b_ezsigntemplatesignature_handwritten_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason
    int *b_ezsigntemplatesignature_reason_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount
    int *b_ezsigntemplatesignature_creditcardcustomamount_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioning
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioning__e e_ezsigntemplatesignature_positioning_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber
    int *i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_x
    int *i_ezsigntemplatesignature_x_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_y
    int *i_ezsigntemplatesignature_y_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_width
    int *i_ezsigntemplatesignature_width_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_height
    int *i_ezsigntemplatesignature_height_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_step
    int *i_ezsigntemplatesignature_step_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_type
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_type__e e_ezsigntemplatesignature_type_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepad
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepad__e e_ezsigntemplatesignature_signaturepad_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepadrequired
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_signaturepadrequired__e e_ezsigntemplatesignature_signaturepadrequired_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_consultationtrigger
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_consultationtrigger__e e_ezsigntemplatesignature_consultationtrigger_local_nonprim = 0;

    char *t_ezsigntemplatesignature_tooltip_local_str = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_tooltipposition
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_tooltipposition__e e_ezsigntemplatesignature_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_font
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e e_ezsigntemplatesignature_font_local_nonprim = 0;

    // define the local variable for ezsigntemplatesignature_request->b_ezsigntemplatesignature_required
    int *b_ezsigntemplatesignature_required_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_attachmentnamesource
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_attachmentnamesource__e e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = 0;

    char *s_ezsigntemplatesignature_attachmentdescription_local_str = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep
    int *i_ezsigntemplatesignature_validationstep_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength
    int *i_ezsigntemplatesignature_maxlength_local_var = NULL;

    char *s_ezsigntemplatesignature_defaultvalue_local_str = NULL;

    char *s_ezsigntemplatesignature_regexp_local_str = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplatesignature_textvalidation_local_nonprim = 0;

    char *s_ezsigntemplatesignature_textvalidationcustommessage_local_str = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_dependencyrequirement__e e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = 0;

    char *s_ezsigntemplatesignature_positioningpattern_local_str = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx
    int *i_ezsigntemplatesignature_positioningoffsetx_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety
    int *i_ezsigntemplatesignature_positioningoffsety_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioningoccurence
    ezmax_api_definition__full_field_e_ezsigntemplatesignature_positioningoccurence__e e_ezsigntemplatesignature_positioningoccurence_local_nonprim = 0;

    char *s_ezsigntemplatesignature_creditcardamountdescription_local_str = NULL;

    char *d_ezsigntemplatesignature_creditcardamount_local_str = NULL;

    // ezsigntemplatesignature_request->pki_ezsigntemplatesignature_id
    cJSON *pki_ezsigntemplatesignature_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "pkiEzsigntemplatesignatureID");
    if (cJSON_IsNull(pki_ezsigntemplatesignature_id)) {
        pki_ezsigntemplatesignature_id = NULL;
    }
    if (pki_ezsigntemplatesignature_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatesignature_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatesignature_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatesignature_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatesignature_id_local_var = pki_ezsigntemplatesignature_id->valuedouble;
    }

    // ezsigntemplatesignature_request->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "fkiEzsigntemplatedocumentID");
    if (cJSON_IsNull(fki_ezsigntemplatedocument_id)) {
        fki_ezsigntemplatedocument_id = NULL;
    }
    if (!fki_ezsigntemplatedocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatedocument_id_local_var = fki_ezsigntemplatedocument_id->valuedouble;

    // ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id
    cJSON *fki_ezsigntemplatesigner_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "fkiEzsigntemplatesignerID");
    if (cJSON_IsNull(fki_ezsigntemplatesigner_id)) {
        fki_ezsigntemplatesigner_id = NULL;
    }
    if (!fki_ezsigntemplatesigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatesigner_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatesigner_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatesigner_id_local_var = fki_ezsigntemplatesigner_id->valuedouble;

    // ezsigntemplatesignature_request->fki_ezsigntemplatesigner_id_validation
    cJSON *fki_ezsigntemplatesigner_id_validation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "fkiEzsigntemplatesignerIDValidation");
    if (cJSON_IsNull(fki_ezsigntemplatesigner_id_validation)) {
        fki_ezsigntemplatesigner_id_validation = NULL;
    }
    if (fki_ezsigntemplatesigner_id_validation) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatesigner_id_validation))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatesigner_id_validation_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatesigner_id_validation_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatesigner_id_validation_local_var = fki_ezsigntemplatesigner_id_validation->valuedouble;
    }

    // ezsigntemplatesignature_request->fki_paymentgateway_id
    cJSON *fki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "fkiPaymentgatewayID");
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

    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_handwritten
    cJSON *b_ezsigntemplatesignature_handwritten = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "bEzsigntemplatesignatureHandwritten");
    if (cJSON_IsNull(b_ezsigntemplatesignature_handwritten)) {
        b_ezsigntemplatesignature_handwritten = NULL;
    }
    if (b_ezsigntemplatesignature_handwritten) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_handwritten))
    {
    goto end; //Bool
    }
    b_ezsigntemplatesignature_handwritten_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatesignature_handwritten_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatesignature_handwritten_local_var = b_ezsigntemplatesignature_handwritten->valueint;
    }

    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_reason
    cJSON *b_ezsigntemplatesignature_reason = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "bEzsigntemplatesignatureReason");
    if (cJSON_IsNull(b_ezsigntemplatesignature_reason)) {
        b_ezsigntemplatesignature_reason = NULL;
    }
    if (b_ezsigntemplatesignature_reason) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_reason))
    {
    goto end; //Bool
    }
    b_ezsigntemplatesignature_reason_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatesignature_reason_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatesignature_reason_local_var = b_ezsigntemplatesignature_reason->valueint;
    }

    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_creditcardcustomamount
    cJSON *b_ezsigntemplatesignature_creditcardcustomamount = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "bEzsigntemplatesignatureCreditcardcustomamount");
    if (cJSON_IsNull(b_ezsigntemplatesignature_creditcardcustomamount)) {
        b_ezsigntemplatesignature_creditcardcustomamount = NULL;
    }
    if (b_ezsigntemplatesignature_creditcardcustomamount) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_creditcardcustomamount))
    {
    goto end; //Bool
    }
    b_ezsigntemplatesignature_creditcardcustomamount_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatesignature_creditcardcustomamount_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatesignature_creditcardcustomamount_local_var = b_ezsigntemplatesignature_creditcardcustomamount->valueint;
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioning
    cJSON *e_ezsigntemplatesignature_positioning = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignaturePositioning");
    if (cJSON_IsNull(e_ezsigntemplatesignature_positioning)) {
        e_ezsigntemplatesignature_positioning = NULL;
    }
    if (e_ezsigntemplatesignature_positioning) { 
    e_ezsigntemplatesignature_positioning_local_nonprim = field_e_ezsigntemplatesignature_positioning_parseFromJSON(e_ezsigntemplatesignature_positioning); //custom
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (cJSON_IsNull(i_ezsigntemplatedocumentpage_pagenumber)) {
        i_ezsigntemplatedocumentpage_pagenumber = NULL;
    }
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatedocumentpage_pagenumber_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatedocumentpage_pagenumber_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatedocumentpage_pagenumber_local_var = i_ezsigntemplatedocumentpage_pagenumber->valuedouble;

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_x
    cJSON *i_ezsigntemplatesignature_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureX");
    if (cJSON_IsNull(i_ezsigntemplatesignature_x)) {
        i_ezsigntemplatesignature_x = NULL;
    }
    if (i_ezsigntemplatesignature_x) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_x))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_x_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_x_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_x_local_var = i_ezsigntemplatesignature_x->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_y
    cJSON *i_ezsigntemplatesignature_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureY");
    if (cJSON_IsNull(i_ezsigntemplatesignature_y)) {
        i_ezsigntemplatesignature_y = NULL;
    }
    if (i_ezsigntemplatesignature_y) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_y))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_y_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_y_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_y_local_var = i_ezsigntemplatesignature_y->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_width
    cJSON *i_ezsigntemplatesignature_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureWidth");
    if (cJSON_IsNull(i_ezsigntemplatesignature_width)) {
        i_ezsigntemplatesignature_width = NULL;
    }
    if (i_ezsigntemplatesignature_width) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_width))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_width_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_width_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_width_local_var = i_ezsigntemplatesignature_width->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_height
    cJSON *i_ezsigntemplatesignature_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureHeight");
    if (cJSON_IsNull(i_ezsigntemplatesignature_height)) {
        i_ezsigntemplatesignature_height = NULL;
    }
    if (i_ezsigntemplatesignature_height) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_height))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_height_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_height_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_height_local_var = i_ezsigntemplatesignature_height->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_step
    cJSON *i_ezsigntemplatesignature_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureStep");
    if (cJSON_IsNull(i_ezsigntemplatesignature_step)) {
        i_ezsigntemplatesignature_step = NULL;
    }
    if (!i_ezsigntemplatesignature_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_step))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_step_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_step_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_step_local_var = i_ezsigntemplatesignature_step->valuedouble;

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_type
    cJSON *e_ezsigntemplatesignature_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureType");
    if (cJSON_IsNull(e_ezsigntemplatesignature_type)) {
        e_ezsigntemplatesignature_type = NULL;
    }
    if (!e_ezsigntemplatesignature_type) {
        goto end;
    }

    
    e_ezsigntemplatesignature_type_local_nonprim = field_e_ezsigntemplatesignature_type_parseFromJSON(e_ezsigntemplatesignature_type); //custom

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepad
    cJSON *e_ezsigntemplatesignature_signaturepad = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureSignaturepad");
    if (cJSON_IsNull(e_ezsigntemplatesignature_signaturepad)) {
        e_ezsigntemplatesignature_signaturepad = NULL;
    }
    if (e_ezsigntemplatesignature_signaturepad) { 
    e_ezsigntemplatesignature_signaturepad_local_nonprim = field_e_ezsigntemplatesignature_signaturepad_parseFromJSON(e_ezsigntemplatesignature_signaturepad); //custom
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_signaturepadrequired
    cJSON *e_ezsigntemplatesignature_signaturepadrequired = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureSignaturepadrequired");
    if (cJSON_IsNull(e_ezsigntemplatesignature_signaturepadrequired)) {
        e_ezsigntemplatesignature_signaturepadrequired = NULL;
    }
    if (e_ezsigntemplatesignature_signaturepadrequired) { 
    e_ezsigntemplatesignature_signaturepadrequired_local_nonprim = field_e_ezsigntemplatesignature_signaturepadrequired_parseFromJSON(e_ezsigntemplatesignature_signaturepadrequired); //custom
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_consultationtrigger
    cJSON *e_ezsigntemplatesignature_consultationtrigger = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureConsultationtrigger");
    if (cJSON_IsNull(e_ezsigntemplatesignature_consultationtrigger)) {
        e_ezsigntemplatesignature_consultationtrigger = NULL;
    }
    if (e_ezsigntemplatesignature_consultationtrigger) { 
    e_ezsigntemplatesignature_consultationtrigger_local_nonprim = field_e_ezsigntemplatesignature_consultationtrigger_parseFromJSON(e_ezsigntemplatesignature_consultationtrigger); //custom
    }

    // ezsigntemplatesignature_request->t_ezsigntemplatesignature_tooltip
    cJSON *t_ezsigntemplatesignature_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "tEzsigntemplatesignatureTooltip");
    if (cJSON_IsNull(t_ezsigntemplatesignature_tooltip)) {
        t_ezsigntemplatesignature_tooltip = NULL;
    }
    if (t_ezsigntemplatesignature_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplatesignature_tooltip) && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_tooltipposition
    cJSON *e_ezsigntemplatesignature_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureTooltipposition");
    if (cJSON_IsNull(e_ezsigntemplatesignature_tooltipposition)) {
        e_ezsigntemplatesignature_tooltipposition = NULL;
    }
    if (e_ezsigntemplatesignature_tooltipposition) { 
    e_ezsigntemplatesignature_tooltipposition_local_nonprim = field_e_ezsigntemplatesignature_tooltipposition_parseFromJSON(e_ezsigntemplatesignature_tooltipposition); //custom
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_font
    cJSON *e_ezsigntemplatesignature_font = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureFont");
    if (cJSON_IsNull(e_ezsigntemplatesignature_font)) {
        e_ezsigntemplatesignature_font = NULL;
    }
    if (e_ezsigntemplatesignature_font) { 
    e_ezsigntemplatesignature_font_local_nonprim = field_e_ezsigntemplatesignature_font_parseFromJSON(e_ezsigntemplatesignature_font); //custom
    }

    // ezsigntemplatesignature_request->b_ezsigntemplatesignature_required
    cJSON *b_ezsigntemplatesignature_required = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "bEzsigntemplatesignatureRequired");
    if (cJSON_IsNull(b_ezsigntemplatesignature_required)) {
        b_ezsigntemplatesignature_required = NULL;
    }
    if (b_ezsigntemplatesignature_required) { 
    if(!cJSON_IsBool(b_ezsigntemplatesignature_required))
    {
    goto end; //Bool
    }
    b_ezsigntemplatesignature_required_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatesignature_required_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatesignature_required_local_var = b_ezsigntemplatesignature_required->valueint;
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_attachmentnamesource
    cJSON *e_ezsigntemplatesignature_attachmentnamesource = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureAttachmentnamesource");
    if (cJSON_IsNull(e_ezsigntemplatesignature_attachmentnamesource)) {
        e_ezsigntemplatesignature_attachmentnamesource = NULL;
    }
    if (e_ezsigntemplatesignature_attachmentnamesource) { 
    e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = field_e_ezsigntemplatesignature_attachmentnamesource_parseFromJSON(e_ezsigntemplatesignature_attachmentnamesource); //custom
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_attachmentdescription
    cJSON *s_ezsigntemplatesignature_attachmentdescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignatureAttachmentdescription");
    if (cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription)) {
        s_ezsigntemplatesignature_attachmentdescription = NULL;
    }
    if (s_ezsigntemplatesignature_attachmentdescription) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_attachmentdescription) && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_validationstep
    cJSON *i_ezsigntemplatesignature_validationstep = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureValidationstep");
    if (cJSON_IsNull(i_ezsigntemplatesignature_validationstep)) {
        i_ezsigntemplatesignature_validationstep = NULL;
    }
    if (i_ezsigntemplatesignature_validationstep) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_validationstep))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_validationstep_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_validationstep_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_validationstep_local_var = i_ezsigntemplatesignature_validationstep->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_maxlength
    cJSON *i_ezsigntemplatesignature_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignatureMaxlength");
    if (cJSON_IsNull(i_ezsigntemplatesignature_maxlength)) {
        i_ezsigntemplatesignature_maxlength = NULL;
    }
    if (i_ezsigntemplatesignature_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_maxlength))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_maxlength_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_maxlength_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_maxlength_local_var = i_ezsigntemplatesignature_maxlength->valuedouble;
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_defaultvalue
    cJSON *s_ezsigntemplatesignature_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignatureDefaultvalue");
    if (cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue)) {
        s_ezsigntemplatesignature_defaultvalue = NULL;
    }
    if (s_ezsigntemplatesignature_defaultvalue) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_defaultvalue) && !cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_regexp
    cJSON *s_ezsigntemplatesignature_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignatureRegexp");
    if (cJSON_IsNull(s_ezsigntemplatesignature_regexp)) {
        s_ezsigntemplatesignature_regexp = NULL;
    }
    if (s_ezsigntemplatesignature_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_regexp) && !cJSON_IsNull(s_ezsigntemplatesignature_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_textvalidation
    cJSON *e_ezsigntemplatesignature_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureTextvalidation");
    if (cJSON_IsNull(e_ezsigntemplatesignature_textvalidation)) {
        e_ezsigntemplatesignature_textvalidation = NULL;
    }
    if (e_ezsigntemplatesignature_textvalidation) { 
    e_ezsigntemplatesignature_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplatesignature_textvalidation); //custom
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_textvalidationcustommessage
    cJSON *s_ezsigntemplatesignature_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignatureTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage)) {
        s_ezsigntemplatesignature_textvalidationcustommessage = NULL;
    }
    if (s_ezsigntemplatesignature_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_textvalidationcustommessage) && !cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_dependencyrequirement
    cJSON *e_ezsigntemplatesignature_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignatureDependencyrequirement");
    if (cJSON_IsNull(e_ezsigntemplatesignature_dependencyrequirement)) {
        e_ezsigntemplatesignature_dependencyrequirement = NULL;
    }
    if (e_ezsigntemplatesignature_dependencyrequirement) { 
    e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = field_e_ezsigntemplatesignature_dependencyrequirement_parseFromJSON(e_ezsigntemplatesignature_dependencyrequirement); //custom
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_positioningpattern
    cJSON *s_ezsigntemplatesignature_positioningpattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignaturePositioningpattern");
    if (cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern)) {
        s_ezsigntemplatesignature_positioningpattern = NULL;
    }
    if (s_ezsigntemplatesignature_positioningpattern) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_positioningpattern) && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsetx
    cJSON *i_ezsigntemplatesignature_positioningoffsetx = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignaturePositioningoffsetx");
    if (cJSON_IsNull(i_ezsigntemplatesignature_positioningoffsetx)) {
        i_ezsigntemplatesignature_positioningoffsetx = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsetx) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsetx))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_positioningoffsetx_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_positioningoffsetx_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_positioningoffsetx_local_var = i_ezsigntemplatesignature_positioningoffsetx->valuedouble;
    }

    // ezsigntemplatesignature_request->i_ezsigntemplatesignature_positioningoffsety
    cJSON *i_ezsigntemplatesignature_positioningoffsety = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "iEzsigntemplatesignaturePositioningoffsety");
    if (cJSON_IsNull(i_ezsigntemplatesignature_positioningoffsety)) {
        i_ezsigntemplatesignature_positioningoffsety = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsety) { 
    if(!cJSON_IsNumber(i_ezsigntemplatesignature_positioningoffsety))
    {
    goto end; //Numeric
    }
    i_ezsigntemplatesignature_positioningoffsety_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplatesignature_positioningoffsety_local_var)
    {
        goto end;
    }
    *i_ezsigntemplatesignature_positioningoffsety_local_var = i_ezsigntemplatesignature_positioningoffsety->valuedouble;
    }

    // ezsigntemplatesignature_request->e_ezsigntemplatesignature_positioningoccurence
    cJSON *e_ezsigntemplatesignature_positioningoccurence = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "eEzsigntemplatesignaturePositioningoccurence");
    if (cJSON_IsNull(e_ezsigntemplatesignature_positioningoccurence)) {
        e_ezsigntemplatesignature_positioningoccurence = NULL;
    }
    if (e_ezsigntemplatesignature_positioningoccurence) { 
    e_ezsigntemplatesignature_positioningoccurence_local_nonprim = field_e_ezsigntemplatesignature_positioningoccurence_parseFromJSON(e_ezsigntemplatesignature_positioningoccurence); //custom
    }

    // ezsigntemplatesignature_request->s_ezsigntemplatesignature_creditcardamountdescription
    cJSON *s_ezsigntemplatesignature_creditcardamountdescription = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "sEzsigntemplatesignatureCreditcardamountdescription");
    if (cJSON_IsNull(s_ezsigntemplatesignature_creditcardamountdescription)) {
        s_ezsigntemplatesignature_creditcardamountdescription = NULL;
    }
    if (s_ezsigntemplatesignature_creditcardamountdescription) { 
    if(!cJSON_IsString(s_ezsigntemplatesignature_creditcardamountdescription) && !cJSON_IsNull(s_ezsigntemplatesignature_creditcardamountdescription))
    {
    goto end; //String
    }
    }

    // ezsigntemplatesignature_request->d_ezsigntemplatesignature_creditcardamount
    cJSON *d_ezsigntemplatesignature_creditcardamount = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_requestJSON, "dEzsigntemplatesignatureCreditcardamount");
    if (cJSON_IsNull(d_ezsigntemplatesignature_creditcardamount)) {
        d_ezsigntemplatesignature_creditcardamount = NULL;
    }
    if (d_ezsigntemplatesignature_creditcardamount) { 
    if(!cJSON_IsString(d_ezsigntemplatesignature_creditcardamount) && !cJSON_IsNull(d_ezsigntemplatesignature_creditcardamount))
    {
    goto end; //String
    }
    }


    if (t_ezsigntemplatesignature_tooltip && !cJSON_IsNull(t_ezsigntemplatesignature_tooltip)) t_ezsigntemplatesignature_tooltip_local_str = strdup(t_ezsigntemplatesignature_tooltip->valuestring);
    if (s_ezsigntemplatesignature_attachmentdescription && !cJSON_IsNull(s_ezsigntemplatesignature_attachmentdescription)) s_ezsigntemplatesignature_attachmentdescription_local_str = strdup(s_ezsigntemplatesignature_attachmentdescription->valuestring);
    if (s_ezsigntemplatesignature_defaultvalue && !cJSON_IsNull(s_ezsigntemplatesignature_defaultvalue)) s_ezsigntemplatesignature_defaultvalue_local_str = strdup(s_ezsigntemplatesignature_defaultvalue->valuestring);
    if (s_ezsigntemplatesignature_regexp && !cJSON_IsNull(s_ezsigntemplatesignature_regexp)) s_ezsigntemplatesignature_regexp_local_str = strdup(s_ezsigntemplatesignature_regexp->valuestring);
    if (s_ezsigntemplatesignature_textvalidationcustommessage && !cJSON_IsNull(s_ezsigntemplatesignature_textvalidationcustommessage)) s_ezsigntemplatesignature_textvalidationcustommessage_local_str = strdup(s_ezsigntemplatesignature_textvalidationcustommessage->valuestring);
    if (s_ezsigntemplatesignature_positioningpattern && !cJSON_IsNull(s_ezsigntemplatesignature_positioningpattern)) s_ezsigntemplatesignature_positioningpattern_local_str = strdup(s_ezsigntemplatesignature_positioningpattern->valuestring);
    if (s_ezsigntemplatesignature_creditcardamountdescription && !cJSON_IsNull(s_ezsigntemplatesignature_creditcardamountdescription)) s_ezsigntemplatesignature_creditcardamountdescription_local_str = strdup(s_ezsigntemplatesignature_creditcardamountdescription->valuestring);
    if (d_ezsigntemplatesignature_creditcardamount && !cJSON_IsNull(d_ezsigntemplatesignature_creditcardamount)) d_ezsigntemplatesignature_creditcardamount_local_str = strdup(d_ezsigntemplatesignature_creditcardamount->valuestring);

    ezsigntemplatesignature_request_local_var = ezsigntemplatesignature_request_create_internal (
        pki_ezsigntemplatesignature_id_local_var,
        fki_ezsigntemplatedocument_id_local_var,
        fki_ezsigntemplatesigner_id_local_var,
        fki_ezsigntemplatesigner_id_validation_local_var,
        fki_paymentgateway_id_local_var,
        b_ezsigntemplatesignature_handwritten_local_var,
        b_ezsigntemplatesignature_reason_local_var,
        b_ezsigntemplatesignature_creditcardcustomamount_local_var,
        e_ezsigntemplatesignature_positioning ? e_ezsigntemplatesignature_positioning_local_nonprim : 0,
        i_ezsigntemplatedocumentpage_pagenumber_local_var,
        i_ezsigntemplatesignature_x_local_var,
        i_ezsigntemplatesignature_y_local_var,
        i_ezsigntemplatesignature_width_local_var,
        i_ezsigntemplatesignature_height_local_var,
        i_ezsigntemplatesignature_step_local_var,
        e_ezsigntemplatesignature_type_local_nonprim,
        e_ezsigntemplatesignature_signaturepad ? e_ezsigntemplatesignature_signaturepad_local_nonprim : 0,
        e_ezsigntemplatesignature_signaturepadrequired ? e_ezsigntemplatesignature_signaturepadrequired_local_nonprim : 0,
        e_ezsigntemplatesignature_consultationtrigger ? e_ezsigntemplatesignature_consultationtrigger_local_nonprim : 0,
        t_ezsigntemplatesignature_tooltip_local_str,
        e_ezsigntemplatesignature_tooltipposition ? e_ezsigntemplatesignature_tooltipposition_local_nonprim : 0,
        e_ezsigntemplatesignature_font ? e_ezsigntemplatesignature_font_local_nonprim : 0,
        b_ezsigntemplatesignature_required_local_var,
        e_ezsigntemplatesignature_attachmentnamesource ? e_ezsigntemplatesignature_attachmentnamesource_local_nonprim : 0,
        s_ezsigntemplatesignature_attachmentdescription_local_str,
        i_ezsigntemplatesignature_validationstep_local_var,
        i_ezsigntemplatesignature_maxlength_local_var,
        s_ezsigntemplatesignature_defaultvalue_local_str,
        s_ezsigntemplatesignature_regexp_local_str,
        e_ezsigntemplatesignature_textvalidation ? e_ezsigntemplatesignature_textvalidation_local_nonprim : 0,
        s_ezsigntemplatesignature_textvalidationcustommessage_local_str,
        e_ezsigntemplatesignature_dependencyrequirement ? e_ezsigntemplatesignature_dependencyrequirement_local_nonprim : 0,
        s_ezsigntemplatesignature_positioningpattern_local_str,
        i_ezsigntemplatesignature_positioningoffsetx_local_var,
        i_ezsigntemplatesignature_positioningoffsety_local_var,
        e_ezsigntemplatesignature_positioningoccurence ? e_ezsigntemplatesignature_positioningoccurence_local_nonprim : 0,
        s_ezsigntemplatesignature_creditcardamountdescription_local_str,
        d_ezsigntemplatesignature_creditcardamount_local_str
        );

    if (!ezsigntemplatesignature_request_local_var) {
        goto end;
    }

    return ezsigntemplatesignature_request_local_var;
end:
    if (pki_ezsigntemplatesignature_id_local_var) {
        free(pki_ezsigntemplatesignature_id_local_var);
        pki_ezsigntemplatesignature_id_local_var = NULL;
    }
    if (fki_ezsigntemplatedocument_id_local_var) {
        free(fki_ezsigntemplatedocument_id_local_var);
        fki_ezsigntemplatedocument_id_local_var = NULL;
    }
    if (fki_ezsigntemplatesigner_id_local_var) {
        free(fki_ezsigntemplatesigner_id_local_var);
        fki_ezsigntemplatesigner_id_local_var = NULL;
    }
    if (fki_ezsigntemplatesigner_id_validation_local_var) {
        free(fki_ezsigntemplatesigner_id_validation_local_var);
        fki_ezsigntemplatesigner_id_validation_local_var = NULL;
    }
    if (fki_paymentgateway_id_local_var) {
        free(fki_paymentgateway_id_local_var);
        fki_paymentgateway_id_local_var = NULL;
    }
    if (b_ezsigntemplatesignature_handwritten_local_var) {
        free(b_ezsigntemplatesignature_handwritten_local_var);
        b_ezsigntemplatesignature_handwritten_local_var = NULL;
    }
    if (b_ezsigntemplatesignature_reason_local_var) {
        free(b_ezsigntemplatesignature_reason_local_var);
        b_ezsigntemplatesignature_reason_local_var = NULL;
    }
    if (b_ezsigntemplatesignature_creditcardcustomamount_local_var) {
        free(b_ezsigntemplatesignature_creditcardcustomamount_local_var);
        b_ezsigntemplatesignature_creditcardcustomamount_local_var = NULL;
    }
    if (e_ezsigntemplatesignature_positioning_local_nonprim) {
        e_ezsigntemplatesignature_positioning_local_nonprim = 0;
    }
    if (i_ezsigntemplatedocumentpage_pagenumber_local_var) {
        free(i_ezsigntemplatedocumentpage_pagenumber_local_var);
        i_ezsigntemplatedocumentpage_pagenumber_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_x_local_var) {
        free(i_ezsigntemplatesignature_x_local_var);
        i_ezsigntemplatesignature_x_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_y_local_var) {
        free(i_ezsigntemplatesignature_y_local_var);
        i_ezsigntemplatesignature_y_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_width_local_var) {
        free(i_ezsigntemplatesignature_width_local_var);
        i_ezsigntemplatesignature_width_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_height_local_var) {
        free(i_ezsigntemplatesignature_height_local_var);
        i_ezsigntemplatesignature_height_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_step_local_var) {
        free(i_ezsigntemplatesignature_step_local_var);
        i_ezsigntemplatesignature_step_local_var = NULL;
    }
    if (e_ezsigntemplatesignature_type_local_nonprim) {
        e_ezsigntemplatesignature_type_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_signaturepad_local_nonprim) {
        e_ezsigntemplatesignature_signaturepad_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_signaturepadrequired_local_nonprim) {
        e_ezsigntemplatesignature_signaturepadrequired_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_consultationtrigger_local_nonprim) {
        e_ezsigntemplatesignature_consultationtrigger_local_nonprim = 0;
    }
    if (t_ezsigntemplatesignature_tooltip_local_str) {
        free(t_ezsigntemplatesignature_tooltip_local_str);
        t_ezsigntemplatesignature_tooltip_local_str = NULL;
    }
    if (e_ezsigntemplatesignature_tooltipposition_local_nonprim) {
        e_ezsigntemplatesignature_tooltipposition_local_nonprim = 0;
    }
    if (e_ezsigntemplatesignature_font_local_nonprim) {
        e_ezsigntemplatesignature_font_local_nonprim = 0;
    }
    if (b_ezsigntemplatesignature_required_local_var) {
        free(b_ezsigntemplatesignature_required_local_var);
        b_ezsigntemplatesignature_required_local_var = NULL;
    }
    if (e_ezsigntemplatesignature_attachmentnamesource_local_nonprim) {
        e_ezsigntemplatesignature_attachmentnamesource_local_nonprim = 0;
    }
    if (s_ezsigntemplatesignature_attachmentdescription_local_str) {
        free(s_ezsigntemplatesignature_attachmentdescription_local_str);
        s_ezsigntemplatesignature_attachmentdescription_local_str = NULL;
    }
    if (i_ezsigntemplatesignature_validationstep_local_var) {
        free(i_ezsigntemplatesignature_validationstep_local_var);
        i_ezsigntemplatesignature_validationstep_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_maxlength_local_var) {
        free(i_ezsigntemplatesignature_maxlength_local_var);
        i_ezsigntemplatesignature_maxlength_local_var = NULL;
    }
    if (s_ezsigntemplatesignature_defaultvalue_local_str) {
        free(s_ezsigntemplatesignature_defaultvalue_local_str);
        s_ezsigntemplatesignature_defaultvalue_local_str = NULL;
    }
    if (s_ezsigntemplatesignature_regexp_local_str) {
        free(s_ezsigntemplatesignature_regexp_local_str);
        s_ezsigntemplatesignature_regexp_local_str = NULL;
    }
    if (e_ezsigntemplatesignature_textvalidation_local_nonprim) {
        e_ezsigntemplatesignature_textvalidation_local_nonprim = 0;
    }
    if (s_ezsigntemplatesignature_textvalidationcustommessage_local_str) {
        free(s_ezsigntemplatesignature_textvalidationcustommessage_local_str);
        s_ezsigntemplatesignature_textvalidationcustommessage_local_str = NULL;
    }
    if (e_ezsigntemplatesignature_dependencyrequirement_local_nonprim) {
        e_ezsigntemplatesignature_dependencyrequirement_local_nonprim = 0;
    }
    if (s_ezsigntemplatesignature_positioningpattern_local_str) {
        free(s_ezsigntemplatesignature_positioningpattern_local_str);
        s_ezsigntemplatesignature_positioningpattern_local_str = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsetx_local_var) {
        free(i_ezsigntemplatesignature_positioningoffsetx_local_var);
        i_ezsigntemplatesignature_positioningoffsetx_local_var = NULL;
    }
    if (i_ezsigntemplatesignature_positioningoffsety_local_var) {
        free(i_ezsigntemplatesignature_positioningoffsety_local_var);
        i_ezsigntemplatesignature_positioningoffsety_local_var = NULL;
    }
    if (e_ezsigntemplatesignature_positioningoccurence_local_nonprim) {
        e_ezsigntemplatesignature_positioningoccurence_local_nonprim = 0;
    }
    if (s_ezsigntemplatesignature_creditcardamountdescription_local_str) {
        free(s_ezsigntemplatesignature_creditcardamountdescription_local_str);
        s_ezsigntemplatesignature_creditcardamountdescription_local_str = NULL;
    }
    if (d_ezsigntemplatesignature_creditcardamount_local_str) {
        free(d_ezsigntemplatesignature_creditcardamount_local_str);
        d_ezsigntemplatesignature_creditcardamount_local_str = NULL;
    }
    return NULL;

}
