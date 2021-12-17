#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_object_v1_response_m_payload.h"


char* e_ezsignfolder_sendreminderfrequencyezsignfolder_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_sendreminderfrequencyezsignfolder_get_object_v1_response_m_payload_FromString(char* e_ezsignfolder_sendreminderfrequency){
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
char* e_ezsignfolder_stepezsignfolder_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
	return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition_ezsignfolder_get_object_v1_response_m_payload__e e_ezsignfolder_stepezsignfolder_get_object_v1_response_m_payload_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "Completed", "Archived" };
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
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency,
    int pki_ezsignfolder_id,
    char *dt_ezsignfolder_sentdate,
    field_e_ezsignfolder_step_t *e_ezsignfolder_step,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
    ) {
    ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_object_v1_response_m_payload_t));
    if (!ezsignfolder_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_get_object_v1_response_m_payload_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_get_object_v1_response_m_payload_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignfolder_get_object_v1_response_m_payload_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_get_object_v1_response_m_payload_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_get_object_v1_response_m_payload_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_get_object_v1_response_m_payload_local_var->obj_audit = obj_audit;

    return ezsignfolder_get_object_v1_response_m_payload_local_var;
}


void ezsignfolder_get_object_v1_response_m_payload_free(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
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
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step) {
        field_e_ezsignfolder_step_free(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step);
        ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) {
        free(ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close);
        ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_get_object_v1_response_m_payload->obj_audit) {
        common_audit_free(ezsignfolder_get_object_v1_response_m_payload->obj_audit);
        ezsignfolder_get_object_v1_response_m_payload->obj_audit = NULL;
    }
    free(ezsignfolder_get_object_v1_response_m_payload);
}

cJSON *ezsignfolder_get_object_v1_response_m_payload_convertToJSON(ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    if (!ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    if (!ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description
    if (!ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_get_object_v1_response_m_payload->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note
    if (!ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_get_object_v1_response_m_payload->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    
    cJSON *e_ezsignfolder_sendreminderfrequency_local_JSON = field_e_ezsignfolder_sendreminderfrequency_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency);
    if(e_ezsignfolder_sendreminderfrequency_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderSendreminderfrequency", e_ezsignfolder_sendreminderfrequency_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id
    if (!ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate
    if (!ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    
    cJSON *e_ezsignfolder_step_local_JSON = field_e_ezsignfolder_step_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step);
    if(e_ezsignfolder_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfolderStep", e_ezsignfolder_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close
    if (!ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_get_object_v1_response_m_payload->obj_audit
    if (!ezsignfolder_get_object_v1_response_m_payload->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfolder_get_object_v1_response_m_payload->obj_audit);
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

ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_object_v1_response_m_payloadJSON){

    ezsignfolder_get_object_v1_response_m_payload_t *ezsignfolder_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    field_e_ezsignfolder_sendreminderfrequency_t *e_ezsignfolder_sendreminderfrequency_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    field_e_ezsignfolder_step_t *e_ezsignfolder_step_local_nonprim = NULL;

    // define the local variable for ezsignfolder_get_object_v1_response_m_payload->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_get_object_v1_response_m_payload->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "fkiEzsigntsarequirementID");
    if (!fki_ezsigntsarequirement_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
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
    if (!t_ezsignfolder_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfolder_note))
    {
    goto end; //String
    }

    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "eEzsignfolderSendreminderfrequency");
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }

    
    e_ezsignfolder_sendreminderfrequency_local_nonprim = field_e_ezsignfolder_sendreminderfrequency_parseFromJSON(e_ezsignfolder_sendreminderfrequency); //custom

    // ezsignfolder_get_object_v1_response_m_payload->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderSentdate");
    if (!dt_ezsignfolder_sentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }

    // ezsignfolder_get_object_v1_response_m_payload->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }

    
    e_ezsignfolder_step_local_nonprim = field_e_ezsignfolder_step_parseFromJSON(e_ezsignfolder_step); //custom

    // ezsignfolder_get_object_v1_response_m_payload->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "dtEzsignfolderClose");
    if (!dt_ezsignfolder_close) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_close))
    {
    goto end; //String
    }

    // ezsignfolder_get_object_v1_response_m_payload->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_object_v1_response_m_payloadJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignfolder_get_object_v1_response_m_payload_local_var = ezsignfolder_get_object_v1_response_m_payload_create (
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezsigntsarequirement_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        strdup(t_ezsignfolder_note->valuestring),
        e_ezsignfolder_sendreminderfrequency_local_nonprim,
        pki_ezsignfolder_id->valuedouble,
        strdup(dt_ezsignfolder_sentdate->valuestring),
        e_ezsignfolder_step_local_nonprim,
        strdup(dt_ezsignfolder_close->valuestring),
        obj_audit_local_nonprim
        );

    return ezsignfolder_get_object_v1_response_m_payload_local_var;
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
