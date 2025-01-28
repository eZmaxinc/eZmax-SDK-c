#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_response_compound_v3.h"



static ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_create_internal(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_response_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e e_ezsignfolder_access,
    custom_timezone_with_code_response_t *obj_timezone
    ) {
    ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_local_var = malloc(sizeof(ezsignfolder_response_compound_v3_t));
    if (!ezsignfolder_response_compound_v3_local_var) {
        return NULL;
    }
    ezsignfolder_response_compound_v3_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_response_compound_v3_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_response_compound_v3_local_var->obj_ezsignfoldertype = obj_ezsignfoldertype;
    ezsignfolder_response_compound_v3_local_var->fki_timezone_id = fki_timezone_id;
    ezsignfolder_response_compound_v3_local_var->e_ezsignfolder_completion = e_ezsignfolder_completion;
    ezsignfolder_response_compound_v3_local_var->e_ezsignfolder_documentdependency = e_ezsignfolder_documentdependency;
    ezsignfolder_response_compound_v3_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_response_compound_v3_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfolder_response_compound_v3_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfolder_response_compound_v3_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_response_compound_v3_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfolder_response_compound_v3_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_response_compound_v3_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_response_compound_v3_local_var->b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    ezsignfolder_response_compound_v3_local_var->i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    ezsignfolder_response_compound_v3_local_var->i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    ezsignfolder_response_compound_v3_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_response_compound_v3_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_response_compound_v3_local_var->t_ezsignfolder_message = t_ezsignfolder_message;
    ezsignfolder_response_compound_v3_local_var->obj_audit = obj_audit;
    ezsignfolder_response_compound_v3_local_var->s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    ezsignfolder_response_compound_v3_local_var->e_ezsignfolder_access = e_ezsignfolder_access;
    ezsignfolder_response_compound_v3_local_var->obj_timezone = obj_timezone;

    ezsignfolder_response_compound_v3_local_var->_library_owned = 1;
    return ezsignfolder_response_compound_v3_local_var;
}

__attribute__((deprecated)) ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    custom_ezsignfoldertype_response_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion,
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e e_ezsignfolder_access,
    custom_timezone_with_code_response_t *obj_timezone
    ) {
    return ezsignfolder_response_compound_v3_create_internal (
        pki_ezsignfolder_id,
        fki_ezsignfoldertype_id,
        obj_ezsignfoldertype,
        fki_timezone_id,
        e_ezsignfolder_completion,
        e_ezsignfolder_documentdependency,
        s_ezsignfoldertype_name_x,
        fki_billingentityinternal_id,
        s_billingentityinternal_description_x,
        fki_ezsigntsarequirement_id,
        s_ezsigntsarequirement_description_x,
        s_ezsignfolder_description,
        t_ezsignfolder_note,
        b_ezsignfolder_isdisposable,
        i_ezsignfolder_sendreminderfirstdays,
        i_ezsignfolder_sendreminderotherdays,
        dt_ezsignfolder_delayedsenddate,
        dt_ezsignfolder_duedate,
        dt_ezsignfolder_sentdate,
        dt_ezsignfolder_scheduledarchive,
        dt_ezsignfolder_scheduleddispose,
        e_ezsignfolder_step,
        dt_ezsignfolder_close,
        t_ezsignfolder_message,
        obj_audit,
        s_ezsignfolder_externalid,
        e_ezsignfolder_access,
        obj_timezone
        );
}

