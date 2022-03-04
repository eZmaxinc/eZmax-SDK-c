#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_object_v1_response_m_payload.h"


char* e_ezsigndocument_stepezsigndocument_get_object_v1_response_m_payload_ToString(ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__e e_ezsigndocument_step) {
    char* e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "Completed" };
	return e_ezsigndocument_stepArray[e_ezsigndocument_step];
}

ezmax_api_definition_ezsigndocument_get_object_v1_response_m_payload__e e_ezsigndocument_stepezsigndocument_get_object_v1_response_m_payload_FromString(char* e_ezsigndocument_step){
    int stringToReturn = 0;
    char *e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "Unsigned", "PartiallySigned", "DeclinedToSign", "PrematurelyEnded", "Completed" };
    size_t sizeofArray = sizeof(e_ezsigndocument_stepArray) / sizeof(e_ezsigndocument_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_step, e_ezsigndocument_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_create(
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_name,
    int pki_ezsigndocument_id,
    field_e_ezsigndocument_step_t *e_ezsigndocument_step,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *s_ezsigndocument_md5signed,
    common_audit_t *obj_audit,
    int i_ezsigndocument_stepformtotal,
    int i_ezsigndocument_stepformcurrent,
    int i_ezsigndocument_stepsignaturetotal,
    int i_ezsigndocument_stepsignature_current,
    list_t *a_obj_ezsignfoldersignerassociationstatus
    ) {
    ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_object_v1_response_m_payload_t));
    if (!ezsigndocument_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_object_v1_response_m_payload_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_get_object_v1_response_m_payload_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_get_object_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    ezsigndocument_get_object_v1_response_m_payload_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    ezsigndocument_get_object_v1_response_m_payload_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_get_object_v1_response_m_payload_local_var->e_ezsigndocument_step = e_ezsigndocument_step;
    ezsigndocument_get_object_v1_response_m_payload_local_var->dt_ezsigndocument_firstsend = dt_ezsigndocument_firstsend;
    ezsigndocument_get_object_v1_response_m_payload_local_var->dt_ezsigndocument_lastsend = dt_ezsigndocument_lastsend;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_order = i_ezsigndocument_order;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_pagetotal = i_ezsigndocument_pagetotal;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_signaturesigned = i_ezsigndocument_signaturesigned;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_signaturetotal = i_ezsigndocument_signaturetotal;
    ezsigndocument_get_object_v1_response_m_payload_local_var->s_ezsigndocument_md5initial = s_ezsigndocument_md5initial;
    ezsigndocument_get_object_v1_response_m_payload_local_var->s_ezsigndocument_md5signed = s_ezsigndocument_md5signed;
    ezsigndocument_get_object_v1_response_m_payload_local_var->obj_audit = obj_audit;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_stepformtotal = i_ezsigndocument_stepformtotal;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_stepformcurrent = i_ezsigndocument_stepformcurrent;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_stepsignaturetotal = i_ezsigndocument_stepsignaturetotal;
    ezsigndocument_get_object_v1_response_m_payload_local_var->i_ezsigndocument_stepsignature_current = i_ezsigndocument_stepsignature_current;
    ezsigndocument_get_object_v1_response_m_payload_local_var->a_obj_ezsignfoldersignerassociationstatus = a_obj_ezsignfoldersignerassociationstatus;

    return ezsigndocument_get_object_v1_response_m_payload_local_var;
}


void ezsigndocument_get_object_v1_response_m_payload_free(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate) {
        free(ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate);
        ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name) {
        free(ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name);
        ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step) {
        field_e_ezsigndocument_step_free(ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step);
        ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend) {
        free(ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend);
        ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend) {
        free(ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend);
        ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial) {
        free(ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial);
        ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed) {
        free(ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed);
        ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->obj_audit) {
        common_audit_free(ezsigndocument_get_object_v1_response_m_payload->obj_audit);
        ezsigndocument_get_object_v1_response_m_payload->obj_audit = NULL;
    }
    if (ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus) {
        list_ForEach(listEntry, ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus) {
            custom_ezsignfoldersignerassociationstatus_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus);
        ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus = NULL;
    }
    free(ezsigndocument_get_object_v1_response_m_payload);
}

