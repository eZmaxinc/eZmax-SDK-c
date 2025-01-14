#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_request.h"



ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_isactive
    ) {
    ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_local_var = malloc(sizeof(ezsigntemplatepackage_request_t));
    if (!ezsigntemplatepackage_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_request_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_request_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    ezsigntemplatepackage_request_local_var->fki_ezdoctemplatedocument_id = fki_ezdoctemplatedocument_id;
    ezsigntemplatepackage_request_local_var->fki_language_id = fki_language_id;
    ezsigntemplatepackage_request_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_request_local_var->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    ezsigntemplatepackage_request_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;

    return ezsigntemplatepackage_request_local_var;
}


void ezsigntemplatepackage_request_free(ezsigntemplatepackage_request_t *ezsigntemplatepackage_request) {
    if(NULL == ezsigntemplatepackage_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_request->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_request->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_request->s_ezsigntemplatepackage_description = NULL;
    }
    free(ezsigntemplatepackage_request);
}

cJSON *ezsigntemplatepackage_request_convertToJSON(ezsigntemplatepackage_request_t *ezsigntemplatepackage_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_request->pki_ezsigntemplatepackage_id
    if(ezsigntemplatepackage_request->pki_ezsigntemplatepackage_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", ezsigntemplatepackage_request->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_request->fki_ezsignfoldertype_id
    if (!ezsigntemplatepackage_request->fki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", ezsigntemplatepackage_request->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_request->fki_ezdoctemplatedocument_id
    if(ezsigntemplatepackage_request->fki_ezdoctemplatedocument_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzdoctemplatedocumentID", ezsigntemplatepackage_request->fki_ezdoctemplatedocument_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatepackage_request->fki_language_id
    if (!ezsigntemplatepackage_request->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", ezsigntemplatepackage_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_request->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_request->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_request->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_request->b_ezsigntemplatepackage_adminonly
    if (!ezsigntemplatepackage_request->b_ezsigntemplatepackage_adminonly) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageAdminonly", ezsigntemplatepackage_request->b_ezsigntemplatepackage_adminonly) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_request->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_request->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", ezsigntemplatepackage_request->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_parseFromJSON(cJSON *ezsigntemplatepackage_requestJSON){

    ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_local_var = NULL;

    // ezsigntemplatepackage_request->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "pkiEzsigntemplatepackageID");
    if (pki_ezsigntemplatepackage_id) { 
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackage_request->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "fkiEzsignfoldertypeID");
    if (!fki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_request->fki_ezdoctemplatedocument_id
    cJSON *fki_ezdoctemplatedocument_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "fkiEzdoctemplatedocumentID");
    if (fki_ezdoctemplatedocument_id) { 
    if(!cJSON_IsNumber(fki_ezdoctemplatedocument_id))
    {
    goto end; //Numeric
    }
    }

    // ezsigntemplatepackage_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplatepackage_request->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "sEzsigntemplatepackageDescription");
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_request->b_ezsigntemplatepackage_adminonly
    cJSON *b_ezsigntemplatepackage_adminonly = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "bEzsigntemplatepackageAdminonly");
    if (!b_ezsigntemplatepackage_adminonly) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_adminonly))
    {
    goto end; //Bool
    }

    // ezsigntemplatepackage_request->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_requestJSON, "bEzsigntemplatepackageIsactive");
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }


    ezsigntemplatepackage_request_local_var = ezsigntemplatepackage_request_create (
        pki_ezsigntemplatepackage_id ? pki_ezsigntemplatepackage_id->valuedouble : 0,
        fki_ezsignfoldertype_id->valuedouble,
        fki_ezdoctemplatedocument_id ? fki_ezdoctemplatedocument_id->valuedouble : 0,
        fki_language_id->valuedouble,
        strdup(s_ezsigntemplatepackage_description->valuestring),
        b_ezsigntemplatepackage_adminonly->valueint,
        b_ezsigntemplatepackage_isactive->valueint
        );

    return ezsigntemplatepackage_request_local_var;
end:
    return NULL;

}
