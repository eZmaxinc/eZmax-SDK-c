#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_request_compound.h"



ezsigntemplate_request_compound_t *ezsigntemplate_request_compound_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly
    ) {
    ezsigntemplate_request_compound_t *ezsigntemplate_request_compound_local_var = malloc(sizeof(ezsigntemplate_request_compound_t));
    if (!ezsigntemplate_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplate_request_compound_local_var->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    ezsigntemplate_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplate_request_compound_local_var->fki_language_id = fki_language_id;
    ezsigntemplate_request_compound_local_var->s_ezsigntemplate_description = s_ezsigntemplate_description;
    ezsigntemplate_request_compound_local_var->s_ezsigntemplate_filenamepattern = s_ezsigntemplate_filenamepattern;
    ezsigntemplate_request_compound_local_var->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;

    return ezsigntemplate_request_compound_local_var;
}


void ezsigntemplate_request_compound_free(ezsigntemplate_request_compound_t *ezsigntemplate_request_compound) {
    if(NULL == ezsigntemplate_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_request_compound->s_ezsigntemplate_description) {
        free(ezsigntemplate_request_compound->s_ezsigntemplate_description);
        ezsigntemplate_request_compound->s_ezsigntemplate_description = NULL;
    }
    if (ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern) {
        free(ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern);
        ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern = NULL;
    }
    free(ezsigntemplate_request_compound);
}

cJSON *ezsigntemplate_request_compound_convertToJSON(ezsigntemplate_request_compound_t *ezsigntemplate_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_request_compound->pki_ezsigntemplate_id
    if(ezsigntemplate_request_compound->pki_ezsigntemplate_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateID", ezsigntemplate_request_compound->pki_ezsigntemplate_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplate_request_compound->fki_ezsignfoldertype_id
    if (!ezsigntemplate_request_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplate_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_request_compound->fki_language_id
    if (!ezsigntemplate_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplate_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplate_request_compound->s_ezsigntemplate_description
    if (!ezsigntemplate_request_compound->s_ezsigntemplate_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateDescription", ezsigntemplate_request_compound->s_ezsigntemplate_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern
    if(ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateFilenamepattern", ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplate_request_compound->b_ezsigntemplate_adminonly
    if (!ezsigntemplate_request_compound->b_ezsigntemplate_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateAdminonly", ezsigntemplate_request_compound->b_ezsigntemplate_adminonly) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplate_request_compound_t *ezsigntemplate_request_compound_parseFromJSON(cJSON *ezsigntemplate_request_compoundJSON){

    ezsigntemplate_request_compound_t *ezsigntemplate_request_compound_local_var = NULL;

    // ezsigntemplate_request_compound->pki_ezsigntemplate_id
    cJSON *pki_ezsigntemplate_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "pkiEzsigntemplateID");
    if (pki_ezsigntemplate_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplate_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplate_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplate_request_compound->s_ezsigntemplate_description
    cJSON *s_ezsigntemplate_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "sEzsigntemplateDescription");
    if (!s_ezsigntemplate_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplate_description))
    {
    goto end; //String
    }

    // ezsigntemplate_request_compound->s_ezsigntemplate_filenamepattern
    cJSON *s_ezsigntemplate_filenamepattern = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "sEzsigntemplateFilenamepattern");
    if (s_ezsigntemplate_filenamepattern) { 
    if(!cJSON_IsString(s_ezsigntemplate_filenamepattern) && !cJSON_IsNull(s_ezsigntemplate_filenamepattern))
    {
    goto end; //String
    }
    }

    // ezsigntemplate_request_compound->b_ezsigntemplate_adminonly
    cJSON *b_ezsigntemplate_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_request_compoundJSON, "bEzsigntemplateAdminonly");
    if (!b_ezsigntemplate_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplate_adminonly))
    {
    goto end; //Bool
    }


    ezsigntemplate_request_compound_local_var = ezsigntemplate_request_compound_create (
        pki_ezsigntemplate_id ? pki_ezsigntemplate_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplate_description->valuestring),
        s_ezsigntemplate_filenamepattern && !cJSON_IsNull(s_ezsigntemplate_filenamepattern) ? strdup(s_ezsigntemplate_filenamepattern->valuestring) : NULL,
        b_ezsigntemplate_adminonly->valueint
        );

    return ezsigntemplate_request_compound_local_var;
end:
    return NULL;

}
