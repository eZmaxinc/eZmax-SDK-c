#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_response_all_of.h"


char* e_ezsignfolder_sendreminderfrequencyezsignfolder_response_all_of_ToString(ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_sendreminderfrequency) {
    char* e_ezsignfolder_sendreminderfrequencyArray[] =  { "NULL", "None", "Daily", "Weekly" };
	return e_ezsignfolder_sendreminderfrequencyArray[e_ezsignfolder_sendreminderfrequency];
}

ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_sendreminderfrequencyezsignfolder_response_all_of_FromString(char* e_ezsignfolder_sendreminderfrequency){
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
char* e_ezsignfolder_stepezsignfolder_response_all_of_ToString(ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_step) {
    char* e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "_Signed", "Completed", "Archived" };
	return e_ezsignfolder_stepArray[e_ezsignfolder_step];
}

ezmax_api_definition_ezsignfolder_response_all_of__e e_ezsignfolder_stepezsignfolder_response_all_of_FromString(char* e_ezsignfolder_step){
    int stringToReturn = 0;
    char *e_ezsignfolder_stepArray[] =  { "NULL", "Unsent", "Sent", "PartiallySigned", "Expired", "_Signed", "Completed", "Archived" };
    size_t sizeofArray = sizeof(e_ezsignfolder_stepArray) / sizeof(e_ezsignfolder_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignfolder_step, e_ezsignfolder_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_create(
    int fki_ezsignfoldertype_id,
    int fki_ezsigntsarequirement_id,
    char *s_ezsignfolder_description,
    char *t_ezsignfolder_note,
    int pki_ezsignfolder_id,
    char *dt_ezsignfolder_sentdate,
    char *dt_ezsignfolder_close,
    common_audit_t *obj_audit
    ) {
    ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_local_var = malloc(sizeof(ezsignfolder_response_all_of_t));
    if (!ezsignfolder_response_all_of_local_var) {
        return NULL;
    }
    ezsignfolder_response_all_of_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignfolder_response_all_of_local_var->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    ezsignfolder_response_all_of_local_var->s_ezsignfolder_description = s_ezsignfolder_description;
    ezsignfolder_response_all_of_local_var->t_ezsignfolder_note = t_ezsignfolder_note;
    ezsignfolder_response_all_of_local_var->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    ezsignfolder_response_all_of_local_var->pki_ezsignfolder_id = pki_ezsignfolder_id;
    ezsignfolder_response_all_of_local_var->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    ezsignfolder_response_all_of_local_var->e_ezsignfolder_step = e_ezsignfolder_step;
    ezsignfolder_response_all_of_local_var->dt_ezsignfolder_close = dt_ezsignfolder_close;
    ezsignfolder_response_all_of_local_var->obj_audit = obj_audit;

    return ezsignfolder_response_all_of_local_var;
}


void ezsignfolder_response_all_of_free(ezsignfolder_response_all_of_t *ezsignfolder_response_all_of) {
    if(NULL == ezsignfolder_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_response_all_of->s_ezsignfolder_description) {
        free(ezsignfolder_response_all_of->s_ezsignfolder_description);
        ezsignfolder_response_all_of->s_ezsignfolder_description = NULL;
    }
    if (ezsignfolder_response_all_of->t_ezsignfolder_note) {
        free(ezsignfolder_response_all_of->t_ezsignfolder_note);
        ezsignfolder_response_all_of->t_ezsignfolder_note = NULL;
    }
    if (ezsignfolder_response_all_of->dt_ezsignfolder_sentdate) {
        free(ezsignfolder_response_all_of->dt_ezsignfolder_sentdate);
        ezsignfolder_response_all_of->dt_ezsignfolder_sentdate = NULL;
    }
    if (ezsignfolder_response_all_of->dt_ezsignfolder_close) {
        free(ezsignfolder_response_all_of->dt_ezsignfolder_close);
        ezsignfolder_response_all_of->dt_ezsignfolder_close = NULL;
    }
    if (ezsignfolder_response_all_of->obj_audit) {
        common_audit_free(ezsignfolder_response_all_of->obj_audit);
        ezsignfolder_response_all_of->obj_audit = NULL;
    }
    free(ezsignfolder_response_all_of);
}

cJSON *ezsignfolder_response_all_of_convertToJSON(ezsignfolder_response_all_of_t *ezsignfolder_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_response_all_of->fki_ezsignfoldertype_id
    if (!ezsignfolder_response_all_of->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignfolder_response_all_of->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_all_of->fki_ezsigntsarequirement_id
    if (!ezsignfolder_response_all_of->fki_ezsigntsarequirement_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsigntsarequirementID", ezsignfolder_response_all_of->fki_ezsigntsarequirement_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_all_of->s_ezsignfolder_description
    if (!ezsignfolder_response_all_of->s_ezsignfolder_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignfolderDescription", ezsignfolder_response_all_of->s_ezsignfolder_description) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_all_of->t_ezsignfolder_note
    if (!ezsignfolder_response_all_of->t_ezsignfolder_note) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "tEzsignfolderNote", ezsignfolder_response_all_of->t_ezsignfolder_note) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_all_of->e_ezsignfolder_sendreminderfrequency
    


    // ezsignfolder_response_all_of->pki_ezsignfolder_id
    if (!ezsignfolder_response_all_of->pki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfolderID", ezsignfolder_response_all_of->pki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfolder_response_all_of->dt_ezsignfolder_sentdate
    if (!ezsignfolder_response_all_of->dt_ezsignfolder_sentdate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsignfolderSentdate", ezsignfolder_response_all_of->dt_ezsignfolder_sentdate) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_all_of->e_ezsignfolder_step
    


    // ezsignfolder_response_all_of->dt_ezsignfolder_close
    if (!ezsignfolder_response_all_of->dt_ezsignfolder_close) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsignfolderClose", ezsignfolder_response_all_of->dt_ezsignfolder_close) == NULL) {
    goto fail; //String
    }


    // ezsignfolder_response_all_of->obj_audit
    if (!ezsignfolder_response_all_of->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignfolder_response_all_of->obj_audit);
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

ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_parseFromJSON(cJSON *ezsignfolder_response_all_ofJSON){

    ezsignfolder_response_all_of_t *ezsignfolder_response_all_of_local_var = NULL;

    // ezsignfolder_response_all_of->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_all_of->fki_ezsigntsarequirement_id
    cJSON *fki_ezsigntsarequirement_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "fkiEzsigntsarequirementID");
    if (!fki_ezsigntsarequirement_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsigntsarequirement_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_all_of->s_ezsignfolder_description
    cJSON *s_ezsignfolder_description = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "sEzsignfolderDescription");
    if (!s_ezsignfolder_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfolder_description))
    {
    goto end; //String
    }

    // ezsignfolder_response_all_of->t_ezsignfolder_note
    cJSON *t_ezsignfolder_note = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "tEzsignfolderNote");
    if (!t_ezsignfolder_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfolder_note))
    {
    goto end; //String
    }

    // ezsignfolder_response_all_of->e_ezsignfolder_sendreminderfrequency
    cJSON *e_ezsignfolder_sendreminderfrequency = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "eEzsignfolderSendreminderfrequency");
    if (!e_ezsignfolder_sendreminderfrequency) {
        goto end;
    }


    // ezsignfolder_response_all_of->pki_ezsignfolder_id
    cJSON *pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "pkiEzsignfolderID");
    if (!pki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfolder_response_all_of->dt_ezsignfolder_sentdate
    cJSON *dt_ezsignfolder_sentdate = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "dtEzsignfolderSentdate");
    if (!dt_ezsignfolder_sentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_sentdate))
    {
    goto end; //String
    }

    // ezsignfolder_response_all_of->e_ezsignfolder_step
    cJSON *e_ezsignfolder_step = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "eEzsignfolderStep");
    if (!e_ezsignfolder_step) {
        goto end;
    }


    // ezsignfolder_response_all_of->dt_ezsignfolder_close
    cJSON *dt_ezsignfolder_close = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "dtEzsignfolderClose");
    if (!dt_ezsignfolder_close) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsignfolder_close))
    {
    goto end; //String
    }

    // ezsignfolder_response_all_of->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignfolder_response_all_ofJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    common_audit_t *obj_audit_local_nonprim = NULL;
    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignfolder_response_all_of_local_var = ezsignfolder_response_all_of_create (
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezsigntsarequirement_id->valuedouble,
        strdup(s_ezsignfolder_description->valuestring),
        strdup(t_ezsignfolder_note->valuestring),
        pki_ezsignfolder_id->valuedouble,
        strdup(dt_ezsignfolder_sentdate->valuestring),
        strdup(dt_ezsignfolder_close->valuestring),
        obj_audit_local_nonprim
        );

    return ezsignfolder_response_all_of_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