void ezsignfolder_response_compound_v3_free(ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3) {
    if(NULL == ezsignfolder_response_compound_v3){
        return ;
    }
    if(ezsignfolder_response_compound_v3->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_response_compound_v3_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_response_compound_v3->obj_ezsignfoldertype) {
        custom_ezsignfoldertype_response_free(ezsignfolder_response_compound_v3->obj_ezsignfoldertype);
        ezsignfolder_response_compound_v3->obj_ezsignfoldertype = NULL;
    }
    if (ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x);
        ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_response_compound_v3->s_billingentityinternal_description_x) {
        free(ezsignfolder_response_compound_v3->s_billingentityinternal_description_x);
        ezsignfolder_response_compound_v3->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x) {
        free(ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x);
        ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfolder_response_compound_v3->s_ezsignfolder_description) {
        free(ezsignfolder_response_compound_v3->s_ezsignfolder_description);
        ezsignfolder_response_compound_v3->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_response_compound_v3->t_ezsignfolder_note) {
        free(ezsignfolder_response_compound_v3->t_ezsignfolder_note);
        ezsignfolder_response_compound_v3->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose = NULL;
    }
    if (ezsignfolder_response_compound_v3->dt_ezsignfolder_close) {
        free(ezsignfolder_response_compound_v3->dt_ezsignfolder_close);
        ezsignfolder_response_compound_v3->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_response_compound_v3->t_ezsignfolder_message) {
        free(ezsignfolder_response_compound_v3->t_ezsignfolder_message);
        ezsignfolder_response_compound_v3->t_ezsignfolder_message = NULL;
    }
    if (ezsignfolder_response_compound_v3->obj_audit) {
        common_audit_free(ezsignfolder_response_compound_v3->obj_audit);
        ezsignfolder_response_compound_v3->obj_audit = NULL;
    }
    if (ezsignfolder_response_compound_v3->s_ezsignfolder_externalid) {
        free(ezsignfolder_response_compound_v3->s_ezsignfolder_externalid);
        ezsignfolder_response_compound_v3->s_ezsignfolder_externalid = NULL;
    }
    if (ezsignfolder_response_compound_v3->obj_timezone) {
        custom_timezone_with_code_response_free(ezsignfolder_response_compound_v3->obj_timezone);
        ezsignfolder_response_compound_v3->obj_timezone = NULL;
    }
    free(ezsignfolder_response_compound_v3);
}

