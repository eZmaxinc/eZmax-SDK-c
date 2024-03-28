#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_response.h"



ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_editallowed
    ) {
    ezsigntemplatepackage_response_t *ezsigntemplatepackage_response_local_var = malloc(sizeof(ezsigntemplatepackage_response_t));
    if (!ezsigntemplatepackage_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_response_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_response_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_response_local_var->s_language_name_x = s_language_name_x;
    ezsigntemplatepackage_response_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsigntemplatepackage_response_local_var->b_ezsigntemplatepackage_editallowed = b_ezsigntemplatepackage_editallowed;

    return ezsigntemplatepackage_response_local_var;
}


void ezsigntemplatepackage_response_free(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response) {
    if(NULL == ezsigntemplatepackage_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_response->s_language_name_x) {
        free(ezsigntemplatepackage_response->s_language_name_x);
        ezsigntemplatepackage_response->s_language_name_x = NULL;
    }
    if (ezsigntemplatepackage_response->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_response->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_response->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_response->s_ezsignfoldertype_name_x) {
        free(ezsigntemplatepackage_response->s_ezsignfoldertype_name_x);
        ezsigntemplatepackage_response->s_ezsignfoldertype_name_x = NULL;
    }
    free(ezsigntemplatepackage_response);
}

cJSON *ezsigntemplatepackage_response_convertToJSON(ezsigntemplatepackage_response_t *ezsigntemplatepackage_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_response->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_response->fki_language_id
    if (!ezsigntemplatepackage_response->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_response->fki_language_id) == NULL) {
    goto fail; //Numeric
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
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageNeedvalidation", ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageEditallowed", ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed) == NULL) {
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

    // ezsigntemplatepackage_response->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "pkiEzsigntemplatepackageID");
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_response->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sLanguageNameX");
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_response->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sEzsigntemplatepackageDescription");
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageAdminonly");
    if (!b_ezsigntemplatepackage_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_needvalidation
    cJSON *b_ezsigntemplatepackage_needvalidation = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageNeedvalidation");
    if (!b_ezsigntemplatepackage_needvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_needvalidation))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageIsactive");
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "sEzsignfoldertypeNameX");
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_response->b_ezsigntemplatepackage_editallowed
    cJSON *b_ezsigntemplatepackage_editallowed = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_responseJSON, "bEzsigntemplatepackageEditallowed");
    if (!b_ezsigntemplatepackage_editallowed) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_editallowed))
    {
    goto end; //Bool
    }


    ezsigntemplatepackage_response_local_var = ezsigntemplatepackage_response_create (
        pki_ezsigntemplatepackage_id->valuedouble,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_language_name_x->valuestring),
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_adminonly->valueint,
        b_ezsigntemplatepackage_needvalidation->valueint,
        b_ezsigntemplatepackage_isactive->valueint,
        strdup(s_ezsignfoldertype_name_x->valuestring),
        b_ezsigntemplatepackage_editallowed->valueint
        );

    return ezsigntemplatepackage_response_local_var;
end:
    return NULL;

}
