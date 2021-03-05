#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_response_all_of.h"


char* e_ezsigndocument_stepezsigndocument_response_all_of_ToString(ezmax_api_definition_ezsigndocument_response_all_of__e e_ezsigndocument_step) {
    char* e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "_Unsigned", "PartiallySigned", "Completed" };
	return e_ezsigndocument_stepArray[e_ezsigndocument_step];
}

ezmax_api_definition_ezsigndocument_response_all_of__e e_ezsigndocument_stepezsigndocument_response_all_of_FromString(char* e_ezsigndocument_step){
    int stringToReturn = 0;
    char *e_ezsigndocument_stepArray[] =  { "NULL", "Unsent", "_Unsigned", "PartiallySigned", "Completed" };
    size_t sizeofArray = sizeof(e_ezsigndocument_stepArray) / sizeof(e_ezsigndocument_stepArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigndocument_step, e_ezsigndocument_stepArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_create(
    int fki_ezsignfolder_id,
    char *dt_ezsigndocument_duedate,
    int fki_language_id,
    char *s_ezsigndocument_name,
    int pki_ezsigndocument_id,
    char *dt_ezsigndocument_firstsend,
    char *dt_ezsigndocument_lastsend,
    int i_ezsigndocument_order,
    int i_ezsigndocument_pagetotal,
    int i_ezsigndocument_signaturesigned,
    int i_ezsigndocument_signaturetotal,
    char *s_ezsigndocument_md5initial,
    char *s_ezsigndocument_md5signed,
    common_audit_t *obj_audit
    ) {
    ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_local_var = malloc(sizeof(ezsigndocument_response_all_of_t));
    if (!ezsigndocument_response_all_of_local_var) {
        return NULL;
    }
    ezsigndocument_response_all_of_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsigndocument_response_all_of_local_var->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    ezsigndocument_response_all_of_local_var->fki_language_id = fki_language_id;
    ezsigndocument_response_all_of_local_var->s_ezsigndocument_name = s_ezsigndocument_name;
    ezsigndocument_response_all_of_local_var->pki_ezsigndocument_id = pki_ezsigndocument_id;
    ezsigndocument_response_all_of_local_var->e_ezsigndocument_step = e_ezsigndocument_step;
    ezsigndocument_response_all_of_local_var->dt_ezsigndocument_firstsend = dt_ezsigndocument_firstsend;
    ezsigndocument_response_all_of_local_var->dt_ezsigndocument_lastsend = dt_ezsigndocument_lastsend;
    ezsigndocument_response_all_of_local_var->i_ezsigndocument_order = i_ezsigndocument_order;
    ezsigndocument_response_all_of_local_var->i_ezsigndocument_pagetotal = i_ezsigndocument_pagetotal;
    ezsigndocument_response_all_of_local_var->i_ezsigndocument_signaturesigned = i_ezsigndocument_signaturesigned;
    ezsigndocument_response_all_of_local_var->i_ezsigndocument_signaturetotal = i_ezsigndocument_signaturetotal;
    ezsigndocument_response_all_of_local_var->s_ezsigndocument_md5initial = s_ezsigndocument_md5initial;
    ezsigndocument_response_all_of_local_var->s_ezsigndocument_md5signed = s_ezsigndocument_md5signed;
    ezsigndocument_response_all_of_local_var->obj_audit = obj_audit;

    return ezsigndocument_response_all_of_local_var;
}


void ezsigndocument_response_all_of_free(ezsigndocument_response_all_of_t *ezsigndocument_response_all_of) {
    if(NULL == ezsigndocument_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_response_all_of->dt_ezsigndocument_duedate) {
        free(ezsigndocument_response_all_of->dt_ezsigndocument_duedate);
        ezsigndocument_response_all_of->dt_ezsigndocument_duedate = NULL;
    }
    if (ezsigndocument_response_all_of->s_ezsigndocument_name) {
        free(ezsigndocument_response_all_of->s_ezsigndocument_name);
        ezsigndocument_response_all_of->s_ezsigndocument_name = NULL;
    }
    if (ezsigndocument_response_all_of->dt_ezsigndocument_firstsend) {
        free(ezsigndocument_response_all_of->dt_ezsigndocument_firstsend);
        ezsigndocument_response_all_of->dt_ezsigndocument_firstsend = NULL;
    }
    if (ezsigndocument_response_all_of->dt_ezsigndocument_lastsend) {
        free(ezsigndocument_response_all_of->dt_ezsigndocument_lastsend);
        ezsigndocument_response_all_of->dt_ezsigndocument_lastsend = NULL;
    }
    if (ezsigndocument_response_all_of->s_ezsigndocument_md5initial) {
        free(ezsigndocument_response_all_of->s_ezsigndocument_md5initial);
        ezsigndocument_response_all_of->s_ezsigndocument_md5initial = NULL;
    }
    if (ezsigndocument_response_all_of->s_ezsigndocument_md5signed) {
        free(ezsigndocument_response_all_of->s_ezsigndocument_md5signed);
        ezsigndocument_response_all_of->s_ezsigndocument_md5signed = NULL;
    }
    if (ezsigndocument_response_all_of->obj_audit) {
        common_audit_free(ezsigndocument_response_all_of->obj_audit);
        ezsigndocument_response_all_of->obj_audit = NULL;
    }
    free(ezsigndocument_response_all_of);
}

cJSON *ezsigndocument_response_all_of_convertToJSON(ezsigndocument_response_all_of_t *ezsigndocument_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_response_all_of->fki_ezsignfolder_id
    if (!ezsigndocument_response_all_of->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsigndocument_response_all_of->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->dt_ezsigndocument_duedate
    if (!ezsigndocument_response_all_of->dt_ezsigndocument_duedate) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentDuedate", ezsigndocument_response_all_of->dt_ezsigndocument_duedate) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->fki_language_id
    if (!ezsigndocument_response_all_of->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigndocument_response_all_of->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->s_ezsigndocument_name
    if (!ezsigndocument_response_all_of->s_ezsigndocument_name) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentName", ezsigndocument_response_all_of->s_ezsigndocument_name) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->pki_ezsigndocument_id
    if (!ezsigndocument_response_all_of->pki_ezsigndocument_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsigndocumentID", ezsigndocument_response_all_of->pki_ezsigndocument_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->e_ezsigndocument_step
    


    // ezsigndocument_response_all_of->dt_ezsigndocument_firstsend
    if (!ezsigndocument_response_all_of->dt_ezsigndocument_firstsend) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentFirstsend", ezsigndocument_response_all_of->dt_ezsigndocument_firstsend) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->dt_ezsigndocument_lastsend
    if (!ezsigndocument_response_all_of->dt_ezsigndocument_lastsend) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "dtEzsigndocumentLastsend", ezsigndocument_response_all_of->dt_ezsigndocument_lastsend) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->i_ezsigndocument_order
    if (!ezsigndocument_response_all_of->i_ezsigndocument_order) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentOrder", ezsigndocument_response_all_of->i_ezsigndocument_order) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->i_ezsigndocument_pagetotal
    if (!ezsigndocument_response_all_of->i_ezsigndocument_pagetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentPagetotal", ezsigndocument_response_all_of->i_ezsigndocument_pagetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->i_ezsigndocument_signaturesigned
    if (!ezsigndocument_response_all_of->i_ezsigndocument_signaturesigned) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturesigned", ezsigndocument_response_all_of->i_ezsigndocument_signaturesigned) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->i_ezsigndocument_signaturetotal
    if (!ezsigndocument_response_all_of->i_ezsigndocument_signaturetotal) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsigndocumentSignaturetotal", ezsigndocument_response_all_of->i_ezsigndocument_signaturetotal) == NULL) {
    goto fail; //Numeric
    }


    // ezsigndocument_response_all_of->s_ezsigndocument_md5initial
    if (!ezsigndocument_response_all_of->s_ezsigndocument_md5initial) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5initial", ezsigndocument_response_all_of->s_ezsigndocument_md5initial) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->s_ezsigndocument_md5signed
    if (!ezsigndocument_response_all_of->s_ezsigndocument_md5signed) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsigndocumentMD5signed", ezsigndocument_response_all_of->s_ezsigndocument_md5signed) == NULL) {
    goto fail; //String
    }


    // ezsigndocument_response_all_of->obj_audit
    if (!ezsigndocument_response_all_of->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigndocument_response_all_of->obj_audit);
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

ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_parseFromJSON(cJSON *ezsigndocument_response_all_ofJSON){

    ezsigndocument_response_all_of_t *ezsigndocument_response_all_of_local_var = NULL;

    // ezsigndocument_response_all_of->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->dt_ezsigndocument_duedate
    cJSON *dt_ezsigndocument_duedate = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "dtEzsigndocumentDuedate");
    if (!dt_ezsigndocument_duedate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_duedate))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->s_ezsigndocument_name
    cJSON *s_ezsigndocument_name = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "sEzsigndocumentName");
    if (!s_ezsigndocument_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_name))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->pki_ezsigndocument_id
    cJSON *pki_ezsigndocument_id = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "pkiEzsigndocumentID");
    if (!pki_ezsigndocument_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigndocument_id))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->e_ezsigndocument_step
    cJSON *e_ezsigndocument_step = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "eEzsigndocumentStep");
    if (!e_ezsigndocument_step) {
        goto end;
    }


    // ezsigndocument_response_all_of->dt_ezsigndocument_firstsend
    cJSON *dt_ezsigndocument_firstsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "dtEzsigndocumentFirstsend");
    if (!dt_ezsigndocument_firstsend) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_firstsend))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->dt_ezsigndocument_lastsend
    cJSON *dt_ezsigndocument_lastsend = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "dtEzsigndocumentLastsend");
    if (!dt_ezsigndocument_lastsend) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigndocument_lastsend))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->i_ezsigndocument_order
    cJSON *i_ezsigndocument_order = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "iEzsigndocumentOrder");
    if (!i_ezsigndocument_order) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_order))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->i_ezsigndocument_pagetotal
    cJSON *i_ezsigndocument_pagetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "iEzsigndocumentPagetotal");
    if (!i_ezsigndocument_pagetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_pagetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->i_ezsigndocument_signaturesigned
    cJSON *i_ezsigndocument_signaturesigned = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "iEzsigndocumentSignaturesigned");
    if (!i_ezsigndocument_signaturesigned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturesigned))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->i_ezsigndocument_signaturetotal
    cJSON *i_ezsigndocument_signaturetotal = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "iEzsigndocumentSignaturetotal");
    if (!i_ezsigndocument_signaturetotal) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigndocument_signaturetotal))
    {
    goto end; //Numeric
    }

    // ezsigndocument_response_all_of->s_ezsigndocument_md5initial
    cJSON *s_ezsigndocument_md5initial = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "sEzsigndocumentMD5initial");
    if (!s_ezsigndocument_md5initial) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_md5initial))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->s_ezsigndocument_md5signed
    cJSON *s_ezsigndocument_md5signed = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "sEzsigndocumentMD5signed");
    if (!s_ezsigndocument_md5signed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigndocument_md5signed))
    {
    goto end; //String
    }

    // ezsigndocument_response_all_of->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigndocument_response_all_ofJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    common_audit_t *obj_audit_local_nonprim = NULL;
    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsigndocument_response_all_of_local_var = ezsigndocument_response_all_of_create (
        fki_ezsignfolder_id->valuedouble,
        strdup(dt_ezsigndocument_duedate->valuestring),
        fki_language_id->valuedouble,
        strdup(s_ezsigndocument_name->valuestring),
        pki_ezsigndocument_id->valuedouble,
        strdup(dt_ezsigndocument_firstsend->valuestring),
        strdup(dt_ezsigndocument_lastsend->valuestring),
        i_ezsigndocument_order->valuedouble,
        i_ezsigndocument_pagetotal->valuedouble,
        i_ezsigndocument_signaturesigned->valuedouble,
        i_ezsigndocument_signaturetotal->valuedouble,
        strdup(s_ezsigndocument_md5initial->valuestring),
        strdup(s_ezsigndocument_md5signed->valuestring),
        obj_audit_local_nonprim
        );

    return ezsigndocument_response_all_of_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