cJSON *ezsignfolder_response_compound_v3_convertToJSON(ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_response_compound_v3->pki_ezsignfolder_id
    if (!ezsignfolder_response_compound_v3->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_response_compound_v3->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_compound_v3->fki_ezsignfoldertype_id
    if(ezsignfolder_response_compound_v3->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_response_compound_v3->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->obj_ezsignfoldertype
    if(ezsignfolder_response_compound_v3->obj_ezsignfoldertype) {
    cJSON *obj_ezsignfoldertype_local_JSON = custom_ezsignfoldertype_response_convertToJSON(ezsignfolder_response_compound_v3->obj_ezsignfoldertype);
    if(obj_ezsignfoldertype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertype", obj_ezsignfoldertype_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_response_compound_v3->fki_timezone_id
    if(ezsignfolder_response_compound_v3->fki_timezone_id) {
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", ezsignfolder_response_compound_v3->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->e_ezsignfolder_completion
    if (ezmax_api_definition__full_field_e_ezsignfolder_completion__NULL == ezsignfolder_response_compound_v3->e_ezsignfolder_completion) {
        goto fail;
    }
    cJSON *e_ezsignfolder_completion_local_JSON = field_e_ezsignfolder_completion_convertToJSON(ezsignfolder_response_compound_v3->e_ezsignfolder_completion);
    if(e_ezsignfolder_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderCompletion", e_ezsignfolder_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_response_compound_v3->e_ezsignfolder_documentdependency
    if(ezsignfolder_response_compound_v3->e_ezsignfolder_documentdependency != ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__NULL) {
    cJSON *e_ezsignfolder_documentdependency_local_JSON = field_e_ezsignfolder_documentdependency_convertToJSON(ezsignfolder_response_compound_v3->e_ezsignfolder_documentdependency);
    if(e_ezsignfolder_documentdependency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderDocumentdependency", e_ezsignfolder_documentdependency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x
    if(ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->fki_billingentityinternal_id
    if(ezsignfolder_response_compound_v3->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfolder_response_compound_v3->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->s_billingentityinternal_description_x
    if(ezsignfolder_response_compound_v3->s_billingentityinternal_description_x) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfolder_response_compound_v3->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->fki_ezsigntsarequirement_id
    if(ezsignfolder_response_compound_v3->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_response_compound_v3->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x
    if(ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->s_ezsignfolder_description
    if (!ezsignfolder_response_compound_v3->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_response_compound_v3->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound_v3->t_ezsignfolder_note
    if(ezsignfolder_response_compound_v3->t_ezsignfolder_note) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_response_compound_v3->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->b_ezsignfolder_isdisposable
    if(ezsignfolder_response_compound_v3->b_ezsignfolder_isdisposable) {
    if(cJSON_AddBoolToObject(item, "bEzsignfolderIsdisposable", ezsignfolder_response_compound_v3->b_ezsignfolder_isdisposable) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderfirstdays
    if(ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderfirstdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderotherdays
    if(ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderotherdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDelayedsenddate", ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDuedate", ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduledarchive", ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduleddispose", ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->e_ezsignfolder_step
    if(ezsignfolder_response_compound_v3->e_ezsignfolder_step != ezmax_api_definition__full_field_e_ezsignfolder_step__NULL) {
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_response_compound_v3->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_response_compound_v3->dt_ezsignfolder_close
    if(ezsignfolder_response_compound_v3->dt_ezsignfolder_close) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_response_compound_v3->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->t_ezsignfolder_message
    if(ezsignfolder_response_compound_v3->t_ezsignfolder_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderMessage", ezsignfolder_response_compound_v3->t_ezsignfolder_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->obj_audit
    if(ezsignfolder_response_compound_v3->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfolder_response_compound_v3->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_response_compound_v3->s_ezsignfolder_externalid
    if(ezsignfolder_response_compound_v3->s_ezsignfolder_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsignfolderExternalid", ezsignfolder_response_compound_v3->s_ezsignfolder_externalid) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound_v3->e_ezsignfolder_access
    if(ezsignfolder_response_compound_v3->e_ezsignfolder_access != ezmax_api_definition__full_computed_e_ezsignfolder_access__NULL) {
    cJSON *e_ezsignfolder_access_local_JSON = computed_e_ezsignfolder_access_convertToJSON(ezsignfolder_response_compound_v3->e_ezsignfolder_access);
    if(e_ezsignfolder_access_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderAccess", e_ezsignfolder_access_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_response_compound_v3->obj_timezone
    if(ezsignfolder_response_compound_v3->obj_timezone) {
    cJSON *obj_timezone_local_JSON = custom_timezone_with_code_response_convertToJSON(ezsignfolder_response_compound_v3->obj_timezone);
    if(obj_timezone_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTimezone", obj_timezone_local_JSON);
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

ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_parseFromJSON(cJSON *ezsignfolder_response_compound_v3JSON){

    ezsignfolder_response_compound_v3_t *ezsignfolder_response_compound_v3_local_var = NULL;

    // define the local variable for ezsignfolder_response_compound_v3->obj_ezsignfoldertype
    custom_ezsignfoldertype_response_t *obj_ezsignfoldertype_local_nonprim = NULL;

    // define the local variable for ezsignfolder_response_compound_v3->e_ezsignfolder_completion
    ezmax_api_definition__full_field_e_ezsignfolder_completion__e e_ezsignfolder_completion_local_nonprim = 0;

    // define the local variable for ezsignfolder_response_compound_v3->e_ezsignfolder_documentdependency
    ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e e_ezsignfolder_documentdependency_local_nonprim = 0;

    // define the local variable for ezsignfolder_response_compound_v3->e_ezsignfolder_step
    ezmax_api_definition__full_field_e_ezsignfolder_step__e e_ezsignfolder_step_local_nonprim = 0;

    // define the local variable for ezsignfolder_response_compound_v3->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezsignfolder_response_compound_v3->e_ezsignfolder_access
    ezmax_api_definition__full_computed_e_ezsignfolder_access__e e_ezsignfolder_access_local_nonprim = 0;

    // define the local variable for ezsignfolder_response_compound_v3->obj_timezone
    custom_timezone_with_code_response_t *obj_timezone_local_nonprim = NULL;

    // ezsignfolder_response_compound_v3->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "pkiEzsignfolderID");
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

    // ezsignfolder_response_compound_v3->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->obj_ezsignfoldertype
    cJSON *obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "objEzsignfoldertype");
    if (cJSON_IsNull(obj_ezsignfoldertype)) {
        obj_ezsignfoldertype = NULL;
    }
    if (obj_ezsignfoldertype) { 
    obj_ezsignfoldertype_local_nonprim = custom_ezsignfoldertype_response_parseFromJSON(obj_ezsignfoldertype); //nonprimitive
    }

    // ezsignfolder_response_compound_v3->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "fkiTimezoneID");
    if (cJSON_IsNull(fki_timezone_id)) {
        fki_timezone_id = NULL;
    }
    if (fki_timezone_id) { 
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->e_ezsignfolder_completion
    cJSON *e_ezsignfolder_completion = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "eEzsignfolderCompletion");
    if (cJSON_IsNull(e_ezsignfolder_completion)) {
        e_ezsignfolder_completion = NULL;
    }
    if (!e_ezsignfolder_completion) {
        goto end;
    }

    
    e_ezsignfolder_completion_local_nonprim = field_e_ezsignfolder_completion_parseFromJSON(e_ezsignfolder_completion); //custom

    // ezsignfolder_response_compound_v3->e_ezsignfolder_documentdependency
    cJSON *e_ezsignfolder_documentdependency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "eEzsignfolderDocumentdependency");
    if (cJSON_IsNull(e_ezsignfolder_documentdependency)) {
        e_ezsignfolder_documentdependency = NULL;
    }
    if (e_ezsignfolder_documentdependency) { 
    e_ezsignfolder_documentdependency_local_nonprim = field_e_ezsignfolder_documentdependency_parseFromJSON(e_ezsignfolder_documentdependency); //custom
    }

    // ezsignfolder_response_compound_v3->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "sBillingentityinternalDescriptionX");
    if (cJSON_IsNull(s_billingentityinternal_description_x)) {
        s_billingentityinternal_description_x = NULL;
    }
    if (s_billingentityinternal_description_x) { 
    if(!cJSON_IsString(s_billingentityinternal_description_x) && !cJSON_IsNull(s_billingentityinternal_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "fkiEzsigntsarequirementID");
    if (cJSON_IsNull(fki_ezsigntsarequirement_id)) {
        fki_ezsigntsarequirement_id = NULL;
    }
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "sEzsigntsarequirementDescriptionX");
    if (cJSON_IsNull(s_ezsigntsarequirement_description_x)) {
        s_ezsigntsarequirement_description_x = NULL;
    }
    if (s_ezsigntsarequirement_description_x) { 
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x) && !cJSON_IsNull(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "sEzsignfolderDescription");
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

    // ezsignfolder_response_compound_v3->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "tEzsignfolderNote");
    if (cJSON_IsNull(t_ezsignfolder_note)) {
        t_ezsignfolder_note = NULL;
    }
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->b_ezsignfolder_isdisposable
    cJSON *b_ezsignfolder_isdisposable = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "bEzsignfolderIsdisposable");
    if (cJSON_IsNull(b_ezsignfolder_isdisposable)) {
        b_ezsignfolder_isdisposable = NULL;
    }
    if (b_ezsignfolder_isdisposable) { 
    if(!cJSON_IsBool(b_ezsignfolder_isdisposable))
    {
    goto end; //Bool
    }
    }

    // ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderfirstdays
    cJSON *i_ezsignfolder_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "iEzsignfolderSendreminderfirstdays");
    if (cJSON_IsNull(i_ezsignfolder_sendreminderfirstdays)) {
        i_ezsignfolder_sendreminderfirstdays = NULL;
    }
    if (i_ezsignfolder_sendreminderfirstdays) { 
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->i_ezsignfolder_sendreminderotherdays
    cJSON *i_ezsignfolder_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "iEzsignfolderSendreminderotherdays");
    if (cJSON_IsNull(i_ezsignfolder_sendreminderotherdays)) {
        i_ezsignfolder_sendreminderotherdays = NULL;
    }
    if (i_ezsignfolder_sendreminderotherdays) { 
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderDelayedsenddate");
    if (cJSON_IsNull(dt_ezsignfolder_delayedsenddate)) {
        dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderDuedate");
    if (cJSON_IsNull(dt_ezsignfolder_duedate)) {
        dt_ezsignfolder_duedate = NULL;
    }
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate) && !cJSON_IsNull(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderSentdate");
    if (cJSON_IsNull(dt_ezsignfolder_sentdate)) {
        dt_ezsignfolder_sentdate = NULL;
    }
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate) && !cJSON_IsNull(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduledarchive
    cJSON *dt_ezsignfolder_scheduledarchive = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderScheduledarchive");
    if (cJSON_IsNull(dt_ezsignfolder_scheduledarchive)) {
        dt_ezsignfolder_scheduledarchive = NULL;
    }
    if (dt_ezsignfolder_scheduledarchive) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduledarchive) && !cJSON_IsNull(dt_ezsignfolder_scheduledarchive))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_scheduleddispose
    cJSON *dt_ezsignfolder_scheduleddispose = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderScheduleddispose");
    if (cJSON_IsNull(dt_ezsignfolder_scheduleddispose)) {
        dt_ezsignfolder_scheduleddispose = NULL;
    }
    if (dt_ezsignfolder_scheduleddispose) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduleddispose) && !cJSON_IsNull(dt_ezsignfolder_scheduleddispose))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "eEzsignfolderStep");
    if (cJSON_IsNull(e_ezsignfolder_step)) {
        e_ezsignfolder_step = NULL;
    }
    if (e_ezsignfolder_step) { 
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom
    }

    // ezsignfolder_response_compound_v3->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "dtEzsignfolderClose");
    if (cJSON_IsNull(dt_ezsignfolder_close)) {
        dt_ezsignfolder_close = NULL;
    }
    if (dt_ezsignfolder_close) { 
    if(!cJSON_IsString(dt_ezsignfolder_close) && !cJSON_IsNull(dt_ezsignfolder_close))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "tEzsignfolderMessage");
    if (cJSON_IsNull(t_ezsignfolder_message)) {
        t_ezsignfolder_message = NULL;
    }
    if (t_ezsignfolder_message) { 
    if(!cJSON_IsString(t_ezsignfolder_message) && !cJSON_IsNull(t_ezsignfolder_message))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezsignfolder_response_compound_v3->s_ezsignfolder_externalid
    cJSON *s_ezsignfolder_externalid = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "sEzsignfolderExternalid");
    if (cJSON_IsNull(s_ezsignfolder_externalid)) {
        s_ezsignfolder_externalid = NULL;
    }
    if (s_ezsignfolder_externalid) { 
    if(!cJSON_IsString(s_ezsignfolder_externalid) && !cJSON_IsNull(s_ezsignfolder_externalid))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound_v3->e_ezsignfolder_access
    cJSON *e_ezsignfolder_access = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "eEzsignfolderAccess");
    if (cJSON_IsNull(e_ezsignfolder_access)) {
        e_ezsignfolder_access = NULL;
    }
    if (e_ezsignfolder_access) { 
    e_ezsignfolder_access_local_nonprim = computed_e_ezsignfolder_access_parseFromJSON(e_ezsignfolder_access); //custom
    }

    // ezsignfolder_response_compound_v3->obj_timezone
    cJSON *obj_timezone = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compound_v3JSON, "objTimezone");
    if (cJSON_IsNull(obj_timezone)) {
        obj_timezone = NULL;
    }
    if (obj_timezone) { 
    obj_timezone_local_nonprim = custom_timezone_with_code_response_parseFromJSON(obj_timezone); //nonprimitive
    }


    ezsignfolder_response_compound_v3_local_var = ezsignfolder_response_compound_v3_create_internal (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        obj_ezsignfoldertype ? obj_ezsignfoldertype_local_nonprim : NULL,
        fki_timezone_id ? fki_timezone_id->valuedouble : 0,
        e_ezsignfolder_completion_local_nonprim,
        e_ezsignfolder_documentdependency ? e_ezsignfolder_documentdependency_local_nonprim : 0,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x) ? strdup(s_billingentityinternal_description_x->valuestring) : NULL,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        s_ezsigntsarequirement_description_x && !cJSON_IsNull(s_ezsigntsarequirement_description_x) ? strdup(s_ezsigntsarequirement_description_x->valuestring) : NULL,
        strdup(s_ezsignfolder_description->valuestring),
        t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note) ? strdup(t_ezsignfolder_note->valuestring) : NULL,
        b_ezsignfolder_isdisposable ? b_ezsignfolder_isdisposable->valueint : 0,
        i_ezsignfolder_sendreminderfirstdays ? i_ezsignfolder_sendreminderfirstdays->valuedouble : 0,
        i_ezsignfolder_sendreminderotherdays ? i_ezsignfolder_sendreminderotherdays->valuedouble : 0,
        dt_ezsignfolder_delayedsenddate && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate) ? strdup(dt_ezsignfolder_delayedsenddate->valuestring) : NULL,
        dt_ezsignfolder_duedate && !cJSON_IsNull(dt_ezsignfolder_duedate) ? strdup(dt_ezsignfolder_duedate->valuestring) : NULL,
        dt_ezsignfolder_sentdate && !cJSON_IsNull(dt_ezsignfolder_sentdate) ? strdup(dt_ezsignfolder_sentdate->valuestring) : NULL,
        dt_ezsignfolder_scheduledarchive && !cJSON_IsNull(dt_ezsignfolder_scheduledarchive) ? strdup(dt_ezsignfolder_scheduledarchive->valuestring) : NULL,
        dt_ezsignfolder_scheduleddispose && !cJSON_IsNull(dt_ezsignfolder_scheduleddispose) ? strdup(dt_ezsignfolder_scheduleddispose->valuestring) : NULL,
        e_ezsignfolder_step ? e_ezsignfolder_step_local_nonprim : 0,
        dt_ezsignfolder_close && !cJSON_IsNull(dt_ezsignfolder_close) ? strdup(dt_ezsignfolder_close->valuestring) : NULL,
        t_ezsignfolder_message && !cJSON_IsNull(t_ezsignfolder_message) ? strdup(t_ezsignfolder_message->valuestring) : NULL,
        obj_audit ? obj_audit_local_nonprim : NULL,
        s_ezsignfolder_externalid && !cJSON_IsNull(s_ezsignfolder_externalid) ? strdup(s_ezsignfolder_externalid->valuestring) : NULL,
        e_ezsignfolder_access ? e_ezsignfolder_access_local_nonprim : 0,
        obj_timezone ? obj_timezone_local_nonprim : NULL
        );

    return ezsignfolder_response_compound_v3_local_var;
end:
    if (obj_ezsignfoldertype_local_nonprim) {
        custom_ezsignfoldertype_response_free(obj_ezsignfoldertype_local_nonprim);
        obj_ezsignfoldertype_local_nonprim = NULL;
    }
    if (e_ezsignfolder_completion_local_nonprim) {
        e_ezsignfolder_completion_local_nonprim = 0;
    }
    if (e_ezsignfolder_documentdependency_local_nonprim) {
        e_ezsignfolder_documentdependency_local_nonprim = 0;
    }
    if (e_ezsignfolder_step_local_nonprim) {
        e_ezsignfolder_step_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (e_ezsignfolder_access_local_nonprim) {
        e_ezsignfolder_access_local_nonprim = 0;
    }
    if (obj_timezone_local_nonprim) {
        custom_timezone_with_code_response_free(obj_timezone_local_nonprim);
        obj_timezone_local_nonprim = NULL;
    }
    return NULL;

}
