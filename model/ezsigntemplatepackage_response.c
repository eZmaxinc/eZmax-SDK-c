#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_response.h"



static ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_create_internal(
    int *pki_ezsigntemplatepackage_id,
    int *fki_ezsignfoldertype_id,
    int *fki_ezdoctemplatedocument_id,
    int *fki_language_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int *b_ezsigntemplatepackage_adminonly,
    int *b_ezsigntemplatepackage_needvalidation,
    int *b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsigntemplatepackage_editallowed
    ) {
    ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_local_var = malloc(sizeof(ezsigntemplatepackage_response_t));
    if (!ezsigntemplatepackage_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepackage_response_local_var, 0, sizeof(ezsigntemplatepackage_response_t));
    ezsigntemplatepackage_response_local_var->_library_owned = 1;
    ezsigntemplatepackage_response_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_response_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackage_response_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_response_local_var->s_ezdoctemplatedocument_name_x = s_ezdoctemplatedocument_name_x;
    ezsigntemplatepackage_response_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplatepackage_response_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_editallowed = b_ezsigntemplatepackage_editallowed;
    return ezsigntemplatepackage_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_create(
    int *pki_ezsigntemplatepackage_id,
    int *fki_ezsignfoldertype_id,
    int *fki_ezdoctemplatedocument_id,
    int *fki_language_id,
    char *s_ezdoctemplatedocument_name_x,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int *b_ezsigntemplatepackage_adminonly,
    int *b_ezsigntemplatepackage_needvalidation,
    int *b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int *b_ezsigntemplatepackage_editallowed
    ) {
    int *pki_ezsigntemplatepackage_id_copy = NULL;
    if (pki_ezsigntemplatepackage_id) {
        pki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatepackage_id_copy) *pki_ezsigntemplatepackage_id_copy = *pki_ezsigntemplatepackage_id;
    }
    int *fki_ezsignfoldertype_id_copy = NULL;
    if (fki_ezsignfoldertype_id) {
        fki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (fki_ezsignfoldertype_id_copy) *fki_ezsignfoldertype_id_copy = *fki_ezsignfoldertype_id;
    }
    int *fki_ezdoctemplatedocument_id_copy = NULL;
    if (fki_ezdoctemplatedocument_id) {
        fki_ezdoctemplatedocument_id_copy = malloc(sizeof(int));
        if (fki_ezdoctemplatedocument_id_copy) *fki_ezdoctemplatedocument_id_copy = *fki_ezdoctemplatedocument_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *b_ezsigntemplatepackage_adminonly_copy = NULL;
    if (b_ezsigntemplatepackage_adminonly) {
        b_ezsigntemplatepackage_adminonly_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_adminonly_copy) *b_ezsigntemplatepackage_adminonly_copy = *b_ezsigntemplatepackage_adminonly;
    }
    int *b_ezsigntemplatepackage_needvalidation_copy = NULL;
    if (b_ezsigntemplatepackage_needvalidation) {
        b_ezsigntemplatepackage_needvalidation_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_needvalidation_copy) *b_ezsigntemplatepackage_needvalidation_copy = *b_ezsigntemplatepackage_needvalidation;
    }
    int *b_ezsigntemplatepackage_isactive_copy = NULL;
    if (b_ezsigntemplatepackage_isactive) {
        b_ezsigntemplatepackage_isactive_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_isactive_copy) *b_ezsigntemplatepackage_isactive_copy = *b_ezsigntemplatepackage_isactive;
    }
    int *b_ezsigntemplatepackage_editallowed_copy = NULL;
    if (b_ezsigntemplatepackage_editallowed) {
        b_ezsigntemplatepackage_editallowed_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_editallowed_copy) *b_ezsigntemplatepackage_editallowed_copy = *b_ezsigntemplatepackage_editallowed;
    }
    ezsigntemplatepackage_response_t *result = ezsigntemplatepackage_response_create_internal (
        pki_ezsigntemplatepackage_id_copy,
        fki_ezsignfoldertype_id_copy,
        fki_ezdoctemplatedocument_id_copy,
        fki_language_id_copy,
        s_ezdoctemplatedocument_name_x,
        s_language_name_x,
        s_ezsigntemplatepackage_description,
        b_ezsigntemplatepackage_adminonly_copy,
        b_ezsigntemplatepackage_needvalidation_copy,
        b_ezsigntemplatepackage_isactive_copy,
        s_ezsignfoldertype_name_x,
        b_ezsigntemplatepackage_editallowed_copy
        );
    if (!result) {
        free(pki_ezsigntemplatepackage_id_copy);
        free(fki_ezsignfoldertype_id_copy);
        free(fki_ezdoctemplatedocument_id_copy);
        free(fki_language_id_copy);
        free(b_ezsigntemplatepackage_adminonly_copy);
        free(b_ezsigntemplatepackage_needvalidation_copy);
        free(b_ezsigntemplatepackage_isactive_copy);
        free(b_ezsigntemplatepackage_editallowed_copy);
    }
    return result;
}

