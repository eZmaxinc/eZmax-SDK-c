#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_object_v1_response_m_payload.h"



ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_isactive,
    common_audit_t *obj_audit
    ) {
    ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_get_object_v1_response_m_payload_t));
    if (!ezsignbulksend_get_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_get_object_v1_response_m_payload_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->t_ezsignbulksend_note = t_ezsignbulksend_note;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    ezsignbulksend_get_object_v1_response_m_payload_local_var->obj_audit = obj_audit;

    return ezsignbulksend_get_object_v1_response_m_payload_local_var;
}


void ezsignbulksend_get_object_v1_response_m_payload_free(ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload) {
    if(NULL == ezsignbulksend_get_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description) {
        free(ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description);
        ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note) {
        free(ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note);
        ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note = NULL;
    }
    if (ezsignbulksend_get_object_v1_response_m_payload->obj_audit) {
        common_audit_free(ezsignbulksend_get_object_v1_response_m_payload->obj_audit);
        ezsignbulksend_get_object_v1_response_m_payload->obj_audit = NULL;
    }
    free(ezsignbulksend_get_object_v1_response_m_payload);
}

cJSON *ezsignbulksend_get_object_v1_response_m_payload_convertToJSON(ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_object_v1_response_m_payload->pki_ezsignbulksend_id
    if (!ezsignbulksend_get_object_v1_response_m_payload->pki_ezsignbulksend_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_get_object_v1_response_m_payload->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    if (!ezsignbulksend_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_get_object_v1_response_m_payload->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_get_object_v1_response_m_payload->fki_language_id
    if (!ezsignbulksend_get_object_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignbulksend_get_object_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description
    if (!ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note
    if (!ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "tEzsignbulksendNote", ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_get_object_v1_response_m_payload->b_ezsignbulksend_isactive
    if (!ezsignbulksend_get_object_v1_response_m_payload->b_ezsignbulksend_isactive) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_get_object_v1_response_m_payload->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_get_object_v1_response_m_payload->obj_audit
    if (!ezsignbulksend_get_object_v1_response_m_payload->obj_audit) {
        goto fail;
    }
    
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignbulksend_get_object_v1_response_m_payload->obj_audit);
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

ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_object_v1_response_m_payloadJSON){

    ezsignbulksend_get_object_v1_response_m_payload_t *ezsignbulksend_get_object_v1_response_m_payload_local_var = NULL;

    // define the local variable for ezsignbulksend_get_object_v1_response_m_payload->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignbulksend_get_object_v1_response_m_payload->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "pkiEzsignbulksendID");
    if (!pki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_get_object_v1_response_m_payload->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_get_object_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_get_object_v1_response_m_payload->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "sEzsignbulksendDescription");
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_get_object_v1_response_m_payload->t_ezsignbulksend_note
    cJSON *t_ezsignbulksend_note = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "tEzsignbulksendNote");
    if (!t_ezsignbulksend_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignbulksend_note))
    {
    goto end; //String
    }

    // ezsignbulksend_get_object_v1_response_m_payload->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "bEzsignbulksendIsactive");
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }

    // ezsignbulksend_get_object_v1_response_m_payload->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_object_v1_response_m_payloadJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsignbulksend_get_object_v1_response_m_payload_local_var = ezsignbulksend_get_object_v1_response_m_payload_create (
        pki_ezsignbulksend_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(t_ezsignbulksend_note->valuestring),
        b_ezsignbulksend_isactive->valueint,
        obj_audit_local_nonprim
        );

    return ezsignbulksend_get_object_v1_response_m_payload_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
