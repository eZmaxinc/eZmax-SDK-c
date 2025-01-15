#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_object_v1_response_m_payload.h"


char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_completion_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_completion) {
    char* e_ezsignfolder_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    return e_ezsignfolder_completionArray[e_ezsignfolder_completion];
}

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_completion_FromString(char* e_ezsignfolder_completion){
    int stringToReturn = 0;
    char *e_ezsignfolder_completionArray[] =  { "NULL", "PerEzsigndocument", "PerEzsignfolder" };
    size_t sizeofArray = sizeof(e_ezsignfolder_completionArray) / sizeof(e_ezsignfolder_completionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_completion, e_ezsignfolder_completionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
    return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_sendreminderfrequency_FromString(char* e_ezsignfolder_sendreminderfrequency){
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
char* ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_ToString(ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__e ezsignfolder_get_object_v1_response_m_payload_e_ezsignfolder_step_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "PendingSend", "Sent", "PartiallySigned", "Expired", "Completed", "Archived", "Disposed" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_create(
    int pki_ezsignfolder_id,
    int fki_ezsignfoldertype_id,
    object_t *obj_ezsignfoldertype,
    int fki_timezone_id,
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion,
    char *s_ezsignfoldertype_name_x,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_ezsigntsarequirement_id,
    char *s_ezsigntsarequirement_description_x,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int b_ezsignfolder_isdisposable,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    int i_ezsignfolder_sendreminderfirstdays,
    int i_ezsignfolder_sendreminderotherdays,
    char *dt_ezsignfolder_delayedsenddate,
    char *dt_ezsignfolder_duedate,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_scheduledarchive,
    char *dt_ezsignfolder_scheduleddispose,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    char *t_ezsignfolder_message,
    common_audit_t *obj_audit,
    char *s_ezsignfolder_externalid,
    custom_timezone_with_code_response_t *obj_timezone
    ) {
    ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_object_v1_response_m_payload_t));
    if (!ezsignfolder_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_object_v1_response_m_payload_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->obj_ezsignfoldertype = obj_ezsignfoldertype;
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_timezone_id = fki_timezone_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->e_ezsignfolder_completion = e_ezsignfolder_completion;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_get_object_v1_response_m_payload_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_get_object_v1_response_m_payload_local_var->b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    ezsignfolder_get_object_v1_response_m_payload_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignfolder_get_object_v1_response_m_payload_local_var->i_ezsignfolder_sendreminderfirstdays = i_ezsignfolder_sendreminderfirstdays;
    ezsignfolder_get_object_v1_response_m_payload_local_var->i_ezsignfolder_sendreminderotherdays = i_ezsignfolder_sendreminderotherdays;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    ezsignfolder_get_object_v1_response_m_payload_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_get_object_v1_response_m_payload_local_var->t_ezsignfolder_message = t_ezsignfolder_message;
    ezsignfolder_get_object_v1_response_m_payload_local_var->obj_audit = obj_audit;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    ezsignfolder_get_object_v1_response_m_payload_local_var->obj_timezone = obj_timezone;

    return ezsignfolder_get_object_v1_response_m_payload_local_var;
}


void ezsignfolder_get_object_v1_response_m_payload_free(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype) {
        object_free(ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype);
        ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion) {
        field_e_ezsignfolder_completion_free(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion);
        ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
        free(ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x);
        ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x) {
        free(ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x);
        ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) {
        free(ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x);
        ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description) {
        free(ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description);
        ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note) {
        free(ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note);
        ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency) {
        field_e_ezsignfolder_sendreminderfrequency_free(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency);
        ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step) {
        field_e_ezsignfolder_step_free(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step);
        ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message) {
        free(ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message);
        ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->obj_audit) {
        common_audit_free(ezsignfolder_get_object_v1_response_m_payload->obj_audit);
        ezsignfolder_get_object_v1_response_m_payload->obj_audit = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid) {
        free(ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid);
        ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->obj_timezone) {
        custom_timezone_with_code_response_free(ezsignfolder_get_object_v1_response_m_payload->obj_timezone);
        ezsignfolder_get_object_v1_response_m_payload->obj_timezone = NULL;
    }
    free(ezsignfolder_get_object_v1_response_m_payload);
}

cJSON *ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id
    if (!ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    if(ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype
    if(ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype) {
    cJSON *obj_ezsignfoldertype_local_JSON = object_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype);
    if(obj_ezsignfoldertype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertype", obj_ezsignfoldertype_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->fki_timezone_id
    if(ezsignfolder_get_object_v1_response_m_payload->fki_timezone_id) {
    if(cJSON_AddNumberToObject(item, "fkiTimezoneID", ezsignfolder_get_object_v1_response_m_payload->fki_timezone_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion
    if (ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL == ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion) {
        goto fail;
    }
    cJSON *e_ezsignfolder_completion_local_JSON = field_e_ezsignfolder_completion_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion);
    if(e_ezsignfolder_completion_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderCompletion", e_ezsignfolder_completion_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    if(ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->fki_billingentityinternal_id
    if(ezsignfolder_get_object_v1_response_m_payload->fki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezsignfolder_get_object_v1_response_m_payload->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x
    if(ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x) {
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    if(ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x
    if(ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) {
    if(cJSON_AddStringToObject(item, "sEzsigntsarequirementDescriptionX", ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description
    if (!ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note
    if(ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->b_ezsignfolder_isdisposable
    if(ezsignfolder_get_object_v1_response_m_payload->b_ezsignfolder_isdisposable) {
    if(cJSON_AddBoolToObject(item, "bEzsignfolderIsdisposable", ezsignfolder_get_object_v1_response_m_payload->b_ezsignfolder_isdisposable) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    if(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency != ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignfolder_sendreminderfrequency_local_JSON = field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency);
    if(e_ezsignfolder_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSendreminderfrequency", e_ezsignfolder_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderfirstdays
    if(ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderfirstdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderfirstdays", ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderfirstdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderotherdays
    if(ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderotherdays) {
    if(cJSON_AddNumberToObject(item, "iEzsignfolderSendreminderotherdays", ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderotherdays) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDelayedsenddate", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderDuedate", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduledarchive", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderScheduleddispose", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    if(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step != ezmax_api_definition__full_ezsignfolder_get_object_v1_response_m_payload__NULL) {
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close
    if(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) {
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message
    if(ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message) {
    if(cJSON_AddStringToObject(item, "tEzsignfolderMessage", ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->obj_audit
    if(ezsignfolder_get_object_v1_response_m_payload->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid
    if(ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid) {
    if(cJSON_AddStringToObject(item, "sEzsignfolderExternalid", ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid) == NULL) {
    goto fail; //String
    }
    }


    // ezsignfolder_get_object_v1_response_m_payload->obj_timezone
    if(ezsignfolder_get_object_v1_response_m_payload->obj_timezone) {
    cJSON *obj_timezone_local_JSON = custom_timezone_with_code_response_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->obj_timezone);
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

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v1_response_m_payloadJSON){

    ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype
    object_t *obj_ezsignfoldertype_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion
    field_e_ezsignfolder_completion_t *e_ezsignfolder_completion_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    field_e_ezsignfolder_step_t *e_ezsignfolder_step_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->obj_timezone
    custom_timezone_with_code_response_t *obj_timezone_local_nonprim = NULL;

    // ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->obj_ezsignfoldertype
    cJSON *obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "objEzsignfoldertype");
    if (obj_ezsignfoldertype) { 
    obj_ezsignfoldertype_local_nonprim = object_parseFromJSON(obj_ezsignfoldertype); //nonprimitive
    }

    // ezsignfolder_get_object_v1_response_m_payload->fki_timezone_id
    cJSON *fki_timezone_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiTimezoneID");
    if (fki_timezone_id) { 
    if(!cJSON_IsNumber(fki_timezone_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_completion
    cJSON *e_ezsignfolder_completion = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "eEzsignfolderCompletion");
    if (!e_ezsignfolder_completion) {
        goto end;
    }

    
    e_ezsignfolder_completion_local_nonprim = field_e_ezsignfolder_completion_parseFromJSON(e_ezsignfolder_completion); //custom

    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "sEzsignfoldertypeNameX");
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiBillingentityinternalID");
    if (fki_billingentityinternal_id) { 
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "sBillingentityinternalDescriptionX");
    if (s_billingentityinternal_description_x) { 
    if(!cJSON_IsString(s_billingentityinternal_description_x) && !cJSON_IsNull(s_billingentityinternal_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiEzsigntsarequirementID");
    if (fki_ezsigntsarequirement_id) { 
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->s_ezsigntsarequirement_description_x
    cJSON *s_ezsigntsarequirement_description_x = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "sEzsigntsarequirementDescriptionX");
    if (s_ezsigntsarequirement_description_x) { 
    if(!cJSON_IsString(s_ezsigntsarequirement_description_x) && !cJSON_IsNull(s_ezsigntsarequirement_description_x))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "tEzsignfolderNote");
    if (t_ezsignfolder_note) { 
    if(!cJSON_IsString(t_ezsignfolder_note) && !cJSON_IsNull(t_ezsignfolder_note))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->b_ezsignfolder_isdisposable
    cJSON *b_ezsignfolder_isdisposable = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "bEzsignfolderIsdisposable");
    if (b_ezsignfolder_isdisposable) { 
    if(!cJSON_IsBool(b_ezsignfolder_isdisposable))
    {
    goto end; //Bool
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "eEzsignfolderSendreminderfrequency");
    if (e_ezsignfolder_sendreminderfrequency) { 
    e_ezsignfolder_sendreminderfrequency_local_nonprim = field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(e_ezsignfolder_sendreminderfrequency); //custom
    }

    // ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderfirstdays
    cJSON *i_ezsignfolder_sendreminderfirstdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "iEzsignfolderSendreminderfirstdays");
    if (i_ezsignfolder_sendreminderfirstdays) { 
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderfirstdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->i_ezsignfolder_sendreminderotherdays
    cJSON *i_ezsignfolder_sendreminderotherdays = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "iEzsignfolderSendreminderotherdays");
    if (i_ezsignfolder_sendreminderotherdays) { 
    if(!cJSON_IsNumber(i_ezsignfolder_sendreminderotherdays))
    {
    goto end; //Numeric
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_delayedsenddate
    cJSON *dt_ezsignfolder_delayedsenddate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderDelayedsenddate");
    if (dt_ezsignfolder_delayedsenddate) { 
    if(!cJSON_IsString(dt_ezsignfolder_delayedsenddate) && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_duedate
    cJSON *dt_ezsignfolder_duedate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderDuedate");
    if (dt_ezsignfolder_duedate) { 
    if(!cJSON_IsString(dt_ezsignfolder_duedate) && !cJSON_IsNull(dt_ezsignfolder_duedate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderSentdate");
    if (dt_ezsignfolder_sentdate) { 
    if(!cJSON_IsString(dt_ezsignfolder_sentdate) && !cJSON_IsNull(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduledarchive
    cJSON *dt_ezsignfolder_scheduledarchive = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderScheduledarchive");
    if (dt_ezsignfolder_scheduledarchive) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduledarchive) && !cJSON_IsNull(dt_ezsignfolder_scheduledarchive))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_scheduleddispose
    cJSON *dt_ezsignfolder_scheduleddispose = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderScheduleddispose");
    if (dt_ezsignfolder_scheduleddispose) { 
    if(!cJSON_IsString(dt_ezsignfolder_scheduleddispose) && !cJSON_IsNull(dt_ezsignfolder_scheduleddispose))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "eEzsignfolderStep");
    if (e_ezsignfolder_step) { 
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderClose");
    if (dt_ezsignfolder_close) { 
    if(!cJSON_IsString(dt_ezsignfolder_close) && !cJSON_IsNull(dt_ezsignfolder_close))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_message
    cJSON *t_ezsignfolder_message = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "tEzsignfolderMessage");
    if (t_ezsignfolder_message) { 
    if(!cJSON_IsString(t_ezsignfolder_message) && !cJSON_IsNull(t_ezsignfolder_message))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "objAudit");
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }

    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_externalid
    cJSON *s_ezsignfolder_externalid = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "sEzsignfolderExternalid");
    if (s_ezsignfolder_externalid) { 
    if(!cJSON_IsString(s_ezsignfolder_externalid) && !cJSON_IsNull(s_ezsignfolder_externalid))
    {
    goto end; //String
    }
    }

    // ezsignfolder_get_object_v1_response_m_payload->obj_timezone
    cJSON *obj_timezone = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "objTimezone");
    if (obj_timezone) { 
    obj_timezone_local_nonprim = custom_timezone_with_code_response_parseFromJSON(obj_timezone); //nonprimitive
    }


    ezsignfolder_get_object_v1_response_m_payload_local_var = ezsignfolder_get_object_v1_response_m_payload_create (
        pki_ezsignfolder_id->valuedouble,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        obj_ezsignfoldertype ? obj_ezsignfoldertype_local_nonprim : NULL,
        fki_timezone_id ? fki_timezone_id->valuedouble : 0,
        e_ezsignfolder_completion_local_nonprim,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        fki_billingentityinternal_id ? fki_billingentityinternal_id->valuedouble : 0,
        s_billingentityinternal_description_x && !cJSON_IsNull(s_billingentityinternal_description_x) ? strdup(s_billingentityinternal_description_x->valuestring) : NULL,
        fki_ezsigntsarequirement_id ? fki_ezsigntsarequirement_id->valuedouble : 0,
        s_ezsigntsarequirement_description_x && !cJSON_IsNull(s_ezsigntsarequirement_description_x) ? strdup(s_ezsigntsarequirement_description_x->valuestring) : NULL,
        strdup(s_ezsignfolder_description->valuestring),
        t_ezsignfolder_note && !cJSON_IsNull(t_ezsignfolder_note) ? strdup(t_ezsignfolder_note->valuestring) : NULL,
        b_ezsignfolder_isdisposable ? b_ezsignfolder_isdisposable->valueint : 0,
        e_ezsignfolder_sendreminderfrequency ? e_ezsignfolder_sendreminderfrequency_local_nonprim : NULL,
        i_ezsignfolder_sendreminderfirstdays ? i_ezsignfolder_sendreminderfirstdays->valuedouble : 0,
        i_ezsignfolder_sendreminderotherdays ? i_ezsignfolder_sendreminderotherdays->valuedouble : 0,
        dt_ezsignfolder_delayedsenddate && !cJSON_IsNull(dt_ezsignfolder_delayedsenddate) ? strdup(dt_ezsignfolder_delayedsenddate->valuestring) : NULL,
        dt_ezsignfolder_duedate && !cJSON_IsNull(dt_ezsignfolder_duedate) ? strdup(dt_ezsignfolder_duedate->valuestring) : NULL,
        dt_ezsignfolder_sentdate && !cJSON_IsNull(dt_ezsignfolder_sentdate) ? strdup(dt_ezsignfolder_sentdate->valuestring) : NULL,
        dt_ezsignfolder_scheduledarchive && !cJSON_IsNull(dt_ezsignfolder_scheduledarchive) ? strdup(dt_ezsignfolder_scheduledarchive->valuestring) : NULL,
        dt_ezsignfolder_scheduleddispose && !cJSON_IsNull(dt_ezsignfolder_scheduleddispose) ? strdup(dt_ezsignfolder_scheduleddispose->valuestring) : NULL,
        e_ezsignfolder_step ? e_ezsignfolder_step_local_nonprim : NULL,
        dt_ezsignfolder_close && !cJSON_IsNull(dt_ezsignfolder_close) ? strdup(dt_ezsignfolder_close->valuestring) : NULL,
        t_ezsignfolder_message && !cJSON_IsNull(t_ezsignfolder_message) ? strdup(t_ezsignfolder_message->valuestring) : NULL,
        obj_audit ? obj_audit_local_nonprim : NULL,
        s_ezsignfolder_externalid && !cJSON_IsNull(s_ezsignfolder_externalid) ? strdup(s_ezsignfolder_externalid->valuestring) : NULL,
        obj_timezone ? obj_timezone_local_nonprim : NULL
        );

    return ezsignfolder_get_object_v1_response_m_payload_local_var;
end:
    if (obj_ezsignfoldertype_local_nonprim) {
        object_free(obj_ezsignfoldertype_local_nonprim);
        obj_ezsignfoldertype_local_nonprim = NULL;
    }
    if (e_ezsignfolder_completion_local_nonprim) {
        field_e_ezsignfolder_completion_free(e_ezsignfolder_completion_local_nonprim);
        e_ezsignfolder_completion_local_nonprim = NULL;
    }
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
    if (obj_timezone_local_nonprim) {
        custom_timezone_with_code_response_free(obj_timezone_local_nonprim);
        obj_timezone_local_nonprim = NULL;
    }
    return NULL;

}
