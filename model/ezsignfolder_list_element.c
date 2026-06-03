#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_list_element.h"



static ezsignfolder_list_element_t *ezsignfolder_list_element_create_internal(
    int *pki_ezsignfolder_id,
    int *fki_ezsignfoldertype_id,
    int *fki_ezsignbulksend_id,
    char *s_ezsignbulksend_description,
    int *fki_ezsignbulksendtransmission_id,
    char *s_ezsignbulksendtransmission_description,
    int *fki_ezsigntemplatepublic_id,
    char *s_ezsigntemplatepublic_description,
    ezmax_api_definition__full_field_e_ezsignfolder_source__e e_ezsignfolder_source,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    char *dt_created_date,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_duedate,
    int *i_ezsigndocument,
    int *i_ezsigndocument_edm,
    int *i_ezsignsignature,
    int *i_ezsignsignature_signed,
    int *i_ezsignformfieldgroup,
    int *i_ezsignformfieldgroup_completed,
    int *b_ezsignform_hasdependencies,
    char *d_ezsignfolder_completedpercentage,
    char *d_ezsignfolder_formcompletedpercentage,
    char *d_ezsignfolder_signaturecompletedpercentage,
    char *dt_ezsignfolder_close,
    char *dt_ezsignfolder_archive,
    char *dt_ezsignfolder_dispose,
    int *b_ezsignfolder_signer,
    int *b_ezsignfolder_ismyown
    ) {
    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = malloc(sizeof(ezsignfolder_list_element_t));
    if (!ezsignfolder_list_element_local_var) {
        return NULL;
    }
    memset(ezsignfolder_list_element_local_var, 0, sizeof(ezsignfolder_list_element_t));
    ezsignfolder_list_element_local_var->_library_owned = 1;
    ezsignfolder_list_element_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_list_element_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_list_element_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignfolder_list_element_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignfolder_list_element_local_var->fki_ezsignbulksendtransmission_id = fki_ezsignbulksendtransmission_id;
    ezsignfolder_list_element_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignfolder_list_element_local_var->fki_ezsigntemplatepublic_id = fki_ezsigntemplatepublic_id;
    ezsignfolder_list_element_local_var->s_ezsigntemplatepublic_description = s_ezsigntemplatepublic_description;
    ezsignfolder_list_element_local_var->e_ezsignfolder_source = e_ezsignfolder_source;
    ezsignfolder_list_element_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfolder_list_element_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_list_element_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_list_element_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_list_element_local_var->e_ezsignfolder_completion = e_ezsignfolder_completion;
    ezsignfolder_list_element_local_var->dt_created_date = dt_created_date;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    ezsignfolder_list_element_local_var->i_ezsigndocument = i_ezsigndocument;
    ezsignfolder_list_element_local_var->i_ezsigndocument_edm = i_ezsigndocument_edm;
    ezsignfolder_list_element_local_var->i_ezsignsignature = i_ezsignsignature;
    ezsignfolder_list_element_local_var->i_ezsignsignature_signed = i_ezsignsignature_signed;
    ezsignfolder_list_element_local_var->i_ezsignformfieldgroup = i_ezsignformfieldgroup;
    ezsignfolder_list_element_local_var->i_ezsignformfieldgroup_completed = i_ezsignformfieldgroup_completed;
    ezsignfolder_list_element_local_var->b_ezsignform_hasdependencies = b_ezsignform_hasdependencies;
    ezsignfolder_list_element_local_var->d_ezsignfolder_completedpercentage = d_ezsignfolder_completedpercentage;
    ezsignfolder_list_element_local_var->d_ezsignfolder_formcompletedpercentage = d_ezsignfolder_formcompletedpercentage;
    ezsignfolder_list_element_local_var->d_ezsignfolder_signaturecompletedpercentage = d_ezsignfolder_signaturecompletedpercentage;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_archive = dt_ezsignfolder_archive;
    ezsignfolder_list_element_local_var->dt_ezsignfolder_dispose = dt_ezsignfolder_dispose;
    ezsignfolder_list_element_local_var->b_ezsignfolder_signer = b_ezsignfolder_signer;
    ezsignfolder_list_element_local_var->b_ezsignfolder_ismyown = b_ezsignfolder_ismyown;
    return ezsignfolder_list_element_local_var;
}

