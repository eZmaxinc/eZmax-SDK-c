#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_response_compound.h"



static ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_create_internal(
    int *pki_ezsigntemplateformfieldgroup_id,
    int *fki_ezsigntemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__e e_ezsigntemplateformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e e_ezsigntemplateformfieldgroup_signerrequirement,
    char *s_ezsigntemplateformfieldgroup_label,
    int *i_ezsigntemplateformfieldgroup_step,
    char *s_ezsigntemplateformfieldgroup_defaultvalue,
    int *i_ezsigntemplateformfieldgroup_filledmin,
    int *i_ezsigntemplateformfieldgroup_filledmax,
    int *b_ezsigntemplateformfieldgroup_readonly,
    int *i_ezsigntemplateformfieldgroup_maxlength,
    int *b_ezsigntemplateformfieldgroup_encrypted,
    char *s_ezsigntemplateformfieldgroup_regexp,
    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplateformfieldgroup_textvalidation,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
    ) {
    ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_response_compound_t));
    if (!ezsigntemplateformfieldgroup_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplateformfieldgroup_response_compound_local_var, 0, sizeof(ezsigntemplateformfieldgroup_response_compound_t));
    ezsigntemplateformfieldgroup_response_compound_local_var->_library_owned = 1;
    ezsigntemplateformfieldgroup_response_compound_local_var->pki_ezsigntemplateformfieldgroup_id = pki_ezsigntemplateformfieldgroup_id;
    ezsigntemplateformfieldgroup_response_compound_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplateformfieldgroup_response_compound_local_var->e_ezsigntemplateformfieldgroup_type = e_ezsigntemplateformfieldgroup_type;
    ezsigntemplateformfieldgroup_response_compound_local_var->e_ezsigntemplateformfieldgroup_signerrequirement = e_ezsigntemplateformfieldgroup_signerrequirement;
    ezsigntemplateformfieldgroup_response_compound_local_var->s_ezsigntemplateformfieldgroup_label = s_ezsigntemplateformfieldgroup_label;
    ezsigntemplateformfieldgroup_response_compound_local_var->i_ezsigntemplateformfieldgroup_step = i_ezsigntemplateformfieldgroup_step;
    ezsigntemplateformfieldgroup_response_compound_local_var->s_ezsigntemplateformfieldgroup_defaultvalue = s_ezsigntemplateformfieldgroup_defaultvalue;
    ezsigntemplateformfieldgroup_response_compound_local_var->i_ezsigntemplateformfieldgroup_filledmin = i_ezsigntemplateformfieldgroup_filledmin;
    ezsigntemplateformfieldgroup_response_compound_local_var->i_ezsigntemplateformfieldgroup_filledmax = i_ezsigntemplateformfieldgroup_filledmax;
    ezsigntemplateformfieldgroup_response_compound_local_var->b_ezsigntemplateformfieldgroup_readonly = b_ezsigntemplateformfieldgroup_readonly;
    ezsigntemplateformfieldgroup_response_compound_local_var->i_ezsigntemplateformfieldgroup_maxlength = i_ezsigntemplateformfieldgroup_maxlength;
    ezsigntemplateformfieldgroup_response_compound_local_var->b_ezsigntemplateformfieldgroup_encrypted = b_ezsigntemplateformfieldgroup_encrypted;
    ezsigntemplateformfieldgroup_response_compound_local_var->s_ezsigntemplateformfieldgroup_regexp = s_ezsigntemplateformfieldgroup_regexp;
    ezsigntemplateformfieldgroup_response_compound_local_var->s_ezsigntemplateformfieldgroup_textvalidationcustommessage = s_ezsigntemplateformfieldgroup_textvalidationcustommessage;
    ezsigntemplateformfieldgroup_response_compound_local_var->e_ezsigntemplateformfieldgroup_textvalidation = e_ezsigntemplateformfieldgroup_textvalidation;
    ezsigntemplateformfieldgroup_response_compound_local_var->t_ezsigntemplateformfieldgroup_tooltip = t_ezsigntemplateformfieldgroup_tooltip;
    ezsigntemplateformfieldgroup_response_compound_local_var->e_ezsigntemplateformfieldgroup_tooltipposition = e_ezsigntemplateformfieldgroup_tooltipposition;
    ezsigntemplateformfieldgroup_response_compound_local_var->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    ezsigntemplateformfieldgroup_response_compound_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsigntemplateformfieldgroup_response_compound_local_var->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;
    return ezsigntemplateformfieldgroup_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_create(
    int *pki_ezsigntemplateformfieldgroup_id,
    int *fki_ezsigntemplatedocument_id,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__e e_ezsigntemplateformfieldgroup_type,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e e_ezsigntemplateformfieldgroup_signerrequirement,
    char *s_ezsigntemplateformfieldgroup_label,
    int *i_ezsigntemplateformfieldgroup_step,
    char *s_ezsigntemplateformfieldgroup_defaultvalue,
    int *i_ezsigntemplateformfieldgroup_filledmin,
    int *i_ezsigntemplateformfieldgroup_filledmax,
    int *b_ezsigntemplateformfieldgroup_readonly,
    int *i_ezsigntemplateformfieldgroup_maxlength,
    int *b_ezsigntemplateformfieldgroup_encrypted,
    char *s_ezsigntemplateformfieldgroup_regexp,
    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage,
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplateformfieldgroup_textvalidation,
    char *t_ezsigntemplateformfieldgroup_tooltip,
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition,
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
    ) {
    int *pki_ezsigntemplateformfieldgroup_id_copy = NULL;
    if (pki_ezsigntemplateformfieldgroup_id) {
        pki_ezsigntemplateformfieldgroup_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplateformfieldgroup_id_copy) *pki_ezsigntemplateformfieldgroup_id_copy = *pki_ezsigntemplateformfieldgroup_id;
    }
    int *fki_ezsigntemplatedocument_id_copy = NULL;
    if (fki_ezsigntemplatedocument_id) {
        fki_ezsigntemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatedocument_id_copy) *fki_ezsigntemplatedocument_id_copy = *fki_ezsigntemplatedocument_id;
    }
    int *i_ezsigntemplateformfieldgroup_step_copy = NULL;
    if (i_ezsigntemplateformfieldgroup_step) {
        i_ezsigntemplateformfieldgroup_step_copy = malloc(sizeof(int));
        if (i_ezsigntemplateformfieldgroup_step_copy) *i_ezsigntemplateformfieldgroup_step_copy = *i_ezsigntemplateformfieldgroup_step;
    }
    int *i_ezsigntemplateformfieldgroup_filledmin_copy = NULL;
    if (i_ezsigntemplateformfieldgroup_filledmin) {
        i_ezsigntemplateformfieldgroup_filledmin_copy = malloc(sizeof(int));
        if (i_ezsigntemplateformfieldgroup_filledmin_copy) *i_ezsigntemplateformfieldgroup_filledmin_copy = *i_ezsigntemplateformfieldgroup_filledmin;
    }
    int *i_ezsigntemplateformfieldgroup_filledmax_copy = NULL;
    if (i_ezsigntemplateformfieldgroup_filledmax) {
        i_ezsigntemplateformfieldgroup_filledmax_copy = malloc(sizeof(int));
        if (i_ezsigntemplateformfieldgroup_filledmax_copy) *i_ezsigntemplateformfieldgroup_filledmax_copy = *i_ezsigntemplateformfieldgroup_filledmax;
    }
    int *b_ezsigntemplateformfieldgroup_readonly_copy = NULL;
    if (b_ezsigntemplateformfieldgroup_readonly) {
        b_ezsigntemplateformfieldgroup_readonly_copy = malloc(sizeof(int));
        if (b_ezsigntemplateformfieldgroup_readonly_copy) *b_ezsigntemplateformfieldgroup_readonly_copy = *b_ezsigntemplateformfieldgroup_readonly;
    }
    int *i_ezsigntemplateformfieldgroup_maxlength_copy = NULL;
    if (i_ezsigntemplateformfieldgroup_maxlength) {
        i_ezsigntemplateformfieldgroup_maxlength_copy = malloc(sizeof(int));
        if (i_ezsigntemplateformfieldgroup_maxlength_copy) *i_ezsigntemplateformfieldgroup_maxlength_copy = *i_ezsigntemplateformfieldgroup_maxlength;
    }
    int *b_ezsigntemplateformfieldgroup_encrypted_copy = NULL;
    if (b_ezsigntemplateformfieldgroup_encrypted) {
        b_ezsigntemplateformfieldgroup_encrypted_copy = malloc(sizeof(int));
        if (b_ezsigntemplateformfieldgroup_encrypted_copy) *b_ezsigntemplateformfieldgroup_encrypted_copy = *b_ezsigntemplateformfieldgroup_encrypted;
    }
    ezsigntemplateformfieldgroup_response_compound_t *result = ezsigntemplateformfieldgroup_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroup_id_copy,
        fki_ezsigntemplatedocument_id_copy,
        e_ezsigntemplateformfieldgroup_type,
        e_ezsigntemplateformfieldgroup_signerrequirement,
        s_ezsigntemplateformfieldgroup_label,
        i_ezsigntemplateformfieldgroup_step_copy,
        s_ezsigntemplateformfieldgroup_defaultvalue,
        i_ezsigntemplateformfieldgroup_filledmin_copy,
        i_ezsigntemplateformfieldgroup_filledmax_copy,
        b_ezsigntemplateformfieldgroup_readonly_copy,
        i_ezsigntemplateformfieldgroup_maxlength_copy,
        b_ezsigntemplateformfieldgroup_encrypted_copy,
        s_ezsigntemplateformfieldgroup_regexp,
        s_ezsigntemplateformfieldgroup_textvalidationcustommessage,
        e_ezsigntemplateformfieldgroup_textvalidation,
        t_ezsigntemplateformfieldgroup_tooltip,
        e_ezsigntemplateformfieldgroup_tooltipposition,
        a_obj_ezsigntemplateformfieldgroupsigner,
        a_obj_dropdown_element,
        a_obj_ezsigntemplateformfield
        );
    if (!result) {
        free(pki_ezsigntemplateformfieldgroup_id_copy);
        free(fki_ezsigntemplatedocument_id_copy);
        free(i_ezsigntemplateformfieldgroup_step_copy);
        free(i_ezsigntemplateformfieldgroup_filledmin_copy);
        free(i_ezsigntemplateformfieldgroup_filledmax_copy);
        free(b_ezsigntemplateformfieldgroup_readonly_copy);
        free(i_ezsigntemplateformfieldgroup_maxlength_copy);
        free(b_ezsigntemplateformfieldgroup_encrypted_copy);
    }
    return result;
}

