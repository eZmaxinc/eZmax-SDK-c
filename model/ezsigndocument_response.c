#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_response.h"


char* ezsigndocument_response_e_ezsigndocument_step_ToString(ezmax_api_definition__full_ezsigndocument_response__e e_ezsigndocument_step) {
    char* e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "PendingCompletion", "Completed", "Disposed" };
    return e_ezsigndocument_stepArray[e_ezsigndocument_step];
}

ezmax_api_definition__full_ezsigndocument_response__e ezsigndocument_response_e_ezsigndocument_step_FromString(char* e_ezsigndocument_step){
    int stringToReturn = 0;
    char *e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "PendingCompletion", "Completed", "Disposed" };
    size_t sizeofArray = sizeof(e_ezsigndocument_stepArray) / sizeof(e_ezsigndocument_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_step, e_ezsigndocument_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_response_t *ezsigndocument_response_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    int fki_ezsignfoldersignerassociation_id_declinedtosign,
    char *dt_ezsigndocument_duedate,
    char *dt_ezsignform_completed,
    int fki_language_id,
    char *s_ezsigndocument_name,
    field_e_ezsigndocument_step_t *e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *t_ezsigndocument_declinedtosignreason,
    char *s_ezsigndocument_md5signed,
    int b_ezsigndocument_ezsignform,
    int b_ezsigndocument_hassignedsignatures,
    common_audit_t *obj_audit,
    char *s_ezsigndocument_externalid,
    int i_ezsigndocument_ezsignsignatureattachmenttotal,
    int i_ezsigndocument_ezsigndiscussiontotal
    ) {
    ezsigndocument_response_t *ezsigndocument_response_local_var = malloc(sizeof(ezsigndocument_response_t));
    if (!ezsigndocument_response_local_var) {
        return NULL;
    }
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
    ezsigndocument_response_local_var->s_ezsigndocument_md5initial = s_ezsigndocument_md5initial;
    ezsigndocument_response_local_var->t_ezsigndocument_declinedtosignreason = t_ezsigndocument_declinedtosignreason;
    ezsigndocument_response_local_var->s_ezsigndocument_md5signed = s_ezsigndocument_md5signed;
    ezsigndocument_response_local_var->b_ezsigndocument_ezsignform = b_ezsigndocument_ezsignform;
    ezsigndocument_response_local_var->b_ezsigndocument_hassignedsignatures = b_ezsigndocument_hassignedsignatures;
    ezsigndocument_response_local_var->obj_audit = obj_audit;
    ezsigndocument_response_local_var->s_ezsigndocument_externalid = s_ezsigndocument_externalid;
    ezsigndocument_response_local_var->i_ezsigndocument_ezsignsignatureattachmenttotal = i_ezsigndocument_ezsignsignatureattachmenttotal;
    ezsigndocument_response_local_var->i_ezsigndocument_ezsigndiscussiontotal = i_ezsigndocument_ezsigndiscussiontotal;

    return ezsigndocument_response_local_var;
}


