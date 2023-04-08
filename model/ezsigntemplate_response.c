#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_response.h"



ezsigntemplate_response_t *ezsigntemplate_response_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit
    ) {
    ezsigntemplate_response_t *ezsigntemplate_response_local_var = malloc(sizeof(ezsigntemplate_response_t));
    if (!ezsigntemplate_response_local_var) {
        return NULL;
    }
    ezsigntemplate_response_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_response_local_var->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    ezsigntemplate_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_response_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_response_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplate_response_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_response_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    ezsigntemplate_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplate_response_local_var->obj_audit = obj_audit;

    return ezsigntemplate_response_local_var;
}


void ezsigntemplate_response_free(ezsigntemplate_response_t *ezsigntemplate_response) {
    if(NULL == ezsigntemplate_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_response->s_language_name_x) {
        free(ezsigntemplate_response->s_language_name_x);
        ezsigntemplate_response->s_language_name_x = NULL;
    }
    if (ezsigntemplate_response->s_ezsigntemplate_description) {
        free(ezsigntemplate_response->s_ezsigntemplate_description);
        ezsigntemplate_response->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_response->s_ezsignfoldertype_name_x) {
        free(ezsigntemplate_response->s_ezsignfoldertype_name_x);
        ezsigntemplate_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplate_response->obj_audit) {
        common_audit_free(ezsigntemplate_response->obj_audit);
        ezsigntemplate_response->obj_audit = NULL;
    }
    free(ezsigntemplate_response);
}

cJSON *ezsigntemplate_response_convertToJSON(ezsigntemplate_response_t *ezsigntemplate_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_response->pki_ezsigntemplate_id
    if (!ezsigntemplate_response->pki_ezsigntemplate_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_response->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response->fki_ezsigntemplatedocument_id
    if(ezsigntemplate_response->fki_ezsigntemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsigntemplatedocumentID", ezsigntemplate_response->fki_ezsigntemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_response->fki_ezsignfoldertype_id
    if (!ezsigntemplate_response->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response->fki_language_id
    if (!ezsigntemplate_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_response->s_language_name_x
    if (!ezsigntemplate_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplate_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response->s_ezsigntemplate_description
    if (!ezsigntemplate_response->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_response->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_response->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_response->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplate_response->s_ezsignfoldertype_name_x
    if (!ezsigntemplate_response->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplate_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_response->obj_audit
    if (!ezsigntemplate_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsigntemplate_response->obj_audit);
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

ezsigntemplate_response_t *ezsigntemplate_response_parseFromJSON(cJSON *ezsigntemplate_responseJSON){

    ezsigntemplate_response_t *ezsigntemplate_response_local_var = NULL;

    // define the local variable for ezsigntemplate_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsigntemplate_response->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "pkiEzsigntemplateID");
    if (!pki_ezsigntemplate_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response->fki_ezsigntemplatedocument_id
    cJSON *fki_ezsigntemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiEzsigntemplatedocumentID");
    if (fki_ezsigntemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezsigntemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplate_response->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_response->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "bEzsigntemplateAdminonly");
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplate_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplate_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezsigntemplate_response_local_var = ezsigntemplate_response_create (
        pki_ezsigntemplate_id->valuedouble,
        fki_ezsigntemplatedocument_id ? fki_ezsigntemplatedocument_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplate_description->valuestring),
        b_ezsigntemplate_adminonly->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        obj_audit_local_nonprim
        );

    return ezsigntemplate_response_local_var;
end:
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
