#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_request_compound.h"



static ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_create_internal(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_isactive
    ) {
    ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_local_var = malloc(sizeof(ezsigntemplatepackage_request_compound_t));
    if (!ezsigntemplatepackage_request_compound_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_request_compound_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_request_compound_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackage_request_compound_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_request_compound_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_request_compound_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_request_compound_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;

    ezsigntemplatepackage_request_compound_local_var->_library_owned = 1;
    return ezsigntemplatepackage_request_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_isactive
    ) {
    return ezsigntemplatepackage_request_compound_create_internal (
        pki_ezsigntemplatepackage_id,
        fki_ezsignfoldertype_id,
        fki_ezdoctemplatedocument_id,
        fki_language_id,
        s_ezsigntemplatepackage_description,
        b_ezsigntemplatepackage_adminonly,
        b_ezsigntemplatepackage_isactive
        );
}

void ezsigntemplatepackage_request_compound_free(ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound) {
    if(NULL == ezsigntemplatepackage_request_compound){
        return ;
    }
    if(ezsigntemplatepackage_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description = NULL;
    }
    free(ezsigntemplatepackage_request_compound);
}

cJSON *ezsigntemplatepackage_request_compound_convertToJSON(ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_request_compound->pki_ezsigntemplatepackage_id
    if(ezsigntemplatepackage_request_compound->pki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_request_compound->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_request_compound->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_request_compound->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_request_compound->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackage_request_compound->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplatepackage_request_compound->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_request_compound->fki_language_id
    if (!ezsigntemplatepackage_request_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_request_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_adminonly
    if (!ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_parseFromJSON(cJSON *ezsigntemplatepackage_request_compoundJSON){

    ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_local_var = NULL;

    // ezsigntemplatepackage_request_compound->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "pkiEzsigntemplatepackageID");
    if (cJSON_IsNull(pki_ezsigntemplatepackage_id)) {
        pki_ezsigntemplatepackage_id = NULL;
    }
    if (pki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackage_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "fkiEzsignfoldertypeID");
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

    // ezsigntemplatepackage_request_compound->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "fkiEzdoctemplatedocumentID");
    if (cJSON_IsNull(fki_ezdoctemplatedocument_id)) {
        fki_ezdoctemplatedocument_id = NULL;
    }
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackage_request_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "fkiLanguageID");
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

    // ezsigntemplatepackage_request_compound->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "sEzsigntemplatepackageDescription");
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

    // ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "bEzsigntemplatepackageAdminonly");
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

    // ezsigntemplatepackage_request_compound->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_request_compoundJSON, "bEzsigntemplatepackageIsactive");
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


    ezsigntemplatepackage_request_compound_local_var = ezsigntemplatepackage_request_compound_create_internal (
        pki_ezsigntemplatepackage_id ? pki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_adminonly->valueint,
        b_ezsigntemplatepackage_isactive->valueint
        );

    return ezsigntemplatepackage_request_compound_local_var;
end:
    return NULL;

}
