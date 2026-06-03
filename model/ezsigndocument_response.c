#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_response.h"



static ezsigndocument_response_t *ezsigndocument_response_create_internal(
    int *pki_ezsigndocument_id,
    int *fki_ezsignfolder_id,
    int *fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int *fki_language_id,
    char *s_ezsigndocument_name,
    ezmax_api_definition__full_field_e_ezsigndocument_step__e e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int *i_ezsigndocument_order,
    int *i_ezsigndocument_pagetotal,
    int *i_ezsigndocument_signaturesigned,
    int *i_ezsigndocument_signaturetotal,
    int *i_ezsigndocument_formfieldtotal,
    char *s_ezsigndocument_md5initial,
    char *t_ezsigndocument_declinedtosignreason,
    char *s_ezsigndocument_md5signed,
    int *b_ezsigndocument_ezsignform,
    int *b_ezsigndocument_hassignedsignatures,
    int *b_ezsigndocument_sendtoged,
    common_audit_t *obj_audit,
    char *s_ezsigndocument_externalid,
    int *i_ezsigndocument_ezsignsignatureattachmenttotal,
    int *i_ezsigndocument_ezsigndiscussiontotal
    ) {
    ezsigndocument_response_t *ezsigndocument_response_local_var = malloc(sizeof(ezsigndocument_response_t));
    if (!ezsigndocument_response_local_var) {
        return NULL;
    }
    memset(ezsigndocument_response_local_var, 0, sizeof(ezsigndocument_response_t));
    ezsigndocument_response_local_var->_library_owned = 1;
    ezsigndocument_response_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_response_local_var->fki_ezsignfoldersignerassociation_id_declinedtosign = fki_ezsignfoldersignerassociation_id_declinedtosign;
    ezsigndocument_response_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_response_local_var->dt_ezsignform_completed = dt_ezsignform_completed;
    ezsigndocument_response_local_var->fki_language_id = fki_language_id;
    ezsigndocument_response_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    ezsigndocument_response_local_var->e_ezsigndocument_step = e_ezsigndocument_step;
    ezsigndocument_response_local_var->dt_ezsigndocument_firstsend = dt_ezsigndocument_firstsend;
    ezsigndocument_response_local_var->dt_ezsigndocument_lastsend = dt_ezsigndocument_lastsend;
    ezsigndocument_response_local_var->i_ezsigndocument_order = i_ezsigndocument_order;
    ezsigndocument_response_local_var->i_ezsigndocument_pagetotal = i_ezsigndocument_pagetotal;
    ezsigndocument_response_local_var->i_ezsigndocument_signaturesigned = i_ezsigndocument_signaturesigned;
    ezsigndocument_response_local_var->i_ezsigndocument_signaturetotal = i_ezsigndocument_signaturetotal;
    ezsigndocument_response_local_var->i_ezsigndocument_formfieldtotal = i_ezsigndocument_formfieldtotal;
    ezsigndocument_response_local_var->s_ezsigndocument_md5initial = s_ezsigndocument_md5initial;
    ezsigndocument_response_local_var->t_ezsigndocument_declinedtosignreason = t_ezsigndocument_declinedtosignreason;
    ezsigndocument_response_local_var->s_ezsigndocument_md5signed = s_ezsigndocument_md5signed;
    ezsigndocument_response_local_var->b_ezsigndocument_ezsignform = b_ezsigndocument_ezsignform;
    ezsigndocument_response_local_var->b_ezsigndocument_hassignedsignatures = b_ezsigndocument_hassignedsignatures;
    ezsigndocument_response_local_var->b_ezsigndocument_sendtoged = b_ezsigndocument_sendtoged;
    ezsigndocument_response_local_var->obj_audit = obj_audit;
    ezsigndocument_response_local_var->s_ezsigndocument_externalid = s_ezsigndocument_externalid;
    ezsigndocument_response_local_var->i_ezsigndocument_ezsignsignatureattachmenttotal = i_ezsigndocument_ezsignsignatureattachmenttotal;
    ezsigndocument_response_local_var->i_ezsigndocument_ezsigndiscussiontotal = i_ezsigndocument_ezsigndiscussiontotal;
    return ezsigndocument_response_local_var;
}