void ezsigntemplatepackage_response_free(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response) {
    if(NULL == ezsigntemplatepackage_response){
        return ;
    }
    if(ezsigntemplatepackage_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id);
        ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepackage_response->fki_ezsignfoldertype_id) {
        free(ezsigntemplatepackage_response->fki_ezsignfoldertype_id);
        ezsigntemplatepackage_response->fki_ezsignfoldertype_id = NULL;
    }
    if (ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id) {
        free(ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id);
        ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id = NULL;
    }
    if (ezsigntemplatepackage_response->fki_language_id) {
        free(ezsigntemplatepackage_response->fki_language_id);
        ezsigntemplatepackage_response->fki_language_id = NULL;
    }
    if (ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x) {
        free(ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x);
        ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x = NULL;
    }
    if (ezsigntemplatepackage_response->s_language_name_x) {
        free(ezsigntemplatepackage_response->s_language_name_x);
        ezsigntemplatepackage_response->s_language_name_x = NULL;
    }
    if (ezsigntemplatepackage_response->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_response->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_response->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly) {
        free(ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly);
        ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly = NULL;
    }
    if (ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation) {
        free(ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation);
        ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation = NULL;
    }
    if (ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive) {
        free(ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive);
        ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive = NULL;
    }
    if (ezsigntemplatepackage_response->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepackage_response->s_ezsignfoldertype_name_x);
        ezsigntemplatepackage_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed) {
        free(ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed);
        ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed = NULL;
    }
    free(ezsigntemplatepackage_response);
}