void ezsigntemplateformfieldgroup_response_compound_free(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound) {
    if(NULL == ezsigntemplateformfieldgroup_response_compound){
        return ;
    }
    if(ezsigntemplateformfieldgroup_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateformfieldgroup_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id) {
        free(ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id);
        ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id) {
        free(ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id);
        ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label) {
        free(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label);
        ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step) {
        free(ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step);
        ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue) {
        free(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue);
        ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin) {
        free(ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin);
        ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax) {
        free(ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax);
        ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly) {
        free(ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly);
        ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength) {
        free(ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength);
        ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted) {
        free(ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted);
        ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp) {
        free(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp);
        ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) {
        free(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage);
        ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip) {
        free(ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip);
        ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner);
        ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element);
        ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield);
        ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield = NULL;
    }
    free(ezsigntemplateformfieldgroup_response_compound);
}

cJSON *ezsigntemplateformfieldgroup_response_compound_convertToJSON(ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id
    if (!ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldgroupID", *ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id
    if (!ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", *ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_type
    if (ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__NULL == ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_type) {
        goto fail;
    }
    cJSON *e_ezsigntemplateformfieldgroup_type_local_JSON = field_e_ezsigntemplateformfieldgroup_type_convertToJSON(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_type);
    if(e_ezsigntemplateformfieldgroup_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupType", e_ezsigntemplateformfieldgroup_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    if(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_signerrequirement != ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON = field_e_ezsigntemplateformfieldgroup_signerrequirement_convertToJSON(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_signerrequirement);
    if(e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupSignerrequirement", e_ezsigntemplateformfieldgroup_signerrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label
    if (!ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupLabel", ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step
    if (!ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupStep", *ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue
    if(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupDefaultvalue", ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin
    if (!ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmin", *ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax
    if (!ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupFilledmax", *ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly
    if (!ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupReadonly", *ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength
    if(ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength) {
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldgroupMaxlength", *ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted
    if(ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldgroupEncrypted", *ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp
    if(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupRegexp", ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage
    if(ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldgroupTextvalidationcustommessage", ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_textvalidation
    if(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_textvalidation != ezmax_api_definition__full_enum_textvalidation__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_textvalidation_local_JSON = enum_textvalidation_convertToJSON(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_textvalidation);
    if(e_ezsigntemplateformfieldgroup_textvalidation_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTextvalidation", e_ezsigntemplateformfieldgroup_textvalidation_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip
    if(ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip) {
    if(cJSON_AddStringToObject(item, "tEzsigntemplateformfieldgroupTooltip", ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    if(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_tooltipposition != ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__NULL) {
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON = field_e_ezsigntemplateformfieldgroup_tooltipposition_convertToJSON(ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_tooltipposition);
    if(e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldgroupTooltipposition", e_ezsigntemplateformfieldgroup_tooltipposition_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner
    if (!ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroupsigner");
    if(a_obj_ezsigntemplateformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupsignerListEntry;
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupsignerListEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner) {
    cJSON *itemLocal = ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroupsigner, itemLocal);
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element
    if(ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield
    if (!ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfield = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfield");
    if(a_obj_ezsigntemplateformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldListEntry;
    if (ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield) {
    list_ForEach(a_obj_ezsigntemplateformfieldListEntry, ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield) {
    cJSON *itemLocal = ezsigntemplateformfield_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfield, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_response_compoundJSON){

    ezsigntemplateformfieldgroup_response_compound_t *ezsigntemplateformfieldgroup_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id
    int *pki_ezsigntemplateformfieldgroup_id_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id
    int *fki_ezsigntemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_type
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_type__e e_ezsigntemplateformfieldgroup_type_local_nonprim = 0;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_signerrequirement__e e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = 0;

    char *s_ezsigntemplateformfieldgroup_label_local_str = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step
    int *i_ezsigntemplateformfieldgroup_step_local_var = NULL;

    char *s_ezsigntemplateformfieldgroup_defaultvalue_local_str = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin
    int *i_ezsigntemplateformfieldgroup_filledmin_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax
    int *i_ezsigntemplateformfieldgroup_filledmax_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly
    int *b_ezsigntemplateformfieldgroup_readonly_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength
    int *i_ezsigntemplateformfieldgroup_maxlength_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted
    int *b_ezsigntemplateformfieldgroup_encrypted_local_var = NULL;

    char *s_ezsigntemplateformfieldgroup_regexp_local_str = NULL;

    char *s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_textvalidation
    ezmax_api_definition__full_enum_textvalidation__e e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = 0;

    char *t_ezsigntemplateformfieldgroup_tooltip_local_str = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    ezmax_api_definition__full_field_e_ezsigntemplateformfieldgroup_tooltipposition__e e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = 0;

    // define the local list for ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner
    list_t *a_obj_ezsigntemplateformfieldgroupsignerList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield
    list_t *a_obj_ezsigntemplateformfieldList = NULL;

    // ezsigntemplateformfieldgroup_response_compound->pki_ezsigntemplateformfieldgroup_id
    cJSON *pki_ezsigntemplateformfieldgroup_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "pkiEzsigntemplateformfieldgroupID");
    if (cJSON_IsNull(pki_ezsigntemplateformfieldgroup_id)) {
        pki_ezsigntemplateformfieldgroup_id = NULL;
    }
    if (!pki_ezsigntemplateformfieldgroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateformfieldgroup_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplateformfieldgroup_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplateformfieldgroup_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplateformfieldgroup_id_local_var = pki_ezsigntemplateformfieldgroup_id->valuedouble;

    // ezsigntemplateformfieldgroup_response_compound->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "fkiEzsigntemplatedocumentID");
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

    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_type
    cJSON *e_ezsigntemplateformfieldgroup_type = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "eEzsigntemplateformfieldgroupType");
    if (cJSON_IsNull(e_ezsigntemplateformfieldgroup_type)) {
        e_ezsigntemplateformfieldgroup_type = NULL;
    }
    if (!e_ezsigntemplateformfieldgroup_type) {
        goto end;
    }

    
    e_ezsigntemplateformfieldgroup_type_local_nonprim = field_e_ezsigntemplateformfieldgroup_type_parseFromJSON(e_ezsigntemplateformfieldgroup_type); //custom

    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_signerrequirement
    cJSON *e_ezsigntemplateformfieldgroup_signerrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "eEzsigntemplateformfieldgroupSignerrequirement");
    if (cJSON_IsNull(e_ezsigntemplateformfieldgroup_signerrequirement)) {
        e_ezsigntemplateformfieldgroup_signerrequirement = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_signerrequirement) { 
    e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = field_e_ezsigntemplateformfieldgroup_signerrequirement_parseFromJSON(e_ezsigntemplateformfieldgroup_signerrequirement); //custom
    }

    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_label
    cJSON *s_ezsigntemplateformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "sEzsigntemplateformfieldgroupLabel");
    if (cJSON_IsNull(s_ezsigntemplateformfieldgroup_label)) {
        s_ezsigntemplateformfieldgroup_label = NULL;
    }
    if (!s_ezsigntemplateformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_step
    cJSON *i_ezsigntemplateformfieldgroup_step = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "iEzsigntemplateformfieldgroupStep");
    if (cJSON_IsNull(i_ezsigntemplateformfieldgroup_step)) {
        i_ezsigntemplateformfieldgroup_step = NULL;
    }
    if (!i_ezsigntemplateformfieldgroup_step) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_step))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateformfieldgroup_step_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateformfieldgroup_step_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateformfieldgroup_step_local_var = i_ezsigntemplateformfieldgroup_step->valuedouble;

    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_defaultvalue
    cJSON *s_ezsigntemplateformfieldgroup_defaultvalue = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "sEzsigntemplateformfieldgroupDefaultvalue");
    if (cJSON_IsNull(s_ezsigntemplateformfieldgroup_defaultvalue)) {
        s_ezsigntemplateformfieldgroup_defaultvalue = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_defaultvalue) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_defaultvalue) && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_defaultvalue))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmin
    cJSON *i_ezsigntemplateformfieldgroup_filledmin = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "iEzsigntemplateformfieldgroupFilledmin");
    if (cJSON_IsNull(i_ezsigntemplateformfieldgroup_filledmin)) {
        i_ezsigntemplateformfieldgroup_filledmin = NULL;
    }
    if (!i_ezsigntemplateformfieldgroup_filledmin) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmin))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateformfieldgroup_filledmin_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateformfieldgroup_filledmin_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateformfieldgroup_filledmin_local_var = i_ezsigntemplateformfieldgroup_filledmin->valuedouble;

    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_filledmax
    cJSON *i_ezsigntemplateformfieldgroup_filledmax = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "iEzsigntemplateformfieldgroupFilledmax");
    if (cJSON_IsNull(i_ezsigntemplateformfieldgroup_filledmax)) {
        i_ezsigntemplateformfieldgroup_filledmax = NULL;
    }
    if (!i_ezsigntemplateformfieldgroup_filledmax) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_filledmax))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateformfieldgroup_filledmax_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateformfieldgroup_filledmax_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateformfieldgroup_filledmax_local_var = i_ezsigntemplateformfieldgroup_filledmax->valuedouble;

    // ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_readonly
    cJSON *b_ezsigntemplateformfieldgroup_readonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "bEzsigntemplateformfieldgroupReadonly");
    if (cJSON_IsNull(b_ezsigntemplateformfieldgroup_readonly)) {
        b_ezsigntemplateformfieldgroup_readonly = NULL;
    }
    if (!b_ezsigntemplateformfieldgroup_readonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_readonly))
    {
    goto end; //Bool
    }
    b_ezsigntemplateformfieldgroup_readonly_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplateformfieldgroup_readonly_local_var)
    {
        goto end;
    }
    *b_ezsigntemplateformfieldgroup_readonly_local_var = b_ezsigntemplateformfieldgroup_readonly->valueint;

    // ezsigntemplateformfieldgroup_response_compound->i_ezsigntemplateformfieldgroup_maxlength
    cJSON *i_ezsigntemplateformfieldgroup_maxlength = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "iEzsigntemplateformfieldgroupMaxlength");
    if (cJSON_IsNull(i_ezsigntemplateformfieldgroup_maxlength)) {
        i_ezsigntemplateformfieldgroup_maxlength = NULL;
    }
    if (i_ezsigntemplateformfieldgroup_maxlength) { 
    if(!cJSON_IsNumber(i_ezsigntemplateformfieldgroup_maxlength))
    {
    goto end; //Numeric
    }
    i_ezsigntemplateformfieldgroup_maxlength_local_var = malloc(sizeof(int));
    if(!i_ezsigntemplateformfieldgroup_maxlength_local_var)
    {
        goto end;
    }
    *i_ezsigntemplateformfieldgroup_maxlength_local_var = i_ezsigntemplateformfieldgroup_maxlength->valuedouble;
    }

    // ezsigntemplateformfieldgroup_response_compound->b_ezsigntemplateformfieldgroup_encrypted
    cJSON *b_ezsigntemplateformfieldgroup_encrypted = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "bEzsigntemplateformfieldgroupEncrypted");
    if (cJSON_IsNull(b_ezsigntemplateformfieldgroup_encrypted)) {
        b_ezsigntemplateformfieldgroup_encrypted = NULL;
    }
    if (b_ezsigntemplateformfieldgroup_encrypted) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfieldgroup_encrypted))
    {
    goto end; //Bool
    }
    b_ezsigntemplateformfieldgroup_encrypted_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplateformfieldgroup_encrypted_local_var)
    {
        goto end;
    }
    *b_ezsigntemplateformfieldgroup_encrypted_local_var = b_ezsigntemplateformfieldgroup_encrypted->valueint;
    }

    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_regexp
    cJSON *s_ezsigntemplateformfieldgroup_regexp = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "sEzsigntemplateformfieldgroupRegexp");
    if (cJSON_IsNull(s_ezsigntemplateformfieldgroup_regexp)) {
        s_ezsigntemplateformfieldgroup_regexp = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_regexp) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_regexp) && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_regexp))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_response_compound->s_ezsigntemplateformfieldgroup_textvalidationcustommessage
    cJSON *s_ezsigntemplateformfieldgroup_textvalidationcustommessage = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "sEzsigntemplateformfieldgroupTextvalidationcustommessage");
    if (cJSON_IsNull(s_ezsigntemplateformfieldgroup_textvalidationcustommessage)) {
        s_ezsigntemplateformfieldgroup_textvalidationcustommessage = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_textvalidationcustommessage) { 
    if(!cJSON_IsString(s_ezsigntemplateformfieldgroup_textvalidationcustommessage) && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_textvalidationcustommessage))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_textvalidation
    cJSON *e_ezsigntemplateformfieldgroup_textvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "eEzsigntemplateformfieldgroupTextvalidation");
    if (cJSON_IsNull(e_ezsigntemplateformfieldgroup_textvalidation)) {
        e_ezsigntemplateformfieldgroup_textvalidation = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_textvalidation) { 
    e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = enum_textvalidation_parseFromJSON(e_ezsigntemplateformfieldgroup_textvalidation); //custom
    }

    // ezsigntemplateformfieldgroup_response_compound->t_ezsigntemplateformfieldgroup_tooltip
    cJSON *t_ezsigntemplateformfieldgroup_tooltip = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "tEzsigntemplateformfieldgroupTooltip");
    if (cJSON_IsNull(t_ezsigntemplateformfieldgroup_tooltip)) {
        t_ezsigntemplateformfieldgroup_tooltip = NULL;
    }
    if (t_ezsigntemplateformfieldgroup_tooltip) { 
    if(!cJSON_IsString(t_ezsigntemplateformfieldgroup_tooltip) && !cJSON_IsNull(t_ezsigntemplateformfieldgroup_tooltip))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfieldgroup_response_compound->e_ezsigntemplateformfieldgroup_tooltipposition
    cJSON *e_ezsigntemplateformfieldgroup_tooltipposition = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "eEzsigntemplateformfieldgroupTooltipposition");
    if (cJSON_IsNull(e_ezsigntemplateformfieldgroup_tooltipposition)) {
        e_ezsigntemplateformfieldgroup_tooltipposition = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_tooltipposition) { 
    e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = field_e_ezsigntemplateformfieldgroup_tooltipposition_parseFromJSON(e_ezsigntemplateformfieldgroup_tooltipposition); //custom
    }

    // ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfieldgroupsigner
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "a_objEzsigntemplateformfieldgroupsigner");
    if (cJSON_IsNull(a_obj_ezsigntemplateformfieldgroupsigner)) {
        a_obj_ezsigntemplateformfieldgroupsigner = NULL;
    }
    if (!a_obj_ezsigntemplateformfieldgroupsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive,a_obj_ezsigntemplateformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroupsigner_response_compound_t *a_obj_ezsigntemplateformfieldgroupsignerItem = ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupsignerList, a_obj_ezsigntemplateformfieldgroupsignerItem);
    }

    // ezsigntemplateformfieldgroup_response_compound->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "a_objDropdownElement");
    if (cJSON_IsNull(a_obj_dropdown_element)) {
        a_obj_dropdown_element = NULL;
    }
    if (a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_dropdown_element)){
        goto end; //nonprimitive container
    }

    a_obj_dropdown_elementList = list_createList();

    cJSON_ArrayForEach(a_obj_dropdown_element_local_nonprimitive,a_obj_dropdown_element )
    {
        if(!cJSON_IsObject(a_obj_dropdown_element_local_nonprimitive)){
            goto end;
        }
        custom_dropdown_element_response_compound_t *a_obj_dropdown_elementItem = custom_dropdown_element_response_compound_parseFromJSON(a_obj_dropdown_element_local_nonprimitive);

        list_addElement(a_obj_dropdown_elementList, a_obj_dropdown_elementItem);
    }
    }

    // ezsigntemplateformfieldgroup_response_compound->a_obj_ezsigntemplateformfield
    cJSON *a_obj_ezsigntemplateformfield = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compoundJSON, "a_objEzsigntemplateformfield");
    if (cJSON_IsNull(a_obj_ezsigntemplateformfield)) {
        a_obj_ezsigntemplateformfield = NULL;
    }
    if (!a_obj_ezsigntemplateformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfield_local_nonprimitive,a_obj_ezsigntemplateformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfield_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfield_response_compound_t *a_obj_ezsigntemplateformfieldItem = ezsigntemplateformfield_response_compound_parseFromJSON(a_obj_ezsigntemplateformfield_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldList, a_obj_ezsigntemplateformfieldItem);
    }


    if (s_ezsigntemplateformfieldgroup_label && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_label)) s_ezsigntemplateformfieldgroup_label_local_str = strdup(s_ezsigntemplateformfieldgroup_label->valuestring);
    if (s_ezsigntemplateformfieldgroup_defaultvalue && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_defaultvalue)) s_ezsigntemplateformfieldgroup_defaultvalue_local_str = strdup(s_ezsigntemplateformfieldgroup_defaultvalue->valuestring);
    if (s_ezsigntemplateformfieldgroup_regexp && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_regexp)) s_ezsigntemplateformfieldgroup_regexp_local_str = strdup(s_ezsigntemplateformfieldgroup_regexp->valuestring);
    if (s_ezsigntemplateformfieldgroup_textvalidationcustommessage && !cJSON_IsNull(s_ezsigntemplateformfieldgroup_textvalidationcustommessage)) s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str = strdup(s_ezsigntemplateformfieldgroup_textvalidationcustommessage->valuestring);
    if (t_ezsigntemplateformfieldgroup_tooltip && !cJSON_IsNull(t_ezsigntemplateformfieldgroup_tooltip)) t_ezsigntemplateformfieldgroup_tooltip_local_str = strdup(t_ezsigntemplateformfieldgroup_tooltip->valuestring);

    ezsigntemplateformfieldgroup_response_compound_local_var = ezsigntemplateformfieldgroup_response_compound_create_internal (
        pki_ezsigntemplateformfieldgroup_id_local_var,
        fki_ezsigntemplatedocument_id_local_var,
        e_ezsigntemplateformfieldgroup_type_local_nonprim,
        e_ezsigntemplateformfieldgroup_signerrequirement ? e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim : 0,
        s_ezsigntemplateformfieldgroup_label_local_str,
        i_ezsigntemplateformfieldgroup_step_local_var,
        s_ezsigntemplateformfieldgroup_defaultvalue_local_str,
        i_ezsigntemplateformfieldgroup_filledmin_local_var,
        i_ezsigntemplateformfieldgroup_filledmax_local_var,
        b_ezsigntemplateformfieldgroup_readonly_local_var,
        i_ezsigntemplateformfieldgroup_maxlength_local_var,
        b_ezsigntemplateformfieldgroup_encrypted_local_var,
        s_ezsigntemplateformfieldgroup_regexp_local_str,
        s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str,
        e_ezsigntemplateformfieldgroup_textvalidation ? e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim : 0,
        t_ezsigntemplateformfieldgroup_tooltip_local_str,
        e_ezsigntemplateformfieldgroup_tooltipposition ? e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim : 0,
        a_obj_ezsigntemplateformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsigntemplateformfieldList
        );

    if (!ezsigntemplateformfieldgroup_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplateformfieldgroup_response_compound_local_var;
end:
    if (pki_ezsigntemplateformfieldgroup_id_local_var) {
        free(pki_ezsigntemplateformfieldgroup_id_local_var);
        pki_ezsigntemplateformfieldgroup_id_local_var = NULL;
    }
    if (fki_ezsigntemplatedocument_id_local_var) {
        free(fki_ezsigntemplatedocument_id_local_var);
        fki_ezsigntemplatedocument_id_local_var = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_type_local_nonprim) {
        e_ezsigntemplateformfieldgroup_type_local_nonprim = 0;
    }
    if (e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim) {
        e_ezsigntemplateformfieldgroup_signerrequirement_local_nonprim = 0;
    }
    if (s_ezsigntemplateformfieldgroup_label_local_str) {
        free(s_ezsigntemplateformfieldgroup_label_local_str);
        s_ezsigntemplateformfieldgroup_label_local_str = NULL;
    }
    if (i_ezsigntemplateformfieldgroup_step_local_var) {
        free(i_ezsigntemplateformfieldgroup_step_local_var);
        i_ezsigntemplateformfieldgroup_step_local_var = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_defaultvalue_local_str) {
        free(s_ezsigntemplateformfieldgroup_defaultvalue_local_str);
        s_ezsigntemplateformfieldgroup_defaultvalue_local_str = NULL;
    }
    if (i_ezsigntemplateformfieldgroup_filledmin_local_var) {
        free(i_ezsigntemplateformfieldgroup_filledmin_local_var);
        i_ezsigntemplateformfieldgroup_filledmin_local_var = NULL;
    }
    if (i_ezsigntemplateformfieldgroup_filledmax_local_var) {
        free(i_ezsigntemplateformfieldgroup_filledmax_local_var);
        i_ezsigntemplateformfieldgroup_filledmax_local_var = NULL;
    }
    if (b_ezsigntemplateformfieldgroup_readonly_local_var) {
        free(b_ezsigntemplateformfieldgroup_readonly_local_var);
        b_ezsigntemplateformfieldgroup_readonly_local_var = NULL;
    }
    if (i_ezsigntemplateformfieldgroup_maxlength_local_var) {
        free(i_ezsigntemplateformfieldgroup_maxlength_local_var);
        i_ezsigntemplateformfieldgroup_maxlength_local_var = NULL;
    }
    if (b_ezsigntemplateformfieldgroup_encrypted_local_var) {
        free(b_ezsigntemplateformfieldgroup_encrypted_local_var);
        b_ezsigntemplateformfieldgroup_encrypted_local_var = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_regexp_local_str) {
        free(s_ezsigntemplateformfieldgroup_regexp_local_str);
        s_ezsigntemplateformfieldgroup_regexp_local_str = NULL;
    }
    if (s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str) {
        free(s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str);
        s_ezsigntemplateformfieldgroup_textvalidationcustommessage_local_str = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim) {
        e_ezsigntemplateformfieldgroup_textvalidation_local_nonprim = 0;
    }
    if (t_ezsigntemplateformfieldgroup_tooltip_local_str) {
        free(t_ezsigntemplateformfieldgroup_tooltip_local_str);
        t_ezsigntemplateformfieldgroup_tooltip_local_str = NULL;
    }
    if (e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim) {
        e_ezsigntemplateformfieldgroup_tooltipposition_local_nonprim = 0;
    }
    if (a_obj_ezsigntemplateformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupsignerList) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupsignerList);
        a_obj_ezsigntemplateformfieldgroupsignerList = NULL;
    }
    if (a_obj_dropdown_elementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_dropdown_elementList) {
            custom_dropdown_element_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_dropdown_elementList);
        a_obj_dropdown_elementList = NULL;
    }
    if (a_obj_ezsigntemplateformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldList) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldList);
        a_obj_ezsigntemplateformfieldList = NULL;
    }
    return NULL;

}