cJSON *ezsigndocument_get_object_v1_response_m_payload_convertToJSON(ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_object_v1_response_m_payload->fki_ezsignfolder_id
    if (!ezsigndocument_get_object_v1_response_m_payload->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_get_object_v1_response_m_payload->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate
    if (!ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->fki_language_id
    if (!ezsigndocument_get_object_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigndocument_get_object_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name
    if (!ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->pki_ezsigndocument_id
    if (!ezsigndocument_get_object_v1_response_m_payload->pki_ezsigndocument_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_get_object_v1_response_m_payload->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step
    
    cJSON *e_ezsigndocument_step_local_JSON = field_e_ezsigndocument_step_convertToJSON(ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step);
    if(e_ezsigndocument_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigndocumentStep", e_ezsigndocument_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend
    if (!ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentFirstsend", ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend
    if (!ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentLastsend", ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_order
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_order) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentOrder", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_pagetotal
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_pagetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentPagetotal", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturesigned
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturesigned) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturesigned", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturetotal
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturetotal", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial
    if (!ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5initial", ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed
    if (!ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5signed", ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_get_object_v1_response_m_payload->obj_audit
    if (!ezsigndocument_get_object_v1_response_m_payload->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigndocument_get_object_v1_response_m_payload->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformtotal
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformtotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepformtotal", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformtotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformcurrent
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformcurrent) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepformcurrent", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformcurrent) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignaturetotal
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignaturetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepsignaturetotal", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignature_current
    if (!ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignature_current) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentStepsignatureCurrent", ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignature_current) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus
    if (!ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignfoldersignerassociationstatus = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociationstatus");
    if(a_obj_ezsignfoldersignerassociationstatus == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationstatusListEntry;
    if (ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus) {
    list_ForEach(a_obj_ezsignfoldersignerassociationstatusListEntry, ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus) {
    cJSON *itemLocal = custom_ezsignfoldersignerassociationstatus_response_convertToJSON(a_obj_ezsignfoldersignerassociationstatusListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociationstatus, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_object_v1_response_m_payloadJSON){

    ezsigndocument_get_object_v1_response_m_payload_t *ezsigndocument_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step
    field_e_ezsigndocument_step_t *e_ezsigndocument_step_local_nonprim = NULL;

    // define the local variable for ezsigndocument_get_object_v1_response_m_payload->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsigndocument_get_object_v1_response_m_payload->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->e_ezsigndocument_step
    cJSON *e_ezsigndocument_step = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "eEzsigndocumentStep");
    if (!e_ezsigndocument_step) {
        goto end;
    }

    
    e_ezsigndocument_step_local_nonprim = field_e_ezsigndocument_step_parseFromJSON(e_ezsigndocument_step); //custom

    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_firstsend
    cJSON *dt_ezsigndocument_firstsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "dtEzsigndocumentFirstsend");
    if (!dt_ezsigndocument_firstsend) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_firstsend))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->dt_ezsigndocument_lastsend
    cJSON *dt_ezsigndocument_lastsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "dtEzsigndocumentLastsend");
    if (!dt_ezsigndocument_lastsend) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_lastsend))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_order
    cJSON *i_ezsigndocument_order = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentOrder");
    if (!i_ezsigndocument_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_order))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_pagetotal
    cJSON *i_ezsigndocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentPagetotal");
    if (!i_ezsigndocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturesigned
    cJSON *i_ezsigndocument_signaturesigned = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentSignaturesigned");
    if (!i_ezsigndocument_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturesigned))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_signaturetotal
    cJSON *i_ezsigndocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentSignaturetotal");
    if (!i_ezsigndocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5initial
    cJSON *s_ezsigndocument_md5initial = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "sEzsigndocumentMD5initial");
    if (!s_ezsigndocument_md5initial) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_md5initial))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->s_ezsigndocument_md5signed
    cJSON *s_ezsigndocument_md5signed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "sEzsigndocumentMD5signed");
    if (!s_ezsigndocument_md5signed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_md5signed))
    {
    goto end; //String
    }

    // ezsigndocument_get_object_v1_response_m_payload->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformtotal
    cJSON *i_ezsigndocument_stepformtotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentStepformtotal");
    if (!i_ezsigndocument_stepformtotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepformtotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepformcurrent
    cJSON *i_ezsigndocument_stepformcurrent = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentStepformcurrent");
    if (!i_ezsigndocument_stepformcurrent) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepformcurrent))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignaturetotal
    cJSON *i_ezsigndocument_stepsignaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentStepsignaturetotal");
    if (!i_ezsigndocument_stepsignaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepsignaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->i_ezsigndocument_stepsignature_current
    cJSON *i_ezsigndocument_stepsignature_current = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "iEzsigndocumentStepsignatureCurrent");
    if (!i_ezsigndocument_stepsignature_current) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_stepsignature_current))
    {
    goto end; //Numeric
    }

    // ezsigndocument_get_object_v1_response_m_payload->a_obj_ezsignfoldersignerassociationstatus
    cJSON *a_obj_ezsignfoldersignerassociationstatus = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_object_v1_response_m_payloadJSON, "a_objEzsignfoldersignerassociationstatus");
    if (!a_obj_ezsignfoldersignerassociationstatus) {
        goto end;
    }

    list_t *a_obj_ezsignfoldersignerassociationstatusList;
    
    cJSON *a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociationstatus)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationstatusList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive,a_obj_ezsignfoldersignerassociationstatus )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldersignerassociationstatus_response_t *a_obj_ezsignfoldersignerassociationstatusItem = custom_ezsignfoldersignerassociationstatus_response_parseFromJSON(a_obj_ezsignfoldersignerassociationstatus_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationstatusList, a_obj_ezsignfoldersignerassociationstatusItem);
    }


    ezsigndocument_get_object_v1_response_m_payload_local_var = ezsigndocument_get_object_v1_response_m_payload_create (
        fki_ezsignfolder_id->valuedouble,
        strdup(dt_ezsigndocument_duedate->valuestring),
        fki_language_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring),
        pki_ezsigndocument_id->valuedouble,
        e_ezsigndocument_step_local_nonprim,
        strdup(dt_ezsigndocument_firstsend->valuestring),
        strdup(dt_ezsigndocument_lastsend->valuestring),
        i_ezsigndocument_order->valuedouble,
        i_ezsigndocument_pagetotal->valuedouble,
        i_ezsigndocument_signaturesigned->valuedouble,
        i_ezsigndocument_signaturetotal->valuedouble,
        strdup(s_ezsigndocument_md5initial->valuestring),
        strdup(s_ezsigndocument_md5signed->valuestring),
        obj_audit_local_nonprim,
        i_ezsigndocument_stepformtotal->valuedouble,
        i_ezsigndocument_stepformcurrent->valuedouble,
        i_ezsigndocument_stepsignaturetotal->valuedouble,
        i_ezsigndocument_stepsignature_current->valuedouble,
        a_obj_ezsignfoldersignerassociationstatusList
        );

    return ezsigndocument_get_object_v1_response_m_payload_local_var;
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