cJSON *ezsigntemplatepackage_response_convertToJSON(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", *ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_response->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", *ezsigntemplatepackage_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", *ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_response->fki_language_id
    if (!ezsigntemplatepackage_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *ezsigntemplatepackage_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x
    if(ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x) {
    if(cJSON_AddStringToObject(item, "sEzdoctemplatedocumentNameX", ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplatepackage_response->s_language_name_x
    if (!ezsigntemplatepackage_response->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", ezsigntemplatepackage_response->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_response->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_response->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", *ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", *ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", *ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response->s_ezsignfoldertype_name_x
    if (!ezsigntemplatepackage_response->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsigntemplatepackage_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageEditallowed", *ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_parseFromJSON(cJSON *ezsigntemplatepackage_responseJSON){

    ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id
    int *pki_ezsigntemplatepackage_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->fki_ezsignfoldertype_id
    int *fki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id
    int *fki_ezdoctemplatedocument_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_ezdoctemplatedocument_name_x_local_str = NULL;

    char *s_language_name_x_local_str = NULL;

    char *s_ezsigntemplatepackage_description_local_str = NULL;

    // define the local variable for ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly
    int *b_ezsigntemplatepackage_adminonly_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation
    int *b_ezsigntemplatepackage_needvalidation_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive
    int *b_ezsigntemplatepackage_isactive_local_var = NULL;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed
    int *b_ezsigntemplatepackage_editallowed_local_var = NULL;

    // ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "pkiEzsigntemplatepackageID");
    if (cJSON_IsNull(pki_ezsigntemplatepackage_id)) {
        pki_ezsigntemplatepackage_id = NULL;
    }
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatepackage_id_local_var = pki_ezsigntemplatepackage_id->valuedouble;

    // ezsigntemplatepackage_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "fkiEzsignfoldertypeID");
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

    // ezsigntemplatepackage_response->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    fki_ezdoctemplatedocument_id_local_var = malloc(sizeof(int));
    if(!fki_ezdoctemplatedocument_id_local_var)
    {
        goto end;
    }
    *fki_ezdoctemplatedocument_id_local_var = fki_ezdoctemplatedocument_id->valuedouble;
    }

    // ezsigntemplatepackage_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "fkiLanguageID");
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

    // ezsigntemplatepackage_response->s_ezdoctemplatedocument_name_x
    cJSON *s_ezdoctemplatedocument_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sEzdoctemplatedocumentNameX");
    if (cJSON_IsNull(s_ezdoctemplatedocument_name_x)) {
        s_ezdoctemplatedocument_name_x = NULL;
    }
    if (s_ezdoctemplatedocument_name_x) { 
    if(!cJSON_IsString(s_ezdoctemplatedocument_name_x) && !cJSON_IsNull(s_ezdoctemplatedocument_name_x))
    {
    goto end; //String
    }
    }

    // ezsigntemplatepackage_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sLanguageNameX");
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

    // ezsigntemplatepackage_response->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sEzsigntemplatepackageDescription");
    if (cJSON_IsNull(s_ezsigntemplatepackage_description)) {
        s_ezsigntemplatepackage_description = NULL;
    }
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageAdminonly");
    if (cJSON_IsNull(b_ezsigntemplatepackage_adminonly)) {
        b_ezsigntemplatepackage_adminonly = NULL;
    }
    if (!b_ezsigntemplatepackage_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_adminonly))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackage_adminonly_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_adminonly_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_adminonly_local_var = b_ezsigntemplatepackage_adminonly->valueint;

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageNeedvalidation");
    if (cJSON_IsNull(b_ezsigntemplatepackage_needvalidation)) {
        b_ezsigntemplatepackage_needvalidation = NULL;
    }
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackage_needvalidation_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_needvalidation_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_needvalidation_local_var = b_ezsigntemplatepackage_needvalidation->valueint;

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageIsactive");
    if (cJSON_IsNull(b_ezsigntemplatepackage_isactive)) {
        b_ezsigntemplatepackage_isactive = NULL;
    }
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackage_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_isactive_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_isactive_local_var = b_ezsigntemplatepackage_isactive->valueint;

    // ezsigntemplatepackage_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sEzsignfoldertypeNameX");
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

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed
    cJSON *b_ezsigntemplatepackage_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageEditallowed");
    if (cJSON_IsNull(b_ezsigntemplatepackage_editallowed)) {
        b_ezsigntemplatepackage_editallowed = NULL;
    }
    if (!b_ezsigntemplatepackage_editallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_editallowed))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackage_editallowed_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_editallowed_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_editallowed_local_var = b_ezsigntemplatepackage_editallowed->valueint;


    if (s_ezdoctemplatedocument_name_x && !cJSON_IsNull(s_ezdoctemplatedocument_name_x)) s_ezdoctemplatedocument_name_x_local_str = strdup(s_ezdoctemplatedocument_name_x->valuestring);
    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_ezsigntemplatepackage_description && !cJSON_IsNull(s_ezsigntemplatepackage_description)) s_ezsigntemplatepackage_description_local_str = strdup(s_ezsigntemplatepackage_description->valuestring);
    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    ezsigntemplatepackage_response_local_var = ezsigntemplatepackage_response_create_internal (
        pki_ezsigntemplatepackage_id_local_var,
        fki_ezsignfoldertype_id_local_var,
        fki_ezdoctemplatedocument_id_local_var,
        fki_language_id_local_var,
        s_ezdoctemplatedocument_name_x_local_str,
        s_language_name_x_local_str,
        s_ezsigntemplatepackage_description_local_str,
        b_ezsigntemplatepackage_adminonly_local_var,
        b_ezsigntemplatepackage_needvalidation_local_var,
        b_ezsigntemplatepackage_isactive_local_var,
        s_ezsignfoldertype_name_x_local_str,
        b_ezsigntemplatepackage_editallowed_local_var
        );

    if (!ezsigntemplatepackage_response_local_var) {
        goto end;
    }

    return ezsigntemplatepackage_response_local_var;
end:
    if (pki_ezsigntemplatepackage_id_local_var) {
        free(pki_ezsigntemplatepackage_id_local_var);
        pki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (fki_ezsignfoldertype_id_local_var) {
        free(fki_ezsignfoldertype_id_local_var);
        fki_ezsignfoldertype_id_local_var = NULL;
    }
    if (fki_ezdoctemplatedocument_id_local_var) {
        free(fki_ezdoctemplatedocument_id_local_var);
        fki_ezdoctemplatedocument_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_ezdoctemplatedocument_name_x_local_str) {
        free(s_ezdoctemplatedocument_name_x_local_str);
        s_ezdoctemplatedocument_name_x_local_str = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (s_ezsigntemplatepackage_description_local_str) {
        free(s_ezsigntemplatepackage_description_local_str);
        s_ezsigntemplatepackage_description_local_str = NULL;
    }
    if (b_ezsigntemplatepackage_adminonly_local_var) {
        free(b_ezsigntemplatepackage_adminonly_local_var);
        b_ezsigntemplatepackage_adminonly_local_var = NULL;
    }
    if (b_ezsigntemplatepackage_needvalidation_local_var) {
        free(b_ezsigntemplatepackage_needvalidation_local_var);
        b_ezsigntemplatepackage_needvalidation_local_var = NULL;
    }
    if (b_ezsigntemplatepackage_isactive_local_var) {
        free(b_ezsigntemplatepackage_isactive_local_var);
        b_ezsigntemplatepackage_isactive_local_var = NULL;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (b_ezsigntemplatepackage_editallowed_local_var) {
        free(b_ezsigntemplatepackage_editallowed_local_var);
        b_ezsigntemplatepackage_editallowed_local_var = NULL;
    }
    return NULL;

}
