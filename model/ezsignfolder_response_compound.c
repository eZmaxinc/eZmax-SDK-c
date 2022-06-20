#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_response_compound.h"


char* e_ezsignfolder_sendreminderfrequencyezsignfolder_response_compound_ToString(ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_sendreminderfrequencyezsignfolder_response_compound_FromString(char* e_ezsignfolder_sendreminderfrequency){
    int stringToReturn = 0;
    char *e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    size_t sizeofArray = sizeof(e_ezsignfolder_sendreminderfrequencyArray) / sizeof(e_ezsignfolder_sendreminderfrequencyArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_sendreminderfrequency, e_ezsignfolder_sendreminderfrequencyArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_ezsignfolder_stepezsignfolder_response_compound_ToString(ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
	return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition__full_ezsignfolder_response_compound__e e_ezsignfolder_stepezsignfolder_response_compound_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_response_compound_t *ezsignfolder_response_compound_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
    ) {
    ezsignfolder_response_compound_t *ezsignfolder_response_compound_local_var = malloc(sizeof(ezsignfolder_response_compound_t));
    if (!ezsignfolder_response_compound_local_var) {
        return NULL;
    }
    ezsignfolder_response_compound_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_response_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfolder_response_compound_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfolder_response_compound_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_response_compound_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfolder_response_compound_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_response_compound_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_response_compound_local_var->b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    ezsignfolder_response_compound_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignfolder_response_compound_local_var->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    ezsignfolder_response_compound_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_response_compound_local_var->dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    ezsignfolder_response_compound_local_var->dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    ezsignfolder_response_compound_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_response_compound_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_response_compound_local_var->obj_audit = obj_audit;

    return ezsignfolder_response_compound_local_var;
}


void ezsignfolder_response_compound_free(ezsignfolder_response_compound_t *ezsignfolder_response_compound) {
    if(NULL == ezsignfolder_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_response_compound->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_response_compound->s_ezsignfoldertype_name_x);
        ezsignfolder_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_response_compound->s_billingentityinternal_description_x) {
        free(ezsignfolder_response_compound->s_billingentityinternal_description_x);
        ezsignfolder_response_compound->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfolder_response_compound->s_ezsigntsarequirement_description_x) {
        free(ezsignfolder_response_compound->s_ezsigntsarequirement_description_x);
        ezsignfolder_response_compound->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfolder_response_compound->s_ezsignfolder_description) {
        free(ezsignfolder_response_compound->s_ezsignfolder_description);
        ezsignfolder_response_compound->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_response_compound->t_ezsignfolder_note) {
        free(ezsignfolder_response_compound->t_ezsignfolder_note);
        ezsignfolder_response_compound->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency) {
        field_e_ezsignfolder_sendreminderfrequency_free(ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency);
        ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency = NULL;
    }
    if (ezsignfolder_response_compound->dt_ezsignfolder_duedate) {
        free(ezsignfolder_response_compound->dt_ezsignfolder_duedate);
        ezsignfolder_response_compound->dt_ezsignfolder_duedate = NULL;
    }
    if (ezsignfolder_response_compound->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_response_compound->dt_ezsignfolder_sentdate);
        ezsignfolder_response_compound->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive) {
        free(ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive);
        ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive = NULL;
    }
    if (ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose) {
        free(ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose);
        ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose = NULL;
    }
    if (ezsignfolder_response_compound->e_ezsignfolder_step) {
        field_e_ezsignfolder_step_free(ezsignfolder_response_compound->e_ezsignfolder_step);
        ezsignfolder_response_compound->e_ezsignfolder_step = NULL;
    }
    if (ezsignfolder_response_compound->dt_ezsignfolder_close) {
        free(ezsignfolder_response_compound->dt_ezsignfolder_close);
        ezsignfolder_response_compound->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_response_compound->obj_audit) {
        common_audit_free(ezsignfolder_response_compound->obj_audit);
        ezsignfolder_response_compound->obj_audit = NULL;
    }
    free(ezsignfolder_response_compound);
}

cJSON *ezsignfolder_response_compound_convertToJSON(ezsignfolder_response_compound_t *ezsignfolder_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_response_compound->pki_ezsignfolder_id
    if (!ezsignfolder_response_compound->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_response_compound->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_compound->fki_ezsignfoldertype_id
    if (!ezsignfolder_response_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_compound->s_ezsignfoldertype_name_x
    if (!ezsignfolder_response_compound->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->fki_billingentityinternal_id
    if (!ezsignfolder_response_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfolder_response_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_compound->s_billingentityinternal_description_x
    if (!ezsignfolder_response_compound->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfolder_response_compound->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->fki_ezsigntsarequirement_id
    if (!ezsignfolder_response_compound->fki_ezsigntsarequirement_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_response_compound->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_compound->s_ezsigntsarequirement_description_x
    if (!ezsignfolder_response_compound->s_ezsigntsarequirement_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfolder_response_compound->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->s_ezsignfolder_description
    if (!ezsignfolder_response_compound->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_response_compound->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->t_ezsignfolder_note
    if (!ezsignfolder_response_compound->t_ezsignfolder_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_response_compound->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->b_ezsignfolder_isdisposable
    if (!ezsignfolder_response_compound->b_ezsignfolder_isdisposable) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfolderIsdisposable", ezsignfolder_response_compound->b_ezsignfolder_isdisposable) == NULL) {
    goto fail; //Bool
    }


    // ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency
    if (ezmax_api_definition__full_ezsignfolder_response_compound__NULL == ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency) {
        goto fail;
    }
    cJSON *e_ezsignfolder_sendreminderfrequency_local_JSON = field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency);
    if(e_ezsignfolder_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSendreminderfrequency", e_ezsignfolder_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_response_compound->dt_ezsignfolder_duedate
    if(ezsignfolder_response_compound->dt_ezsignfolder_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDuedate", ezsignfolder_response_compound->dt_ezsignfolder_duedate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound->dt_ezsignfolder_sentdate
    if(ezsignfolder_response_compound->dt_ezsignfolder_sentdate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_response_compound->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive
    if(ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduledarchive", ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose
    if(ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduleddispose", ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_response_compound->e_ezsignfolder_step
    if (ezmax_api_definition__full_ezsignfolder_response_compound__NULL == ezsignfolder_response_compound->e_ezsignfolder_step) {
        goto fail;
    }
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_response_compound->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_response_compound->dt_ezsignfolder_close
    if (!ezsignfolder_response_compound->dt_ezsignfolder_close) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_response_compound->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_compound->obj_audit
    if (!ezsignfolder_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfolder_response_compound->obj_audit);
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

ezsignfolder_response_compound_t *ezsignfolder_response_compound_parseFromJSON(cJSON *ezsignfolder_response_compoundJSON){

    ezsignfolder_response_compound_t *ezsignfolder_response_compound_local_var = NULL;

    // define the local variable for ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfolder_response_compound->e_ezsignfolder_step
    field_e_ezsignfolder_step_t *e_ezsignfolder_step_local_nonprim = NULL;

    // define the local variable for ezsignfolder_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignfolder_response_compound->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "fkiBillingentityinternalID");
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_compound->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "sBillingentityinternalDescriptionX");
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "fkiEzsigntsarequirementID");
    if (!fki_ezsigntsarequirement_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_compound->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "sEzsigntsarequirementDescriptionX");
    if (!s_ezsigntsarequirement_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "tEzsignfolderNote");
    if (!t_ezsignfolder_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfolder_note))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->b_ezsignfolder_isdisposable
    cJSON *b_ezsignfolder_isdisposable = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "bEzsignfolderIsdisposable");
    if (!b_ezsignfolder_isdisposable) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfolder_isdisposable))
    {
    goto end; //Bool
    }

    // ezsignfolder_response_compound->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "eEzsignfolderSendreminderfrequency");
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }

    
    e_ezsignfolder_sendreminderfrequency_local_nonprim = field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(e_ezsignfolder_sendreminderfrequency); //custom

    // ezsignfolder_response_compound->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "dtEzsignfolderDuedate");
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "dtEzsignfolderSentdate");
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound->dt_ezsignfolder_scheduledarchive
    cJSON *dt_ezsignfolder_scheduledarchive = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "dtEzsignfolderScheduledarchive");
    if (dt_ezsignfolder_scheduledarchive) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduledarchive))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound->dt_ezsignfolder_scheduleddispose
    cJSON *dt_ezsignfolder_scheduleddispose = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "dtEzsignfolderScheduleddispose");
    if (dt_ezsignfolder_scheduleddispose) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduleddispose))
    {
    goto end; //String
    }
    }

    // ezsignfolder_response_compound->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // ezsignfolder_response_compound->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "dtEzsignfolderClose");
    if (!dt_ezsignfolder_close) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_close))
    {
    goto end; //String
    }

    // ezsignfolder_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignfolder_response_compound_local_var = ezsignfolder_response_compound_create (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        fki_ezsigntsarequirement_id->valuedouble,
        strdup(s_ezsigntsarequirement_description_x->valuestring),
        strdup(s_ezsignfolder_description->valuestring),
        strdup(t_ezsignfolder_note->valuestring),
        b_ezsignfolder_isdisposable->valueint,
        e_ezsignfolder_sendreminderfrequency_local_nonprim,
        dt_ezsignfolder_duedate ? strdup(dt_ezsignfolder_duedate->valuestring) : NULL,
        dt_ezsignfolder_sentdate ? strdup(dt_ezsignfolder_sentdate->valuestring) : NULL,
        dt_ezsignfolder_scheduledarchive ? strdup(dt_ezsignfolder_scheduledarchive->valuestring) : NULL,
        dt_ezsignfolder_scheduleddispose ? strdup(dt_ezsignfolder_scheduleddispose->valuestring) : NULL,
        e_ezsignfolder_step_local_nonprim,
        strdup(dt_ezsignfolder_close->valuestring),
        obj_audit_local_nonprim
        );

    return ezsignfolder_response_compound_local_var;
end:
    if (e_ezsignfolder_sendreminderfrequency_local_nonprim) {
        field_e_ezsignfolder_sendreminderfrequency_free(e_ezsignfolder_sendreminderfrequency_local_nonprim);
        e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;
    }
    if (e_ezsignfolder_step_local_nonprim) {
        field_e_ezsignfolder_step_free(e_ezsignfolder_step_local_nonprim);
        e_ezsignfolder_step_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