void ezsigndocument_response_free(ezsigndocument_response_t *ezsigndocument_response) {
    if(NULL == ezsigndocument_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_response->dt_ezsigndocument_duedate) {
        free(ezsigndocument_response->dt_ezsigndocument_duedate);
        ezsigndocument_response->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_response->dt_ezsignform_completed) {
        free(ezsigndocument_response->dt_ezsignform_completed);
        ezsigndocument_response->dt_ezsignform_completed = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_name) {
        free(ezsigndocument_response->s_ezsigndocument_name);
        ezsigndocument_response->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_response->e_ezsigndocument_step) {
        field_e_ezsigndocument_step_free(ezsigndocument_response->e_ezsigndocument_step);
        ezsigndocument_response->e_ezsigndocument_step = NULL;
    }
    if (ezsigndocument_response->dt_ezsigndocument_firstsend) {
        free(ezsigndocument_response->dt_ezsigndocument_firstsend);
        ezsigndocument_response->dt_ezsigndocument_firstsend = NULL;
    }
    if (ezsigndocument_response->dt_ezsigndocument_lastsend) {
        free(ezsigndocument_response->dt_ezsigndocument_lastsend);
        ezsigndocument_response->dt_ezsigndocument_lastsend = NULL;
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
    if (ezsigndocument_response->obj_audit) {
        common_audit_free(ezsigndocument_response->obj_audit);
        ezsigndocument_response->obj_audit = NULL;
    }
    if (ezsigndocument_response->s_ezsigndocument_externalid) {
        free(ezsigndocument_response->s_ezsigndocument_externalid);
        ezsigndocument_response->s_ezsigndocument_externalid = NULL;
    }
    free(ezsigndocument_response);
}

cJSON *ezsigndocument_response_convertToJSON(ezsigndocument_response_t *ezsigndocument_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_response->pki_ezsigndocument_id
    if (!ezsigndocument_response->pki_ezsigndocument_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_response->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->fki_ezsignfolder_id
    if (!ezsigndocument_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign
    if(ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldersignerassociationIDDeclinedtosign", ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigndocument_response->fki_language_id) == NULL) {
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
    if (ezmax_api_definition__full_ezsigndocument_response__NULL == ezsigndocument_response->e_ezsigndocument_step) {
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
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentOrder", ezsigndocument_response->i_ezsigndocument_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_pagetotal
    if (!ezsigndocument_response->i_ezsigndocument_pagetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentPagetotal", ezsigndocument_response->i_ezsigndocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_signaturesigned
    if (!ezsigndocument_response->i_ezsigndocument_signaturesigned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturesigned", ezsigndocument_response->i_ezsigndocument_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_signaturetotal
    if (!ezsigndocument_response->i_ezsigndocument_signaturetotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturetotal", ezsigndocument_response->i_ezsigndocument_signaturetotal) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentEzsignform", ezsigndocument_response->b_ezsigndocument_ezsignform) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigndocument_response->b_ezsigndocument_hassignedsignatures
    if(ezsigndocument_response->b_ezsigndocument_hassignedsignatures) {
    if(cJSON_AddBoolToObject(item, "bEzsigndocumentHassignedsignatures", ezsigndocument_response->b_ezsigndocument_hassignedsignatures) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEzsignsignatureattachmenttotal", ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal
    if (!ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentEzsigndiscussiontotal", ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal) == NULL) {
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

    // define the local variable for ezsigndocument_response->e_ezsigndocument_step
    field_e_ezsigndocument_step_t *e_ezsigndocument_step_local_nonprim = NULL;

    // define the local variable for ezsigndocument_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsigndocument_response->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->fki_ezsignfoldersignerassociation_id_declinedtosign
    cJSON *fki_ezsignfoldersignerassociation_id_declinedtosign = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiEzsignfoldersignerassociationIDDeclinedtosign");
    if (fki_ezsignfoldersignerassociation_id_declinedtosign) { 
    if(!cJSON_IsNumber(fki_ezsignfoldersignerassociation_id_declinedtosign))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_response->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_response->dt_ezsignform_completed
    cJSON *dt_ezsignform_completed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsignformCompleted");
    if (dt_ezsignform_completed) { 
    if(!cJSON_IsString(dt_ezsignform_completed) && !cJSON_IsNull(dt_ezsignform_completed))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "fkiLanguageID");
    if (fki_language_id) { 
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigndocument_response->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_response->e_ezsigndocument_step
    cJSON *e_ezsigndocument_step = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "eEzsigndocumentStep");
    if (!e_ezsigndocument_step) {
        goto end;
    }

    
    e_ezsigndocument_step_local_nonprim = field_e_ezsigndocument_step_parseFromJSON(e_ezsigndocument_step); //custom

    // ezsigndocument_response->dt_ezsigndocument_firstsend
    cJSON *dt_ezsigndocument_firstsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentFirstsend");
    if (dt_ezsigndocument_firstsend) { 
    if(!cJSON_IsString(dt_ezsigndocument_firstsend) && !cJSON_IsNull(dt_ezsigndocument_firstsend))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->dt_ezsigndocument_lastsend
    cJSON *dt_ezsigndocument_lastsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "dtEzsigndocumentLastsend");
    if (dt_ezsigndocument_lastsend) { 
    if(!cJSON_IsString(dt_ezsigndocument_lastsend) && !cJSON_IsNull(dt_ezsigndocument_lastsend))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->i_ezsigndocument_order
    cJSON *i_ezsigndocument_order = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentOrder");
    if (!i_ezsigndocument_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_order))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->i_ezsigndocument_pagetotal
    cJSON *i_ezsigndocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentPagetotal");
    if (!i_ezsigndocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->i_ezsigndocument_signaturesigned
    cJSON *i_ezsigndocument_signaturesigned = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentSignaturesigned");
    if (!i_ezsigndocument_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturesigned))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->i_ezsigndocument_signaturetotal
    cJSON *i_ezsigndocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentSignaturetotal");
    if (!i_ezsigndocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->s_ezsigndocument_md5initial
    cJSON *s_ezsigndocument_md5initial = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentMD5initial");
    if (s_ezsigndocument_md5initial) { 
    if(!cJSON_IsString(s_ezsigndocument_md5initial) && !cJSON_IsNull(s_ezsigndocument_md5initial))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->t_ezsigndocument_declinedtosignreason
    cJSON *t_ezsigndocument_declinedtosignreason = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "tEzsigndocumentDeclinedtosignreason");
    if (t_ezsigndocument_declinedtosignreason) { 
    if(!cJSON_IsString(t_ezsigndocument_declinedtosignreason) && !cJSON_IsNull(t_ezsigndocument_declinedtosignreason))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->s_ezsigndocument_md5signed
    cJSON *s_ezsigndocument_md5signed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentMD5signed");
    if (s_ezsigndocument_md5signed) { 
    if(!cJSON_IsString(s_ezsigndocument_md5signed) && !cJSON_IsNull(s_ezsigndocument_md5signed))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->b_ezsigndocument_ezsignform
    cJSON *b_ezsigndocument_ezsignform = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "bEzsigndocumentEzsignform");
    if (b_ezsigndocument_ezsignform) { 
    if(!cJSON_IsBool(b_ezsigndocument_ezsignform))
    {
    goto end; //Bool
    }
    }

    // ezsigndocument_response->b_ezsigndocument_hassignedsignatures
    cJSON *b_ezsigndocument_hassignedsignatures = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "bEzsigndocumentHassignedsignatures");
    if (b_ezsigndocument_hassignedsignatures) { 
    if(!cJSON_IsBool(b_ezsigndocument_hassignedsignatures))
    {
    goto end; //Bool
    }
    }

    // ezsigndocument_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "objAudit");
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezsigndocument_response->s_ezsigndocument_externalid
    cJSON *s_ezsigndocument_externalid = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "sEzsigndocumentExternalid");
    if (s_ezsigndocument_externalid) { 
    if(!cJSON_IsString(s_ezsigndocument_externalid) && !cJSON_IsNull(s_ezsigndocument_externalid))
    {
    goto end; //String
    }
    }

    // ezsigndocument_response->i_ezsigndocument_ezsignsignatureattachmenttotal
    cJSON *i_ezsigndocument_ezsignsignatureattachmenttotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentEzsignsignatureattachmenttotal");
    if (!i_ezsigndocument_ezsignsignatureattachmenttotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_ezsignsignatureattachmenttotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response->i_ezsigndocument_ezsigndiscussiontotal
    cJSON *i_ezsigndocument_ezsigndiscussiontotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_responseJSON, "iEzsigndocumentEzsigndiscussiontotal");
    if (!i_ezsigndocument_ezsigndiscussiontotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_ezsigndiscussiontotal))
    {
    goto end; //Numeric
    }


    ezsigndocument_response_local_var = ezsigndocument_response_create (
        pki_ezsigndocument_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldersignerassociation_id_declinedtosign ? fki_ezsignfoldersignerassociation_id_declinedtosign->valuedouble : 0,
        strdup(dt_ezsigndocument_duedate->valuestring),
        dt_ezsignform_completed && !cJSON_IsNull(dt_ezsignform_completed) ? strdup(dt_ezsignform_completed->valuestring) : NULL,
        fki_language_id ? fki_language_id->valuedouble : 0,
        strdup(s_ezsigndocument_name->valuestring),
        e_ezsigndocument_step_local_nonprim,
        dt_ezsigndocument_firstsend && !cJSON_IsNull(dt_ezsigndocument_firstsend) ? strdup(dt_ezsigndocument_firstsend->valuestring) : NULL,
        dt_ezsigndocument_lastsend && !cJSON_IsNull(dt_ezsigndocument_lastsend) ? strdup(dt_ezsigndocument_lastsend->valuestring) : NULL,
        i_ezsigndocument_order->valuedouble,
        i_ezsigndocument_pagetotal->valuedouble,
        i_ezsigndocument_signaturesigned->valuedouble,
        i_ezsigndocument_signaturetotal->valuedouble,
        s_ezsigndocument_md5initial && !cJSON_IsNull(s_ezsigndocument_md5initial) ? strdup(s_ezsigndocument_md5initial->valuestring) : NULL,
        t_ezsigndocument_declinedtosignreason && !cJSON_IsNull(t_ezsigndocument_declinedtosignreason) ? strdup(t_ezsigndocument_declinedtosignreason->valuestring) : NULL,
        s_ezsigndocument_md5signed && !cJSON_IsNull(s_ezsigndocument_md5signed) ? strdup(s_ezsigndocument_md5signed->valuestring) : NULL,
        b_ezsigndocument_ezsignform ? b_ezsigndocument_ezsignform->valueint : 0,
        b_ezsigndocument_hassignedsignatures ? b_ezsigndocument_hassignedsignatures->valueint : 0,
        obj_audit ? obj_audit_local_nonprim : NULL,
        s_ezsigndocument_externalid && !cJSON_IsNull(s_ezsigndocument_externalid) ? strdup(s_ezsigndocument_externalid->valuestring) : NULL,
        i_ezsigndocument_ezsignsignatureattachmenttotal->valuedouble,
        i_ezsigndocument_ezsigndiscussiontotal->valuedouble
        );

    return ezsigndocument_response_local_var;
end:
    if (e_ezsigndocument_step_local_nonprim) {
        field_e_ezsigndocument_step_free(e_ezsigndocument_step_local_nonprim);
        e_ezsigndocument_step_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
