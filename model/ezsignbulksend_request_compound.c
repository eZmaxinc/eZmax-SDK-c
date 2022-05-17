#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_request_compound.h"



ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
    ) {
    ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_local_var = malloc(sizeof(ezsignbulksend_request_compound_t));
    if (!ezsignbulksend_request_compound_local_var) {
        return NULL;
    }
    ezsignbulksend_request_compound_local_var->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    ezsignbulksend_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsignbulksend_request_compound_local_var->fki_language_id = fki_language_id;
    ezsignbulksend_request_compound_local_var->s_ezsignbulksend_description = s_ezsignbulksend_description;
    ezsignbulksend_request_compound_local_var->t_ezsignbulksend_note = t_ezsignbulksend_note;
    ezsignbulksend_request_compound_local_var->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    ezsignbulksend_request_compound_local_var->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;

    return ezsignbulksend_request_compound_local_var;
}


void ezsignbulksend_request_compound_free(ezsignbulksend_request_compound_t *ezsignbulksend_request_compound) {
    if(NULL == ezsignbulksend_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_request_compound->s_ezsignbulksend_description) {
        free(ezsignbulksend_request_compound->s_ezsignbulksend_description);
        ezsignbulksend_request_compound->s_ezsignbulksend_description = NULL;
    }
    if (ezsignbulksend_request_compound->t_ezsignbulksend_note) {
        free(ezsignbulksend_request_compound->t_ezsignbulksend_note);
        ezsignbulksend_request_compound->t_ezsignbulksend_note = NULL;
    }
    free(ezsignbulksend_request_compound);
}

cJSON *ezsignbulksend_request_compound_convertToJSON(ezsignbulksend_request_compound_t *ezsignbulksend_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_request_compound->pki_ezsignbulksend_id
    if(ezsignbulksend_request_compound->pki_ezsignbulksend_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignbulksendID", ezsignbulksend_request_compound->pki_ezsignbulksend_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignbulksend_request_compound->fki_ezsignfoldertype_id
    if (!ezsignbulksend_request_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsignbulksend_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_request_compound->fki_language_id
    if (!ezsignbulksend_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsignbulksend_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignbulksend_request_compound->s_ezsignbulksend_description
    if (!ezsignbulksend_request_compound->s_ezsignbulksend_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignbulksendDescription", ezsignbulksend_request_compound->s_ezsignbulksend_description) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_request_compound->t_ezsignbulksend_note
    if (!ezsignbulksend_request_compound->t_ezsignbulksend_note) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignbulksendNote", ezsignbulksend_request_compound->t_ezsignbulksend_note) == NULL) {
    goto fail; //String
    }


    // ezsignbulksend_request_compound->b_ezsignbulksend_needvalidation
    if (!ezsignbulksend_request_compound->b_ezsignbulksend_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendNeedvalidation", ezsignbulksend_request_compound->b_ezsignbulksend_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsignbulksend_request_compound->b_ezsignbulksend_isactive
    if (!ezsignbulksend_request_compound->b_ezsignbulksend_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignbulksendIsactive", ezsignbulksend_request_compound->b_ezsignbulksend_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_parseFromJSON(cJSON *ezsignbulksend_request_compoundJSON){

    ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_local_var = NULL;

    // ezsignbulksend_request_compound->pki_ezsignbulksend_id
    cJSON *pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "pkiEzsignbulksendID");
    if (pki_ezsignbulksend_id) { 
    if(!cJSON_IsNumber(pki_ezsignbulksend_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignbulksend_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsignbulksend_request_compound->s_ezsignbulksend_description
    cJSON *s_ezsignbulksend_description = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "sEzsignbulksendDescription");
    if (!s_ezsignbulksend_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignbulksend_description))
    {
    goto end; //String
    }

    // ezsignbulksend_request_compound->t_ezsignbulksend_note
    cJSON *t_ezsignbulksend_note = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "tEzsignbulksendNote");
    if (!t_ezsignbulksend_note) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignbulksend_note))
    {
    goto end; //String
    }

    // ezsignbulksend_request_compound->b_ezsignbulksend_needvalidation
    cJSON *b_ezsignbulksend_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "bEzsignbulksendNeedvalidation");
    if (!b_ezsignbulksend_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_needvalidation))
    {
    goto end; //Bool
    }

    // ezsignbulksend_request_compound->b_ezsignbulksend_isactive
    cJSON *b_ezsignbulksend_isactive = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_request_compoundJSON, "bEzsignbulksendIsactive");
    if (!b_ezsignbulksend_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignbulksend_isactive))
    {
    goto end; //Bool
    }


    ezsignbulksend_request_compound_local_var = ezsignbulksend_request_compound_create (
        pki_ezsignbulksend_id ? pki_ezsignbulksend_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsignbulksend_description->valuestring),
        strdup(t_ezsignbulksend_note->valuestring),
        b_ezsignbulksend_needvalidation->valueint,
        b_ezsignbulksend_isactive->valueint
        );

    return ezsignbulksend_request_compound_local_var;
end:
    return NULL;

}
