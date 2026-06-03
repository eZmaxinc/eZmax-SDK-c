#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_response.h"



static ezsignbulksend_response_t *ezsignbulksend_response_create_internal(
    int *pki_ezsignbulksend_id,
    int *fki_ezsignfoldertype_id,
    int *fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int *b_ezsignbulksend_needvalidation,
    int *b_ezsignbulksend_isactive,
    common_audit_t *obj_audit
    ) {
    ezsignbulksend_response_t *ezsignbulksend_response_local_var = malloc(sizeof(ezsignbulksend_response_t));
    if (!ezsignbulksend_response_local_var) {
        return NULL;
    }
    memset(ezsignbulksend_response_local_var, 0, sizeof(ezsignbulksend_response_t));
    ezsignbulksend_response_local_var->_library_owned = 1;
    ezsignbulksend_response_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_response_local_var->fki_language_id = fki_language_id;
    ezsignbulksend_response_local_var->s_language_name_x = s_language_name_x;
    ezsignbulksend_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignbulksend_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignbulksend_response_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_response_local_var->t_ezsignbulksend_note = t_ezsignbulksend_note;
    ezsignbulksend_response_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    ezsignbulksend_response_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    ezsignbulksend_response_local_var->obj_audit = obj_audit;
    return ezsignbulksend_response_local_var;
}