__attribute__((deprecated)) ezsignfolder_list_element_t *ezsignfolder_list_element_create(
    int *pki_ezsignfolder_id,
    int *fki_ezsignfoldertype_id,
    int *fki_ezsignbulksend_id,
    char *s_ezsignbulksend_description,
    int *fki_ezsignbulksendtransmission_id,
    char *s_ezsignbulksendtransmission_description,
    int *fki_ezsigntemplatepublic_id,
    char *s_ezsigntemplatepublic_description,
    ezmax_api_definition__full_field_e_ezsignfolder_source__e e_ezsignfolder_source,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignfolder_description,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    char *dt_created_date,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_duedate,
    int *i_ezsigndocument,
    int *i_ezsigndocument_edm,
    int *i_ezsignsignature,
    int *i_ezsignsignature_signed,
    int *i_ezsignformfieldgroup,
    int *i_ezsignformfieldgroup_completed,
    int *b_ezsignform_hasdependencies,
    char *d_ezsignfolder_completedpercentage,
    char *d_ezsignfolder_formcompletedpercentage,
    char *d_ezsignfolder_signaturecompletedpercentage,
    char *dt_ezsignfolder_close,
    char *dt_ezsignfolder_archive,
    char *dt_ezsignfolder_dispose,
    int *b_ezsignfolder_signer,
    int *b_ezsignfolder_ismyown
    ) {
    int *pki_ezsignfolder_id_copy = NULL;
    if (pki_ezsignfolder_id) {
        pki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (pki_ezsignfolder_id_copy) *pki_ezsignfolder_id_copy = *pki_ezsignfolder_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_ezsignbulksend_id_copy = NULL;
    if (fki_ezsignbulksend_id) {
        fki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (fki_ezsignbulksend_id_copy) *fki_ezsignbulksend_id_copy = *fki_ezsignbulksend_id;
    }
    int *fki_ezsignbulksendtransmission_id_copy = NULL;
    if (fki_ezsignbulksendtransmission_id) {
        fki_ezsignbulksendtransmission_id_copy = malloc(sizeof(int));
        if (fki_ezsignbulksendtransmission_id_copy) *fki_ezsignbulksendtransmission_id_copy = *fki_ezsignbulksendtransmission_id;
    }
    int *fki_ezsigntemplatepublic_id_copy = NULL;
    if (fki_ezsigntemplatepublic_id) {
        fki_ezsigntemplatepublic_id_copy = malloc(sizeof(int));
        if (fki_ezsigntemplatepublic_id_copy) *fki_ezsigntemplatepublic_id_copy = *fki_ezsigntemplatepublic_id;
    }
    int *i_ezsigndocument_copy = NULL;
    if (i_ezsigndocument) {
        i_ezsigndocument_copy = malloc(sizeof(int));
        if (i_ezsigndocument_copy) *i_ezsigndocument_copy = *i_ezsigndocument;
    }
    int *i_ezsigndocument_edm_copy = NULL;
    if (i_ezsigndocument_edm) {
        i_ezsigndocument_edm_copy = malloc(sizeof(int));
        if (i_ezsigndocument_edm_copy) *i_ezsigndocument_edm_copy = *i_ezsigndocument_edm;
    }
    int *i_ezsignsignature_copy = NULL;
    if (i_ezsignsignature) {
        i_ezsignsignature_copy = malloc(sizeof(int));
        if (i_ezsignsignature_copy) *i_ezsignsignature_copy = *i_ezsignsignature;
    }
    int *i_ezsignsignature_signed_copy = NULL;
    if (i_ezsignsignature_signed) {
        i_ezsignsignature_signed_copy = malloc(sizeof(int));
        if (i_ezsignsignature_signed_copy) *i_ezsignsignature_signed_copy = *i_ezsignsignature_signed;
    }
    int *i_ezsignformfieldgroup_copy = NULL;
    if (i_ezsignformfieldgroup) {
        i_ezsignformfieldgroup_copy = malloc(sizeof(int));
        if (i_ezsignformfieldgroup_copy) *i_ezsignformfieldgroup_copy = *i_ezsignformfieldgroup;
    }
    int *i_ezsignformfieldgroup_completed_copy = NULL;
    if (i_ezsignformfieldgroup_completed) {
        i_ezsignformfieldgroup_completed_copy = malloc(sizeof(int));
        if (i_ezsignformfieldgroup_completed_copy) *i_ezsignformfieldgroup_completed_copy = *i_ezsignformfieldgroup_completed;
    }
    int *b_ezsignform_hasdependencies_copy = NULL;
    if (b_ezsignform_hasdependencies) {
        b_ezsignform_hasdependencies_copy = malloc(sizeof(int));
        if (b_ezsignform_hasdependencies_copy) *b_ezsignform_hasdependencies_copy = *b_ezsignform_hasdependencies;
    }
    int *b_ezsignfolder_signer_copy = NULL;
    if (b_ezsignfolder_signer) {
        b_ezsignfolder_signer_copy = malloc(sizeof(int));
        if (b_ezsignfolder_signer_copy) *b_ezsignfolder_signer_copy = *b_ezsignfolder_signer;
    }
    int *b_ezsignfolder_ismyown_copy = NULL;
    if (b_ezsignfolder_ismyown) {
        b_ezsignfolder_ismyown_copy = malloc(sizeof(int));
        if (b_ezsignfolder_ismyown_copy) *b_ezsignfolder_ismyown_copy = *b_ezsignfolder_ismyown;
    }
    ezsignfolder_list_element_t *result = ezsignfolder_list_element_create_internal (
        pki_ezsignfolder_id_copy,
        fki_ezsignfoldertype_id_copy,
        fki_ezsignbulksend_id_copy,
        s_ezsignbulksend_description,
        fki_ezsignbulksendtransmission_id_copy,
        s_ezsignbulksendtransmission_description,
        fki_ezsigntemplatepublic_id_copy,
        s_ezsigntemplatepublic_description,
        e_ezsignfolder_source,
        e_ezsignfoldertype_privacylevel,
        s_ezsignfoldertype_name_x,
        s_ezsignfolder_description,
        e_ezsignfolder_step,
        e_ezsignfolder_completion,
        dt_created_date,
        dt_ezsignfolder_delayedsenddate,
        dt_ezsignfolder_sentdate,
        dt_ezsignfolder_duedate,
        i_ezsigndocument_copy,
        i_ezsigndocument_edm_copy,
        i_ezsignsignature_copy,
        i_ezsignsignature_signed_copy,
        i_ezsignformfieldgroup_copy,
        i_ezsignformfieldgroup_completed_copy,
        b_ezsignform_hasdependencies_copy,
        d_ezsignfolder_completedpercentage,
        d_ezsignfolder_formcompletedpercentage,
        d_ezsignfolder_signaturecompletedpercentage,
        dt_ezsignfolder_close,
        dt_ezsignfolder_archive,
        dt_ezsignfolder_dispose,
        b_ezsignfolder_signer_copy,
        b_ezsignfolder_ismyown_copy
        );
    if (!result) {
        free(pki_ezsignfolder_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_ezsignbulksend_id_copy);
        free(fki_ezsignbulksendtransmission_id_copy);
        free(fki_ezsigntemplatepublic_id_copy);
        free(i_ezsigndocument_copy);
        free(i_ezsigndocument_edm_copy);
        free(i_ezsignsignature_copy);
        free(i_ezsignsignature_signed_copy);
        free(i_ezsignformfieldgroup_copy);
        free(i_ezsignformfieldgroup_completed_copy);
        free(b_ezsignform_hasdependencies_copy);
        free(b_ezsignfolder_signer_copy);
        free(b_ezsignfolder_ismyown_copy);
    }
    return result;
}

void ezsignfolder_list_element_free(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    if(NULL == ezsignfolder_list_element){
        return ;
    }
    if(ezsignfolder_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_list_element->pki_ezsignfolder_id) {
        free(ezsignfolder_list_element->pki_ezsignfolder_id);
        ezsignfolder_list_element->pki_ezsignfolder_id = NULL;
    }
    if (ezsignfolder_list_element->fki_ezsignfoldertype_id) {
        free(ezsignfolder_list_element->fki_ezsignfoldertype_id);
        ezsignfolder_list_element->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsignfolder_list_element->fki_ezsignbulksend_id) {
        free(ezsignfolder_list_element->fki_ezsignbulksend_id);
        ezsignfolder_list_element->fki_ezsignbulksend_id = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignbulksend_description) {
        free(ezsignfolder_list_element->s_ezsignbulksend_description);
        ezsignfolder_list_element->s_ezsignbulksend_description = NULL;
    }
    if (ezsignfolder_list_element->fki_ezsignbulksendtransmission_id) {
        free(ezsignfolder_list_element->fki_ezsignbulksendtransmission_id);
        ezsignfolder_list_element->fki_ezsignbulksendtransmission_id = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignbulksendtransmission_description) {
        free(ezsignfolder_list_element->s_ezsignbulksendtransmission_description);
        ezsignfolder_list_element->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignfolder_list_element->fki_ezsigntemplatepublic_id) {
        free(ezsignfolder_list_element->fki_ezsigntemplatepublic_id);
        ezsignfolder_list_element->fki_ezsigntemplatepublic_id = NULL;
    }
    if (ezsignfolder_list_element->s_ezsigntemplatepublic_description) {
        free(ezsignfolder_list_element->s_ezsigntemplatepublic_description);
        ezsignfolder_list_element->s_ezsigntemplatepublic_description = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_list_element->s_ezsignfoldertype_name_x);
        ezsignfolder_list_element->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_list_element->s_ezsignfolder_description) {
        free(ezsignfolder_list_element->s_ezsignfolder_description);
        ezsignfolder_list_element->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_list_element->dt_created_date) {
        free(ezsignfolder_list_element->dt_created_date);
        ezsignfolder_list_element->dt_created_date = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate);
        ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_sentdate);
        ezsignfolder_list_element->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_duedate) {
        free(ezsignfolder_list_element->dt_ezsignfolder_duedate);
        ezsignfolder_list_element->dt_ezsignfolder_duedate = NULL;
    }
    if (ezsignfolder_list_element->i_ezsigndocument) {
        free(ezsignfolder_list_element->i_ezsigndocument);
        ezsignfolder_list_element->i_ezsigndocument = NULL;
    }
    if (ezsignfolder_list_element->i_ezsigndocument_edm) {
        free(ezsignfolder_list_element->i_ezsigndocument_edm);
        ezsignfolder_list_element->i_ezsigndocument_edm = NULL;
    }
    if (ezsignfolder_list_element->i_ezsignsignature) {
        free(ezsignfolder_list_element->i_ezsignsignature);
        ezsignfolder_list_element->i_ezsignsignature = NULL;
    }
    if (ezsignfolder_list_element->i_ezsignsignature_signed) {
        free(ezsignfolder_list_element->i_ezsignsignature_signed);
        ezsignfolder_list_element->i_ezsignsignature_signed = NULL;
    }
    if (ezsignfolder_list_element->i_ezsignformfieldgroup) {
        free(ezsignfolder_list_element->i_ezsignformfieldgroup);
        ezsignfolder_list_element->i_ezsignformfieldgroup = NULL;
    }
    if (ezsignfolder_list_element->i_ezsignformfieldgroup_completed) {
        free(ezsignfolder_list_element->i_ezsignformfieldgroup_completed);
        ezsignfolder_list_element->i_ezsignformfieldgroup_completed = NULL;
    }
    if (ezsignfolder_list_element->b_ezsignform_hasdependencies) {
        free(ezsignfolder_list_element->b_ezsignform_hasdependencies);
        ezsignfolder_list_element->b_ezsignform_hasdependencies = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_completedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_completedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_completedpercentage = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage = NULL;
    }
    if (ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) {
        free(ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage);
        ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_close) {
        free(ezsignfolder_list_element->dt_ezsignfolder_close);
        ezsignfolder_list_element->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_archive) {
        free(ezsignfolder_list_element->dt_ezsignfolder_archive);
        ezsignfolder_list_element->dt_ezsignfolder_archive = NULL;
    }
    if (ezsignfolder_list_element->dt_ezsignfolder_dispose) {
        free(ezsignfolder_list_element->dt_ezsignfolder_dispose);
        ezsignfolder_list_element->dt_ezsignfolder_dispose = NULL;
    }
    if (ezsignfolder_list_element->b_ezsignfolder_signer) {
        free(ezsignfolder_list_element->b_ezsignfolder_signer);
        ezsignfolder_list_element->b_ezsignfolder_signer = NULL;
    }
    if (ezsignfolder_list_element->b_ezsignfolder_ismyown) {
        free(ezsignfolder_list_element->b_ezsignfolder_ismyown);
        ezsignfolder_list_element->b_ezsignfolder_ismyown = NULL;
    }
    free(ezsignfolder_list_element);
}

