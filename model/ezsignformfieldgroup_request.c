#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_request.h"



static ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_create_internal(
    int pki_ezsignformfieldgroup_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__e e_ezsignformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e e_ezsignformfieldgroup_signerrequirement,
    char *s_ezsignformfieldgroup_label,
    int i_ezsignformfieldgroup_step,
    char *s_ezsignformfieldgroup_defaultvalue,
    int i_ezsignformfieldgroup_filledmin,
    int i_ezsignformfieldgroup_filledmax,
    int b_ezsignformfieldgroup_readonly,
    int i_ezsignformfieldgroup_maxlength,
    int b_ezsignformfieldgroup_encrypted,
    char *s_ezsignformfieldgroup_regexp,
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation
    ) {
    ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_local_var = malloc(sizeof(ezsignformfieldgroup_request_t));
    if (!ezsignformfieldgroup_request_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_request_local_var->pki_ezsignformfieldgroup_id = pki_ezsignformfieldgroup_id;
    ezsignformfieldgroup_request_local_var->fki_ezsigndocument_id = fki_ezsigndocument_id;
    ezsignformfieldgroup_request_local_var->e_ezsignformfieldgroup_type = e_ezsignformfieldgroup_type;
    ezsignformfieldgroup_request_local_var->e_ezsignformfieldgroup_signerrequirement = e_ezsignformfieldgroup_signerrequirement;
    ezsignformfieldgroup_request_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    ezsignformfieldgroup_request_local_var->i_ezsignformfieldgroup_step = i_ezsignformfieldgroup_step;
    ezsignformfieldgroup_request_local_var->s_ezsignformfieldgroup_defaultvalue = s_ezsignformfieldgroup_defaultvalue;
    ezsignformfieldgroup_request_local_var->i_ezsignformfieldgroup_filledmin = i_ezsignformfieldgroup_filledmin;
    ezsignformfieldgroup_request_local_var->i_ezsignformfieldgroup_filledmax = i_ezsignformfieldgroup_filledmax;
    ezsignformfieldgroup_request_local_var->b_ezsignformfieldgroup_readonly = b_ezsignformfieldgroup_readonly;
    ezsignformfieldgroup_request_local_var->i_ezsignformfieldgroup_maxlength = i_ezsignformfieldgroup_maxlength;
    ezsignformfieldgroup_request_local_var->b_ezsignformfieldgroup_encrypted = b_ezsignformfieldgroup_encrypted;
    ezsignformfieldgroup_request_local_var->s_ezsignformfieldgroup_regexp = s_ezsignformfieldgroup_regexp;
    ezsignformfieldgroup_request_local_var->s_ezsignformfieldgroup_textvalidationcustommessage = s_ezsignformfieldgroup_textvalidationcustommessage;
    ezsignformfieldgroup_request_local_var->t_ezsignformfieldgroup_tooltip = t_ezsignformfieldgroup_tooltip;
    ezsignformfieldgroup_request_local_var->e_ezsignformfieldgroup_tooltipposition = e_ezsignformfieldgroup_tooltipposition;
    ezsignformfieldgroup_request_local_var->e_ezsignformfieldgroup_textvalidation = e_ezsignformfieldgroup_textvalidation;

    ezsignformfieldgroup_request_local_var->_library_owned = 1;
    return ezsignformfieldgroup_request_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_create(
    int pki_ezsignformfieldgroup_id,
    int fki_ezsigndocument_id,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__e e_ezsignformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e e_ezsignformfieldgroup_signerrequirement,
    char *s_ezsignformfieldgroup_label,
    int i_ezsignformfieldgroup_step,
    char *s_ezsignformfieldgroup_defaultvalue,
    int i_ezsignformfieldgroup_filledmin,
    int i_ezsignformfieldgroup_filledmax,
    int b_ezsignformfieldgroup_readonly,
    int i_ezsignformfieldgroup_maxlength,
    int b_ezsignformfieldgroup_encrypted,
    char *s_ezsignformfieldgroup_regexp,
    char *s_ezsignformfieldgroup_textvalidationcustommessage,
    char *t_ezsignformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation
    ) {
    return ezsignformfieldgroup_request_create_internal (
        pki_ezsignformfieldgroup_id,
        fki_ezsigndocument_id,
        e_ezsignformfieldgroup_type,
        e_ezsignformfieldgroup_signerrequirement,
        s_ezsignformfieldgroup_label,
        i_ezsignformfieldgroup_step,
        s_ezsignformfieldgroup_defaultvalue,
        i_ezsignformfieldgroup_filledmin,
        i_ezsignformfieldgroup_filledmax,
        b_ezsignformfieldgroup_readonly,
        i_ezsignformfieldgroup_maxlength,
        b_ezsignformfieldgroup_encrypted,
        s_ezsignformfieldgroup_regexp,
        s_ezsignformfieldgroup_textvalidationcustommessage,
        t_ezsignformfieldgroup_tooltip,
        e_ezsignformfieldgroup_tooltipposition,
        e_ezsignformfieldgroup_textvalidation
        );
}

void ezsignformfieldgroup_request_free(ezsignformfieldgroup_request_t *ezsignformfieldgroup_request) {
    if(NULL == ezsignformfieldgroup_request){
        return ;
    }
    if(ezsignformfieldgroup_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroup_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_request->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_request->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_request->s_ezsignformfieldgroup_label = NULL;
    }
    if (ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue) {
        free(ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue);
        ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp) {
        free(ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp);
        ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp = NULL;
    }
    if (ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage) {
        free(ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage);
        ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip) {
        free(ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip);
        ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip = NULL;
    }
    free(ezsignformfieldgroup_request);
}

cJSON *ezsignformfieldgroup_request_convertToJSON(ezsignformfieldgroup_request_t *ezsignformfieldgroup_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_request->pki_ezsignformfieldgroup_id
    if(ezsignformfieldgroup_request->pki_ezsignformfieldgroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldgroupID", ezsignformfieldgroup_request->pki_ezsignformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfieldgroup_request->fki_ezsigndocument_id
    if (!ezsignformfieldgroup_request->fki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigndocumentID", ezsignformfieldgroup_request->fki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_type
    if (ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__NULL == ezsignformfieldgroup_request->e_ezsignformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsignformfieldgroup_type_local_JSON = field_e_ezsignformfieldgroup_type_convertToJSON(ezsignformfieldgroup_request->e_ezsignformfieldgroup_type);
    if(e_ezsignformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupType", e_ezsignformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_signerrequirement
    if(ezsignformfieldgroup_request->e_ezsignformfieldgroup_signerrequirement != ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__NULL) {
    cJSON *e_ezsignformfieldgroup_signerrequirement_local_JSON = field_e_ezsignformfieldgroup_signerrequirement_convertToJSON(ezsignformfieldgroup_request->e_ezsignformfieldgroup_signerrequirement);
    if(e_ezsignformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupSignerrequirement", e_ezsignformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_request->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_request->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_step
    if (!ezsignformfieldgroup_request->i_ezsignformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupStep", ezsignformfieldgroup_request->i_ezsignformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue
    if(ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupDefaultvalue", ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmin
    if (!ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmin", ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmax
    if (!ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupFilledmax", ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfieldgroup_request->b_ezsignformfieldgroup_readonly
    if (!ezsignformfieldgroup_request->b_ezsignformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupReadonly", ezsignformfieldgroup_request->b_ezsignformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_maxlength
    if(ezsignformfieldgroup_request->i_ezsignformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupMaxlength", ezsignformfieldgroup_request->i_ezsignformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfieldgroup_request->b_ezsignformfieldgroup_encrypted
    if(ezsignformfieldgroup_request->b_ezsignformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldgroupEncrypted", ezsignformfieldgroup_request->b_ezsignformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp
    if(ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupRegexp", ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage
    if(ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupTextvalidationcustommessage", ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip
    if(ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsignformfieldgroupTooltip", ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_tooltipposition
    if(ezsignformfieldgroup_request->e_ezsignformfieldgroup_tooltipposition != ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__NULL) {
    cJSON *e_ezsignformfieldgroup_tooltipposition_local_JSON = field_e_ezsignformfieldgroup_tooltipposition_convertToJSON(ezsignformfieldgroup_request->e_ezsignformfieldgroup_tooltipposition);
    if(e_ezsignformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTooltipposition", e_ezsignformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_textvalidation
    if(ezsignformfieldgroup_request->e_ezsignformfieldgroup_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsignformfieldgroup_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsignformfieldgroup_request->e_ezsignformfieldgroup_textvalidation);
    if(e_ezsignformfieldgroup_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldgroupTextvalidation", e_ezsignformfieldgroup_textvalidation_local_JSON);
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

ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_parseFromJSON(cJSON *ezsignformfieldgroup_requestJSON){

    ezsignformfieldgroup_request_t *ezsignformfieldgroup_request_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_request->e_ezsignformfieldgroup_type
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_type__e e_ezsignformfieldgroup_type_local_nonprim = 0;

    // define the local variable for ezsignformfieldgroup_request->e_ezsignformfieldgroup_signerrequirement
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_signerrequirement__e e_ezsignformfieldgroup_signerrequirement_local_nonprim = 0;

    // define the local variable for ezsignformfieldgroup_request->e_ezsignformfieldgroup_tooltipposition
    ezmax_api_definition__full_field_e_ezsignformfieldgroup_tooltipposition__e e_ezsignformfieldgroup_tooltipposition_local_nonprim = 0;

    // define the local variable for ezsignformfieldgroup_request->e_ezsignformfieldgroup_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsignformfieldgroup_textvalidation_local_nonprim = 0;

    // ezsignformfieldgroup_request->pki_ezsignformfieldgroup_id
    cJSON *pki_ezsignformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "pkiEzsignformfieldgroupID");
    if (cJSON_IsNull(pki_ezsignformfieldgroup_id)) {
        pki_ezsignformfieldgroup_id = NULL;
    }
    if (pki_ezsignformfieldgroup_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfieldgroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroup_request->fki_ezsigndocument_id
    cJSON *fki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "fkiEzsigndocumentID");
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

    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_type
    cJSON *e_ezsignformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "eEzsignformfieldgroupType");
    if (cJSON_IsNull(e_ezsignformfieldgroup_type)) {
        e_ezsignformfieldgroup_type = NULL;
    }
    if (!e_ezsignformfieldgroup_type) {
        goto end;
    }

    
    e_ezsignformfieldgroup_type_local_nonprim = field_e_ezsignformfieldgroup_type_parseFromJSON(e_ezsignformfieldgroup_type); //custom

    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_signerrequirement
    cJSON *e_ezsignformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "eEzsignformfieldgroupSignerrequirement");
    if (cJSON_IsNull(e_ezsignformfieldgroup_signerrequirement)) {
        e_ezsignformfieldgroup_signerrequirement = NULL;
    }
    if (e_ezsignformfieldgroup_signerrequirement) { 
    e_ezsignformfieldgroup_signerrequirement_local_nonprim = field_e_ezsignformfieldgroup_signerrequirement_parseFromJSON(e_ezsignformfieldgroup_signerrequirement); //custom
    }

    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "sEzsignformfieldgroupLabel");
    if (cJSON_IsNull(s_ezsignformfieldgroup_label)) {
        s_ezsignformfieldgroup_label = NULL;
    }
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_step
    cJSON *i_ezsignformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "iEzsignformfieldgroupStep");
    if (cJSON_IsNull(i_ezsignformfieldgroup_step)) {
        i_ezsignformfieldgroup_step = NULL;
    }
    if (!i_ezsignformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_step))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_defaultvalue
    cJSON *s_ezsignformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "sEzsignformfieldgroupDefaultvalue");
    if (cJSON_IsNull(s_ezsignformfieldgroup_defaultvalue)) {
        s_ezsignformfieldgroup_defaultvalue = NULL;
    }
    if (s_ezsignformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_defaultvalue) && !cJSON_IsNull(s_ezsignformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmin
    cJSON *i_ezsignformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "iEzsignformfieldgroupFilledmin");
    if (cJSON_IsNull(i_ezsignformfieldgroup_filledmin)) {
        i_ezsignformfieldgroup_filledmin = NULL;
    }
    if (!i_ezsignformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_filledmax
    cJSON *i_ezsignformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "iEzsignformfieldgroupFilledmax");
    if (cJSON_IsNull(i_ezsignformfieldgroup_filledmax)) {
        i_ezsignformfieldgroup_filledmax = NULL;
    }
    if (!i_ezsignformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }

    // ezsignformfieldgroup_request->b_ezsignformfieldgroup_readonly
    cJSON *b_ezsignformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "bEzsignformfieldgroupReadonly");
    if (cJSON_IsNull(b_ezsignformfieldgroup_readonly)) {
        b_ezsignformfieldgroup_readonly = NULL;
    }
    if (!b_ezsignformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignformfieldgroup_readonly))
    {
    goto end; //Bool
    }

    // ezsignformfieldgroup_request->i_ezsignformfieldgroup_maxlength
    cJSON *i_ezsignformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "iEzsignformfieldgroupMaxlength");
    if (cJSON_IsNull(i_ezsignformfieldgroup_maxlength)) {
        i_ezsignformfieldgroup_maxlength = NULL;
    }
    if (i_ezsignformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfieldgroup_request->b_ezsignformfieldgroup_encrypted
    cJSON *b_ezsignformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "bEzsignformfieldgroupEncrypted");
    if (cJSON_IsNull(b_ezsignformfieldgroup_encrypted)) {
        b_ezsignformfieldgroup_encrypted = NULL;
    }
    if (b_ezsignformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsignformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    }

    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_regexp
    cJSON *s_ezsignformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "sEzsignformfieldgroupRegexp");
    if (cJSON_IsNull(s_ezsignformfieldgroup_regexp)) {
        s_ezsignformfieldgroup_regexp = NULL;
    }
    if (s_ezsignformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_regexp) && !cJSON_IsNull(s_ezsignformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_request->s_ezsignformfieldgroup_textvalidationcustommessage
    cJSON *s_ezsignformfieldgroup_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "sEzsignformfieldgroupTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsignformfieldgroup_textvalidationcustommessage)) {
        s_ezsignformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (s_ezsignformfieldgroup_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsignformfieldgroup_textvalidationcustommessage) && !cJSON_IsNull(s_ezsignformfieldgroup_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_request->t_ezsignformfieldgroup_tooltip
    cJSON *t_ezsignformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "tEzsignformfieldgroupTooltip");
    if (cJSON_IsNull(t_ezsignformfieldgroup_tooltip)) {
        t_ezsignformfieldgroup_tooltip = NULL;
    }
    if (t_ezsignformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsignformfieldgroup_tooltip) && !cJSON_IsNull(t_ezsignformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_tooltipposition
    cJSON *e_ezsignformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "eEzsignformfieldgroupTooltipposition");
    if (cJSON_IsNull(e_ezsignformfieldgroup_tooltipposition)) {
        e_ezsignformfieldgroup_tooltipposition = NULL;
    }
    if (e_ezsignformfieldgroup_tooltipposition) { 
    e_ezsignformfieldgroup_tooltipposition_local_nonprim = field_e_ezsignformfieldgroup_tooltipposition_parseFromJSON(e_ezsignformfieldgroup_tooltipposition); //custom
    }

    // ezsignformfieldgroup_request->e_ezsignformfieldgroup_textvalidation
    cJSON *e_ezsignformfieldgroup_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_requestJSON, "eEzsignformfieldgroupTextvalidation");
    if (cJSON_IsNull(e_ezsignformfieldgroup_textvalidation)) {
        e_ezsignformfieldgroup_textvalidation = NULL;
    }
    if (e_ezsignformfieldgroup_textvalidation) { 
    e_ezsignformfieldgroup_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsignformfieldgroup_textvalidation); //custom
    }


    ezsignformfieldgroup_request_local_var = ezsignformfieldgroup_request_create_internal (
        pki_ezsignformfieldgroup_id ? pki_ezsignformfieldgroup_id->valuedouble : 0,
        fki_ezsigndocument_id->valuedouble,
        e_ezsignformfieldgroup_type_local_nonprim,
        e_ezsignformfieldgroup_signerrequirement ? e_ezsignformfieldgroup_signerrequirement_local_nonprim : 0,
        strdup(s_ezsignformfieldgroup_label->valuestring),
        i_ezsignformfieldgroup_step->valuedouble,
        s_ezsignformfieldgroup_defaultvalue && !cJSON_IsNull(s_ezsignformfieldgroup_defaultvalue) ? strdup(s_ezsignformfieldgroup_defaultvalue->valuestring) : NULL,
        i_ezsignformfieldgroup_filledmin->valuedouble,
        i_ezsignformfieldgroup_filledmax->valuedouble,
        b_ezsignformfieldgroup_readonly->valueint,
        i_ezsignformfieldgroup_maxlength ? i_ezsignformfieldgroup_maxlength->valuedouble : 0,
        b_ezsignformfieldgroup_encrypted ? b_ezsignformfieldgroup_encrypted->valueint : 0,
        s_ezsignformfieldgroup_regexp && !cJSON_IsNull(s_ezsignformfieldgroup_regexp) ? strdup(s_ezsignformfieldgroup_regexp->valuestring) : NULL,
        s_ezsignformfieldgroup_textvalidationcustommessage && !cJSON_IsNull(s_ezsignformfieldgroup_textvalidationcustommessage) ? strdup(s_ezsignformfieldgroup_textvalidationcustommessage->valuestring) : NULL,
        t_ezsignformfieldgroup_tooltip && !cJSON_IsNull(t_ezsignformfieldgroup_tooltip) ? strdup(t_ezsignformfieldgroup_tooltip->valuestring) : NULL,
        e_ezsignformfieldgroup_tooltipposition ? e_ezsignformfieldgroup_tooltipposition_local_nonprim : 0,
        e_ezsignformfieldgroup_textvalidation ? e_ezsignformfieldgroup_textvalidation_local_nonprim : 0
        );

    return ezsignformfieldgroup_request_local_var;
end:
    if (e_ezsignformfieldgroup_type_local_nonprim) {
        e_ezsignformfieldgroup_type_local_nonprim = 0;
    }
    if (e_ezsignformfieldgroup_signerrequirement_local_nonprim) {
        e_ezsignformfieldgroup_signerrequirement_local_nonprim = 0;
    }
    if (e_ezsignformfieldgroup_tooltipposition_local_nonprim) {
        e_ezsignformfieldgroup_tooltipposition_local_nonprim = 0;
    }
    if (e_ezsignformfieldgroup_textvalidation_local_nonprim) {
        e_ezsignformfieldgroup_textvalidation_local_nonprim = 0;
    }
    return NULL;

}
