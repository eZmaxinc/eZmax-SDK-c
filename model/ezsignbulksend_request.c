#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_request.h"



static ezsignbulksend_request_t *ezsignbulksend_request_create_internal(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
    ) {
    ezsignbulksend_request_t *ezsignbulksend_request_local_var = malloc(sizeof(ezsignbulksend_request_t));
    if (!ezsignbulksend_request_local_var) {
        return NULL;
    }
    ezsignbulksend_request_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_request_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_request_local_var->fki_language_id = fki_language_id;
    ezsignbulksend_request_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_request_local_var->t_ezsignbulksend_note = t_ezsignbulksend_note;
    ezsignbulksend_request_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    ezsignbulksend_request_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;

    ezsignbulksend_request_local_var->_library_owned = 1;
    return ezsignbulksend_request_local_var;
}

__attribute__((deprecated)) ezsignbulksend_request_t *ezsignbulksend_request_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
    ) {
    return ezsignbulksend_request_create_internal (
        pki_ezsignbulksend_id,
        fki_ezsignfoldertype_id,
        fki_language_id,
        s_ezsignbulksend_description,
        t_ezsignbulksend_note,
        b_ezsignbulksend_needvalidation,
        b_ezsignbulksend_isactive
        );
}

void ezsignbulksend_request_free(ezsignbulksend_request_t *ezsignbulksend_request) {
    if(NULL == ezsignbulksend_request){
        return ;
    }
    if(ezsignbulksend_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_request->s_ezsignbulksend_description) {
        free(ezsignbulksend_request->s_ezsignbulksend_description);
        ezsignbulksend_request->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_request->t_ezsignbulksend_note) {
        free(ezsignbulksend_request->t_ezsignbulksend_note);
        ezsignbulksend_request->t_ezsignbulksend_note = NULL;
    }
    free(ezsignbulksend_request);
}

cJSON *ezsignbulksend_request_convertToJSON(ezsignbulksend_request_t *ezsignbulksend_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_request->pki_ezsignbulksend_id
    if(ezsignbulksend_request->pki_ezsignbulksend_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_request->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksend_request->fki_ezsignfoldertype_id
    if (!ezsignbulksend_request->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_request->fki_language_id
    if (!ezsignbulksend_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignbulksend_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_request->s_ezsignbulksend_description
    if (!ezsignbulksend_request->s_ezsignbulksend_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_request->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_request->t_ezsignbulksend_note
    if (!ezsignbulksend_request->t_ezsignbulksend_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignbulksendNote", ezsignbulksend_request->t_ezsignbulksend_note) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_request->b_ezsignbulksend_needvalidation
    if (!ezsignbulksend_request->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsignbulksend_request->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_request->b_ezsignbulksend_isactive
    if (!ezsignbulksend_request->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_request->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_request_t *ezsignbulksend_request_parseFromJSON(cJSON *ezsignbulksend_requestJSON){

    ezsignbulksend_request_t *ezsignbulksend_request_local_var = NULL;

    // ezsignbulksend_request->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "pkiEzsignbulksendID");
    if (cJSON_IsNull(pki_ezsignbulksend_id)) {
        pki_ezsignbulksend_id = NULL;
    }
    if (pki_ezsignbulksend_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksend_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "fkiEzsignfoldertypeID");
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

    // ezsignbulksend_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "fkiLanguageID");
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

    // ezsignbulksend_request->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "sEzsignbulksendDescription");
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

    // ezsignbulksend_request->t_ezsignbulksend_note
    cJSON *t_ezsignbulksend_note = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "tEzsignbulksendNote");
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

    // ezsignbulksend_request->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "bEzsignbulksendNeedvalidation");
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

    // ezsignbulksend_request->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_requestJSON, "bEzsignbulksendIsactive");
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


    ezsignbulksend_request_local_var = ezsignbulksend_request_create_internal (
        pki_ezsignbulksend_id ? pki_ezsignbulksend_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(t_ezsignbulksend_note->valuestring),
        b_ezsignbulksend_needvalidation->valueint,
        b_ezsignbulksend_isactive->valueint
        );

    return ezsignbulksend_request_local_var;
end:
    return NULL;

}
