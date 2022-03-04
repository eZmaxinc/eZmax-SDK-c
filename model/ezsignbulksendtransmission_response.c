#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendtransmission_response.h"



ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_create(
    int pki_ezsignbulksendtransmission_id,
    int fki_ezsignbulksend_id,
    char *s_ezsignbulksendtransmission_description,
    int i_ezsignbulksendtransmission_errors,
    common_audit_t *obj_audit
    ) {
    ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_local_var = malloc(sizeof(ezsignbulksendtransmission_response_t));
    if (!ezsignbulksendtransmission_response_local_var) {
        return NULL;
    }
    ezsignbulksendtransmission_response_local_var->pki_ezsignbulksendtransmission_id = pki_ezsignbulksendtransmission_id;
    ezsignbulksendtransmission_response_local_var->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    ezsignbulksendtransmission_response_local_var->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    ezsignbulksendtransmission_response_local_var->i_ezsignbulksendtransmission_errors = i_ezsignbulksendtransmission_errors;
    ezsignbulksendtransmission_response_local_var->obj_audit = obj_audit;

    return ezsignbulksendtransmission_response_local_var;
}


void ezsignbulksendtransmission_response_free(ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response) {
    if(NULL == ezsignbulksendtransmission_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description) {
        free(ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description);
        ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description = NULL;
    }
    if (ezsignbulksendtransmission_response->obj_audit) {
        common_audit_free(ezsignbulksendtransmission_response->obj_audit);
        ezsignbulksendtransmission_response->obj_audit = NULL;
    }
    free(ezsignbulksendtransmission_response);
}

cJSON *ezsignbulksendtransmission_response_convertToJSON(ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendtransmission_response->pki_ezsignbulksendtransmission_id
    if (!ezsignbulksendtransmission_response->pki_ezsignbulksendtransmission_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendtransmissionID", ezsignbulksendtransmission_response->pki_ezsignbulksendtransmission_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_response->fki_ezsignbulksend_id
    if (!ezsignbulksendtransmission_response->fki_ezsignbulksend_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignbulksendID", ezsignbulksendtransmission_response->fki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description
    if (!ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignbulksendtransmissionDescription", ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksendtransmission_response->i_ezsignbulksendtransmission_errors
    if (!ezsignbulksendtransmission_response->i_ezsignbulksendtransmission_errors) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "iEzsignbulksendtransmissionErrors", ezsignbulksendtransmission_response->i_ezsignbulksendtransmission_errors) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksendtransmission_response->obj_audit
    if (!ezsignbulksendtransmission_response->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignbulksendtransmission_response->obj_audit);
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

ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_parseFromJSON(cJSON *ezsignbulksendtransmission_responseJSON){

    ezsignbulksendtransmission_response_t *ezsignbulksendtransmission_response_local_var = NULL;

    // define the local variable for ezsignbulksendtransmission_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignbulksendtransmission_response->pki_ezsignbulksendtransmission_id
    cJSON *pki_ezsignbulksendtransmission_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_responseJSON, "pkiEzsignbulksendtransmissionID");
    if (!pki_ezsignbulksendtransmission_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksendtransmission_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_response->fki_ezsignbulksend_id
    cJSON *fki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_responseJSON, "fkiEzsignbulksendID");
    if (!fki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_response->s_ezsignbulksendtransmission_description
    cJSON *s_ezsignbulksendtransmission_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_responseJSON, "sEzsignbulksendtransmissionDescription");
    if (!s_ezsignbulksendtransmission_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksendtransmission_description))
    {
    goto end; //String
    }

    // ezsignbulksendtransmission_response->i_ezsignbulksendtransmission_errors
    cJSON *i_ezsignbulksendtransmission_errors = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_responseJSON, "iEzsignbulksendtransmissionErrors");
    if (!i_ezsignbulksendtransmission_errors) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignbulksendtransmission_errors))
    {
    goto end; //Numeric
    }

    // ezsignbulksendtransmission_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignbulksendtransmission_response_local_var = ezsignbulksendtransmission_response_create (
        pki_ezsignbulksendtransmission_id->valuedouble,
        fki_ezsignbulksend_id->valuedouble,
        strdup(s_ezsignbulksendtransmission_description->valuestring),
        i_ezsignbulksendtransmission_errors->valuedouble,
        obj_audit_local_nonprim
        );

    return ezsignbulksendtransmission_response_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