cJSON *ezsignfolder_list_element_convertToJSON(ezsignfolder_list_element_t *ezsignfolder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_list_element->pki_ezsignfolder_id
    if (!ezsignfolder_list_element->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", *ezsignfolder_list_element->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    if (!ezsignfolder_list_element->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsignfolder_list_element->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->fki_ezsignbulksend_id
    if(ezsignfolder_list_element->fki_ezsignbulksend_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", *ezsignfolder_list_element->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_list_element->s_ezsignbulksend_description
    if(ezsignfolder_list_element->s_ezsignbulksend_description) {
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignfolder_list_element->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->fki_ezsignbulksendtransmission_id
    if(ezsignfolder_list_element->fki_ezsignbulksendtransmission_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendtransmissionID", *ezsignfolder_list_element->fki_ezsignbulksendtransmission_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_list_element->s_ezsignbulksendtransmission_description
    if(ezsignfolder_list_element->s_ezsignbulksendtransmission_description) {
    if(cJSON_AddStringToObject(item, "sEzsignbulksendtransmissionDescription", ezsignfolder_list_element->s_ezsignbulksendtransmission_description) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->fki_ezsigntemplatepublic_id
    if(ezsignfolder_list_element->fki_ezsigntemplatepublic_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatepublicID", *ezsignfolder_list_element->fki_ezsigntemplatepublic_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_list_element->s_ezsigntemplatepublic_description
    if(ezsignfolder_list_element->s_ezsigntemplatepublic_description) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicDescription", ezsignfolder_list_element->s_ezsigntemplatepublic_description) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->e_ezsignfolder_source
    if (ezmax_api_definition__full_field_e_ezsignfolder_source__NULL == ezsignfolder_list_element->e_ezsignfolder_source) {
        goto fail;
    }
    cJSON *e_ezsignfolder_source_local_JSON = field_e_ezsignfolder_source_convertToJSON(ezsignfolder_list_element->e_ezsignfolder_source);
    if(e_ezsignfolder_source_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSource", e_ezsignfolder_source_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfolder_list_element->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfolder_list_element->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    if (!ezsignfolder_list_element->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_list_element->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->s_ezsignfolder_description
    if (!ezsignfolder_list_element->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_list_element->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->e_ezsignfolder_step
    if (ezmax_api_definition__full_field_e_ezsignfolder_step__NULL == ezsignfolder_list_element->e_ezsignfolder_step) {
        goto fail;
    }
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_list_element->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->e_ezsignfolder_completion
    if (ezmax_api_definition__full_field_e_ezsignfolder_completion__NULL == ezsignfolder_list_element->e_ezsignfolder_completion) {
        goto fail;
    }
    cJSON *e_ezsignfolder_completion_local_JSON = field_e_ezsignfolder_completion_convertToJSON(ezsignfolder_list_element->e_ezsignfolder_completion);
    if(e_ezsignfolder_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderCompletion", e_ezsignfolder_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_list_element->dt_created_date
    if (!ezsignfolder_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", ezsignfolder_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate
    if(ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDelayedsenddate", ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    if(ezsignfolder_list_element->dt_ezsignfolder_sentdate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_list_element->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_duedate
    if(ezsignfolder_list_element->dt_ezsignfolder_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDuedate", ezsignfolder_list_element->dt_ezsignfolder_duedate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->i_ezsigndocument
    if (!ezsignfolder_list_element->i_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocument", *ezsignfolder_list_element->i_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsigndocument_edm
    if (!ezsignfolder_list_element->i_ezsigndocument_edm) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEdm", *ezsignfolder_list_element->i_ezsigndocument_edm) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignsignature
    if (!ezsignfolder_list_element->i_ezsignsignature) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignature", *ezsignfolder_list_element->i_ezsignsignature) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignsignature_signed
    if (!ezsignfolder_list_element->i_ezsignsignature_signed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignsignatureSigned", *ezsignfolder_list_element->i_ezsignsignature_signed) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignformfieldgroup
    if (!ezsignfolder_list_element->i_ezsignformfieldgroup) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroup", *ezsignfolder_list_element->i_ezsignformfieldgroup) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    if (!ezsignfolder_list_element->i_ezsignformfieldgroup_completed) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldgroupCompleted", *ezsignfolder_list_element->i_ezsignformfieldgroup_completed) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_list_element->b_ezsignform_hasdependencies
    if(ezsignfolder_list_element->b_ezsignform_hasdependencies) {
    if(cJSON_AddBoolToObject(item, "bEzsignformHasdependencies", *ezsignfolder_list_element->b_ezsignform_hasdependencies) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfolder_list_element->d_ezsignfolder_completedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_completedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderCompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_completedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderFormcompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage
    if (!ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignfolderSignaturecompletedpercentage", ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_list_element->dt_ezsignfolder_close
    if(ezsignfolder_list_element->dt_ezsignfolder_close) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_list_element->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_archive
    if(ezsignfolder_list_element->dt_ezsignfolder_archive) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderArchive", ezsignfolder_list_element->dt_ezsignfolder_archive) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->dt_ezsignfolder_dispose
    if(ezsignfolder_list_element->dt_ezsignfolder_dispose) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDispose", ezsignfolder_list_element->dt_ezsignfolder_dispose) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_list_element->b_ezsignfolder_signer
    if(ezsignfolder_list_element->b_ezsignfolder_signer) {
    if(cJSON_AddBoolToObject(item, "bEzsignfolderSigner", *ezsignfolder_list_element->b_ezsignfolder_signer) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfolder_list_element->b_ezsignfolder_ismyown
    if(ezsignfolder_list_element->b_ezsignfolder_ismyown) {
    if(cJSON_AddBoolToObject(item, "bEzsignfolderIsmyown", *ezsignfolder_list_element->b_ezsignfolder_ismyown) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_list_element_t *ezsignfolder_list_element_parseFromJSON(cJSON *ezsignfolder_list_elementJSON){

    ezsignfolder_list_element_t *ezsignfolder_list_element_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->pki_ezsignfolder_id
    int *pki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->fki_ezsignbulksend_id
    int *fki_ezsignbulksend_id_local_var = NULL;

    char *s_ezsignbulksend_description_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->fki_ezsignbulksendtransmission_id
    int *fki_ezsignbulksendtransmission_id_local_var = NULL;

    char *s_ezsignbulksendtransmission_description_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->fki_ezsigntemplatepublic_id
    int *fki_ezsigntemplatepublic_id_local_var = NULL;

    char *s_ezsigntemplatepublic_description_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->e_ezsignfolder_source
    ezmax_api_definition__full_field_e_ezsignfolder_source__e e_ezsignfolder_source_local_nonprim = 0;

    // define the local variable for ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    char *s_ezsignfolder_description_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->e_ezsignfolder_step
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step_local_nonprim = 0;

    // define the local variable for ezsignfolder_list_element->e_ezsignfolder_completion
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion_local_nonprim = 0;

    char *dt_created_date_local_str = NULL;

    char *dt_ezsignfolder_delayedsenddate_local_str = NULL;

    char *dt_ezsignfolder_sentdate_local_str = NULL;

    char *dt_ezsignfolder_duedate_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsigndocument
    int *i_ezsigndocument_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsigndocument_edm
    int *i_ezsigndocument_edm_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsignsignature
    int *i_ezsignsignature_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsignsignature_signed
    int *i_ezsignsignature_signed_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsignformfieldgroup
    int *i_ezsignformfieldgroup_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    int *i_ezsignformfieldgroup_completed_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->b_ezsignform_hasdependencies
    int *b_ezsignform_hasdependencies_local_var = NULL;

    char *d_ezsignfolder_completedpercentage_local_str = NULL;

    char *d_ezsignfolder_formcompletedpercentage_local_str = NULL;

    char *d_ezsignfolder_signaturecompletedpercentage_local_str = NULL;

    char *dt_ezsignfolder_close_local_str = NULL;

    char *dt_ezsignfolder_archive_local_str = NULL;

    char *dt_ezsignfolder_dispose_local_str = NULL;

    // define the local variable for ezsignfolder_list_element->b_ezsignfolder_signer
    int *b_ezsignfolder_signer_local_var = NULL;

    // define the local variable for ezsignfolder_list_element->b_ezsignfolder_ismyown
    int *b_ezsignfolder_ismyown_local_var = NULL;

    // ezsignfolder_list_element->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "pkiEzsignfolderID");
    if (cJSON_IsNull(pki_ezsignfolder_id)) {
        pki_ezsignfolder_id = NULL;
    }
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfolder_id_local_var = pki_ezsignfolder_id->valuedouble;

    // ezsignfolder_list_element->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;

    // ezsignfolder_list_element->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignbulksendID");
    if (cJSON_IsNull(fki_ezsignbulksend_id)) {
        fki_ezsignbulksend_id = NULL;
    }
    if (fki_ezsignbulksend_id) { 
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    fki_ezsignbulksend_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignbulksend_id_local_var)
    {
        goto end;
    }
    *fki_ezsignbulksend_id_local_var = fki_ezsignbulksend_id->valuedouble;
    }

    // ezsignfolder_list_element->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignbulksendDescription");
    if (cJSON_IsNull(s_ezsignbulksend_description)) {
        s_ezsignbulksend_description = NULL;
    }
    if (s_ezsignbulksend_description) { 
    if(!cJSON_IsString(s_ezsignbulksend_description) && !cJSON_IsNull(s_ezsignbulksend_description))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->fki_ezsignbulksendtransmission_id
    cJSON *fki_ezsignbulksendtransmission_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsignbulksendtransmissionID");
    if (cJSON_IsNull(fki_ezsignbulksendtransmission_id)) {
        fki_ezsignbulksendtransmission_id = NULL;
    }
    if (fki_ezsignbulksendtransmission_id) { 
    if(!cJSON_IsNumber(fki_ezsignbulksendtransmission_id))
    {
    goto end; //Numeric
    }
    fki_ezsignbulksendtransmission_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignbulksendtransmission_id_local_var)
    {
        goto end;
    }
    *fki_ezsignbulksendtransmission_id_local_var = fki_ezsignbulksendtransmission_id->valuedouble;
    }

    // ezsignfolder_list_element->s_ezsignbulksendtransmission_description
    cJSON *s_ezsignbulksendtransmission_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignbulksendtransmissionDescription");
    if (cJSON_IsNull(s_ezsignbulksendtransmission_description)) {
        s_ezsignbulksendtransmission_description = NULL;
    }
    if (s_ezsignbulksendtransmission_description) { 
    if(!cJSON_IsString(s_ezsignbulksendtransmission_description) && !cJSON_IsNull(s_ezsignbulksendtransmission_description))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->fki_ezsigntemplatepublic_id
    cJSON *fki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "fkiEzsigntemplatepublicID");
    if (cJSON_IsNull(fki_ezsigntemplatepublic_id)) {
        fki_ezsigntemplatepublic_id = NULL;
    }
    if (fki_ezsigntemplatepublic_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatepublic_id))
    {
    goto end; //Numeric
    }
    fki_ezsigntemplatepublic_id_local_var = malloc(sizeof(int));
    if(!fki_ezsigntemplatepublic_id_local_var)
    {
        goto end;
    }
    *fki_ezsigntemplatepublic_id_local_var = fki_ezsigntemplatepublic_id->valuedouble;
    }

    // ezsignfolder_list_element->s_ezsigntemplatepublic_description
    cJSON *s_ezsigntemplatepublic_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsigntemplatepublicDescription");
    if (cJSON_IsNull(s_ezsigntemplatepublic_description)) {
        s_ezsigntemplatepublic_description = NULL;
    }
    if (s_ezsigntemplatepublic_description) { 
    if(!cJSON_IsString(s_ezsigntemplatepublic_description) && !cJSON_IsNull(s_ezsigntemplatepublic_description))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->e_ezsignfolder_source
    cJSON *e_ezsignfolder_source = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderSource");
    if (cJSON_IsNull(e_ezsignfolder_source)) {
        e_ezsignfolder_source = NULL;
    }
    if (!e_ezsignfolder_source) {
        goto end;
    }

    
    e_ezsignfolder_source_local_nonprim = field_e_ezsignfolder_source_parseFromJSON(e_ezsignfolder_source); //custom

    // ezsignfolder_list_element->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfolder_list_element->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "sEzsignfolderDescription");
    if (cJSON_IsNull(s_ezsignfolder_description)) {
        s_ezsignfolder_description = NULL;
    }
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderStep");
    if (cJSON_IsNull(e_ezsignfolder_step)) {
        e_ezsignfolder_step = NULL;
    }
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // ezsignfolder_list_element->e_ezsignfolder_completion
    cJSON *e_ezsignfolder_completion = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "eEzsignfolderCompletion");
    if (cJSON_IsNull(e_ezsignfolder_completion)) {
        e_ezsignfolder_completion = NULL;
    }
    if (!e_ezsignfolder_completion) {
        goto end;
    }

    
    e_ezsignfolder_completion_local_nonprim = field_e_ezsignfolder_completion_parseFromJSON(e_ezsignfolder_completion); //custom

    // ezsignfolder_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDelayedsenddate");
    if (cJSON_IsNull(dt_ezsignfolder_delayedsenddate)) {
        dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderSentdate");
    if (cJSON_IsNull(dt_ezsignfolder_sentdate)) {
        dt_ezsignfolder_sentdate = NULL;
    }
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate) && !cJSON_IsNull(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDuedate");
    if (cJSON_IsNull(dt_ezsignfolder_duedate)) {
        dt_ezsignfolder_duedate = NULL;
    }
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate) && !cJSON_IsNull(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->i_ezsigndocument
    cJSON *i_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocument");
    if (cJSON_IsNull(i_ezsigndocument)) {
        i_ezsigndocument = NULL;
    }
    if (!i_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_local_var = i_ezsigndocument->valuedouble;

    // ezsignfolder_list_element->i_ezsigndocument_edm
    cJSON *i_ezsigndocument_edm = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsigndocumentEdm");
    if (cJSON_IsNull(i_ezsigndocument_edm)) {
        i_ezsigndocument_edm = NULL;
    }
    if (!i_ezsigndocument_edm) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_edm))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_edm_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_edm_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_edm_local_var = i_ezsigndocument_edm->valuedouble;

    // ezsignfolder_list_element->i_ezsignsignature
    cJSON *i_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignature");
    if (cJSON_IsNull(i_ezsignsignature)) {
        i_ezsignsignature = NULL;
    }
    if (!i_ezsignsignature) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_local_var = i_ezsignsignature->valuedouble;

    // ezsignfolder_list_element->i_ezsignsignature_signed
    cJSON *i_ezsignsignature_signed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignsignatureSigned");
    if (cJSON_IsNull(i_ezsignsignature_signed)) {
        i_ezsignsignature_signed = NULL;
    }
    if (!i_ezsignsignature_signed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignsignature_signed))
    {
    goto end; //Numeric
    }
    i_ezsignsignature_signed_local_var = malloc(sizeof(int));
    if(!i_ezsignsignature_signed_local_var)
    {
        goto end;
    }
    *i_ezsignsignature_signed_local_var = i_ezsignsignature_signed->valuedouble;

    // ezsignfolder_list_element->i_ezsignformfieldgroup
    cJSON *i_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroup");
    if (cJSON_IsNull(i_ezsignformfieldgroup)) {
        i_ezsignformfieldgroup = NULL;
    }
    if (!i_ezsignformfieldgroup) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup))
    {
    goto end; //Numeric
    }
    i_ezsignformfieldgroup_local_var = malloc(sizeof(int));
    if(!i_ezsignformfieldgroup_local_var)
    {
        goto end;
    }
    *i_ezsignformfieldgroup_local_var = i_ezsignformfieldgroup->valuedouble;

    // ezsignfolder_list_element->i_ezsignformfieldgroup_completed
    cJSON *i_ezsignformfieldgroup_completed = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "iEzsignformfieldgroupCompleted");
    if (cJSON_IsNull(i_ezsignformfieldgroup_completed)) {
        i_ezsignformfieldgroup_completed = NULL;
    }
    if (!i_ezsignformfieldgroup_completed) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfieldgroup_completed))
    {
    goto end; //Numeric
    }
    i_ezsignformfieldgroup_completed_local_var = malloc(sizeof(int));
    if(!i_ezsignformfieldgroup_completed_local_var)
    {
        goto end;
    }
    *i_ezsignformfieldgroup_completed_local_var = i_ezsignformfieldgroup_completed->valuedouble;

    // ezsignfolder_list_element->b_ezsignform_hasdependencies
    cJSON *b_ezsignform_hasdependencies = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignformHasdependencies");
    if (cJSON_IsNull(b_ezsignform_hasdependencies)) {
        b_ezsignform_hasdependencies = NULL;
    }
    if (b_ezsignform_hasdependencies) { 
    if(!cJSON_IsBool(b_ezsignform_hasdependencies))
    {
    goto end; //Bool
    }
    b_ezsignform_hasdependencies_local_var = malloc(sizeof(int));
    if(!b_ezsignform_hasdependencies_local_var)
    {
        goto end;
    }
    *b_ezsignform_hasdependencies_local_var = b_ezsignform_hasdependencies->valueint;
    }

    // ezsignfolder_list_element->d_ezsignfolder_completedpercentage
    cJSON *d_ezsignfolder_completedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderCompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_completedpercentage)) {
        d_ezsignfolder_completedpercentage = NULL;
    }
    if (!d_ezsignfolder_completedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_completedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_formcompletedpercentage
    cJSON *d_ezsignfolder_formcompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderFormcompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_formcompletedpercentage)) {
        d_ezsignfolder_formcompletedpercentage = NULL;
    }
    if (!d_ezsignfolder_formcompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_formcompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->d_ezsignfolder_signaturecompletedpercentage
    cJSON *d_ezsignfolder_signaturecompletedpercentage = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dEzsignfolderSignaturecompletedpercentage");
    if (cJSON_IsNull(d_ezsignfolder_signaturecompletedpercentage)) {
        d_ezsignfolder_signaturecompletedpercentage = NULL;
    }
    if (!d_ezsignfolder_signaturecompletedpercentage) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignfolder_signaturecompletedpercentage))
    {
    goto end; //String
    }

    // ezsignfolder_list_element->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderClose");
    if (cJSON_IsNull(dt_ezsignfolder_close)) {
        dt_ezsignfolder_close = NULL;
    }
    if (dt_ezsignfolder_close) { 
    if(!cJSON_IsString(dt_ezsignfolder_close) && !cJSON_IsNull(dt_ezsignfolder_close))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_archive
    cJSON *dt_ezsignfolder_archive = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderArchive");
    if (cJSON_IsNull(dt_ezsignfolder_archive)) {
        dt_ezsignfolder_archive = NULL;
    }
    if (dt_ezsignfolder_archive) { 
    if(!cJSON_IsString(dt_ezsignfolder_archive) && !cJSON_IsNull(dt_ezsignfolder_archive))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->dt_ezsignfolder_dispose
    cJSON *dt_ezsignfolder_dispose = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "dtEzsignfolderDispose");
    if (cJSON_IsNull(dt_ezsignfolder_dispose)) {
        dt_ezsignfolder_dispose = NULL;
    }
    if (dt_ezsignfolder_dispose) { 
    if(!cJSON_IsString(dt_ezsignfolder_dispose) && !cJSON_IsNull(dt_ezsignfolder_dispose))
    {
    goto end; //String
    }
    }

    // ezsignfolder_list_element->b_ezsignfolder_signer
    cJSON *b_ezsignfolder_signer = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignfolderSigner");
    if (cJSON_IsNull(b_ezsignfolder_signer)) {
        b_ezsignfolder_signer = NULL;
    }
    if (b_ezsignfolder_signer) { 
    if(!cJSON_IsBool(b_ezsignfolder_signer))
    {
    goto end; //Bool
    }
    b_ezsignfolder_signer_local_var = malloc(sizeof(int));
    if(!b_ezsignfolder_signer_local_var)
    {
        goto end;
    }
    *b_ezsignfolder_signer_local_var = b_ezsignfolder_signer->valueint;
    }

    // ezsignfolder_list_element->b_ezsignfolder_ismyown
    cJSON *b_ezsignfolder_ismyown = cJSON_GetObjectItemCaseSensitive(ezsignfolder_list_elementJSON, "bEzsignfolderIsmyown");
    if (cJSON_IsNull(b_ezsignfolder_ismyown)) {
        b_ezsignfolder_ismyown = NULL;
    }
    if (b_ezsignfolder_ismyown) { 
    if(!cJSON_IsBool(b_ezsignfolder_ismyown))
    {
    goto end; //Bool
    }
    b_ezsignfolder_ismyown_local_var = malloc(sizeof(int));
    if(!b_ezsignfolder_ismyown_local_var)
    {
        goto end;
    }
    *b_ezsignfolder_ismyown_local_var = b_ezsignfolder_ismyown->valueint;
    }


    if (s_ezsignbulksend_description && !cJSON_IsNull(s_ezsignbulksend_description)) s_ezsignbulksend_description_local_str = strdup(s_ezsignbulksend_description->valuestring);
    if (s_ezsignbulksendtransmission_description && !cJSON_IsNull(s_ezsignbulksendtransmission_description)) s_ezsignbulksendtransmission_description_local_str = strdup(s_ezsignbulksendtransmission_description->valuestring);
    if (s_ezsigntemplatepublic_description && !cJSON_IsNull(s_ezsigntemplatepublic_description)) s_ezsigntemplatepublic_description_local_str = strdup(s_ezsigntemplatepublic_description->valuestring);
    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);
    if (s_ezsignfolder_description && !cJSON_IsNull(s_ezsignfolder_description)) s_ezsignfolder_description_local_str = strdup(s_ezsignfolder_description->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (dt_ezsignfolder_delayedsenddate && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate)) dt_ezsignfolder_delayedsenddate_local_str = strdup(dt_ezsignfolder_delayedsenddate->valuestring);
    if (dt_ezsignfolder_sentdate && !cJSON_IsNull(dt_ezsignfolder_sentdate)) dt_ezsignfolder_sentdate_local_str = strdup(dt_ezsignfolder_sentdate->valuestring);
    if (dt_ezsignfolder_duedate && !cJSON_IsNull(dt_ezsignfolder_duedate)) dt_ezsignfolder_duedate_local_str = strdup(dt_ezsignfolder_duedate->valuestring);
    if (d_ezsignfolder_completedpercentage && !cJSON_IsNull(d_ezsignfolder_completedpercentage)) d_ezsignfolder_completedpercentage_local_str = strdup(d_ezsignfolder_completedpercentage->valuestring);
    if (d_ezsignfolder_formcompletedpercentage && !cJSON_IsNull(d_ezsignfolder_formcompletedpercentage)) d_ezsignfolder_formcompletedpercentage_local_str = strdup(d_ezsignfolder_formcompletedpercentage->valuestring);
    if (d_ezsignfolder_signaturecompletedpercentage && !cJSON_IsNull(d_ezsignfolder_signaturecompletedpercentage)) d_ezsignfolder_signaturecompletedpercentage_local_str = strdup(d_ezsignfolder_signaturecompletedpercentage->valuestring);
    if (dt_ezsignfolder_close && !cJSON_IsNull(dt_ezsignfolder_close)) dt_ezsignfolder_close_local_str = strdup(dt_ezsignfolder_close->valuestring);
    if (dt_ezsignfolder_archive && !cJSON_IsNull(dt_ezsignfolder_archive)) dt_ezsignfolder_archive_local_str = strdup(dt_ezsignfolder_archive->valuestring);
    if (dt_ezsignfolder_dispose && !cJSON_IsNull(dt_ezsignfolder_dispose)) dt_ezsignfolder_dispose_local_str = strdup(dt_ezsignfolder_dispose->valuestring);

    ezsignfolder_list_element_local_var = ezsignfolder_list_element_create_internal (
        pki_ezsignfolder_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        fki_ezsignbulksend_id_local_var,
        s_ezsignbulksend_description_local_str,
        fki_ezsignbulksendtransmission_id_local_var,
        s_ezsignbulksendtransmission_description_local_str,
        fki_ezsigntemplatepublic_id_local_var,
        s_ezsigntemplatepublic_description_local_str,
        e_ezsignfolder_source_local_nonprim,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        s_ezsignfoldertype_name_x_local_str,
        s_ezsignfolder_description_local_str,
        e_ezsignfolder_step_local_nonprim,
        e_ezsignfolder_completion_local_nonprim,
        dt_created_date_local_str,
        dt_ezsignfolder_delayedsenddate_local_str,
        dt_ezsignfolder_sentdate_local_str,
        dt_ezsignfolder_duedate_local_str,
        i_ezsigndocument_local_var,
        i_ezsigndocument_edm_local_var,
        i_ezsignsignature_local_var,
        i_ezsignsignature_signed_local_var,
        i_ezsignformfieldgroup_local_var,
        i_ezsignformfieldgroup_completed_local_var,
        b_ezsignform_hasdependencies_local_var,
        d_ezsignfolder_completedpercentage_local_str,
        d_ezsignfolder_formcompletedpercentage_local_str,
        d_ezsignfolder_signaturecompletedpercentage_local_str,
        dt_ezsignfolder_close_local_str,
        dt_ezsignfolder_archive_local_str,
        dt_ezsignfolder_dispose_local_str,
        b_ezsignfolder_signer_local_var,
        b_ezsignfolder_ismyown_local_var
        );

    if (!ezsignfolder_list_element_local_var) {
        goto end;
    }

    return ezsignfolder_list_element_local_var;
end:
    if (pki_ezsignfolder_id_local_var) {
        free(pki_ezsignfolder_id_local_var);
        pki_ezsignfolder_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (fki_ezsignbulksend_id_local_var) {
        free(fki_ezsignbulksend_id_local_var);
        fki_ezsignbulksend_id_local_var = NULL;
    }
    if (s_ezsignbulksend_description_local_str) {
        free(s_ezsignbulksend_description_local_str);
        s_ezsignbulksend_description_local_str = NULL;
    }
    if (fki_ezsignbulksendtransmission_id_local_var) {
        free(fki_ezsignbulksendtransmission_id_local_var);
        fki_ezsignbulksendtransmission_id_local_var = NULL;
    }
    if (s_ezsignbulksendtransmission_description_local_str) {
        free(s_ezsignbulksendtransmission_description_local_str);
        s_ezsignbulksendtransmission_description_local_str = NULL;
    }
    if (fki_ezsigntemplatepublic_id_local_var) {
        free(fki_ezsigntemplatepublic_id_local_var);
        fki_ezsigntemplatepublic_id_local_var = NULL;
    }
    if (s_ezsigntemplatepublic_description_local_str) {
        free(s_ezsigntemplatepublic_description_local_str);
        s_ezsigntemplatepublic_description_local_str = NULL;
    }
    if (e_ezsignfolder_source_local_nonprim) {
        e_ezsignfolder_source_local_nonprim = 0;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (s_ezsignfolder_description_local_str) {
        free(s_ezsignfolder_description_local_str);
        s_ezsignfolder_description_local_str = NULL;
    }
    if (e_ezsignfolder_step_local_nonprim) {
        e_ezsignfolder_step_local_nonprim = 0;
    }
    if (e_ezsignfolder_completion_local_nonprim) {
        e_ezsignfolder_completion_local_nonprim = 0;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (dt_ezsignfolder_delayedsenddate_local_str) {
        free(dt_ezsignfolder_delayedsenddate_local_str);
        dt_ezsignfolder_delayedsenddate_local_str = NULL;
    }
    if (dt_ezsignfolder_sentdate_local_str) {
        free(dt_ezsignfolder_sentdate_local_str);
        dt_ezsignfolder_sentdate_local_str = NULL;
    }
    if (dt_ezsignfolder_duedate_local_str) {
        free(dt_ezsignfolder_duedate_local_str);
        dt_ezsignfolder_duedate_local_str = NULL;
    }
    if (i_ezsigndocument_local_var) {
        free(i_ezsigndocument_local_var);
        i_ezsigndocument_local_var = NULL;
    }
    if (i_ezsigndocument_edm_local_var) {
        free(i_ezsigndocument_edm_local_var);
        i_ezsigndocument_edm_local_var = NULL;
    }
    if (i_ezsignsignature_local_var) {
        free(i_ezsignsignature_local_var);
        i_ezsignsignature_local_var = NULL;
    }
    if (i_ezsignsignature_signed_local_var) {
        free(i_ezsignsignature_signed_local_var);
        i_ezsignsignature_signed_local_var = NULL;
    }
    if (i_ezsignformfieldgroup_local_var) {
        free(i_ezsignformfieldgroup_local_var);
        i_ezsignformfieldgroup_local_var = NULL;
    }
    if (i_ezsignformfieldgroup_completed_local_var) {
        free(i_ezsignformfieldgroup_completed_local_var);
        i_ezsignformfieldgroup_completed_local_var = NULL;
    }
    if (b_ezsignform_hasdependencies_local_var) {
        free(b_ezsignform_hasdependencies_local_var);
        b_ezsignform_hasdependencies_local_var = NULL;
    }
    if (d_ezsignfolder_completedpercentage_local_str) {
        free(d_ezsignfolder_completedpercentage_local_str);
        d_ezsignfolder_completedpercentage_local_str = NULL;
    }
    if (d_ezsignfolder_formcompletedpercentage_local_str) {
        free(d_ezsignfolder_formcompletedpercentage_local_str);
        d_ezsignfolder_formcompletedpercentage_local_str = NULL;
    }
    if (d_ezsignfolder_signaturecompletedpercentage_local_str) {
        free(d_ezsignfolder_signaturecompletedpercentage_local_str);
        d_ezsignfolder_signaturecompletedpercentage_local_str = NULL;
    }
    if (dt_ezsignfolder_close_local_str) {
        free(dt_ezsignfolder_close_local_str);
        dt_ezsignfolder_close_local_str = NULL;
    }
    if (dt_ezsignfolder_archive_local_str) {
        free(dt_ezsignfolder_archive_local_str);
        dt_ezsignfolder_archive_local_str = NULL;
    }
    if (dt_ezsignfolder_dispose_local_str) {
        free(dt_ezsignfolder_dispose_local_str);
        dt_ezsignfolder_dispose_local_str = NULL;
    }
    if (b_ezsignfolder_signer_local_var) {
        free(b_ezsignfolder_signer_local_var);
        b_ezsignfolder_signer_local_var = NULL;
    }
    if (b_ezsignfolder_ismyown_local_var) {
        free(b_ezsignfolder_ismyown_local_var);
        b_ezsignfolder_ismyown_local_var = NULL;
    }
    return NULL;

}