__attribute__((deprecated)) ezsignbulksend_response_t *ezsignbulksend_response_create(
    int *pki_ezsignbulksend_id,
    int *fki_ezsignfoldertype_id,
    int *fki_language_id,
    char *s_language_name_x,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int *b_ezsignbulksend_needvalidation,
    int *b_ezsignbulksend_isactive,
    common_audit_t *obj_audit
    ) {
    int *pki_ezsignbulksend_id_copy = NULL;
    if (pki_ezsignbulksend_id) {
        pki_ezsignbulksend_id_copy = malloc(sizeof(int));
        if (pki_ezsignbulksend_id_copy) *pki_ezsignbulksend_id_copy = *pki_ezsignbulksend_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *b_ezsignbulksend_needvalidation_copy = NULL;
    if (b_ezsignbulksend_needvalidation) {
        b_ezsignbulksend_needvalidation_copy = malloc(sizeof(int));
        if (b_ezsignbulksend_needvalidation_copy) *b_ezsignbulksend_needvalidation_copy = *b_ezsignbulksend_needvalidation;
    }
    int *b_ezsignbulksend_isactive_copy = NULL;
    if (b_ezsignbulksend_isactive) {
        b_ezsignbulksend_isactive_copy = malloc(sizeof(int));
        if (b_ezsignbulksend_isactive_copy) *b_ezsignbulksend_isactive_copy = *b_ezsignbulksend_isactive;
    }
    ezsignbulksend_response_t *result = ezsignbulksend_response_create_internal (
        pki_ezsignbulksend_id_copy,
        fki_ezsignfoldertype_id_copy,
        fki_language_id_copy,
        s_language_name_x,
        e_ezsignfoldertype_privacylevel,
        s_ezsignfoldertype_name_x,
        s_ezsignbulksend_description,
        t_ezsignbulksend_note,
        b_ezsignbulksend_needvalidation_copy,
        b_ezsignbulksend_isactive_copy,
        obj_audit
        );
    if (!result) {
        free(pki_ezsignbulksend_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_language_id_copy);
        free(b_ezsignbulksend_needvalidation_copy);
        free(b_ezsignbulksend_isactive_copy);
    }
    return result;
}

void ezsignbulksend_response_free(ezsignbulksend_response_t *ezsignbulksend_response) {
    if(NULL == ezsignbulksend_response){
        return ;
    }
    if(ezsignbulksend_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_response->pki_ezsignbulksend_id) {
        free(ezsignbulksend_response->pki_ezsignbulksend_id);
        ezsignbulksend_response->pki_ezsignbulksend_id = NULL;
    }
    if (ezsignbulksend_response->fki_ezsignfoldertype_id) {
        free(ezsignbulksend_response->fki_ezsignfoldertype_id);
        ezsignbulksend_response->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsignbulksend_response->fki_language_id) {
        free(ezsignbulksend_response->fki_language_id);
        ezsignbulksend_response->fki_language_id = NULL;
    }
    if (ezsignbulksend_response->s_language_name_x) {
        free(ezsignbulksend_response->s_language_name_x);
        ezsignbulksend_response->s_language_name_x = NULL;
    }
    if (ezsignbulksend_response->s_ezsignfoldertype_name_x) {
        free(ezsignbulksend_response->s_ezsignfoldertype_name_x);
        ezsignbulksend_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignbulksend_response->s_ezsignbulksend_description) {
        free(ezsignbulksend_response->s_ezsignbulksend_description);
        ezsignbulksend_response->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_response->t_ezsignbulksend_note) {
        free(ezsignbulksend_response->t_ezsignbulksend_note);
        ezsignbulksend_response->t_ezsignbulksend_note = NULL;
    }
    if (ezsignbulksend_response->b_ezsignbulksend_needvalidation) {
        free(ezsignbulksend_response->b_ezsignbulksend_needvalidation);
        ezsignbulksend_response->b_ezsignbulksend_needvalidation = NULL;
    }
    if (ezsignbulksend_response->b_ezsignbulksend_isactive) {
        free(ezsignbulksend_response->b_ezsignbulksend_isactive);
        ezsignbulksend_response->b_ezsignbulksend_isactive = NULL;
    }
    if (ezsignbulksend_response->obj_audit) {
        common_audit_free(ezsignbulksend_response->obj_audit);
        ezsignbulksend_response->obj_audit = NULL;
    }
    free(ezsignbulksend_response);
}

cJSON *ezsignbulksend_response_convertToJSON(ezsignbulksend_response_t *ezsignbulksend_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_response->pki_ezsignbulksend_id
    if (!ezsignbulksend_response->pki_ezsignbulksend_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", *ezsignbulksend_response->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response->fki_ezsignfoldertype_id
    if (!ezsignbulksend_response->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsignbulksend_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response->fki_language_id
    if (!ezsignbulksend_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsignbulksend_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_response->s_language_name_x
    if (!ezsignbulksend_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsignbulksend_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignbulksend_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignbulksend_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignbulksend_response->s_ezsignfoldertype_name_x
    if (!ezsignbulksend_response->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignbulksend_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response->s_ezsignbulksend_description
    if (!ezsignbulksend_response->s_ezsignbulksend_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_response->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response->t_ezsignbulksend_note
    if (!ezsignbulksend_response->t_ezsignbulksend_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignbulksendNote", ezsignbulksend_response->t_ezsignbulksend_note) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_response->b_ezsignbulksend_needvalidation
    if (!ezsignbulksend_response->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", *ezsignbulksend_response->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_response->b_ezsignbulksend_isactive
    if (!ezsignbulksend_response->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", *ezsignbulksend_response->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_response->obj_audit
    if (!ezsignbulksend_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezsignbulksend_response->obj_audit);
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

ezsignbulksend_response_t *ezsignbulksend_response_parseFromJSON(cJSON *ezsignbulksend_responseJSON){

    ezsignbulksend_response_t *ezsignbulksend_response_local_var = NULL;

    // define the local variable for ezsignbulksend_response->pki_ezsignbulksend_id
    int *pki_ezsignbulksend_id_local_var = NULL;

    // define the local variable for ezsignbulksend_response->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignbulksend_response->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_language_name_x_local_str = NULL;

    // define the local variable for ezsignbulksend_response->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    char *s_ezsignbulksend_description_local_str = NULL;

    char *t_ezsignbulksend_note_local_str = NULL;

    // define the local variable for ezsignbulksend_response->b_ezsignbulksend_needvalidation
    int *b_ezsignbulksend_needvalidation_local_var = NULL;

    // define the local variable for ezsignbulksend_response->b_ezsignbulksend_isactive
    int *b_ezsignbulksend_isactive_local_var = NULL;

    // define the local variable for ezsignbulksend_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezsignbulksend_response->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "pkiEzsignbulksendID");
    if (cJSON_IsNull(pki_ezsignbulksend_id)) {
        pki_ezsignbulksend_id = NULL;
    }
    if (!pki_ezsignbulksend_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    pki_ezsignbulksend_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignbulksend_id_local_var)
    {
        goto end;
    }
    *pki_ezsignbulksend_id_local_var = pki_ezsignbulksend_id->valuedouble;

    // ezsignbulksend_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfoldertype_id_local_var = fki_ezsignfoldertype_id->valuedouble;

    // ezsignbulksend_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // ezsignbulksend_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsignbulksend_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignbulksend_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignbulksend_response->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "sEzsignbulksendDescription");
    if (cJSON_IsNull(s_ezsignbulksend_description)) {
        s_ezsignbulksend_description = NULL;
    }
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_response->t_ezsignbulksend_note
    cJSON *t_ezsignbulksend_note = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "tEzsignbulksendNote");
    if (cJSON_IsNull(t_ezsignbulksend_note)) {
        t_ezsignbulksend_note = NULL;
    }
    if (!t_ezsignbulksend_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignbulksend_note))
    {
    goto end; //String
    }

    // ezsignbulksend_response->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "bEzsignbulksendNeedvalidation");
    if (cJSON_IsNull(b_ezsignbulksend_needvalidation)) {
        b_ezsignbulksend_needvalidation = NULL;
    }
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }
    b_ezsignbulksend_needvalidation_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksend_needvalidation_local_var)
    {
        goto end;
    }
    *b_ezsignbulksend_needvalidation_local_var = b_ezsignbulksend_needvalidation->valueint;

    // ezsignbulksend_response->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "bEzsignbulksendIsactive");
    if (cJSON_IsNull(b_ezsignbulksend_isactive)) {
        b_ezsignbulksend_isactive = NULL;
    }
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }
    b_ezsignbulksend_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignbulksend_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignbulksend_isactive_local_var = b_ezsignbulksend_isactive->valueint;

    // ezsignbulksend_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);
    if (s_ezsignbulksend_description && !cJSON_IsNull(s_ezsignbulksend_description)) s_ezsignbulksend_description_local_str = strdup(s_ezsignbulksend_description->valuestring);
    if (t_ezsignbulksend_note && !cJSON_IsNull(t_ezsignbulksend_note)) t_ezsignbulksend_note_local_str = strdup(t_ezsignbulksend_note->valuestring);

    ezsignbulksend_response_local_var = ezsignbulksend_response_create_internal (
        pki_ezsignbulksend_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        fki_language_id_local_var,
        s_language_name_x_local_str,
        e_ezsignfoldertype_privacylevel_local_nonprim,
        s_ezsignfoldertype_name_x_local_str,
        s_ezsignbulksend_description_local_str,
        t_ezsignbulksend_note_local_str,
        b_ezsignbulksend_needvalidation_local_var,
        b_ezsignbulksend_isactive_local_var,
        obj_audit_local_nonprim
        );

    if (!ezsignbulksend_response_local_var) {
        goto end;
    }

    return ezsignbulksend_response_local_var;
end:
    if (pki_ezsignbulksend_id_local_var) {
        free(pki_ezsignbulksend_id_local_var);
        pki_ezsignbulksend_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (s_ezsignbulksend_description_local_str) {
        free(s_ezsignbulksend_description_local_str);
        s_ezsignbulksend_description_local_str = NULL;
    }
    if (t_ezsignbulksend_note_local_str) {
        free(t_ezsignbulksend_note_local_str);
        t_ezsignbulksend_note_local_str = NULL;
    }
    if (b_ezsignbulksend_needvalidation_local_var) {
        free(b_ezsignbulksend_needvalidation_local_var);
        b_ezsignbulksend_needvalidation_local_var = NULL;
    }
    if (b_ezsignbulksend_isactive_local_var) {
        free(b_ezsignbulksend_isactive_local_var);
        b_ezsignbulksend_isactive_local_var = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