__attribute__((deprecated)) ezsigndocument_response_t *ezsigndocument_response_create(
    int *pki_ezsigndocument_id,
    int *fki_ezsignfolder_id,
    int *fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int *fki_language_id,
    char *s_ezsigndocument_name,
    ezmax_api_definition__full_field_e_ezsigndocument_step__e e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int *i_ezsigndocument_order,
    int *i_ezsigndocument_pagetotal,
    int *i_ezsigndocument_signaturesigned,
    int *i_ezsigndocument_signaturetotal,
    int *i_ezsigndocument_formfieldtotal,
    char *s_ezsigndocument_md5initial,
    char *t_ezsigndocument_declinedtosignreason,
    char *s_ezsigndocument_md5signed,
    int *b_ezsigndocument_ezsignform,
    int *b_ezsigndocument_hassignedsignatures,
    int *b_ezsigndocument_sendtoged,
    common_audit_t *obj_audit,
    char *s_ezsigndocument_externalid,
    int *i_ezsigndocument_ezsignsignatureattachmenttotal,
    int *i_ezsigndocument_ezsigndiscussiontotal
    ) {
    int *pki_ezsigndocument_id_copy = NULL;
    if (pki_ezsigndocument_id) {
        pki_ezsigndocument_id_copy = malloc(sizeof(int));
        if (pki_ezsigndocument_id_copy) *pki_ezsigndocument_id_copy = *pki_ezsigndocument_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    int *fki_ezsignfoldersignerassociation_id_declinedtosign_copy = NULL;
    if (fki_ezsignfoldersignerassociation_id_declinedtosign) {
        fki_ezsignfoldersignerassociation_id_declinedtosign_copy = malloc(sizeof(int));
        if (fki_ezsignfoldersignerassociation_id_declinedtosign_copy) *fki_ezsignfoldersignerassociation_id_declinedtosign_copy = *fki_ezsignfoldersignerassociation_id_declinedtosign;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *i_ezsigndocument_order_copy = NULL;
    if (i_ezsigndocument_order) {
        i_ezsigndocument_order_copy = malloc(sizeof(int));
        if (i_ezsigndocument_order_copy) *i_ezsigndocument_order_copy = *i_ezsigndocument_order;
    }
    int *i_ezsigndocument_pagetotal_copy = NULL;
    if (i_ezsigndocument_pagetotal) {
        i_ezsigndocument_pagetotal_copy = malloc(sizeof(int));
        if (i_ezsigndocument_pagetotal_copy) *i_ezsigndocument_pagetotal_copy = *i_ezsigndocument_pagetotal;
    }
    int *i_ezsigndocument_signaturesigned_copy = NULL;
    if (i_ezsigndocument_signaturesigned) {
        i_ezsigndocument_signaturesigned_copy = malloc(sizeof(int));
        if (i_ezsigndocument_signaturesigned_copy) *i_ezsigndocument_signaturesigned_copy = *i_ezsigndocument_signaturesigned;
    }
    int *i_ezsigndocument_signaturetotal_copy = NULL;
    if (i_ezsigndocument_signaturetotal) {
        i_ezsigndocument_signaturetotal_copy = malloc(sizeof(int));
        if (i_ezsigndocument_signaturetotal_copy) *i_ezsigndocument_signaturetotal_copy = *i_ezsigndocument_signaturetotal;
    }
    int *i_ezsigndocument_formfieldtotal_copy = NULL;
    if (i_ezsigndocument_formfieldtotal) {
        i_ezsigndocument_formfieldtotal_copy = malloc(sizeof(int));
        if (i_ezsigndocument_formfieldtotal_copy) *i_ezsigndocument_formfieldtotal_copy = *i_ezsigndocument_formfieldtotal;
    }
    int *b_ezsigndocument_ezsignform_copy = NULL;
    if (b_ezsigndocument_ezsignform) {
        b_ezsigndocument_ezsignform_copy = malloc(sizeof(int));
        if (b_ezsigndocument_ezsignform_copy) *b_ezsigndocument_ezsignform_copy = *b_ezsigndocument_ezsignform;
    }
    int *b_ezsigndocument_hassignedsignatures_copy = NULL;
    if (b_ezsigndocument_hassignedsignatures) {
        b_ezsigndocument_hassignedsignatures_copy = malloc(sizeof(int));
        if (b_ezsigndocument_hassignedsignatures_copy) *b_ezsigndocument_hassignedsignatures_copy = *b_ezsigndocument_hassignedsignatures;
    }
    int *b_ezsigndocument_sendtoged_copy = NULL;
    if (b_ezsigndocument_sendtoged) {
        b_ezsigndocument_sendtoged_copy = malloc(sizeof(int));
        if (b_ezsigndocument_sendtoged_copy) *b_ezsigndocument_sendtoged_copy = *b_ezsigndocument_sendtoged;
    }
    int *i_ezsigndocument_ezsignsignatureattachmenttotal_copy = NULL;
    if (i_ezsigndocument_ezsignsignatureattachmenttotal) {
        i_ezsigndocument_ezsignsignatureattachmenttotal_copy = malloc(sizeof(int));
        if (i_ezsigndocument_ezsignsignatureattachmenttotal_copy) *i_ezsigndocument_ezsignsignatureattachmenttotal_copy = *i_ezsigndocument_ezsignsignatureattachmenttotal;
    }
    int *i_ezsigndocument_ezsigndiscussiontotal_copy = NULL;
    if (i_ezsigndocument_ezsigndiscussiontotal) {
        i_ezsigndocument_ezsigndiscussiontotal_copy = malloc(sizeof(int));
        if (i_ezsigndocument_ezsigndiscussiontotal_copy) *i_ezsigndocument_ezsigndiscussiontotal_copy = *i_ezsigndocument_ezsigndiscussiontotal;
    }
    ezsigndocument_response_t *result = ezsigndocument_response_create_internal (
        pki_ezsigndocument_id_copy,
        fki_ezsignfolder_id_copy,
        fki_ezsignfoldersignerassociation_id_declinedtosign_copy,
        dt_ezsigndocument_duedate,
        dt_ezsignform_completed,
        fki_language_id_copy,
        s_ezsigndocument_name,
        e_ezsigndocument_step,
        dt_ezsigndocument_firstsend,
        dt_ezsigndocument_lastsend,
        i_ezsigndocument_order_copy,
        i_ezsigndocument_pagetotal_copy,
        i_ezsigndocument_signaturesigned_copy,
        i_ezsigndocument_signaturetotal_copy,
        i_ezsigndocument_formfieldtotal_copy,
        s_ezsigndocument_md5initial,
        t_ezsigndocument_declinedtosignreason,
        s_ezsigndocument_md5signed,
        b_ezsigndocument_ezsignform_copy,
        b_ezsigndocument_hassignedsignatures_copy,
        b_ezsigndocument_sendtoged_copy,
        obj_audit,
        s_ezsigndocument_externalid,
        i_ezsigndocument_ezsignsignatureattachmenttotal_copy,
        i_ezsigndocument_ezsigndiscussiontotal_copy
        );
    if (!result) {
        free(pki_ezsigndocument_id_copy);
        free(fki_ezsignfolder_id_copy);
        free(fki_ezsignfoldersignerassociation_id_declinedtosign_copy);
        free(fki_language_id_copy);
        free(i_ezsigndocument_order_copy);
        free(i_ezsigndocument_pagetotal_copy);
        free(i_ezsigndocument_signaturesigned_copy);
        free(i_ezsigndocument_signaturetotal_copy);
        free(i_ezsigndocument_formfieldtotal_copy);
        free(b_ezsigndocument_ezsignform_copy);
        free(b_ezsigndocument_hassignedsignatures_copy);
        free(b_ezsigndocument_sendtoged_copy);
        free(i_ezsigndocument_ezsignsignatureattachmenttotal_copy);
        free(i_ezsigndocument_ezsigndiscussiontotal_copy);
    }
    return result;
}

void ezsigndocument_response_free(ezsigndocument_response_t *ezsigndocument_response) {
    if(NULL == ezsigndocument_response){
        return ;
    }
    if(ezsigndocument_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_response->pki_ezsigndocument_id) {
        free(ezsigndocument_response->pki_ezsigndocument_id);
        ezsigndocument_response->pki_ezsigndocument_id = NULL;
    }
    if (ezsigndocument_response->fki_ezsignfolder_id) {
        free(ezsigndocument_response->fki_ezsignfolder_id);
        ezsigndocument_response->fki_ezsignfolder_id = NULL;
    }
    if (ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign) {
        free(ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign);
        ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign = NULL;
    }
    if (ezsigndocument_response->dt_ezsigndocument_duedate) {
        free(ezsigndocument_response->dt_ezsigndocument_duedate);
        ezsigndocument_response->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_response->dt_ezsignform_completed) {
        free(ezsigndocument_response->dt_ezsignform_completed);
        ezsigndocument_response->dt_ezsignform_completed = NULL;
    }
    if (ezsigndocument_response->fki_language_id) {
        free(ezsigndocument_response->fki_language_id);
        ezsigndocument_response->fki_language_id = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_name) {
        free(ezsigndocument_response->s_ezsigndocument_name);
        ezsigndocument_response->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_response->dt_ezsigndocument_firstsend) {
        free(ezsigndocument_response->dt_ezsigndocument_firstsend);
        ezsigndocument_response->dt_ezsigndocument_firstsend = NULL;
    }
    if (ezsigndocument_response->dt_ezsigndocument_lastsend) {
        free(ezsigndocument_response->dt_ezsigndocument_lastsend);
        ezsigndocument_response->dt_ezsigndocument_lastsend = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_order) {
        free(ezsigndocument_response->i_ezsigndocument_order);
        ezsigndocument_response->i_ezsigndocument_order = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_pagetotal) {
        free(ezsigndocument_response->i_ezsigndocument_pagetotal);
        ezsigndocument_response->i_ezsigndocument_pagetotal = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_signaturesigned) {
        free(ezsigndocument_response->i_ezsigndocument_signaturesigned);
        ezsigndocument_response->i_ezsigndocument_signaturesigned = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_signaturetotal) {
        free(ezsigndocument_response->i_ezsigndocument_signaturetotal);
        ezsigndocument_response->i_ezsigndocument_signaturetotal = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_formfieldtotal) {
        free(ezsigndocument_response->i_ezsigndocument_formfieldtotal);
        ezsigndocument_response->i_ezsigndocument_formfieldtotal = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_md5initial) {
        free(ezsigndocument_response->s_ezsigndocument_md5initial);
        ezsigndocument_response->s_ezsigndocument_md5initial = NULL;
    }
    if (ezsigndocument_response->t_ezsigndocument_declinedtosignreason) {
        free(ezsigndocument_response->t_ezsigndocument_declinedtosignreason);
        ezsigndocument_response->t_ezsigndocument_declinedtosignreason = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_md5signed) {
        free(ezsigndocument_response->s_ezsigndocument_md5signed);
        ezsigndocument_response->s_ezsigndocument_md5signed = NULL;
    }
    if (ezsigndocument_response->b_ezsigndocument_ezsignform) {
        free(ezsigndocument_response->b_ezsigndocument_ezsignform);
        ezsigndocument_response->b_ezsigndocument_ezsignform = NULL;
    }
    if (ezsigndocument_response->b_ezsigndocument_hassignedsignatures) {
        free(ezsigndocument_response->b_ezsigndocument_hassignedsignatures);
        ezsigndocument_response->b_ezsigndocument_hassignedsignatures = NULL;
    }
    if (ezsigndocument_response->b_ezsigndocument_sendtoged) {
        free(ezsigndocument_response->b_ezsigndocument_sendtoged);
        ezsigndocument_response->b_ezsigndocument_sendtoged = NULL;
    }
    if (ezsigndocument_response->obj_audit) {
        common_audit_free(ezsigndocument_response->obj_audit);
        ezsigndocument_response->obj_audit = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_externalid) {
        free(ezsigndocument_response->s_ezsigndocument_externalid);
        ezsigndocument_response->s_ezsigndocument_externalid = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal) {
        free(ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal);
        ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal = NULL;
    }
    if (ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal) {
        free(ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal);
        ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal = NULL;
    }
    free(ezsigndocument_response);
}

cJSON *ezsigndocument_response_convertToJSON(ezsigndocument_response_t *ezsigndocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_response->pki_ezsigndocument_id
    if (!ezsigndocument_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", *ezsigndocument_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->fki_ezsignfolder_id
    if (!ezsigndocument_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *ezsigndocument_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign
    if(ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDDeclinedtosign", *ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_response->dt_ezsigndocument_duedate
    if (!ezsigndocument_response->dt_ezsigndocument_duedate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_response->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response->dt_ezsignform_completed
    if(ezsigndocument_response->dt_ezsignform_completed) {
    if(cJSON_AddStringToObject(item, "dtEzsignformCompleted", ezsigndocument_response->dt_ezsignform_completed) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->fki_language_id
    if(ezsigndocument_response->fki_language_id) {
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsigndocument_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigndocument_response->s_ezsigndocument_name
    if (!ezsigndocument_response->s_ezsigndocument_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_response->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response->e_ezsigndocument_step
    if (ezmax_api_definition__full_field_e_ezsigndocument_step__NULL == ezsigndocument_response->e_ezsigndocument_step) {
        goto fail;
    }
    cJSON *e_ezsigndocument_step_local_JSON = field_e_ezsigndocument_step_convertToJSON(ezsigndocument_response->e_ezsigndocument_step);
    if(e_ezsigndocument_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigndocumentStep", e_ezsigndocument_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigndocument_response->dt_ezsigndocument_firstsend
    if(ezsigndocument_response->dt_ezsigndocument_firstsend) {
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentFirstsend", ezsigndocument_response->dt_ezsigndocument_firstsend) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->dt_ezsigndocument_lastsend
    if(ezsigndocument_response->dt_ezsigndocument_lastsend) {
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentLastsend", ezsigndocument_response->dt_ezsigndocument_lastsend) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->i_ezsigndocument_order
    if (!ezsigndocument_response->i_ezsigndocument_order) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentOrder", *ezsigndocument_response->i_ezsigndocument_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_pagetotal
    if (!ezsigndocument_response->i_ezsigndocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentPagetotal", *ezsigndocument_response->i_ezsigndocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_signaturesigned
    if (!ezsigndocument_response->i_ezsigndocument_signaturesigned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturesigned", *ezsigndocument_response->i_ezsigndocument_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_signaturetotal
    if (!ezsigndocument_response->i_ezsigndocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturetotal", *ezsigndocument_response->i_ezsigndocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_formfieldtotal
    if (!ezsigndocument_response->i_ezsigndocument_formfieldtotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentFormfieldtotal", *ezsigndocument_response->i_ezsigndocument_formfieldtotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->s_ezsigndocument_md5initial
    if(ezsigndocument_response->s_ezsigndocument_md5initial) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5initial", ezsigndocument_response->s_ezsigndocument_md5initial) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->t_ezsigndocument_declinedtosignreason
    if(ezsigndocument_response->t_ezsigndocument_declinedtosignreason) {
    if(cJSON_AddStringToObject(item, "tEzsigndocumentDeclinedtosignreason", ezsigndocument_response->t_ezsigndocument_declinedtosignreason) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->s_ezsigndocument_md5signed
    if(ezsigndocument_response->s_ezsigndocument_md5signed) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5signed", ezsigndocument_response->s_ezsigndocument_md5signed) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->b_ezsigndocument_ezsignform
    if(ezsigndocument_response->b_ezsigndocument_ezsignform) {
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentEzsignform", *ezsigndocument_response->b_ezsigndocument_ezsignform) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigndocument_response->b_ezsigndocument_hassignedsignatures
    if(ezsigndocument_response->b_ezsigndocument_hassignedsignatures) {
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentHassignedsignatures", *ezsigndocument_response->b_ezsigndocument_hassignedsignatures) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigndocument_response->b_ezsigndocument_sendtoged
    if(ezsigndocument_response->b_ezsigndocument_sendtoged) {
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentSendtoged", *ezsigndocument_response->b_ezsigndocument_sendtoged) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigndocument_response->obj_audit
    if(ezsigndocument_response->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigndocument_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndocument_response->s_ezsigndocument_externalid
    if(ezsigndocument_response->s_ezsigndocument_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsigndocumentExternalid", ezsigndocument_response->s_ezsigndocument_externalid) == NULL) {
    goto fail; //String
    }
    }


    // ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal
    if (!ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEzsignsignatureattachmenttotal", *ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal
    if (!ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEzsigndiscussiontotal", *ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_response_t *ezsigndocument_response_parseFromJSON(cJSON *ezsigndocument_responseJSON){

    ezsigndocument_response_t *ezsigndocument_response_local_var = NULL;

    // define the local variable for ezsigndocument_response->pki_ezsigndocument_id
    int *pki_ezsigndocument_id_local_var = NULL;

    // define the local variable for ezsigndocument_response->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign
    int *fki_ezsignfoldersignerassociation_id_declinedtosign_local_var = NULL;

    char *dt_ezsigndocument_duedate_local_str = NULL;

    char *dt_ezsignform_completed_local_str = NULL;

    // define the local variable for ezsigndocument_response->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_ezsigndocument_name_local_str = NULL;

    // define the local variable for ezsigndocument_response->e_ezsigndocument_step
    ezmax_api_definition__full_field_e_ezsigndocument_step__e e_ezsigndocument_step_local_nonprim = 0;

    char *dt_ezsigndocument_firstsend_local_str = NULL;

    char *dt_ezsigndocument_lastsend_local_str = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_order
    int *i_ezsigndocument_order_local_var = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_pagetotal
    int *i_ezsigndocument_pagetotal_local_var = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_signaturesigned
    int *i_ezsigndocument_signaturesigned_local_var = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_signaturetotal
    int *i_ezsigndocument_signaturetotal_local_var = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_formfieldtotal
    int *i_ezsigndocument_formfieldtotal_local_var = NULL;

    char *s_ezsigndocument_md5initial_local_str = NULL;

    char *t_ezsigndocument_declinedtosignreason_local_str = NULL;

    char *s_ezsigndocument_md5signed_local_str = NULL;

    // define the local variable for ezsigndocument_response->b_ezsigndocument_ezsignform
    int *b_ezsigndocument_ezsignform_local_var = NULL;

    // define the local variable for ezsigndocument_response->b_ezsigndocument_hassignedsignatures
    int *b_ezsigndocument_hassignedsignatures_local_var = NULL;

    // define the local variable for ezsigndocument_response->b_ezsigndocument_sendtoged
    int *b_ezsigndocument_sendtoged_local_var = NULL;

    // define the local variable for ezsigndocument_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    char *s_ezsigndocument_externalid_local_str = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal
    int *i_ezsigndocument_ezsignsignatureattachmenttotal_local_var = NULL;

    // define the local variable for ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal
    int *i_ezsigndocument_ezsigndiscussiontotal_local_var = NULL;

    // ezsigndocument_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "pkiEzsigndocumentID");
    if (cJSON_IsNull(pki_ezsigndocument_id)) {
        pki_ezsigndocument_id = NULL;
    }
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }
    pki_ezsigndocument_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigndocument_id_local_var)
    {
        goto end;
    }
    *pki_ezsigndocument_id_local_var = pki_ezsigndocument_id->valuedouble;

    // ezsigndocument_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;

    // ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign
    cJSON *fki_ezsignfoldersignerassociation_id_declinedtosign = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiEzsignfoldersignerassociationIDDeclinedtosign");
    if (cJSON_IsNull(fki_ezsignfoldersignerassociation_id_declinedtosign)) {
        fki_ezsignfoldersignerassociation_id_declinedtosign = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_declinedtosign) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_declinedtosign))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldersignerassociation_id_declinedtosign_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldersignerassociation_id_declinedtosign_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldersignerassociation_id_declinedtosign_local_var = fki_ezsignfoldersignerassociation_id_declinedtosign->valuedouble;
    }

    // ezsigndocument_response->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentDuedate");
    if (cJSON_IsNull(dt_ezsigndocument_duedate)) {
        dt_ezsigndocument_duedate = NULL;
    }
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_response->dt_ezsignform_completed
    cJSON *dt_ezsignform_completed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsignformCompleted");
    if (cJSON_IsNull(dt_ezsignform_completed)) {
        dt_ezsignform_completed = NULL;
    }
    if (dt_ezsignform_completed) { 
    if(!cJSON_IsString(dt_ezsignform_completed) && !cJSON_IsNull(dt_ezsignform_completed))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (fki_language_id) { 
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;
    }

    // ezsigndocument_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentName");
    if (cJSON_IsNull(s_ezsigndocument_name)) {
        s_ezsigndocument_name = NULL;
    }
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_response->e_ezsigndocument_step
    cJSON *e_ezsigndocument_step = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "eEzsigndocumentStep");
    if (cJSON_IsNull(e_ezsigndocument_step)) {
        e_ezsigndocument_step = NULL;
    }
    if (!e_ezsigndocument_step) {
        goto end;
    }

    
    e_ezsigndocument_step_local_nonprim = field_e_ezsigndocument_step_parseFromJSON(e_ezsigndocument_step); //custom

    // ezsigndocument_response->dt_ezsigndocument_firstsend
    cJSON *dt_ezsigndocument_firstsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentFirstsend");
    if (cJSON_IsNull(dt_ezsigndocument_firstsend)) {
        dt_ezsigndocument_firstsend = NULL;
    }
    if (dt_ezsigndocument_firstsend) { 
    if(!cJSON_IsString(dt_ezsigndocument_firstsend) && !cJSON_IsNull(dt_ezsigndocument_firstsend))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->dt_ezsigndocument_lastsend
    cJSON *dt_ezsigndocument_lastsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentLastsend");
    if (cJSON_IsNull(dt_ezsigndocument_lastsend)) {
        dt_ezsigndocument_lastsend = NULL;
    }
    if (dt_ezsigndocument_lastsend) { 
    if(!cJSON_IsString(dt_ezsigndocument_lastsend) && !cJSON_IsNull(dt_ezsigndocument_lastsend))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->i_ezsigndocument_order
    cJSON *i_ezsigndocument_order = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentOrder");
    if (cJSON_IsNull(i_ezsigndocument_order)) {
        i_ezsigndocument_order = NULL;
    }
    if (!i_ezsigndocument_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_order))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_order_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_order_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_order_local_var = i_ezsigndocument_order->valuedouble;

    // ezsigndocument_response->i_ezsigndocument_pagetotal
    cJSON *i_ezsigndocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentPagetotal");
    if (cJSON_IsNull(i_ezsigndocument_pagetotal)) {
        i_ezsigndocument_pagetotal = NULL;
    }
    if (!i_ezsigndocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_pagetotal))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_pagetotal_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_pagetotal_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_pagetotal_local_var = i_ezsigndocument_pagetotal->valuedouble;

    // ezsigndocument_response->i_ezsigndocument_signaturesigned
    cJSON *i_ezsigndocument_signaturesigned = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentSignaturesigned");
    if (cJSON_IsNull(i_ezsigndocument_signaturesigned)) {
        i_ezsigndocument_signaturesigned = NULL;
    }
    if (!i_ezsigndocument_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturesigned))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_signaturesigned_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_signaturesigned_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_signaturesigned_local_var = i_ezsigndocument_signaturesigned->valuedouble;

    // ezsigndocument_response->i_ezsigndocument_signaturetotal
    cJSON *i_ezsigndocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentSignaturetotal");
    if (cJSON_IsNull(i_ezsigndocument_signaturetotal)) {
        i_ezsigndocument_signaturetotal = NULL;
    }
    if (!i_ezsigndocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturetotal))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_signaturetotal_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_signaturetotal_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_signaturetotal_local_var = i_ezsigndocument_signaturetotal->valuedouble;

    // ezsigndocument_response->i_ezsigndocument_formfieldtotal
    cJSON *i_ezsigndocument_formfieldtotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentFormfieldtotal");
    if (cJSON_IsNull(i_ezsigndocument_formfieldtotal)) {
        i_ezsigndocument_formfieldtotal = NULL;
    }
    if (!i_ezsigndocument_formfieldtotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_formfieldtotal))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_formfieldtotal_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_formfieldtotal_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_formfieldtotal_local_var = i_ezsigndocument_formfieldtotal->valuedouble;

    // ezsigndocument_response->s_ezsigndocument_md5initial
    cJSON *s_ezsigndocument_md5initial = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentMD5initial");
    if (cJSON_IsNull(s_ezsigndocument_md5initial)) {
        s_ezsigndocument_md5initial = NULL;
    }
    if (s_ezsigndocument_md5initial) { 
    if(!cJSON_IsString(s_ezsigndocument_md5initial) && !cJSON_IsNull(s_ezsigndocument_md5initial))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->t_ezsigndocument_declinedtosignreason
    cJSON *t_ezsigndocument_declinedtosignreason = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "tEzsigndocumentDeclinedtosignreason");
    if (cJSON_IsNull(t_ezsigndocument_declinedtosignreason)) {
        t_ezsigndocument_declinedtosignreason = NULL;
    }
    if (t_ezsigndocument_declinedtosignreason) { 
    if(!cJSON_IsString(t_ezsigndocument_declinedtosignreason) && !cJSON_IsNull(t_ezsigndocument_declinedtosignreason))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->s_ezsigndocument_md5signed
    cJSON *s_ezsigndocument_md5signed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentMD5signed");
    if (cJSON_IsNull(s_ezsigndocument_md5signed)) {
        s_ezsigndocument_md5signed = NULL;
    }
    if (s_ezsigndocument_md5signed) { 
    if(!cJSON_IsString(s_ezsigndocument_md5signed) && !cJSON_IsNull(s_ezsigndocument_md5signed))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->b_ezsigndocument_ezsignform
    cJSON *b_ezsigndocument_ezsignform = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "bEzsigndocumentEzsignform");
    if (cJSON_IsNull(b_ezsigndocument_ezsignform)) {
        b_ezsigndocument_ezsignform = NULL;
    }
    if (b_ezsigndocument_ezsignform) { 
    if(!cJSON_IsBool(b_ezsigndocument_ezsignform))
    {
    goto end; //Bool
    }
    b_ezsigndocument_ezsignform_local_var = malloc(sizeof(int));
    if(!b_ezsigndocument_ezsignform_local_var)
    {
        goto end;
    }
    *b_ezsigndocument_ezsignform_local_var = b_ezsigndocument_ezsignform->valueint;
    }

    // ezsigndocument_response->b_ezsigndocument_hassignedsignatures
    cJSON *b_ezsigndocument_hassignedsignatures = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "bEzsigndocumentHassignedsignatures");
    if (cJSON_IsNull(b_ezsigndocument_hassignedsignatures)) {
        b_ezsigndocument_hassignedsignatures = NULL;
    }
    if (b_ezsigndocument_hassignedsignatures) { 
    if(!cJSON_IsBool(b_ezsigndocument_hassignedsignatures))
    {
    goto end; //Bool
    }
    b_ezsigndocument_hassignedsignatures_local_var = malloc(sizeof(int));
    if(!b_ezsigndocument_hassignedsignatures_local_var)
    {
        goto end;
    }
    *b_ezsigndocument_hassignedsignatures_local_var = b_ezsigndocument_hassignedsignatures->valueint;
    }

    // ezsigndocument_response->b_ezsigndocument_sendtoged
    cJSON *b_ezsigndocument_sendtoged = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "bEzsigndocumentSendtoged");
    if (cJSON_IsNull(b_ezsigndocument_sendtoged)) {
        b_ezsigndocument_sendtoged = NULL;
    }
    if (b_ezsigndocument_sendtoged) { 
    if(!cJSON_IsBool(b_ezsigndocument_sendtoged))
    {
    goto end; //Bool
    }
    b_ezsigndocument_sendtoged_local_var = malloc(sizeof(int));
    if(!b_ezsigndocument_sendtoged_local_var)
    {
        goto end;
    }
    *b_ezsigndocument_sendtoged_local_var = b_ezsigndocument_sendtoged->valueint;
    }

    // ezsigndocument_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezsigndocument_response->s_ezsigndocument_externalid
    cJSON *s_ezsigndocument_externalid = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentExternalid");
    if (cJSON_IsNull(s_ezsigndocument_externalid)) {
        s_ezsigndocument_externalid = NULL;
    }
    if (s_ezsigndocument_externalid) { 
    if(!cJSON_IsString(s_ezsigndocument_externalid) && !cJSON_IsNull(s_ezsigndocument_externalid))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal
    cJSON *i_ezsigndocument_ezsignsignatureattachmenttotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentEzsignsignatureattachmenttotal");
    if (cJSON_IsNull(i_ezsigndocument_ezsignsignatureattachmenttotal)) {
        i_ezsigndocument_ezsignsignatureattachmenttotal = NULL;
    }
    if (!i_ezsigndocument_ezsignsignatureattachmenttotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_ezsignsignatureattachmenttotal))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_ezsignsignatureattachmenttotal_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_ezsignsignatureattachmenttotal_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_ezsignsignatureattachmenttotal_local_var = i_ezsigndocument_ezsignsignatureattachmenttotal->valuedouble;

    // ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal
    cJSON *i_ezsigndocument_ezsigndiscussiontotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentEzsigndiscussiontotal");
    if (cJSON_IsNull(i_ezsigndocument_ezsigndiscussiontotal)) {
        i_ezsigndocument_ezsigndiscussiontotal = NULL;
    }
    if (!i_ezsigndocument_ezsigndiscussiontotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_ezsigndiscussiontotal))
    {
    goto end; //Numeric
    }
    i_ezsigndocument_ezsigndiscussiontotal_local_var = malloc(sizeof(int));
    if(!i_ezsigndocument_ezsigndiscussiontotal_local_var)
    {
        goto end;
    }
    *i_ezsigndocument_ezsigndiscussiontotal_local_var = i_ezsigndocument_ezsigndiscussiontotal->valuedouble;


    if (dt_ezsigndocument_duedate && !cJSON_IsNull(dt_ezsigndocument_duedate)) dt_ezsigndocument_duedate_local_str = strdup(dt_ezsigndocument_duedate->valuestring);
    if (dt_ezsignform_completed && !cJSON_IsNull(dt_ezsignform_completed)) dt_ezsignform_completed_local_str = strdup(dt_ezsignform_completed->valuestring);
    if (s_ezsigndocument_name && !cJSON_IsNull(s_ezsigndocument_name)) s_ezsigndocument_name_local_str = strdup(s_ezsigndocument_name->valuestring);
    if (dt_ezsigndocument_firstsend && !cJSON_IsNull(dt_ezsigndocument_firstsend)) dt_ezsigndocument_firstsend_local_str = strdup(dt_ezsigndocument_firstsend->valuestring);
    if (dt_ezsigndocument_lastsend && !cJSON_IsNull(dt_ezsigndocument_lastsend)) dt_ezsigndocument_lastsend_local_str = strdup(dt_ezsigndocument_lastsend->valuestring);
    if (s_ezsigndocument_md5initial && !cJSON_IsNull(s_ezsigndocument_md5initial)) s_ezsigndocument_md5initial_local_str = strdup(s_ezsigndocument_md5initial->valuestring);
    if (t_ezsigndocument_declinedtosignreason && !cJSON_IsNull(t_ezsigndocument_declinedtosignreason)) t_ezsigndocument_declinedtosignreason_local_str = strdup(t_ezsigndocument_declinedtosignreason->valuestring);
    if (s_ezsigndocument_md5signed && !cJSON_IsNull(s_ezsigndocument_md5signed)) s_ezsigndocument_md5signed_local_str = strdup(s_ezsigndocument_md5signed->valuestring);
    if (s_ezsigndocument_externalid && !cJSON_IsNull(s_ezsigndocument_externalid)) s_ezsigndocument_externalid_local_str = strdup(s_ezsigndocument_externalid->valuestring);

    ezsigndocument_response_local_var = ezsigndocument_response_create_internal (
        pki_ezsigndocument_id_local_var,
        fki_ezsignfolder_id_local_var,
        fki_ezsignfoldersignerassociation_id_declinedtosign_local_var,
        dt_ezsigndocument_duedate_local_str,
        dt_ezsignform_completed_local_str,
        fki_language_id_local_var,
        s_ezsigndocument_name_local_str,
        e_ezsigndocument_step_local_nonprim,
        dt_ezsigndocument_firstsend_local_str,
        dt_ezsigndocument_lastsend_local_str,
        i_ezsigndocument_order_local_var,
        i_ezsigndocument_pagetotal_local_var,
        i_ezsigndocument_signaturesigned_local_var,
        i_ezsigndocument_signaturetotal_local_var,
        i_ezsigndocument_formfieldtotal_local_var,
        s_ezsigndocument_md5initial_local_str,
        t_ezsigndocument_declinedtosignreason_local_str,
        s_ezsigndocument_md5signed_local_str,
        b_ezsigndocument_ezsignform_local_var,
        b_ezsigndocument_hassignedsignatures_local_var,
        b_ezsigndocument_sendtoged_local_var,
        obj_audit ? obj_audit_local_nonprim : NULL,
        s_ezsigndocument_externalid_local_str,
        i_ezsigndocument_ezsignsignatureattachmenttotal_local_var,
        i_ezsigndocument_ezsigndiscussiontotal_local_var
        );

    if (!ezsigndocument_response_local_var) {
        goto end;
    }

    return ezsigndocument_response_local_var;
end:
    if (pki_ezsigndocument_id_local_var) {
        free(pki_ezsigndocument_id_local_var);
        pki_ezsigndocument_id_local_var = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (fki_ezsignfoldersignerassociation_id_declinedtosign_local_var) {
        free(fki_ezsignfoldersignerassociation_id_declinedtosign_local_var);
        fki_ezsignfoldersignerassociation_id_declinedtosign_local_var = NULL;
    }
    if (dt_ezsigndocument_duedate_local_str) {
        free(dt_ezsigndocument_duedate_local_str);
        dt_ezsigndocument_duedate_local_str = NULL;
    }
    if (dt_ezsignform_completed_local_str) {
        free(dt_ezsignform_completed_local_str);
        dt_ezsignform_completed_local_str = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_ezsigndocument_name_local_str) {
        free(s_ezsigndocument_name_local_str);
        s_ezsigndocument_name_local_str = NULL;
    }
    if (e_ezsigndocument_step_local_nonprim) {
        e_ezsigndocument_step_local_nonprim = 0;
    }
    if (dt_ezsigndocument_firstsend_local_str) {
        free(dt_ezsigndocument_firstsend_local_str);
        dt_ezsigndocument_firstsend_local_str = NULL;
    }
    if (dt_ezsigndocument_lastsend_local_str) {
        free(dt_ezsigndocument_lastsend_local_str);
        dt_ezsigndocument_lastsend_local_str = NULL;
    }
    if (i_ezsigndocument_order_local_var) {
        free(i_ezsigndocument_order_local_var);
        i_ezsigndocument_order_local_var = NULL;
    }
    if (i_ezsigndocument_pagetotal_local_var) {
        free(i_ezsigndocument_pagetotal_local_var);
        i_ezsigndocument_pagetotal_local_var = NULL;
    }
    if (i_ezsigndocument_signaturesigned_local_var) {
        free(i_ezsigndocument_signaturesigned_local_var);
        i_ezsigndocument_signaturesigned_local_var = NULL;
    }
    if (i_ezsigndocument_signaturetotal_local_var) {
        free(i_ezsigndocument_signaturetotal_local_var);
        i_ezsigndocument_signaturetotal_local_var = NULL;
    }
    if (i_ezsigndocument_formfieldtotal_local_var) {
        free(i_ezsigndocument_formfieldtotal_local_var);
        i_ezsigndocument_formfieldtotal_local_var = NULL;
    }
    if (s_ezsigndocument_md5initial_local_str) {
        free(s_ezsigndocument_md5initial_local_str);
        s_ezsigndocument_md5initial_local_str = NULL;
    }
    if (t_ezsigndocument_declinedtosignreason_local_str) {
        free(t_ezsigndocument_declinedtosignreason_local_str);
        t_ezsigndocument_declinedtosignreason_local_str = NULL;
    }
    if (s_ezsigndocument_md5signed_local_str) {
        free(s_ezsigndocument_md5signed_local_str);
        s_ezsigndocument_md5signed_local_str = NULL;
    }
    if (b_ezsigndocument_ezsignform_local_var) {
        free(b_ezsigndocument_ezsignform_local_var);
        b_ezsigndocument_ezsignform_local_var = NULL;
    }
    if (b_ezsigndocument_hassignedsignatures_local_var) {
        free(b_ezsigndocument_hassignedsignatures_local_var);
        b_ezsigndocument_hassignedsignatures_local_var = NULL;
    }
    if (b_ezsigndocument_sendtoged_local_var) {
        free(b_ezsigndocument_sendtoged_local_var);
        b_ezsigndocument_sendtoged_local_var = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (s_ezsigndocument_externalid_local_str) {
        free(s_ezsigndocument_externalid_local_str);
        s_ezsigndocument_externalid_local_str = NULL;
    }
    if (i_ezsigndocument_ezsignsignatureattachmenttotal_local_var) {
        free(i_ezsigndocument_ezsignsignatureattachmenttotal_local_var);
        i_ezsigndocument_ezsignsignatureattachmenttotal_local_var = NULL;
    }
    if (i_ezsigndocument_ezsigndiscussiontotal_local_var) {
        free(i_ezsigndocument_ezsigndiscussiontotal_local_var);
        i_ezsigndocument_ezsigndiscussiontotal_local_var = NULL;
    }
    return NULL;

}
